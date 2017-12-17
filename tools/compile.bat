
set ADDONBUILDERPATH="D:\Program Files\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"

python "%~dp0\compile.py"^
    "-L" "%~dp0\build.log"^
    "-N" "nln_{name}"^
    "-b"^
    "-T" %~dp0\..\build\@nineliners_and_notepad\addons^
    "-F" %~dp0\..\addons\*^
    "-I" "*.p3d;*.pac;*.paa;*.rtm;*.sqf;*.sqs;*.bikb;*.fsm;*.wss;*.ogg;*.wav;*.fxy;*.csv;*.html;*.lip;*.txt;*.wrp;*.bisurf;*.xml;*.rvmat;*.hpp;*.jpg;*.h"^
    "-A" %ADDONBUILDERPATH%^
    "-p" "x\nln\addons\{folder}"
