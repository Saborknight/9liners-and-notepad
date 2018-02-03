
#include "\a3\editor_f\data\scripts\dikCodes.h"

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

//[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_disable_controls_key", "STR_nln_main_settings_keybindDisableControls" call BIS_fnc_localize, {[] spawn {execVM "nln_nineliner_and_notepad\data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;

//should dialogs closed be converted to a background display?
[
    "nln_dialogToDisplay_enable",
    "CHECKBOX",
    ("STR_nln_main_settings_dialogToDisplayEnable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    true,
    1
] call CBA_Settings_fnc_init;


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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + _v)
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + [
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
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + [
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
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + _v)
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + [
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
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + _v)
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + _v)
            ] call nln_main_fnc_addPage);

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
                ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])]] + ["", _v])
            ] call nln_main_fnc_addPage);

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

    private _uid = (["notepad"] call nln_main_fnc_getLastPage + 1);
    [
        "notepad",
        _uid,
        ([[profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])], "", ("STR_nln_main_general_authorAnnouncement" call BIS_fnc_localize)])
    ] call nln_main_fnc_setPage;
    profileNamespace setVariable ["nln_notepad_currentPage", _uid];
};
