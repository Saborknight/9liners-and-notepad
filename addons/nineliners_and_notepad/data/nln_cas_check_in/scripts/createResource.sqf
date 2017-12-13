call nln_cas_check_in_fnc_savePage;
closeDialog 0;
nln_nineliners_and_notepad_currentResource = "cas_check_in";

while {nln_nineliners_and_notepad_currentResource == "cas_check_in"} do
{
	cutRsc ["nln_cas_check_in_resource","plain"];
	_lastpage = call nln_cas_check_in_fnc_GetLastPage;
	_pagetext = [_lastpage] call nln_cas_check_in_fnc_GetPageText;

	disableSerialization;
	_cas_check_in_namespace = uiNamespace getVariable "nln_cas_check_in_resource";
	(_cas_check_in_namespace displayCtrl 1400) ctrlSetText (_pagetext select 0);
	(_cas_check_in_namespace displayCtrl 1401) ctrlSetText (_pagetext select 1);
	(_cas_check_in_namespace displayCtrl 1402) ctrlSetText (_pagetext select 2);
	(_cas_check_in_namespace displayCtrl 1403) ctrlSetText (_pagetext select 3);
	(_cas_check_in_namespace displayCtrl 1404) ctrlSetText (_pagetext select 4);
	(_cas_check_in_namespace displayCtrl 1405) ctrlSetText (_pagetext select 5);
	(_cas_check_in_namespace displayCtrl 1406) ctrlSetText (_pagetext select 6);
	(_cas_check_in_namespace displayCtrl 1407) ctrlSetText (_pagetext select 7);
	(_cas_check_in_namespace displayCtrl 1408) ctrlSetText (_pagetext select 8);
	sleep 0.1;
};
