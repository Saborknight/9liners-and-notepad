cw_noteblock_fnc_open = 
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_NOTEBLOCK";
	_lastpage = call cw_noteblock_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_noteblock_fnc_GetPageText;
	cw_noteblock_currentPage = _lastpage;
	ctrlSetText [1400, _pagetext];
	ctrlSetText [1000, cw_noteblock_currentPage];
	profileNamespace setVariable ["cw_noteblock_lastPage", cw_noteblock_currentPage];
	hint format ["PAGE %1/50", cw_noteblock_currentPage];
};