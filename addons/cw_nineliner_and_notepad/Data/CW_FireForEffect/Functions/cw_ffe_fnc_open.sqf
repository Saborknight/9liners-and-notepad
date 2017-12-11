cw_ffe_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_FIRE_FOR_EFFECT";
	_lastpage = call cw_ffe_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_ffe_fnc_GetPageText;
	cw_ffe_currentPage = _lastpage;
	[_pagetext] call cw_ffe_fnc_fill;
	profileNamespace setVariable ["cw_ffe_lastPage", cw_ffe_currentPage];
	hint format ["PAGE %1/20", cw_ffe_currentPage];
};