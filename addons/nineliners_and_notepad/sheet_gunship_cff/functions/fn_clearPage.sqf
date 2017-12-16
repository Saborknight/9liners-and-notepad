
private _p = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);
if (["gunship_cff", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_gunship_cff_currentPage", (["gunship_cff", _p] call nln_fnc_getPreviousPage)];
};

call nln_gunship_cff_fnc_updateMenu;
