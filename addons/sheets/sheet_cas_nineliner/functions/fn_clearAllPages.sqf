
if (["cas_nineliner"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["cas_nineliner_currentPage", -1];
};

call nln_cas_nineliner_fnc_updateMenu;
