
class CfgPatches {
    #include "CfgPatches.cpp"
};

class CfgFunctions {
    #include "CfgFunctions.cpp"
};

class CfgVehicles {
    #include "CfgVehicles.cpp"
};

class nln_base_picture;
class nln_base_edit;
class nln_base_button;

#include "gui\notepad.cpp"

class RscTitles {
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers {
    class nln_notepad {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_notepad\XEH_clientPreInit.sqf';";
    };
};
