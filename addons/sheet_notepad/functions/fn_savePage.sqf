
private _key = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);

private _values = [
    [profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])],
    "", //TODO: add headerline field
    (ctrlText 1400)
];

private _defaultValues = [
    "", // TODO: add headerline field default
    ""
];

if (_key <= -1) then
{
    if ([_values, _defaultValues] call nln_main_fnc_checkPageIsEmpty) exitWith { -1; };

    _key = (["notepad", _values] call nln_main_fnc_addPage);
    profileNamespace setVariable ["nln_notepad_currentPage", _key];
    private _pP = (["notepad", _key] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    ["notepad", _key, _values] call nln_main_fnc_setPage;
};
