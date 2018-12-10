
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

#include "gui\gunship_cff.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_gunship_cff
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_gunship_cff\XEH_clientPreInit.sqf';";
    };
};
