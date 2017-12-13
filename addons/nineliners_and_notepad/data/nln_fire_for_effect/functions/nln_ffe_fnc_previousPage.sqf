nln_ffe_fnc_previousPage =
{
	_currentPage = nln_ffe_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous Sheets.";};

	nln_ffe_currentPage = nln_ffe_currentPage - 1;
	profileNamespace setVariable ["nln_ffe_lastPage", nln_ffe_currentPage];

	_pagetext = [nln_ffe_currentPage] call nln_ffe_fnc_GetPageText;

	[_pagetext] call nln_ffe_fnc_fill;

	hint format ["PAGE %1/20", nln_ffe_currentPage];
};
