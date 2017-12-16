
if (["gunship_cff"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_gunship_cff_currentPage", -1];
};

call nln_gunship_cff_fnc_updateMenu;
