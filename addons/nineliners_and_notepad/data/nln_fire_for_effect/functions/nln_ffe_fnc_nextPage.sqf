nln_ffe_fnc_nextPage =
{
	_currentPage = nln_ffe_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more sheets left.";};

	nln_ffe_currentPage = nln_ffe_currentPage + 1;
	profileNamespace setVariable ["nln_ffe_lastPage", nln_ffe_currentPage];

	_pagetext = [nln_ffe_currentPage] call nln_ffe_fnc_GetPageText;

	[_pagetext] call nln_ffe_fnc_fill;

	hint format ["PAGE %1/20", nln_ffe_currentPage];
};
