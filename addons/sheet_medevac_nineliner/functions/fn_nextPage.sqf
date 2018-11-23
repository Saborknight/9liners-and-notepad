
private _lP = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);
private _nP = (["medevac_nineliner", _lP] call nln_main_fnc_getNextPage);

if (_nP <= -1) then
{
    private _pP = (["medevac_nineliner", _lP] call nln_main_fnc_getPagePosition);

    if ((count _pP) > 0) then
    {
        hint ("STR_nln_main_interactions_newPageHint" call BIS_fnc_localize);
    };
}
else
{
    private _pP = (["medevac_nineliner", _nP] call nln_main_fnc_getPagePosition);
    hint (format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)]);
};

call nln_medevac_nineliner_fnc_savePage;
[_nP] call nln_medevac_nineliner_fnc_updateMenu;
profileNamespace setVariable ["nln_medevac_nineliner_currentPage", _nP];
