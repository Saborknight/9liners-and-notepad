
if (["medevac_nineliner"] call nln_main_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_medevac_nineliner_currentPage", -1];
};

[(profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
