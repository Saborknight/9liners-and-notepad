
if (nln_medevac_nineliner_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_medevac_nineliner", displayNull])) then
{
    "nln_medevac_nineliner" cutRsc ["nln_medevac_nineliner", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);
[_lP] call nln_medevac_nineliner_fnc_updateBackground;
