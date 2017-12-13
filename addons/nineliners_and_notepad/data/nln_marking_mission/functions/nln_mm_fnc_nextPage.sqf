nln_mm_fnc_nextPage =
{
	_currentPage = nln_mm_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more sheets left.";};

	nln_mm_currentPage = nln_mm_currentPage + 1;
	profileNamespace setVariable ["nln_mm_lastPage", nln_mm_currentPage];

	_pagetext = [nln_mm_currentPage] call nln_mm_fnc_GetPageText;

	[_pagetext] call nln_mm_fnc_fill;

	hint format ["PAGE %1/20", nln_mm_currentPage];
};
