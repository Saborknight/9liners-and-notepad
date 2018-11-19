
if (nln_marking_mission_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_marking_mission", displayNull])) then
{
    "nln_marking_mission" cutRsc ["nln_marking_mission", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_marking_mission_currentPage", -1]);
[_lP] call nln_marking_mission_fnc_updateBackground;
