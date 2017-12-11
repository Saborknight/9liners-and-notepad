call cw_ffe_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "FIRE_FOR_EFFECT";
	
While {cw_9liners_and_notepad_currentResource == "FIRE_FOR_EFFECT"} do 
{
	cutRsc ["CW_FIRE_FOR_EFFECT_RESOURCE","PLAIN"];
	_lastpage = call cw_ffe_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_ffe_fnc_GetPageText;
		
	disableSerialization;
	_ffe_namespace = uiNamespace getVariable "cw_ffe_resource";
	
	(_ffe_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_ffe_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_ffe_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_ffe_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	
	(_ffe_namespace displayCtrl 1404) ctrlSetText (_pagetext select 12);
	(_ffe_namespace displayCtrl 1405) ctrlSetText (_pagetext select 13);
	(_ffe_namespace displayCtrl 1406) ctrlSetText (_pagetext select 14);
	(_ffe_namespace displayCtrl 1407) ctrlSetText (_pagetext select 15);
	(_ffe_namespace displayCtrl 1408) ctrlSetText (_pagetext select 16);
	
	(_ffe_namespace displayCtrl 1409) ctrlSetText (_pagetext select 17);
	(_ffe_namespace displayCtrl 1410) ctrlSetText (_pagetext select 18);
	(_ffe_namespace displayCtrl 1411) ctrlSetText (_pagetext select 19);
	(_ffe_namespace displayCtrl 1412) ctrlSetText (_pagetext select 20);
	
	(_ffe_namespace displayCtrl 1201) ctrlSetText (_pagetext select 4);
	(_ffe_namespace displayCtrl 1202) ctrlSetText (_pagetext select 5);
	(_ffe_namespace displayCtrl 1203) ctrlSetText (_pagetext select 6);
	(_ffe_namespace displayCtrl 1204) ctrlSetText (_pagetext select 7);
	
	(_ffe_namespace displayCtrl 1205) ctrlSetText (_pagetext select 8);
	(_ffe_namespace displayCtrl 1206) ctrlSetText (_pagetext select 9);
	(_ffe_namespace displayCtrl 1207) ctrlSetText (_pagetext select 10);
	(_ffe_namespace displayCtrl 1208) ctrlSetText (_pagetext select 11);
	
	sleep 0.1;
};