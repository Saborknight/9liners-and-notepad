
class CfgPatches
{
    #include "CfgPatches.cpp"
};

class CfgFunctions
{
    #include "CfgFunctions.cpp"
    #include "sheet_adjust_fire_mission\CfgFunctions.cpp"
    #include "sheet_cas_checkin\CfgFunctions.cpp"
    #include "sheet_cas_nineliner\CfgFunctions.cpp"
    #include "sheet_fire_for_effect\CfgFunctions.cpp"
    #include "sheet_gunship_cff\CfgFunctions.cpp"
    #include "sheet_marking_mission\CfgFunctions.cpp"
    #include "sheet_medevac_nineliner\CfgFunctions.cpp"
    #include "sheet_noteblock\CfgFunctions.cpp"
    #include "sheet_target_location_methods\CfgFunctions.cpp"
};

//include used defines
#include "gui\RscDefines.cpp"

//include all dialogs
#include "sheet_adjust_fire_mission\gui\adjust_fire_mission.cpp"
#include "sheet_cas_checkin\gui\cas_checkin.cpp"
#include "sheet_cas_nineliner\gui\cas_nineliner.cpp"
#include "sheet_cas_fire_for_effect\gui\cas_fire_for_effect.cpp"
#include "sheet_cas_gunship_cff\gui\cas_gunship_cff.cpp"
#include "sheet_cas_marking_mission\gui\cas_marking_mission.cpp"
#include "sheet_cas_medevac_nineliner\gui\cas_medevac_nineliner.cpp"
#include "sheet_cas_noteblock\gui\cas_noteblock.cpp"
#include "sheet_cas_target_location_methods\gui\cas_target_location_methods.cpp"

//include all title displays
class RscTitles
{
    #include "sheet_adjust_fire_mission\gui\RscTitles.cpp"
    #include "sheet_cas_checkin\gui\RscTitles.cpp"
    #include "sheet_cas_nineliner\gui\RscTitles.cpp"
    #include "sheet_cas_fire_for_effect\gui\RscTitles.cpp"
    #include "sheet_cas_gunship_cff\gui\RscTitles.cpp"
    #include "sheet_cas_marking_mission\gui\RscTitles.cpp"
    #include "sheet_cas_medevac_nineliner\gui\RscTitles.cpp"
    #include "sheet_cas_noteblock\gui\RscTitles.cpp"
    #include "sheet_cas_target_location_methods\gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\nineliners_and_notepad\XEH_clientPreInit.sqf';";
};
