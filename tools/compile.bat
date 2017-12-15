
set ADDONBUILDERPATH=""

python "%~dp0\compile.py"^
    "-L" "%~dp0\build.log"^
    "-N" "{name}"^
    "-b"^
    "-T" %~dp0\..\build\@nineliners_and_notepad\addons^
    "-F" %~dp0\..\addons\nineliners_and_notepad^
    "-I" "*.p3d;*.pac;*.paa;*.rtm;*.sqf;*.sqs;*.bikb;*.fsm;*.wss;*.ogg;*.wav;*.fxy;*.csv;*.html;*.lip;*.txt;*.wrp;*.bisurf;*.xml;*.rvmat;*.hpp;*.jpg;*.h"^
    "-A" %ADDONBUILDERPATH%^
    "-p" "x\nln\addons\{folder}"
