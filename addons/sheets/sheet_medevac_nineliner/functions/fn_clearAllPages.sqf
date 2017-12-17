
if (["medevac_nineliner"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_medevac_nineliner_currentPage", -1];
};

call nln_medevac_nineliner_fnc_updateMenu;
