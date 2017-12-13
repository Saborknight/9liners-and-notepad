cw_cas_check_in_fnc_nextPage =
{
_currentPage = cw_cas_check_in_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint (["STR_cw_nineliner_and_notepad_Scripts_PageSpaceFull"] call BIS_fnc_localize);};

cw_cas_check_in_currentPage = cw_cas_check_in_currentPage + 1;
profileNamespace setVariable ["cw_cas_check_in_lastPage", cw_cas_check_in_currentPage];

_pagetext = [cw_cas_check_in_currentPage] call cw_cas_check_in_fnc_GetPageText;

[_pagetext] call cw_cas_check_in_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep"] call BIS_fnc_localize), cw_cas_check_in_currentPage];
};