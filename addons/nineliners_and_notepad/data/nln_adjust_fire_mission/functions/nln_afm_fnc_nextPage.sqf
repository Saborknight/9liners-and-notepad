nln_afm_fnc_nextPage =
{
	_currentPage = nln_afm_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more sheets left.";};

	nln_afm_currentPage = nln_afm_currentPage + 1;
	profileNamespace setVariable ["nln_afm_lastPage", nln_afm_currentPage];

	_pagetext = [nln_afm_currentPage] call nln_afm_fnc_GetPageText;

	[_pagetext] call nln_afm_fnc_fill;

	hint format ["PAGE %1/20", nln_afm_currentPage];
};
