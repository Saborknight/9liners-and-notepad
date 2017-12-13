nln_afm_fnc_previousPage =
{
	_currentPage = nln_afm_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous sheets.";};

	nln_afm_currentPage = nln_afm_currentPage - 1;
	profileNamespace setVariable ["nln_afm_lastPage", nln_afm_currentPage];

	_pagetext = [nln_afm_currentPage] call nln_afm_fnc_GetPageText;

	[_pagetext] call nln_afm_fnc_fill;

	hint format ["PAGE %1/20", nln_afm_currentPage];
};
