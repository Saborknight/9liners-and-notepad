
class CfgPatches {
    #include "CfgPatches.cpp"
};

class CfgFunctions {
    #include "CfgFunctions.cpp"
};

class CfgVehicles {
    #include "CfgVehicles.cpp"
};

class nln_targetlocationmethods_picture;

#include "gui\target_location_methods.cpp"

class RscTitles {
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers {
    class nln_target_location_methods {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_target_location_methods\XEH_clientPreInit.sqf';";
    };
};
