
private _key = (profileNamespace getVariable ["nln_marking_mission_currentPage", -1]);

private _values = [
    [profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])],
    (ctrlText 1400),
    (ctrlText 1401),
    (ctrlText 1402),
    (ctrlText 1403),
    (ctrlText 1404),
    (ctrlText 1405),
    (ctrlText 1406),
    (ctrlText 1407),
    (if ((ctrlText 1201) == "") then { false; } else { true; }),
    (if ((ctrlText 1202) == "") then { false; } else { true; }),
    (if ((ctrlText 1203) == "") then { false; } else { true; }),
    (if ((ctrlText 1204) == "") then { false; } else { true; }),
    (if ((ctrlText 1205) == "") then { false; } else { true; }),
    (if ((ctrlText 1206) == "") then { false; } else { true; }),
    (if ((ctrlText 1207) == "") then { false; } else { true; }),
    (if ((ctrlText 1208) == "") then { false; } else { true; }),
    (if ((ctrlText 1209) == "") then { false; } else { true; }),
    (if ((ctrlText 1210) == "") then { false; } else { true; }),
    (if ((ctrlText 1211) == "") then { false; } else { true; }),
    (if ((ctrlText 1212) == "") then { false; } else { true; })
];

private _defaultValues = [
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false
];

if (_key <= -1) then
{
    if ([_values, _defaultValues] call nln_main_fnc_checkPageIsEmpty) exitWith { -1; };

    _key = (["marking_mission", _values] call nln_main_fnc_addPage);
    profileNamespace setVariable ["nln_marking_mission_currentPage", _key];
    private _pP = (["marking_mission", _key] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    ["marking_mission", _key, _values] call nln_main_fnc_setPage;
};
