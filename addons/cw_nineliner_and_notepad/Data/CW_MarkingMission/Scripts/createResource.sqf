call cw_mm_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "MARKING_MISSION";
	
While {cw_9liners_and_notepad_currentResource == "MARKING_MISSION"} do 
{
	cutRsc ["CW_MARKING_MISSION_RESOURCE","PLAIN"];
	_lastpage = call cw_mm_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_mm_fnc_GetPageText;
		
	disableSerialization;
	_mm_namespace = uiNamespace getVariable "cw_mm_resource";
	
	(_mm_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_mm_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_mm_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_mm_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	(_mm_namespace displayCtrl 1404) ctrlSetText (_pagetext select 4);
	(_mm_namespace displayCtrl 1405) ctrlSetText (_pagetext select 5);
	(_mm_namespace displayCtrl 1406) ctrlSetText (_pagetext select 6);
	(_mm_namespace displayCtrl 1407) ctrlSetText (_pagetext select 7);
	
	
	(_mm_namespace displayCtrl 1201) ctrlSetText (_pagetext select 8);
	(_mm_namespace displayCtrl 1202) ctrlSetText (_pagetext select 9);
	(_mm_namespace displayCtrl 1203) ctrlSetText (_pagetext select 10);
	(_mm_namespace displayCtrl 1204) ctrlSetText (_pagetext select 11);
	(_mm_namespace displayCtrl 1205) ctrlSetText (_pagetext select 12);
	(_mm_namespace displayCtrl 1206) ctrlSetText (_pagetext select 13);
	(_mm_namespace displayCtrl 1207) ctrlSetText (_pagetext select 14);
	(_mm_namespace displayCtrl 1208) ctrlSetText (_pagetext select 15);
	(_mm_namespace displayCtrl 1209) ctrlSetText (_pagetext select 16);
	(_mm_namespace displayCtrl 1210) ctrlSetText (_pagetext select 17);
	(_mm_namespace displayCtrl 1211) ctrlSetText (_pagetext select 18);
	(_mm_namespace displayCtrl 1212) ctrlSetText (_pagetext select 19);
	
	sleep 0.1;
};