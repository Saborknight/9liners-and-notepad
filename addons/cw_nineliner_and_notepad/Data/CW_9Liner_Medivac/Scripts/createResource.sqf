call cw_9liner_medv_fnc_savePage;
closeDialog 0;
cw_9liners_and_notepad_currentResource = "MEDIVAC_9LINER";
	
While {cw_9liners_and_notepad_currentResource == "MEDIVAC_9LINER"} do 
{
	cutRsc ["CW_9LINER_MEDEVAC_RESOURCE","PLAIN"];
	
	_lastpage = call cw_9liner_medv_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_9liner_medv_fnc_GetPageText;
		
	disableSerialization;
	_medv_9liner_namespace = uiNamespace getVariable "cw_9liner_medv_resource";
	
	(_medv_9liner_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_medv_9liner_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1); //LINE2
	(_medv_9liner_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2); //LINE3
	(_medv_9liner_namespace displayCtrl 2800) ctrlSetText (_pagetext select 3 ); //LINE3 CROSS1
	(_medv_9liner_namespace displayCtrl 2801) ctrlSetText (_pagetext select 4 ); //LINE3 CROSS2
	(_medv_9liner_namespace displayCtrl 2802) ctrlSetText (_pagetext select 5 ); //LINE3 CROSS3
	(_medv_9liner_namespace displayCtrl 2803) ctrlSetText (_pagetext select 6 ); //LINE3 CROSS4
	(_medv_9liner_namespace displayCtrl 2804) ctrlSetText (_pagetext select 7 ); //LINE3 CROSS5
	(_medv_9liner_namespace displayCtrl 1403) ctrlSetText (_pagetext select 8); //LINE4
	(_medv_9liner_namespace displayCtrl 2805) ctrlSetText (_pagetext select 9 );  //LINE4 CROSS1
	(_medv_9liner_namespace displayCtrl 2806) ctrlSetText (_pagetext select 10 ); //LINE4 CROSS2
	(_medv_9liner_namespace displayCtrl 2807) ctrlSetText (_pagetext select 11 ); //LINE4 CROSS3
	(_medv_9liner_namespace displayCtrl 2808) ctrlSetText (_pagetext select 12 ); //LINE4 CROSS4
	(_medv_9liner_namespace displayCtrl 1404) ctrlSetText (_pagetext select 13); //LINE5
	(_medv_9liner_namespace displayCtrl 2809) ctrlSetText (_pagetext select 14 ); //LINE5 CROSS1
	(_medv_9liner_namespace displayCtrl 2810) ctrlSetText (_pagetext select 15 ); //LINE5 CROSS2
	(_medv_9liner_namespace displayCtrl 1405) ctrlSetText (_pagetext select 16); //LINE6
	(_medv_9liner_namespace displayCtrl 2811) ctrlSetText (_pagetext select 17 ); //LINE6 CROSS1
	(_medv_9liner_namespace displayCtrl 2812) ctrlSetText (_pagetext select 18 ); //LINE6 CROSS2
	(_medv_9liner_namespace displayCtrl 2813) ctrlSetText (_pagetext select 19 ); //LINE6 CROSS3
	(_medv_9liner_namespace displayCtrl 2814) ctrlSetText (_pagetext select 20 ); //LINE6 CROSS4
	(_medv_9liner_namespace displayCtrl 1406) ctrlSetText (_pagetext select 21); //LINE7
	(_medv_9liner_namespace displayCtrl 2815) ctrlSetText (_pagetext select 22 ); //LINE7 CROSS1
	(_medv_9liner_namespace displayCtrl 2816) ctrlSetText (_pagetext select 23 ); //LINE7 CROSS2
	(_medv_9liner_namespace displayCtrl 2817) ctrlSetText ( _pagetext select 24 ); //LINE7 CROSS3
	(_medv_9liner_namespace displayCtrl 2818) ctrlSetText (_pagetext select 25 ); //LINE7 CROSS4
	(_medv_9liner_namespace displayCtrl 2819) ctrlSetText (_pagetext select 26 ); //LINE7 CROSS5
	(_medv_9liner_namespace displayCtrl 1407) ctrlSetText (_pagetext select 27); //LINE8
	(_medv_9liner_namespace displayCtrl 2820) ctrlSetText (_pagetext select 28 ); //LINE8 CROSS1
	(_medv_9liner_namespace displayCtrl 2821) ctrlSetText (_pagetext select 29 ); //LINE8 CROSS2
	(_medv_9liner_namespace displayCtrl 2822) ctrlSetText (_pagetext select 30 ); //LINE8 CROSS3
	(_medv_9liner_namespace displayCtrl 2823) ctrlSetText (_pagetext select 31 ); //LINE8 CROSS4
	(_medv_9liner_namespace displayCtrl 2824) ctrlSetText (_pagetext select 32 ); //LINE8 CROSS5
	(_medv_9liner_namespace displayCtrl 1408) ctrlSetText (_pagetext select 33); //LINE9
	(_medv_9liner_namespace displayCtrl 2825) ctrlSetText (_pagetext select 34 ); //LINE9 CROSS1
	(_medv_9liner_namespace displayCtrl 2826) ctrlSetText (_pagetext select 35 ); //LINE9 CROSS2
	(_medv_9liner_namespace displayCtrl 2827) ctrlSetText (_pagetext select 36 ); //LINE9 CROSS3
	sleep 1;
};