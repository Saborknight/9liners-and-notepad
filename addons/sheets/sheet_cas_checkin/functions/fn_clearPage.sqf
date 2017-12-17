
private _p = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);
if (["cas_checkin", _p] call nln_fnc_removePage) then
{
	hint "Page removed.";
	profileNamespace setVariable ["nln_cas_checkin_currentPage", (["cas_checkin", _p] call nln_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_cas_checkin_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
