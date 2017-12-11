call cw_9liner_cas_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "CAS_9LINER";
	
While {cw_9liners_and_notepad_currentResource == "CAS_9LINER"} do 
{
	cutRsc ["CW_9LINER_CAS_RESOURCE","PLAIN"];
	_lastpage = call cw_9liner_cas_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_9liner_cas_fnc_GetPageText;
		
	disableSerialization;
	_cas_9liner_namespace = uiNamespace getVariable "cw_cas_9liner_resource";
	(_cas_9liner_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_cas_9liner_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_cas_9liner_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_cas_9liner_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	(_cas_9liner_namespace displayCtrl 1404) ctrlSetText (_pagetext select 4);
	(_cas_9liner_namespace displayCtrl 1405) ctrlSetText (_pagetext select 5);
	(_cas_9liner_namespace displayCtrl 1406) ctrlSetText (_pagetext select 6);
	(_cas_9liner_namespace displayCtrl 1407) ctrlSetText (_pagetext select 7);
	(_cas_9liner_namespace displayCtrl 1408) ctrlSetText (_pagetext select 8);
	(_cas_9liner_namespace displayCtrl 1409) ctrlSetText (_pagetext select 9);
	(_cas_9liner_namespace displayCtrl 1410) ctrlSetText (_pagetext select 10);
	(_cas_9liner_namespace displayCtrl 1411) ctrlSetText (_pagetext select 11);
	(_cas_9liner_namespace displayCtrl 1412) ctrlSetText (_pagetext select 12);
	(_cas_9liner_namespace displayCtrl 1413) ctrlSetText (_pagetext select 13);
	(_cas_9liner_namespace displayCtrl 1414) ctrlSetText (_pagetext select 14);
	(_cas_9liner_namespace displayCtrl 1415) ctrlSetText (_pagetext select 15);
	(_cas_9liner_namespace displayCtrl 1416) ctrlSetText (_pagetext select 16);
	(_cas_9liner_namespace displayCtrl 1417) ctrlSetText (_pagetext select 17);
	(_cas_9liner_namespace displayCtrl 1418) ctrlSetText (_pagetext select 18);
	(_cas_9liner_namespace displayCtrl 1419) ctrlSetText (_pagetext select 19);
	sleep 0.1;
};