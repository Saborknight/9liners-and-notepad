
private _lP = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);

private _p = -1;
if (_lP <= -1) then
{
    _p = (["cas_checkin"] call nln_main_fnc_getLastPage);
}
else
{
    _p = (["cas_checkin", _lP] call nln_main_fnc_getPreviousPage);
};

if (_p > -1) then
{
    call nln_cas_checkin_fnc_savePage;
    [_p] call nln_cas_checkin_fnc_updateMenu;
    profileNamespace setVariable ["nln_cas_checkin_currentPage", _p];

    private _pP = (["cas_checkin", _p] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    hint ("STR_nln_main_interactions_noPrevPagesHint" call BIS_fnc_localize);
};
