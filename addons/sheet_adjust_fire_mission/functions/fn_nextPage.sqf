
private _lP = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);
private _nP = (["adjust_fire_mission", _lP] call nln_main_fnc_getNextPage);

if (_nP <= -1) then
{
	private _pP = (["adjust_fire_mission", _lP] call nln_main_fnc_getPagePosition);

	if ((count _pP) > 0) then
	{
		hint (format[["STR_nln_Interactions_pageCountHint"] call BIS_fnc_localize, (_pP select 0) + 1, (_pP select 1)]);
	};
}
else
{
	call nln_adjust_fire_mission_fnc_savePage;
	private _pP = (["adjust_fire_mission", _nP] call nln_main_fnc_getPagePosition);
	hint (format[["STR_nln_Interactions_pageCountHint"] call BIS_fnc_localize, (_pP select 0), (_pP select 1)]);
};

[_nP] call nln_adjust_fire_mission_fnc_updateMenu;
profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", _nP];
