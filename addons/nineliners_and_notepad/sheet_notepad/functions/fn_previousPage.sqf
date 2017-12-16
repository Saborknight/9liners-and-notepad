
private _lP = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);

private _p = -1;
if (_lP <= -1) then
{
	_p = (["notepad"] call nln_fnc_getLastPage);
}
else
{
	_p = (["notepad", _lP] call nln_fnc_getPreviousPage);
};

if (_p > -1) then
{
	[_p] call nln_notepad_fnc_updateMenu;
	profileNamespace setVariable ["nln_notepad_currentPage", _p];

	private _pP = (["notepad", _p] call nln_fnc_getPagePosition);
	hint format["Page %1/%2", (_pP select 0), (_pP select 1)];
}
else
{
	hint "No previous Pages.";
};
