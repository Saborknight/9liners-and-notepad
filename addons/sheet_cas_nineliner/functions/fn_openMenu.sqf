
if (nln_cas_nineliner_disable) exitWith { -1; };

call nln_cas_nineliner_fnc_closeBackground;
closeDialog 0;
private _lP = (profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1]);

createDialog "nln_cas_nineliner";

[_lP] call nln_cas_nineliner_fnc_updateMenu;
