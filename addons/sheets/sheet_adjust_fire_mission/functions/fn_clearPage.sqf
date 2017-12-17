
private _p = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);
if (["adjust_fire_mission", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", (["adjust_fire_mission", _p] call nln_fnc_getPreviousPage)];
};

call nln_adjust_fire_mission_fnc_updateMenu;
