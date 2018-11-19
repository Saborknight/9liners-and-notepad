
if (nln_notepad_disable) exitWith { -1; };

if (isNull (uiNamespace getVariable ["nln_notepad", displayNull])) then
{
    "nln_notepad" cutRsc ["nln_notepad", "PLAIN"];
};

private _lP = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);
[_lP] call nln_notepad_fnc_updateBackground;
