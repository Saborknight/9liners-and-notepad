
private _p = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);
if (["medevac_nineliner", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_medevac_nineliner_currentPage", (["medevac_nineliner", _p] call nln_fnc_getPreviousPage)];
};

call nln_medevac_nineliner_fnc_updateMenu;
