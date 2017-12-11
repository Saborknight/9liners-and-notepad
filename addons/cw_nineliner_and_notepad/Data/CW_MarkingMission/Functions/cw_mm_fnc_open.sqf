cw_mm_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_MARKING_MISSION";
	_lastpage = call cw_mm_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_mm_fnc_GetPageText;
	cw_mm_currentPage = _lastpage;
	[_pagetext] call cw_mm_fnc_fill;
	profileNamespace setVariable ["cw_mm_lastPage", cw_mm_currentPage];
	hint format ["PAGE %1/20", cw_mm_currentPage];
};