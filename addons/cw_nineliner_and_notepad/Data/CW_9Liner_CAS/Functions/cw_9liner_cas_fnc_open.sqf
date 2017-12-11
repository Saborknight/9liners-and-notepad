cw_9liner_cas_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_9LINER_CAS";
	_lastpage = call cw_9liner_cas_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_9liner_cas_fnc_GetPageText;
	cw_9liner_cas_currentPage = _lastpage;
	[_pagetext] call cw_9liner_cas_fnc_fill;
	profileNamespace setVariable ["cw_9liner_cas_lastPage", cw_9liner_cas_currentPage];
	hint format ["PAGE %1/20", cw_9liner_cas_currentPage];
};