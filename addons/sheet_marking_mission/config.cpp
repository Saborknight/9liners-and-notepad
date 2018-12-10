
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
class nln_base_button;
class nln_base_edit;

#include "gui\marking_mission.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_marking_mission
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_marking_mission\XEH_clientPreInit.sqf';";
    };
};
