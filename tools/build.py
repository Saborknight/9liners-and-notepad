#!/usr/bin/env python3

# The MIT License
# Copyright 2017 Saborknight
# Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
# The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

__version__ = "0.1"

import sys
import os
import subprocess
import json
import configparser
import shutil
import ntpath
import time

if sys.platform == "win32":
    import winreg


######## GLOBALS #########
PREFIX = "x"
MODPREFIX = "nln"
FILEPREFIX = "nln_"
IMPORTANT_FILES = ["extra", "meta.cpp", "mod.cpp", "readme.md", "LICENSE.md"] # relative to projectpath
PROJECT_NAME = "nineliners_and_notepad"
PROJECT_VERSION = "1.0.0"
##########################


def parse_config():
    tools_path = os.getcwd()
    cfg = configparser.ConfigParser();
    try:
        read = cfg.read(os.path.join(tools_path, "build.cfg"))
        print("{}, {}".format(cfg.items("DEFAULT"), tools_path))
    except:
        raise
        print_error("build.cfg could not be parsed.")


def mod_time(path):
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(addonspath, module):
    if not os.path.exists(os.path.join(addonspath, "{}{}.pbo".format(FILEPREFIX,module))):
        return True
    return mod_time(os.path.join(addonspath, module)) > mod_time(os.path.join(addonspath, "{}{}.pbo".format(PREFIX,module)))


def check_for_obsolete_pbos(addonspath, file):
    module = file[len(PREFIX):-4]
    if not os.path.exists(os.path.join(addonspath, module)):
        return True
    return False


def find_bi_tools():
    print("\n# Finding your Arma 3 Tools")

    reg = winreg.ConnectRegistry(None, winreg.HKEY_CURRENT_USER)
    try:
        k = winreg.OpenKey(reg, r"Software\bohemia interactive\arma 3 tools")
        arma3toolspath = winreg.QueryValueEx(k, "path")[0]
        winreg.CloseKey(k)
    except:
        raise Exception("BadTools","Arma 3 Tools are not installed correctly or the P: drive needs to be created.")

    addonbuilderpath = os.path.join(arma3toolspath, "AddonBuilder", "AddonBuilder.exe")
    dssignfilepath = os.path.join(arma3toolspath, "DSSignFile", "DSSignFile.exe")
    dscreatekeypath = os.path.join(arma3toolspath, "DSSignFile", "DSCreateKey.exe")
    cfgconvertpath = os.path.join(arma3toolspath, "CfgConvert", "CfgConvert.exe")

    if os.path.isfile(addonbuilderpath) and os.path.isfile(dssignfilepath) and os.path.isfile(dscreatekeypath) and os.path.isfile(cfgconvertpath):
        print("    Successfully found your Arma 3 Tools")
        return [addonbuilderpath, dssignfilepath, dscreatekeypath, cfgconvertpath]
    else:
        raise Exception("BadTools", "Arma 3 Tools are not installed correctly")


def create_key_pair(dscreatekey, temppath):
    print("\n# Generating Private/Public key pair")
    workingdir = os.getcwd()
    os.chdir(temppath)

    try:
        subprocess.check_output([
            dscreatekey,
            "{}.{}".format(PROJECT_NAME, PROJECT_VERSION)
        ], stderr=subprocess.STDOUT)
    except:
        print("  Failed to generate key pair")
        keypaths = False
    else:
        print("  Successfully generated key pair\n  DO NOT distribute the private key!")
        if os.path.isfile("{}.{}.biprivatekey".format(PROJECT_NAME, PROJECT_VERSION)):
            keypaths = [
                os.path.join(temppath, "{}.{}.biprivatekey".format(PROJECT_NAME, PROJECT_VERSION)),
                os.path.join(temppath, "{}.{}.bikey".format(PROJECT_NAME, PROJECT_VERSION))
            ]

    os.chdir(workingdir)
    return keypaths


def sign_files(dssignfile, builtaddonspath, keypaths):
    print("\n# Signing PBOs")
    workingdir = os.getcwd()
    os.chdir(builtaddonspath)

    if not keypaths:
        print("  Failed to find the public key.")

    for pbo in os.listdir(builtaddonspath):

        try:
            subprocess.check_output([
                dssignfile,
                keypaths[0],
                pbo
            ])
        except:
            print("  Failed to sign: {}".format(pbo))
        else:
            print("  Successfully signed {}".format(pbo))

    os.chdir(workingdir)


def copy(srcpath, dstpath, suppress_output = False):
    src = ntpath.basename(srcpath)

    if not suppress_output:
        print("# Copying \{} ...".format(src))

    if os.path.isfile(srcpath):
        if not os.path.isdir(dstpath):
            os.mkdir(dstpath)

        shutil.copy2(srcpath, dstpath)
    else:
        shutil.copytree(srcpath, dstpath)

    if os.path.isfile(os.path.join(dstpath, src)) or os.path.isdir(os.path.join(dstpath)):
        print("    Successfully copied {}.".format(src))
    else:
        print("    Failed to copy {}.".format(src))


def clean(paths):
    for p in paths:
        if os.path.isfile(p) or os.path.isdir(p):
            print("\n# Deleting files from {}...".format(p))
            shutil.rmtree(p)


def main():
    print("""
      #################################
      # 9Liners & Notepad Debug Build #
      #################################
    """)

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))
    addonspath = os.path.join(projectpath, "addons")
    buildpath = os.path.join(projectpath, "build")
    temppath = os.path.join(projectpath, "tools\\temp")
    includepath = os.path.dirname(scriptpath) + "\\includes.txt"

    addonsprefix = "{}\\{}\\addons".format(PREFIX, MODPREFIX)

    tools = find_bi_tools()
    addonbuilder = tools[0]
    dssignfile = tools[1]
    dscreatekey = tools[2]
    cfgconvert = tools[3]

    os.chdir(addonspath)

    made = 0
    failed = 0
    skipped = 0
    removed = 0

    clean([os.path.join(buildpath, "@" + PROJECT_NAME), temppath])

    print("\n")

    for src in IMPORTANT_FILES:
        srcpath = os.path.join(projectpath, src)
        dstpath = os.path.join(buildpath, "@" + PROJECT_NAME)
        copy(srcpath, dstpath)

    print("\n")

    for file in os.listdir(addonspath):
        if os.path.isfile(file):
            if check_for_obsolete_pbos(addonspath, file):
                removed += 1
                print("  Removing obsolete file => " + file)
                os.remove(file)

    for p in os.listdir(addonspath):
        temppbo = os.path.join(temppath, "nln_" + p.replace("sheet_", ""))
        path = os.path.join(addonspath, p)
        if not os.path.isdir(path):
            continue
        if p[0] == ".":
            continue
        if not check_for_changes(addonspath, p):
            skipped += 1
            print("# Skipping {}.".format(p))
            continue

        print("# Making {} ...".format(p))

        # Copy to temp
        try:
            copy(path, temppbo, True)
        except:
            print("    Failed to copy {} to temporary directory.".format(p))
        else:
            # Make into PBO
            try:
                subprocess.check_output([
                    addonbuilder,
                    temppbo,
                    "{}\\@{}\\addons".format(buildpath, PROJECT_NAME),
                    "-temp={}".format(temppath),
                    "-prefix={}\\{}".format(addonsprefix, p.replace("sheet_", "")),
                    "-project={}".format(projectpath),
                    "-include={}".format(includepath)
                ], stderr=subprocess.STDOUT)
            except subprocess.CalledProcessError as e:
                failed += 1

                print("    Failed to make {}.".format(p))
            else:
                made += 1
                print("    Successfully made {}.".format(p))

    print("\n# PBOs compiled.")
    print("  Made {}, skipped {}, removed {}, failed to make {}.".format(made, skipped, removed, failed))

    keypaths = create_key_pair(dscreatekey, temppath)

    sign_files(dssignfile, "{}\\@{}\\addons".format(buildpath, PROJECT_NAME), keypaths)

    if keypaths:
        print("\n")
        copy(keypaths[1], "{}\\@{}\\key".format(buildpath, PROJECT_NAME))

    # Purge the evidence!
    print("\n# Cleaning up")
    clean([temppath])

    print("## Build completed at {}.".format(time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime())))

if __name__ == "__main__":
    sys.exit(main())
