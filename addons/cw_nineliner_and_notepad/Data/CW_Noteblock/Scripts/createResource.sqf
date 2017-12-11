call cw_noteblock_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "NOTEPAD";
	
While {cw_9liners_and_notepad_currentResource == "NOTEPAD"} do 
{
	cutRsc ["CW_NOTEBLOCK_RESOURCE","PLAIN"];
	_lastpage = call cw_noteblock_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_noteblock_fnc_GetPageText;
		
	disableSerialization;
	_cas_check_in_namespace = uiNamespace getVariable "cw_noteblock_resource";
	(_cas_check_in_namespace displayCtrl 1400) ctrlSetText _pagetext;
	sleep 0.1;
};