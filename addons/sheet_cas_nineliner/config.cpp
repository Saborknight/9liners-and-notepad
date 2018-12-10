
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

#include "gui\cas_nineliner.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_cas_nineliner
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_cas_nineliner\XEH_clientPreInit.sqf';";
    };
};
