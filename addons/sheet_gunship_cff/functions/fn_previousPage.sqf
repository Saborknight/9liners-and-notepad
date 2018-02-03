
private _lP = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);

private _p = -1;
if (_lP <= -1) then
{
    _p = (["gunship_cff"] call nln_main_fnc_getLastPage);
}
else
{
    _p = (["gunship_cff", _lP] call nln_main_fnc_getPreviousPage);
};

if (_p > -1) then
{
    call nln_gunship_cff_fnc_savePage;
    [_p] call nln_gunship_cff_fnc_updateMenu;
    profileNamespace setVariable ["nln_gunship_cff_currentPage", _p];

    private _pP = (["gunship_cff", _p] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    hint ("STR_nln_main_interactions_noPrevPagesHint" call BIS_fnc_localize);
};
