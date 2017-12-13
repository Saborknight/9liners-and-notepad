nln_cas_check_in_fnc_previousPage =
{
	_currentPage = nln_cas_check_in_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous CAS Check-In Briefings.";};

	nln_cas_check_in_currentPage = nln_cas_check_in_currentPage - 1;
	profileNamespace setVariable ["nln_cas_check_in_lastPage", nln_cas_check_in_currentPage];

	_pagetext = [nln_cas_check_in_currentPage] call nln_cas_check_in_fnc_GetPageText;

	[_pagetext] call nln_cas_check_in_fnc_fill;

	hint format ["PAGE %1/20", nln_cas_check_in_currentPage];
};
