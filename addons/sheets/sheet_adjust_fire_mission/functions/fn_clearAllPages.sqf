
if (["adjust_fire_mission"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", -1];
};

[(profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
