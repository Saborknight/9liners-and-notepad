call cw_afm_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "ADJUST_FIRE_MISSION";
	
While {cw_9liners_and_notepad_currentResource == "ADJUST_FIRE_MISSION"} do 
{
	cutRsc ["CW_ADJUST_FIRE_MISSION_RESOURCE","PLAIN"];
	_lastpage = call cw_afm_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_afm_fnc_GetPageText;
		
	disableSerialization;
	_afm_namespace = uiNamespace getVariable "cw_afm_resource";
	
	(_afm_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_afm_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_afm_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_afm_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	
	(_afm_namespace displayCtrl 1404) ctrlSetText (_pagetext select 12);
	(_afm_namespace displayCtrl 1405) ctrlSetText (_pagetext select 13);
	(_afm_namespace displayCtrl 1406) ctrlSetText (_pagetext select 14);
	(_afm_namespace displayCtrl 1407) ctrlSetText (_pagetext select 15);
	(_afm_namespace displayCtrl 1408) ctrlSetText (_pagetext select 16);
	
	(_afm_namespace displayCtrl 1409) ctrlSetText (_pagetext select 17);
	(_afm_namespace displayCtrl 1410) ctrlSetText (_pagetext select 18);
	(_afm_namespace displayCtrl 1411) ctrlSetText (_pagetext select 19);
	(_afm_namespace displayCtrl 1412) ctrlSetText (_pagetext select 20);
	
	(_afm_namespace displayCtrl 1201) ctrlSetText (_pagetext select 4);
	(_afm_namespace displayCtrl 1202) ctrlSetText (_pagetext select 5);
	(_afm_namespace displayCtrl 1203) ctrlSetText (_pagetext select 6);
	(_afm_namespace displayCtrl 1204) ctrlSetText (_pagetext select 7);
	
	(_afm_namespace displayCtrl 1205) ctrlSetText (_pagetext select 8);
	(_afm_namespace displayCtrl 1206) ctrlSetText (_pagetext select 9);
	(_afm_namespace displayCtrl 1207) ctrlSetText (_pagetext select 10);
	(_afm_namespace displayCtrl 1208) ctrlSetText (_pagetext select 11);
	
	sleep 0.1;
};