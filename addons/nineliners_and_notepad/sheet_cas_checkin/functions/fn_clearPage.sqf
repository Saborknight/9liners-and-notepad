
private _p = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);
if (["cas_checkin", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_cas_checkin_currentPage", (["cas_checkin", _p] call nln_fnc_getPreviousPage)];
};

call nln_cas_checkin_fnc_updateMenu;
