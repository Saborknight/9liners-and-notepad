cw_ffe_fnc_nextPage =
{
_currentPage = cw_ffe_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint (["STR_cw_nineliner_and_notepad_Scripts_PageSpaceFull"] call BIS_fnc_localize);};

cw_ffe_currentPage = cw_ffe_currentPage + 1;
profileNamespace setVariable ["cw_ffe_lastPage", cw_ffe_currentPage];

_pagetext = [cw_ffe_currentPage] call cw_ffe_fnc_GetPageText;

[_pagetext] call cw_ffe_fnc_fill;

hint format [([""] call BIS_fnc_localize)"PAGE %1/20", cw_ffe_currentPage];
};