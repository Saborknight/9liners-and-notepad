
private _p = (profileNamespace getVariable ["nln_marking_mission_currentPage", -1]);
if (["marking_mission", _p] call nln_main_fnc_removePage) then
{
	hint ("STR_nln_Interactions_clearPageHint" call BIS_fnc_localize);
	profileNamespace setVariable ["nln_marking_mission_currentPage", (["marking_mission", _p] call nln_main_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_marking_mission_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
