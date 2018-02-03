
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

class nln_ffe_picture;
class nln_ffe_edit;
class nln_ffe_button;

#include "gui\fire_for_effect.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_fire_for_effect
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\fire_for_effect\XEH_clientPreInit.sqf';";
    };
};
