call nln_nineliner_cas_fnc_savePage;
closeDialog 0;
nln_nineliners_and_notepad_currentResource = "cas_nineliner";

while {nln_nineliners_and_notepad_currentResource == "cas_nineliner"} do
{
	cutRsc ["nln_nineliner_cas_resource","plain"];
	_lastpage = call nln_nineliner_cas_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_nineliner_cas_fnc_GetPageText;

	disableSerialization;
	_cas_nineliner_namespace = uiNamespace getVariable "nln_cas_nineliner_resource";
	(_cas_nineliner_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_cas_nineliner_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_cas_nineliner_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_cas_nineliner_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	(_cas_nineliner_namespace displayCtrl 1404) ctrlSetText (_pagetext select 4);
	(_cas_nineliner_namespace displayCtrl 1405) ctrlSetText (_pagetext select 5);
	(_cas_nineliner_namespace displayCtrl 1406) ctrlSetText (_pagetext select 6);
	(_cas_nineliner_namespace displayCtrl 1407) ctrlSetText (_pagetext select 7);
	(_cas_nineliner_namespace displayCtrl 1408) ctrlSetText (_pagetext select 8);
	(_cas_nineliner_namespace displayCtrl 1409) ctrlSetText (_pagetext select 9);
	(_cas_nineliner_namespace displayCtrl 1410) ctrlSetText (_pagetext select 10);
	(_cas_nineliner_namespace displayCtrl 1411) ctrlSetText (_pagetext select 11);
	(_cas_nineliner_namespace displayCtrl 1412) ctrlSetText (_pagetext select 12);
	(_cas_nineliner_namespace displayCtrl 1413) ctrlSetText (_pagetext select 13);
	(_cas_nineliner_namespace displayCtrl 1414) ctrlSetText (_pagetext select 14);
	(_cas_nineliner_namespace displayCtrl 1415) ctrlSetText (_pagetext select 15);
	(_cas_nineliner_namespace displayCtrl 1416) ctrlSetText (_pagetext select 16);
	(_cas_nineliner_namespace displayCtrl 1417) ctrlSetText (_pagetext select 17);
	(_cas_nineliner_namespace displayCtrl 1418) ctrlSetText (_pagetext select 18);
	(_cas_nineliner_namespace displayCtrl 1419) ctrlSetText (_pagetext select 19);
	sleep 0.1;
};
