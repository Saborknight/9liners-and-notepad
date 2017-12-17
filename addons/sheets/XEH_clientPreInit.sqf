
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_notepad_key", "OPEN NOTEPAD", { _this call nln_notepad_fnc_openMenu; }, {}, [DIK_N, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_nineliner_cas_key", "OPEN 9-Liner CAS", { _this call nln_cas_nineliner_fnc_openMenu; }, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_nineliner_medv_key", "OPEN 9-Liner MEDIVAC", { _this call nln_medevac_nineliner_fnc_openMenu; }, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_fiveliner_gcff_key", "OPEN 5-Liner GUNSHIP CALL FOR FIRE", { _this call nln_gunship_cff_fnc_openMenu; }, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_cas_check_in_key", "OPEN CAS CHECK-IN BREEFING", { _this call nln_cas_checkin_fnc_openMenu; }, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_sheet_tlm_key", "OPEN TARGET-LOCATION-METHODS SHEET", { _this call nln_target_location_methods_fnc_openMenu; }, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_sheet_ffe_key", "OPEN FIRE-FOR-EFFECT SHEET", { _this call nln_fire_for_effect_fnc_openMenu; }, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_sheet_mm_key", "OPEN MARKING-MISSION SHEET", { _this call nln_marking_mission_fnc_openMenu; }, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;
["STR_nln_nineliner_and_notepad_Scripts_category","nln_open_sheet_afm_key", "OPEN ADJUST-FIRE-MISSION SHEET", { _this call nln_adjust_fire_mission_fnc_openMenu; }, {}, [DIK_A, [true, true, false]]] call CBA_fnc_addKeybind;
//[(["STR_nln_nineliner_and_notepad_Scripts_category"] call BIS_fnc_localize),"nln_disable_controls_key", "DISABLE CONTROLS", {[] spawn {execVM "nln_nineliner_and_notepad\data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;

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

profileNamespace setVariable ["nln_nineliners_and_notepad_version_03_used", true];


/*----------
MERGING SAVED SHEETS START
----------*/
//copy the old results from cas_nineliner
for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_nineliner_cas_pageText_%1", _i]), nil]);
	if !(isNil "_v") then
	{
		private _id = ([
			"cas_nineliner",
			([profileName] + _v)
		] call nln_fnc_addPage);

		private _lP = (profileNamespace getVariable ["nln_nineliner_cas_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_cas_nineliner_currentPage", _id];
				profileNamespace setVariable ["nln_nineliner_cas_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_nineliner_cas_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_nineliner_cas_lastPage", nil];

//copy the old results from the medv_nineliner
for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_nineliner_medv_pageText_%1", _i]), nil]);
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

		private _lP = (profileNamespace getVariable ["nln_nineliner_medv_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_medevac_nineliner_currentPage", _id];
				profileNamespace setVariable ["nln_nineliner_medv_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_nineliner_medv_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_nineliner_medv_lastPage", nil];

for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_afm_pageText_%1", _i]), nil]);
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

		private _lP = (profileNamespace getVariable ["nln_afm_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", _id];
				profileNamespace setVariable ["nln_afm_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_afm_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_afm_lastPage", nil];

for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_cas_check_in_pageText_%1", _i]), nil]);
	if !(isNil "_v") then
	{
		private _id = ([
			"cas_checkin",
			([profileName] + _v)
		] call nln_fnc_addPage);

		private _lP = (profileNamespace getVariable ["nln_cas_check_in_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_cas_checkin_currentPage", _id];
				profileNamespace setVariable ["nln_cas_check_in_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_cas_check_in_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_cas_check_in_lastPage", nil];

for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_ffe_pageText_%1", _i]), nil]);
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

		private _lP = (profileNamespace getVariable ["nln_ffe_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_fire_for_effect_currentPage", _id];
				profileNamespace setVariable ["nln_ffe_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_ffe_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_ffe_lastPage", nil];

for "_i" from 1 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_gcff_pageText_%1", _i]), nil]);
	if !(isNil "_v") then
	{
		private _id = ([
			"gunship_cff",
			([profileName] + _v)
		] call nln_fnc_addPage);

		private _lP = (profileNamespace getVariable ["nln_fiveliner_gcff_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_gunship_cff_currentPage", _id];
				profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_gcff_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nil];

//copy the old results from marking_mission
for "_i" from 1 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_mm_pageText_%1", _i]), nil]);
	if !(isNil "_v") then
	{
		private _id = ([
			"marking_mission",
			([profileName] + _v)
		] call nln_fnc_addPage);

		private _lP = (profileNamespace getVariable ["nln_mm_lastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_marking_mission_currentPage", _id];
				profileNamespace setVariable ["nln_mm_lastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_mm_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_mm_lastPage", nil];

//copy the old results from noteblock
for "_i" from 0 to 20 do
{
	private _v = (profileNamespace getVariable [(format["nln_noteblock_pageText_%1", _i]), nil]);
	if !(isNil "_v") then
	{
		private _id = ([
			"notepad",
			([profileName] + ["", _v])
		] call nln_fnc_addPage);

		private _lP = (profileNamespace getVariable ["nln_noteblock_LastPage", -1]);
		if !(isNil "_lP") then
		{
			if (_lP isEqualTo _i) then
			{
				profileNamespace setVariable ["nln_notepad_currentPage", _id];
				profileNamespace setVariable ["nln_noteblock_LastPage", nil];
			};
		};

		profileNamespace setVariable [(format["nln_noteblock_pageText_%1", _i]), nil];
	};
};
//profileNamespace setVariable ["nln_noteblock_LastPage", nil];

/*----------
MERGING SAVED SHEETS END
----------*/


profileNamespace setVariable ["nln_noteblock_pageText_50", "                 CHANGELOG                              28.02.2015 - V0.3                                                    -added: Target-Location-Methods-Help sheet      -added: Fire-For-Effect sheet                   -added: Adjust-Fire-Mission sheet               -added: Marking-Mission sheet                  -added: View Document while moving Function   -changed: Removed all items. So it's a client-            side mod now!              -changed: some textbox stuff                  -changed: Medivac nineliner doesn't saves after             clearing a page anymore.             -changed: New ReadMe in the forum post!:      http://forums.bistudio.com/showthread.php?188821-Ingame-nineliners-amp-Notepad"];
HINT FORMAT ["Hey %1!\nThanks for installing version 0.3 of my nineliners & Notepad mod!\nIf you've already used this mod in an other version before, all saved pages have been cleared.\nThis had to be done, because there were some changes with the textboxes of some sheets.\nI'm sorry for all your lost notes!\nIf this is your first time using this mod, make sure to take a look at the BI-Forums post of the mod.\nThe newest changelog was added to page 50 of your Notepad.\n\nEnjoy the new Version,\n~Chief Wiggum", profileName];

nln_nineliners_and_notepad_currentResource = "";

//create activation/deactivation settings of each sheet
[
	"nln_adjust_fire_mission_enable",
	"CHECKBOX",
	"Disable adjust fire mission sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_cas_checkin_enable",
	"CHECKBOX",
	"Disable CAS check-in sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_cas_nineliner_enable",
	"CHECKBOX",
	"Disable CAS nineliner sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_fire_for_effect_enable",
	"CHECKBOX",
	"Disable fire for effect sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_gunship_cff_enable",
	"CHECKBOX",
	"Disable gunship call for fire sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_marking_mission_enable",
	"CHECKBOX",
	"Disable mission marking sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_medevac_nineliner_enable",
	"CHECKBOX",
	"Disable MedEvac nineliner sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_notepad_enable",
	"CHECKBOX",
	"Disable notepad",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

[
	"nln_target_location_methods_enable",
	"CHECKBOX",
	"Disable target location methods sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;

//should dialogs closed be converted to a background display?
[
	"nln_dialogToDisplay_enable",
	"CHECKBOX",
	"Enable background window after closing edit fields",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	true,
	1
] call CBA_Settings_fnc_init;
