
private _p = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);
if (["notepad", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_notepad_currentPage", (["notepad", _p] call nln_fnc_getPreviousPage)];
};

call nln_notepad_fnc_updateMenu;
