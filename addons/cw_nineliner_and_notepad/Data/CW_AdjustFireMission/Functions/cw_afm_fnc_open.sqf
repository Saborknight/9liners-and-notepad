cw_afm_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_ADJUST_FIRE_MISSION";
	_lastpage = call cw_afm_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_afm_fnc_GetPageText;
	cw_afm_currentPage = _lastpage;
	[_pagetext] call cw_afm_fnc_fill;
	profileNamespace setVariable ["cw_afm_lastPage", cw_afm_currentPage];
	hint format ["PAGE %1/20", cw_afm_currentPage];
};