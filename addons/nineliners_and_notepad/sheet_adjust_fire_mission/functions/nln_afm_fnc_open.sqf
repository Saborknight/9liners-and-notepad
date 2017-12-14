nln_afm_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_adjust_fire_mission";
	_lastpage = call nln_afm_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_afm_fnc_GetPageText;
	nln_afm_currentPage = _lastpage;
	[_pagetext] call nln_afm_fnc_fill;
	profileNamespace setVariable ["nln_afm_lastPage", nln_afm_currentPage];
	hint format ["PAGE %1/20", nln_afm_currentPage];
};
