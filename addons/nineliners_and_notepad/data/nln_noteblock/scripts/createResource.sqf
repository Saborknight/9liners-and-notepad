call nln_noteblock_fnc_savePage;
closeDialog 0;
nln_nineliners_and_notepad_currentResource = "notepad";

while {nln_nineliners_and_notepad_currentResource == "notepad"} do
{
	cutRsc ["nln_noteblock_resource","plain"];
	_lastpage = call nln_noteblock_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_noteblock_fnc_GetPageText;

	disableSerialization;
	_cas_check_in_namespace = uiNamespace getVariable "nln_noteblock_resource";
	(_cas_check_in_namespace displayCtrl 1400) ctrlSetText _pagetext;
	sleep 0.1;
};
