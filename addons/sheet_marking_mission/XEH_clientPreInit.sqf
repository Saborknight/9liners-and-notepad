
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_marking_mission_keybind_open", (["STR_nln_Settings_keybindOpenMarkingMission"] call BIS_fnc_localize), { _this call nln_marking_mission_fnc_openMenu; }, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;

[
	"nln_marking_mission_enable",
	"CHECKBOX",
	["STR_nln_Settings_missionMarkingEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
