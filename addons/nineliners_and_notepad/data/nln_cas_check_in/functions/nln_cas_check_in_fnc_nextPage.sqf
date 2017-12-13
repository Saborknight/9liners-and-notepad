nln_cas_check_in_fnc_nextPage =
{
	_currentPage = nln_cas_check_in_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more CAS Check-In Briefings left.";};

	nln_cas_check_in_currentPage = nln_cas_check_in_currentPage + 1;
	profileNamespace setVariable ["nln_cas_check_in_lastPage", nln_cas_check_in_currentPage];

	_pagetext = [nln_cas_check_in_currentPage] call nln_cas_check_in_fnc_GetPageText;

	[_pagetext] call nln_cas_check_in_fnc_fill;

	hint format ["PAGE %1/20", nln_cas_check_in_currentPage];
};
