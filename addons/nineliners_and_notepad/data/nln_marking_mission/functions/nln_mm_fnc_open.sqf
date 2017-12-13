nln_mm_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_marking_mission";
	_lastpage = call nln_mm_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_mm_fnc_GetPageText;
	nln_mm_currentPage = _lastpage;
	[_pagetext] call nln_mm_fnc_fill;
	profileNamespace setVariable ["nln_mm_lastPage", nln_mm_currentPage];
	hint format ["PAGE %1/20", nln_mm_currentPage];
};
