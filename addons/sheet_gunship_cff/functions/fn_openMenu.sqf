
if (nln_gunship_cff_disable) exitWith { -1; };

call nln_gunship_cff_fnc_closeBackground;
closeDialog 0;
private _lP = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);

createDialog "nln_gunship_cff";

[_lP] call nln_gunship_cff_fnc_updateMenu;
