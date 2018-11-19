
if (nln_cas_checkin_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_cas_checkin", displayNull])) then
{
    "nln_cas_checkin" cutRsc ["nln_cas_checkin", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);
[_lP] call nln_cas_checkin_fnc_updateBackground;
