cw_mm_fnc_nextPage =
{
_currentPage = cw_mm_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint "No more sheets left.";};

cw_mm_currentPage = cw_mm_currentPage + 1;
profileNamespace setVariable ["cw_mm_lastPage", cw_mm_currentPage];

_pagetext = [cw_mm_currentPage] call cw_mm_fnc_GetPageText;

[_pagetext] call cw_mm_fnc_fill;

hint format ["PAGE %1/20", cw_mm_currentPage];
};