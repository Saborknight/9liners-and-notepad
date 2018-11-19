
if (nln_adjust_fire_mission_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_adjust_fire_mission", displayNull])) then
{
    "nln_adjust_fire_mission" cutRsc ["nln_adjust_fire_mission", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);
[_lP] call nln_adjust_fire_mission_fnc_updateBackground;
