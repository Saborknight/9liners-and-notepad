nln_cas_check_in_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_cas_check_in";
	_lastpage = call nln_cas_check_in_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_cas_check_in_fnc_GetPageText;
	nln_cas_check_in_currentPage = _lastpage;
	[_pagetext] call nln_cas_check_in_fnc_fill;
	profileNamespace setVariable ["nln_cas_check_in_lastPage", nln_cas_check_in_currentPage];
	hint format ["PAGE %1/20", nln_cas_check_in_currentPage];
};
