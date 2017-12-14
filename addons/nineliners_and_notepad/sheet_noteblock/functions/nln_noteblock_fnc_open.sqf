nln_noteblock_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_noteblock";
	_lastpage = call nln_noteblock_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_noteblock_fnc_GetPageText;
	nln_noteblock_currentPage = _lastpage;
	ctrlSetText [1400, _pagetext];
	ctrlSetText [1000, nln_noteblock_currentPage];
	profileNamespace setVariable ["nln_noteblock_lastPage", nln_noteblock_currentPage];
	hint format ["PAGE %1/50", nln_noteblock_currentPage];
};
