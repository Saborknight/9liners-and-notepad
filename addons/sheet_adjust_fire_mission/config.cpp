
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

class nln_afm_picture;
class nln_afm_button;
class nln_afm_edit;

#include "gui\adjust_fire_mission.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_adjust_fire_mission
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\adjust_fire_mission\XEH_clientPreInit.sqf';";
    };
};
