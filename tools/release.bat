@echo off
set /p version=Enter Version Number in the format {MAIN.MINOR.PATCH}, Leave blank to not change version number:

if not "%version%"=="" (
	set versionFlag=--mod-version %version%
)

%~dp0\build.py --mode release %versionFlag%
