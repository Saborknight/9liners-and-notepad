cw_9liner_cas_fnc_nextPage =
{
_currentPage = cw_9liner_cas_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint (["STR_cw_nineliner_and_notepad_Scripts_PageSpaceFull"] call BIS_fnc_localize);};

cw_9liner_cas_currentPage = cw_9liner_cas_currentPage + 1;
profileNamespace setVariable ["cw_9liner_cas_lastPage", cw_9liner_cas_currentPage];

_pagetext = [cw_9liner_cas_currentPage] call cw_9liner_cas_fnc_GetPageText;

[_pagetext] call cw_9liner_cas_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_9LinerNextPage"] call BIS_fnc_localize), cw_9liner_cas_currentPage];
};