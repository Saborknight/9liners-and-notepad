nln_nineliner_medv_fnc_previousPage =
{
	_currentPage = nln_nineliner_medv_currentPage;
	_previousPage = _currentPage - 1;

	if (_previousPage <= 0) exitWith {hint "No more previous 9-Liners.";};

	nln_nineliner_medv_currentPage = nln_nineliner_medv_currentPage - 1;
	profileNamespace setVariable ["nln_nineliner_medv_lastPage", nln_nineliner_medv_currentPage];

	_pagetext = [nln_nineliner_medv_currentPage] call nln_nineliner_medv_fnc_GetPageText;

	[_pagetext] call nln_nineliner_medv_fnc_fill;

	hint format ["PAGE %1/20", nln_nineliner_medv_currentPage];
};
