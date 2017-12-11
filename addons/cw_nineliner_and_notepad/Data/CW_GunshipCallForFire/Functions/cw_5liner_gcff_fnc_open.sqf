cw_5liner_gcff_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_GUNSHIP_CALL_FOR_FIRE";
	_lastpage = call cw_5liner_gcff_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_5liner_gcff_fnc_GetPageText;
	cw_5liner_gcff_currentPage = _lastpage;
	[_pagetext] call cw_5liner_gcff_fnc_fill;
	profileNamespace setVariable ["cw_5liner_gcff_lastPage", cw_5liner_gcff_currentPage];
	hint format ["PAGE %1/20", cw_5liner_gcff_currentPage];
};