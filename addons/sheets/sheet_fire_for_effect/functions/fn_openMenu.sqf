
call nln_fire_for_effect_fnc_closeBackground;
closeDialog 0;
private _lP = (profileNamespace getVariable ["nln_fire_for_effect_currentPage", -1]);

createDialog "nln_fire_for_effect";

[_lP] call nln_fire_for_effect_fnc_updateMenu;
