cw_cas_check_in_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint "You have to close the current sheed first!";};
	closeDialog 0;
	createDialog "CW_CAS_CHECK_IN";
	_lastpage = call cw_cas_check_in_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_cas_check_in_fnc_GetPageText;
	cw_cas_check_in_currentPage = _lastpage;
	[_pagetext] call cw_cas_check_in_fnc_fill;
	profileNamespace setVariable ["cw_cas_check_in_lastPage", cw_cas_check_in_currentPage];
	hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep"] call BIS_fnc_localize), cw_cas_check_in_currentPage];
};