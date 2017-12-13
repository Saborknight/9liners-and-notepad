nln_mm_fnc_previousPage =
{
	_currentPage = nln_mm_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous Sheets.";};

	nln_mm_currentPage = nln_mm_currentPage - 1;
	profileNamespace setVariable ["nln_mm_lastPage", nln_mm_currentPage];

	_pagetext = [nln_mm_currentPage] call nln_mm_fnc_GetPageText;

	[_pagetext] call nln_mm_fnc_fill;

	hint format ["PAGE %1/20", nln_mm_currentPage];
};
