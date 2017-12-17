
private _p = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);
if (["notepad", _p] call nln_fnc_removePage) then
{
	hint "Page removed.";
	profileNamespace setVariable ["nln_notepad_currentPage", (["notepad", _p] call nln_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_notepad_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
