
#!/usr/bin/env python3

# Saborknight Arma 3 Mod build tools #
######################################

# This build script was built for normalising the build process for Arma 3
# mods (co-)developed by Saborknight.
#
# See "build.cfg" to modify the configurations of the build script for the
# project.
#
#
# The MIT License
# Copyright 2017 Saborknight
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

__version__ = "0.3"

import sys


if sys.version_info[0] == 2:
    print("Python 3 is required.")
    sys.exit(1)


import os
import subprocess
import json
import configparser
import shutil
import ntpath
import time
import re
import fileinput
import argparse
import glob

if sys.platform == "win32":
    import winreg


######## CONFIG FUNCTIONS #########
def define_config():
    defaults = {
        "mode" : "development",
        "name" : "",
        "version" : False,
        "mainprefix" : "x",
        "prefix" : "",
        "core_packages" : "main,ui_fonts",
        "support_files" : "meta.cpp,mod.cpp",
        "version_files" : "mod.cpp:",
        "includes" : False,
        "build_dir" : "build"
    }

    config = parse_config_file(defaults)
    defaults.update(config)

    if len(sys.argv) > 1:
        params = parse_params(defaults)
        defaults.update(params)

    # Parse lists
    for variable in defaults:
        arrayed_variables = [
            "core_packages",
            "support_files",
            "version_files"
        ]

        if variable in arrayed_variables:
            defaults[variable] = defaults[variable].split(",")

    return defaults


def parse_config_file(defaults):
    toolspath = os.path.dirname(os.path.realpath(__file__))
    cfg = configparser.ConfigParser();
    try:
        read = cfg.read(os.path.join(toolspath, "build.cfg"))
    except:
        raise
        print_error("build.cfg could not be parsed.")
    else:
        data = dict(cfg.items("DEFAULT"))
        return data


def parse_params(defaults):
    paramFlags = {
        "version" : (
            ("-v", "--version"),
            {
                "action" : "version",
                "version" : "{} v{}".format("build.py", __version__)
            }
        ),
        "clean" : (
            ("-c", "--clean"),
            {
                "action" : "store_true",
                "help" : "Just clean up anything resulting from past processing."
            }
        ),
        "mode" : (
            ("-m", "--mode"),
            {
                "default" : defaults["mode"],
                "choices" : ["development", "d", "release", "r"],
                "help" : "set <mode> to development or release. Default = {}".format(defaults["mode"])
            }
        ),
        "name" : (
            ("-n", "--name"),
            {
                "default" : defaults["name"],
                "help" : "set <name> which will be used with \"@\" prepended. Default = {}".format(defaults["name"])
            }
        ),
        "versionNumber" : (
            ("-V", "--mod-version"),
            {
                "default" : defaults["version"],
                "help" : "set mod <version> which will replace existing version numbers in <version_files>. Default = {}".format(defaults["version"]),
                "dest" : "version"
            }
        ),
        "prefix" : (
            ("-p", "--prefix"),
            {
                "default" : defaults["prefix"],
                "help" : "set <prefix> which defines the mod prefix. Default = {}".format(defaults["prefix"])
            }
        ),
        "corePackages" : (
            ("-cP", "--core-packages"),
            {
                "default" : defaults["core_packages"],
                "help" : "set <core_packages>, a comma(,) separated list defining files/directories that are not sheet packages. Default = {}".format(defaults["core_packages"])
            }
        ),
        "supportFiles" : (
            ("-sF", "--support-files"),
            {
                "default" : defaults["support_files"],
                "help" : "set <support_files>, a comma(,) separated list defining files/directories to copy. Default = {}".format(defaults["support_files"])
            }
        ),
        "versionFiles" : (
            ("-vF", "--version-files"),
            {
                "default" : defaults["version_files"],
                "help" : "set <version_files>, a comma(,) separated list defining which files to replace versions in. Default = {}".format(defaults["version_files"])
            }
        ),
        "includes" : (
            ("-i", "--includes"),
            {
                "default" : defaults["includes"],
                "help" : "set <includes>, a semi-colon(;) separated list of wildcards defining which filetypes get copied directly into the .pbo packages. Default contained in file \"includes.txt\""
            }
        )
    }

    parser = argparse.ArgumentParser(
        description="Saborknight Arma 3 Mod [SAM] build tools - let's build something awesome! This build script was built for normalising the build process for Saborknight mods.",
        epilog="The defaults for this build script are defined in \"build.cfg\"."
    )

    for param, values in paramFlags.items():
        parser.add_argument(*values[0], **values[1])

    params = vars(parser.parse_args())
    return params


CONFIG = define_config()


######## BUILD FUNCTIONS #########
def copytree(src, dst, symlinks=False, ignore=None):
    if not os.path.exists(dst):
        os.makedirs(dst)
    for item in os.listdir(src):
        s = os.path.join(src, item)
        d = os.path.join(dst, item)
        if os.path.isdir(s):
            copytree(s, d, symlinks, ignore)
        else:
            if not os.path.exists(d) or os.stat(s).st_mtime - os.stat(d).st_mtime > 1:
                shutil.copy2(s, d)


def make_includes_file(path):
    file = open(path, "w+")
    file.seek(0)
    file.truncate()
    file.write(CONFIG["includes"])
    file.close()


def mod_time(path):
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(addonspath, addonsbuildpath, module):
    if not os.path.exists(os.path.join(addonsbuildpath, "{}_{}.pbo".format(CONFIG["prefix"], module.replace("sheet_", "")))):
        return True
    return mod_time(os.path.join(addonspath, module)) > mod_time(os.path.join(addonsbuildpath, "{}_{}.pbo".format(CONFIG["prefix"], module.replace("sheet_", ""))))


def check_for_obsolete_pbos(addonspath, file):
    module = package_dir(file)
    if not os.path.exists(os.path.join(addonspath, module)):
        return True
    return False


def package_dir(file):
    basefile = file.replace("nln_", "").replace(".pbo", "")
    if not basefile in CONFIG["core_packages"]:
        directory = "sheet_" + basefile
    else:
        directory = basefile

    return directory;


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
        print()
        return [addonbuilderpath, dssignfilepath, dscreatekeypath, cfgconvertpath]
    else:
        raise Exception("BadTools", "Arma 3 Tools are not installed correctly")


def create_key_pair(dscreatekey, temppath):
    print("\n# Generating Private/Public key pair")
    workingdir = os.getcwd()
    os.chdir(temppath)
    version = CONFIG["version"] if CONFIG["version"] else "0"

    try:
        subprocess.check_output([
            dscreatekey,
            "{}.{}".format(CONFIG["name"], version)
        ], stderr=subprocess.STDOUT)
    except:
        print("  Failed to generate key pair")
        keypaths = False
    else:
        print("  Successfully generated key pair\n  DO NOT distribute the private key!")
        if os.path.isfile("{}.{}.biprivatekey".format(CONFIG["name"], version)):
            keypaths = [
                os.path.join(temppath, "{}.{}.biprivatekey".format(CONFIG["name"], version)),
                os.path.join(temppath, "{}.{}.bikey".format(CONFIG["name"], version))
            ]

    os.chdir(workingdir)
    return keypaths


def sign_files(dssignfile, addonsbuildpath, keypaths):
    print("\n# Signing PBOs")
    workingdir = os.getcwd()
    os.chdir(addonsbuildpath)

    if not keypaths:
        print("  Failed to find the public key.")

    for pbo in os.listdir(addonsbuildpath):
        if ".bisign" in pbo:
            continue

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


def change_version(projectpath, files=CONFIG["version_files"], newVersion=CONFIG["version"], pattern=r"\b([0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3})\b"):
    if not re.match(r"(?<!.)(?:[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3})(?!.)", newVersion):
        print("# Incorrect version number given. No version changes made.")
        print()
        return False

    oldDir = os.getcwd()
    os.chdir(projectpath)
    changed = 0

    with fileinput.input(files, inplace=True) as f:
        for line in f:
            versionFound = re.findall(pattern, line)

            if (versionFound != [newVersion]) and versionFound:
                sys.stdout.write(line.replace(versionFound[0], newVersion))
                sys.stderr.write("# Changing version {} => {} in {}:{}\n".format(versionFound[0], newVersion, fileinput.filename(), fileinput.filelineno()))
                changed += 1
            else:
                sys.stdout.write(line)

    if changed <= 0:
        print("# No version changes made.")
    else:
        print("\n    {} mentions of old version numbers have been changed.".format(changed))

    print()
    os.chdir(oldDir)


def copy(srcpath, dstpath, suppress_output=False):
    projectpath = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
    src = os.path.relpath(srcpath, start=projectpath)

    if not suppress_output:
        print("# Copying \{} ...".format(src))

    if os.path.isfile(srcpath):
        if not os.path.isdir(dstpath):
            os.mkdir(dstpath)

        shutil.copy2(srcpath, dstpath)
    else:
        copytree(srcpath, dstpath)

    if os.path.isfile(os.path.join(dstpath, src)) or os.path.isdir(os.path.join(dstpath)):
        print("    Successfully copied \{}.".format(src))
    else:
        print("    Failed to copy \{}.".format(src))


def clean(paths):
    projectpath = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
    for p in paths:
        if "*" in p:
            for item in glob.glob(p):
                if os.path.isfile(item):
                    os.remove(item)
                    print("# Deleting item \{}...".format(os.path.relpath(item, start=projectpath)))
        else:
            if os.path.isdir(p):
                shutil.rmtree(p)
                print("# Deleting directory tree \{}...".format(os.path.relpath(p, start=projectpath)))
            elif os.path.isfile(p):
                os.remove(p)
                print("# Deleting file \{}...".format(os.path.relpath(p, start=projectpath)))

    print()
    return


######## MAIN PROCESS #########
def main():
    print("""
      #############################
      # 9Liners & Notepad Builder #
      #############################
    """)

    scriptpath = os.path.realpath(__file__)
    toolspath = os.path.dirname(scriptpath)
    projectpath = os.path.dirname(toolspath)
    addonspath = os.path.join(projectpath, "addons")
    buildpath = os.path.join(projectpath, CONFIG["build_dir"])
    addonsbuildpath = os.path.join(buildpath, "@" + CONFIG["name"], "addons")
    temppath = os.path.join(toolspath, "temp")
    includespath = make_includes_file(os.path.join(temppath, "includes.txt")) if CONFIG["includes"] else (os.path.join(toolspath, "includes.txt"))

    addonsprefix = "{}\\{}\\addons".format(CONFIG["mainprefix"], CONFIG["prefix"])

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

    if CONFIG["version"]:
        change_version(projectpath)
        clean([os.path.join(addonsbuildpath, "*.bisign")])

    if CONFIG.get("clean", False):
        clean([buildpath, temppath])
        sys.exit(1)

    if os.path.isdir(os.path.join(buildpath, "@" + CONFIG["name"])):
        expanded_support_files = []
        for item in os.listdir(os.path.join(buildpath, "@" + CONFIG["name"])):
            if item == "addons":
                continue

            itempath = os.path.join(buildpath, "@" + CONFIG["name"], item)
            expanded_support_files.append(itempath)

        clean(expanded_support_files + [temppath])
    else:
        clean([temppath])
    os.mkdir(temppath)

    for src in CONFIG["support_files"]:
        srcpath = os.path.join(projectpath, src)
        dstpath = os.path.join(buildpath, "@" + CONFIG["name"])
        copy(srcpath, dstpath)

    print("\n")

    if os.path.exists(addonsbuildpath):
        for file in os.listdir(addonsbuildpath):
            if check_for_obsolete_pbos(addonspath, file) and file.endswith(".pbo"):
                removed += 1
                print("# Removing obsolete file => " + file)
                os.remove(os.path.join(addonsbuildpath, file))

    for p in os.listdir(addonspath):
        temppbo = os.path.join(temppath, "nln_" + p.replace("sheet_", ""))
        path = os.path.join(addonspath, p)
        if not os.path.isdir(path):
            continue
        if p[0] == ".":
            continue

        if os.path.exists(os.path.join(addonsbuildpath, "nln_{}.pbo".format(p.replace("sheet_", "")))):
            if not check_for_changes(addonspath, addonsbuildpath, p):
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
                    addonsbuildpath,
                    "-temp={}".format(temppath),
                    "-prefix={}\\{}".format(addonsprefix, p.replace("sheet_", "")),
                    "-project={}".format(projectpath),
                    "-include={}".format(includespath)
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

    if made > 0 or CONFIG["version"]:
        sign_files(dssignfile, addonsbuildpath, keypaths)

    if keypaths:
        print("\n")
        copy(keypaths[1], "{}\\@{}\\key".format(buildpath, CONFIG["name"]))

    # Purge the evidence!
    print("\n# Cleaning up")
    clean([temppath])

    print("## Build completed at {}.".format(time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime())))

if __name__ == "__main__":
    sys.exit(main())
