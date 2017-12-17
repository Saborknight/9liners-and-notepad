
if (["cas_checkin"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_cas_checkin_currentPage", -1];
};

call nln_cas_checkin_fnc_updateMenu;
