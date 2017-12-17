
private _lP = (profileNamespace getVariable ["nln_marking_mission_currentPage", -1]);

private _p = -1;
if (_lP <= -1) then
{
	_p = (["marking_mission"] call nln_fnc_getLastPage);
}
else
{
	_p = (["marking_mission", _lP] call nln_fnc_getPreviousPage);
};

if (_p > -1) then
{
	[_p] call nln_marking_mission_fnc_updateMenu;
	profileNamespace setVariable ["nln_marking_mission_currentPage", _p];

	private _pP = (["marking_mission", _p] call nln_fnc_getPagePosition);
	hint format["Page %1/%2", (_pP select 0), (_pP select 1)];
}
else
{
	hint "No previous Pages.";
};
