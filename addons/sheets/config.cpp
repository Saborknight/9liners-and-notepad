
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
    #include "sheet_notepad\CfgFunctions.cpp"
    #include "sheet_target_location_methods\CfgFunctions.cpp"
};

class CfgVehicles
{
    #include "CfgVehicles.cpp"
};

//include used defines
#include "gui\RscDefines.cpp"

//include all dialogs
#include "sheet_adjust_fire_mission\gui\adjust_fire_mission.cpp"
#include "sheet_cas_checkin\gui\cas_checkin.cpp"
#include "sheet_cas_nineliner\gui\cas_nineliner.cpp"
#include "sheet_fire_for_effect\gui\fire_for_effect.cpp"
#include "sheet_gunship_cff\gui\gunship_cff.cpp"
#include "sheet_marking_mission\gui\marking_mission.cpp"
#include "sheet_medevac_nineliner\gui\medevac_nineliner.cpp"
#include "sheet_notepad\gui\notepad.cpp"
#include "sheet_target_location_methods\gui\target_location_methods.cpp"

//include all title displays
class RscTitles
{
    #include "sheet_adjust_fire_mission\gui\RscTitles.cpp"
    #include "sheet_cas_checkin\gui\RscTitles.cpp"
    #include "sheet_cas_nineliner\gui\RscTitles.cpp"
    #include "sheet_fire_for_effect\gui\RscTitles.cpp"
    #include "sheet_gunship_cff\gui\RscTitles.cpp"
    #include "sheet_marking_mission\gui\RscTitles.cpp"
    #include "sheet_medevac_nineliner\gui\RscTitles.cpp"
    #include "sheet_notepad\gui\RscTitles.cpp"
    #include "sheet_target_location_methods\gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
	class nln_sheets
	{
		clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\sheets\XEH_clientPreInit.sqf';";
	};
};
