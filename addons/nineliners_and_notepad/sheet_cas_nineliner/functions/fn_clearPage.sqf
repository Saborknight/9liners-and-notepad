
private _p = (profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1]);
if (["cas_nineliner", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_cas_nineliner_currentPage", (["cas_nineliner", _p] call nln_fnc_getPreviousPage)];
};

call nln_cas_nineliner_fnc_updateMenu;
