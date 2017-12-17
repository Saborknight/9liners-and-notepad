
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

if (isNil { (profileNamespace getVariable ["nln_version_v1_used", nil]); }) then
{
	profileNamespace setVariable ["nln_version_v1_used", true];
    profileNamespace setVariable ["CW_9Liners_and_Notepad_Version_03_USED", nil];

	/*----------
	MERGING SAVED SHEETS START
	----------*/
	//copy the old results from cas_nineliner
	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_nineliner_cas_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"cas_nineliner",
				([profileName] + _v)
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_nineliner_cas_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_cas_nineliner_currentPage", _id];
					profileNamespace setVariable ["cw_nineliner_cas_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_nineliner_cas_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_nineliner_cas_lastPage", nil];

	//copy the old results from the medv_nineliner
	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_nineliner_medv_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"medevac_nineliner",
				([profileName] + [
					(_v select 0),
					(_v select 1),
					(_v select 2),
					(_v select 8),
					(_v select 13),
					(_v select 16),
					(_v select 21),
					(_v select 27),
					(_v select 33),
					(if ((_v select 3) == "") then { false; } else { true; }),
					(if ((_v select 4) == "") then { false; } else { true; }),
					(if ((_v select 5) == "") then { false; } else { true; }),
					(if ((_v select 6) == "") then { false; } else { true; }),
					(if ((_v select 7) == "") then { false; } else { true; }),
					(if ((_v select 9) == "") then { false; } else { true; }),
					(if ((_v select 10) == "") then { false; } else { true; }),
					(if ((_v select 11) == "") then { false; } else { true; }),
					(if ((_v select 12) == "") then { false; } else { true; }),
					(if ((_v select 14) == "") then { false; } else { true; }),
					(if ((_v select 15) == "") then { false; } else { true; }),
					(if ((_v select 17) == "") then { false; } else { true; }),
					(if ((_v select 18) == "") then { false; } else { true; }),
					(if ((_v select 19) == "") then { false; } else { true; }),
					(if ((_v select 20) == "") then { false; } else { true; }),
					(if ((_v select 22) == "") then { false; } else { true; }),
					(if ((_v select 23) == "") then { false; } else { true; }),
					(if ((_v select 24) == "") then { false; } else { true; }),
					(if ((_v select 25) == "") then { false; } else { true; }),
					(if ((_v select 26) == "") then { false; } else { true; }),
					(if ((_v select 28) == "") then { false; } else { true; }),
					(if ((_v select 29) == "") then { false; } else { true; }),
					(if ((_v select 30) == "") then { false; } else { true; }),
					(if ((_v select 31) == "") then { false; } else { true; }),
					(if ((_v select 32) == "") then { false; } else { true; }),
					(if ((_v select 34) == "") then { false; } else { true; }),
					(if ((_v select 35) == "") then { false; } else { true; }),
					(if ((_v select 36) == "") then { false; } else { true; })
				])
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_nineliner_medv_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_medevac_nineliner_currentPage", _id];
					profileNamespace setVariable ["cw_nineliner_medv_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_nineliner_medv_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_nineliner_medv_lastPage", nil];

	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_afm_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"adjust_fire_mission",
				([profileName] + [
					(_v select 0),
					(_v select 1),
					(_v select 2),
					(_v select 3),
					(_v select 12),
					(_v select 13),
					(_v select 14),
					(_v select 15),
					(_v select 16),
					(_v select 17),
					(_v select 18),
					(_v select 19),
					(_v select 20),
					(if ((_v select 4) == "") then { false; } else { true; }),
					(if ((_v select 5) == "") then { false; } else { true; }),
					(if ((_v select 6) == "") then { false; } else { true; }),
					(if ((_v select 7) == "") then { false; } else { true; }),
					(if ((_v select 8) == "") then { false; } else { true; }),
					(if ((_v select 9) == "") then { false; } else { true; }),
					(if ((_v select 10) == "") then { false; } else { true; }),
					(if ((_v select 11) == "") then { false; } else { true; })
				])
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_afm_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", _id];
					profileNamespace setVariable ["cw_afm_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_afm_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_afm_lastPage", nil];

	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_cas_check_in_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"cas_checkin",
				([profileName] + _v)
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_cas_check_in_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_cas_checkin_currentPage", _id];
					profileNamespace setVariable ["cw_cas_check_in_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_cas_check_in_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_cas_check_in_lastPage", nil];

	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_ffe_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"fire_for_effect",
				([profileName] + [
					(_v select 0),
					(_v select 1),
					(_v select 2),
					(_v select 3),
					(_v select 12),
					(_v select 13),
					(_v select 14),
					(_v select 15),
					(_v select 16),
					(_v select 17),
					(_v select 18),
					(_v select 19),
					(_v select 20),
					(if ((_v select 4) == "") then { false; } else { true; }),
					(if ((_v select 5) == "") then { false; } else { true; }),
					(if ((_v select 6) == "") then { false; } else { true; }),
					(if ((_v select 7) == "") then { false; } else { true; }),
					(if ((_v select 8) == "") then { false; } else { true; }),
					(if ((_v select 9) == "") then { false; } else { true; }),
					(if ((_v select 10) == "") then { false; } else { true; }),
					(if ((_v select 11) == "") then { false; } else { true; })
				])
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_ffe_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_fire_for_effect_currentPage", _id];
					profileNamespace setVariable ["cw_ffe_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_ffe_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_ffe_lastPage", nil];

	for "_i" from 1 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_gcff_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"gunship_cff",
				([profileName] + _v)
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_fiveliner_gcff_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_gunship_cff_currentPage", _id];
					profileNamespace setVariable ["cw_fiveliner_gcff_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_gcff_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nil];

	//copy the old results from marking_mission
	for "_i" from 1 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_mm_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"marking_mission",
				([profileName] + _v)
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_mm_lastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_marking_mission_currentPage", _id];
					profileNamespace setVariable ["cw_mm_lastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_mm_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_mm_lastPage", nil];

	//copy the old results from noteblock
	for "_i" from 0 to 20 do
	{
		private _v = (profileNamespace getVariable [(format["cw_noteblock_pageText_%1", _i]), nil]);
		if !(isNil "_v") then
		{
			private _id = ([
				"notepad",
				([profileName] + ["", _v])
			] call nln_fnc_addPage);

			private _lP = (profileNamespace getVariable ["cw_noteblock_LastPage", -1]);
			if !(isNil "_lP") then
			{
				if (_lP isEqualTo _i) then
				{
					profileNamespace setVariable ["nln_notepad_currentPage", _id];
					profileNamespace setVariable ["cw_noteblock_LastPage", nil];
				};
			};

			profileNamespace setVariable [(format["cw_noteblock_pageText_%1", _i]), nil];
		};
	};
	//profileNamespace setVariable ["nln_noteblock_LastPage", nil];

	/*----------
	MERGING SAVED SHEETS END
	----------*/

	private _uid = (["notepad"] call nln_fnc_getLastPage + 1);
	[
		"notepad",
		(["STR_nln_General_authorAnnouncement"] call BIS_fnc_localize)
	] call nln_fnc_setPage;
	profileNamespace setVariable ["nln_notepad_currentPage", _uid];
};


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
