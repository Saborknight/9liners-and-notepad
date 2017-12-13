cw_mm_fnc_nextPage =
{
_currentPage = cw_mm_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint (["STR_cw_nineliner_and_notepad_Scripts_PageSpaceFull"] call BIS_fnc_localize);};

cw_mm_currentPage = cw_mm_currentPage + 1;
profileNamespace setVariable ["cw_mm_lastPage", cw_mm_currentPage];

_pagetext = [cw_mm_currentPage] call cw_mm_fnc_GetPageText;

[_pagetext] call cw_mm_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep"] call BIS_fnc_localize), cw_mm_currentPage];
};