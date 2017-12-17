
if (["marking_mission"] call nln_main_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_marking_mission_currentPage", -1];
};

[(profileNamespace getVariable ["nln_marking_mission_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
