
if (["cas_nineliner"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_cas_nineliner_currentPage", -1];
};

[(profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
