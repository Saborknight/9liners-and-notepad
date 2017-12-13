nln_fiveliner_gcff_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_gunship_call_for_fire";
	_lastpage = call nln_fiveliner_gcff_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_fiveliner_gcff_fnc_GetPageText;
	nln_fiveliner_gcff_currentPage = _lastpage;
	[_pagetext] call nln_fiveliner_gcff_fnc_fill;
	profileNamespace setVariable ["nln_fiveliner_gcff_lastPage", nln_fiveliner_gcff_currentPage];
	hint format ["PAGE %1/20", nln_fiveliner_gcff_currentPage];
};
