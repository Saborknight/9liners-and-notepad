nln_fiveliner_gcff_fnc_nextPage =
{
	_currentPage = nln_fiveliner_gcff_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more 5-Liners left.";};

	nln_fiveliner_gcff_currentPage = nln_fiveliner_gcff_currentPage + 1;
	profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nln_fiveliner_gcff_currentPage];

	_pagetext = [nln_fiveliner_gcff_currentPage] call nln_fiveliner_gcff_fnc_GetPageText;

	[_pagetext] call nln_fiveliner_gcff_fnc_fill;

	hint format ["PAGE %1/20", nln_fiveliner_gcff_currentPage];
};
