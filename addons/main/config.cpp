
class CfgPatches {
    #include "CfgPatches.cpp"
};

class CfgFunctions {
    #include "CfgFunctions.cpp"
};

class CfgVehicles {
    #include "CfgVehicles.cpp"
};

//include used defines
#include "gui\RscDefines.cpp"

class Extended_PreInit_EventHandlers {
    class nln_sheets
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\main\XEH_clientPreInit.sqf';";
    };
};
