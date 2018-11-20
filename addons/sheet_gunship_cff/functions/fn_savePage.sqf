
private _key = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);

private _values = [
    [profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])],
    (ctrlText 1400),
    (ctrlText 1401),
    (ctrlText 1402),
    (ctrlText 1403),
    (ctrlText 1404),
    (ctrlText 1405),
    (ctrlText 1406)
];

private _defaultValues = [
    "",
    "",
    "",
    "",
    "",
    "",
    ""
];

if (_key <= -1) then
{
    if ([_values, _defaultValues] call nln_main_fnc_checkPageIsEmpty) exitWith { -1; };

    _key = (["gunship_cff", _values] call nln_main_fnc_addPage);
    profileNamespace setVariable ["nln_gunship_cff_currentPage", _key];
    private _pP = (["gunship_cff", _key] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    ["gunship_cff", _key, _values] call nln_main_fnc_setPage;
};
