
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

class nln_mm_picture;
class nln_mm_button;
class nln_mm_edit;

#include "gui\marking_mission.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_marking_mission
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\marking_mission\XEH_clientPreInit.sqf';";
    };
};
