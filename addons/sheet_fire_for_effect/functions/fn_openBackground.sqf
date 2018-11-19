
if (nln_fire_for_effect_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_fire_for_effect", displayNull])) then
{
    "nln_fire_for_effect" cutRsc ["nln_fire_for_effect", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_fire_for_effect_currentPage", -1]);
[_lP] call nln_fire_for_effect_fnc_updateBackground;
