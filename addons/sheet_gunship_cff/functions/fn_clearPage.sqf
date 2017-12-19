
private _p = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);
if (["gunship_cff", _p] call nln_main_fnc_removePage) then
{
	hint ["STR_nln_Interactions_clearPageHint"] call BIS_fnc_localize;
	profileNamespace setVariable ["nln_gunship_cff_currentPage", (["gunship_cff", _p] call nln_main_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_gunship_cff_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
