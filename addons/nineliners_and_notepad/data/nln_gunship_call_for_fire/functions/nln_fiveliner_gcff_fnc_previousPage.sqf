nln_fiveliner_gcff_fnc_previousPage =
{
	_currentPage = nln_fiveliner_gcff_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous 5-Liners.";};

	nln_fiveliner_gcff_currentPage = nln_fiveliner_gcff_currentPage - 1;
	profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nln_fiveliner_gcff_currentPage];

	_pagetext = [nln_fiveliner_gcff_currentPage] call nln_fiveliner_gcff_fnc_GetPageText;

	[_pagetext] call nln_fiveliner_gcff_fnc_fill;

	hint format ["PAGE %1/20", nln_fiveliner_gcff_currentPage];
};
