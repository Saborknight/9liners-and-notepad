
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

#include "gui\cas_checkin.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_cas_checkin
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheet_cas_checkin\XEH_clientPreInit.sqf';";
    };
};
