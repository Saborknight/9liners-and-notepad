
class CfgPatches
{
    #include "CfgPatches.cpp"
};

class CfgFunctions
{
    #include "CfgFunctions.cpp"
};

class CfgVehicles
{
    #include "CfgVehicles.cpp"
};

class nln_base_picture;
class nln_base_edit;
class nln_base_button;

#include "gui\medevac_nineliner.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_medevac_nineliner
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_medevac_nineliner\XEH_clientPreInit.sqf';";
    };
};
