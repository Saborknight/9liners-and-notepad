
if (nln_cas_nineliner_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_cas_nineliner", displayNull])) then
{
    "nln_cas_nineliner" cutRsc ["nln_cas_nineliner", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1]);
[_lP] call nln_cas_nineliner_fnc_updateBackground;
