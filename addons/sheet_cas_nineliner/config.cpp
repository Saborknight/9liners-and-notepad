
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

class nln_nineliner_cas_picture;
class nln_nineliner_cas_edit;
class nln_nineliner_cas_button;

#include "gui\cas_nineliner.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_cas_nineliner
    {
        clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\cas_nineliner\XEH_clientPreInit.sqf';";
    };
};
