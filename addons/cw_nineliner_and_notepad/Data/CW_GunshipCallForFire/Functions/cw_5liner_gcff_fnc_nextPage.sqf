cw_5liner_gcff_fnc_nextPage =
{
_currentPage = cw_5liner_gcff_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint "No more 5-Liners left.";};

cw_5liner_gcff_currentPage = cw_5liner_gcff_currentPage + 1;
profileNamespace setVariable ["cw_5liner_gcff_lastPage", cw_5liner_gcff_currentPage];

_pagetext = [cw_5liner_gcff_currentPage] call cw_5liner_gcff_fnc_GetPageText;

[_pagetext] call cw_5liner_gcff_fnc_fill;

hint format ["PAGE %1/20", cw_5liner_gcff_currentPage];
};