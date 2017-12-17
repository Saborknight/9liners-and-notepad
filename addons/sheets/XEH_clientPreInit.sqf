
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_open_notepad_key", "OPEN NOTEPAD", { _this call nln_notepad_fnc_openMenu; }, {}, [DIK_N, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_nineliner_cas_key", "OPEN 9-Liner CAS", { _this call nln_cas_nineliner_fnc_openMenu; }, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_nineliner_medv_key", "OPEN 9-Liner MEDIVAC", { _this call nln_medevac_nineliner_fnc_openMenu; }, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_fiveliner_gcff_key", "OPEN 5-Liner GUNSHIP CALL FOR FIRE", { _this call nln_gunship_cff_fnc_openMenu; }, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_cas_check_in_key", "OPEN CAS CHECK-IN BREEFING", { _this call nln_cas_checkin_fnc_openMenu; }, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_sheet_tlm_key", "OPEN TARGET-LOCATION-METHODS SHEET", { _this call nln_target_location_methods_fnc_openMenu; }, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_sheet_ffe_key", "OPEN FIRE-FOR-EFFECT SHEET", { _this call nln_fire_for_effect_fnc_openMenu; }, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_sheet_mm_key", "OPEN MARKING-MISSION SHEET", { _this call nln_marking_mission_fnc_openMenu; }, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_Credentials_modName","nln_open_sheet_afm_key", "OPEN ADJUST-FIRE-MISSION SHEET", { _this call nln_adjust_fire_mission_fnc_openMenu; }, {}, [DIK_A, [true, true, false]]] call CBA_fnc_addKeybind;
//[(["STR_nln_Credentials_modName"] call BIS_fnc_localize),"nln_disable_controls_key", "DISABLE CONTROLS", {[] spawn {execVM "nln_nineliner_and_notepad\data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;


if (isNil {profileNamespace getVariable "CW_9Liners_and_Notepad_Version_03_USED"}) then
{
	profileNamespace setVariable ["CW_9Liners_and_Notepad_Version_03_USED", true];


	profileNamespace setVariable ["cw_9liner_cas_lastPage", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_0", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_1", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_2", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_3", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_4", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_5", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_6", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_7", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_8", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_9", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_10", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_11", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_12", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_13", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_14", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_16", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_17", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_18", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_19", nil];
	profileNamespace setVariable ["cw_9liner_cas_pageText_20", nil];

	profileNamespace setVariable ["cw_9liner_medv_lastPage", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_1", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_2", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_3", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_4", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_5", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_6", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_7", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_8", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_9", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_10", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_11", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_12", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_13", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_14", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_15", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_16", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_17", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_18", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_19", nil];
	profileNamespace setVariable ["cw_9liner_medv_pageText_20", nil];

	profileNamespace setVariable ["cw_afm_lastPage", nil];
	profileNamespace setVariable ["cw_afm_pageText_1", nil];
	profileNamespace setVariable ["cw_afm_pageText_2", nil];
	profileNamespace setVariable ["cw_afm_pageText_3", nil];
	profileNamespace setVariable ["cw_afm_pageText_4", nil];
	profileNamespace setVariable ["cw_afm_pageText_5", nil];
	profileNamespace setVariable ["cw_afm_pageText_6", nil];
	profileNamespace setVariable ["cw_afm_pageText_7", nil];
	profileNamespace setVariable ["cw_afm_pageText_8", nil];
	profileNamespace setVariable ["cw_afm_pageText_9", nil];
	profileNamespace setVariable ["cw_afm_pageText_10", nil];
	profileNamespace setVariable ["cw_afm_pageText_11", nil];
	profileNamespace setVariable ["cw_afm_pageText_12", nil];
	profileNamespace setVariable ["cw_afm_pageText_13", nil];
	profileNamespace setVariable ["cw_afm_pageText_14", nil];
	profileNamespace setVariable ["cw_afm_pageText_15", nil];
	profileNamespace setVariable ["cw_afm_pageText_16", nil];
	profileNamespace setVariable ["cw_afm_pageText_17", nil];
	profileNamespace setVariable ["cw_afm_pageText_18", nil];
	profileNamespace setVariable ["cw_afm_pageText_19", nil];
	profileNamespace setVariable ["cw_afm_pageText_20", nil];

	profileNamespace setVariable ["cw_cas_check_in_lastPage", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_1", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_2", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_3", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_4", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_5", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_6", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_7", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_8", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_9", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_10", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_11", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_12", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_13", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_14", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_15", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_16", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_17", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_18", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_19", nil];
	profileNamespace setVariable ["cw_cas_check_in_pageText_20", nil];

	profileNamespace setVariable ["cw_ffe_lastPage", nil];
	profileNamespace setVariable ["cw_ffe_pageText_1", nil];
	profileNamespace setVariable ["cw_ffe_pageText_2", nil];
	profileNamespace setVariable ["cw_ffe_pageText_3", nil];
	profileNamespace setVariable ["cw_ffe_pageText_4", nil];
	profileNamespace setVariable ["cw_ffe_pageText_5", nil];
	profileNamespace setVariable ["cw_ffe_pageText_6", nil];
	profileNamespace setVariable ["cw_ffe_pageText_7", nil];
	profileNamespace setVariable ["cw_ffe_pageText_8", nil];
	profileNamespace setVariable ["cw_ffe_pageText_9", nil];
	profileNamespace setVariable ["cw_ffe_pageText_10", nil];
	profileNamespace setVariable ["cw_ffe_pageText_11", nil];
	profileNamespace setVariable ["cw_ffe_pageText_12", nil];
	profileNamespace setVariable ["cw_ffe_pageText_13", nil];
	profileNamespace setVariable ["cw_ffe_pageText_14", nil];
	profileNamespace setVariable ["cw_ffe_pageText_15", nil];
	profileNamespace setVariable ["cw_ffe_pageText_16", nil];
	profileNamespace setVariable ["cw_ffe_pageText_17", nil];
	profileNamespace setVariable ["cw_ffe_pageText_18", nil];
	profileNamespace setVariable ["cw_ffe_pageText_19", nil];
	profileNamespace setVariable ["cw_ffe_pageText_20", nil];

	profileNamespace setVariable ["cw_5liner_gcff_lastPage", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_1", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_2", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_3", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_4", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_5", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_6", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_7", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_8", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_9", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_10", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_11", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_12", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_13", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_14", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_15", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_16", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_17", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_18", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_19", nil];
	profileNamespace setVariable ["cw_5liner_gcff_pageText_20", nil];

	profileNamespace setVariable ["cw_mm_lastPage", nil];
	profileNamespace setVariable ["cw_mm_pageText_1", nil];
	profileNamespace setVariable ["cw_mm_pageText_2", nil];
	profileNamespace setVariable ["cw_mm_pageText_3", nil];
	profileNamespace setVariable ["cw_mm_pageText_4", nil];
	profileNamespace setVariable ["cw_mm_pageText_5", nil];
	profileNamespace setVariable ["cw_mm_pageText_6", nil];
	profileNamespace setVariable ["cw_mm_pageText_7", nil];
	profileNamespace setVariable ["cw_mm_pageText_8", nil];
	profileNamespace setVariable ["cw_mm_pageText_9", nil];
	profileNamespace setVariable ["cw_mm_pageText_10", nil];
	profileNamespace setVariable ["cw_mm_pageText_11", nil];
	profileNamespace setVariable ["cw_mm_pageText_12", nil];
	profileNamespace setVariable ["cw_mm_pageText_13", nil];
	profileNamespace setVariable ["cw_mm_pageText_14", nil];
	profileNamespace setVariable ["cw_mm_pageText_15", nil];
	profileNamespace setVariable ["cw_mm_pageText_16", nil];
	profileNamespace setVariable ["cw_mm_pageText_17", nil];
	profileNamespace setVariable ["cw_mm_pageText_18", nil];
	profileNamespace setVariable ["cw_mm_pageText_19", nil];
	profileNamespace setVariable ["cw_mm_pageText_20", nil];

	profileNamespace setVariable ["cw_noteblock_LastPage", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_1", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_2", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_3", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_4", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_5", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_6", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_7", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_8", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_9", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_10", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_11", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_12", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_13", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_14", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_15", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_16", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_17", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_18", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_19", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_20", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_21", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_22", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_23", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_24", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_25", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_26", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_27", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_28", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_29", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_30", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_31", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_32", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_33", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_34", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_35", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_36", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_37", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_38", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_39", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_40", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_41", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_42", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_43", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_44", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_45", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_46", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_47", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_48", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_49", nil];
	profileNamespace setVariable ["cw_noteblock_pageText_50", nil];

	[
		"notepad",
		(["notepad"] call nln_fnc_getLastPage + 1),
		["STR_nln_General_authorAnnouncement"] call BIS_fnc_localize,
	] call nln_fnc_setPage;
};

nln_nineliners_and_notepad_currentResource = "";

nln_availableTypes = [
	"adjust_fire_mission",
	"cas_checkin",
	"cas_nineliner",
	"fire_for_effect",
	"gunship_cff",
	"marking_mission",
	"medevac_nineliner",
	"notepad",
	"target_location_methods"
];

{
	private _f = (format["nln_pages_%1", _x]);
	if !([(profileNamespace getVariable [_f, []])] call CBA_fnc_isHash) then
	{
		profileNamespace setVariable [_f, ([[], []] call CBA_fnc_hashCreate)];
	};
} forEach nln_availableTypes;

//create activation/deactivation settings of each sheet
[
	"nln_adjust_fire_mission_enable",
	"CHECKBOX",
	["STR_nln_Settings_adjustFireMissionEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_cas_checkin_enable",
	"CHECKBOX",
	["STR_nln_Settings_casCheckInEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_cas_nineliner_enable",
	"CHECKBOX",
	["STR_nln_Settings_casNinelinerEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_fire_for_effect_enable",
	"CHECKBOX",
	["STR_nln_Settings_fireForEffectEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_gunship_cff_enable",
	"CHECKBOX",
	["STR_nln_Settings_gunshipCallForFireEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_marking_mission_enable",
	"CHECKBOX",
	["STR_nln_Settings_missionMarkingEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_medevac_nineliner_enable",
	"CHECKBOX",
	["STR_nln_Settings_medevacNinelinerEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_notepad_enable",
	"CHECKBOX",
	["STR_nln_Settings_notepadEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_target_location_methods_enable",
	"CHECKBOX",
	["STR_nln_Settings_targetLocationMethodsEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;

//should dialogs closed be converted to a background display?
[
	"nln_dialogToDisplay_enable",
	"CHECKBOX",
	["STR_nln_Settings_dialogToDisplayEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
