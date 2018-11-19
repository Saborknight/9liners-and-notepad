
if (nln_adjust_fire_mission_disable) exitWith { -1; };

call nln_adjust_fire_mission_fnc_closeBackground;
closeDialog 0;
private _lP = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);

createDialog "nln_adjust_fire_mission";

[_lP] call nln_adjust_fire_mission_fnc_updateMenu;
