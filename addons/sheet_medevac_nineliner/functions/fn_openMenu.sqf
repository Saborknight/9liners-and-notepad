
if (nln_medevac_nineliner_disable) exitWith { -1; };

call nln_medevac_nineliner_fnc_closeBackground;
closeDialog 0;
private _lP = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);

createDialog "nln_medevac_nineliner";

[_lP] call nln_medevac_nineliner_fnc_updateMenu;
