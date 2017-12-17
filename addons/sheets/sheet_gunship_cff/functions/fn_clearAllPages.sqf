
if (["gunship_cff"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_gunship_cff_currentPage", -1];
};

[(profileNamespace getVariable ["nln_gunship_cff_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
