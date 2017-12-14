nln_nineliner_cas_fnc_previousPage =
{
	_currentPage = nln_nineliner_cas_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous 9-Liners.";};

	nln_nineliner_cas_currentPage = nln_nineliner_cas_currentPage - 1;
	profileNamespace setVariable ["nln_nineliner_cas_lastPage", nln_nineliner_cas_currentPage];

	_pagetext = [nln_nineliner_cas_currentPage] call nln_nineliner_cas_fnc_GetPageText;

	[_pagetext] call nln_nineliner_cas_fnc_fill;

	hint format ["PAGE %1/20", nln_nineliner_cas_currentPage];
};
