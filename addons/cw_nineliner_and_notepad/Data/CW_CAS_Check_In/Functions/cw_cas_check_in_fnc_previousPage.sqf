cw_cas_check_in_fnc_previousPage =
{
_currentPage = cw_cas_check_in_currentPage;
_previousPage = _currentPage - 1;

If (_previousPage <= 0)exitWith {hint "No more previous CAS Check-In Breefings.";};

cw_cas_check_in_currentPage = cw_cas_check_in_currentPage - 1;
profileNamespace setVariable ["cw_cas_check_in_lastPage", cw_cas_check_in_currentPage];

_pagetext = [cw_cas_check_in_currentPage] call cw_cas_check_in_fnc_GetPageText;

[_pagetext] call cw_cas_check_in_fnc_fill;

hint format ["PAGE %1/20", cw_cas_check_in_currentPage];
};