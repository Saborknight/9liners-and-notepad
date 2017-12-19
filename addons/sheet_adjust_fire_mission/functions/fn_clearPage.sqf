
private _p = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);
if (["adjust_fire_mission", _p] call nln_main_fnc_removePage) then
{
	hint ("STR_nln_Interactions_clearPageHint" call BIS_fnc_localize);
	profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", (["adjust_fire_mission", _p] call nln_main_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
