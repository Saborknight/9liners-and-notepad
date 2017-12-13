nln_ffe_fnc_open =
{
	if !(isNil {nln_nineliners_and_notepad_currentResource} OR nln_nineliners_and_notepad_currentResource == "") exitWith {hint "You have to close the current sheet first!";};
	closeDialog 0;
	createDialog "nln_fire_for_effect";
	_lastpage = call nln_ffe_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_ffe_fnc_GetPageText;
	nln_ffe_currentPage = _lastpage;
	[_pagetext] call nln_ffe_fnc_fill;
	profileNamespace setVariable ["nln_ffe_lastPage", nln_ffe_currentPage];
	hint format ["PAGE %1/20", nln_ffe_currentPage];
};
