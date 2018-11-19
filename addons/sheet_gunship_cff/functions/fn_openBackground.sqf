
if (nln_gunship_cff_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_gunship_cff", displayNull])) then
{
    "nln_gunship_cff" cutRsc ["nln_gunship_cff", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);
[_lP] call nln_gunship_cff_fnc_updateBackground;
