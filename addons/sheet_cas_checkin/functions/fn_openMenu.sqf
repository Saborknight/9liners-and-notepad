
if (!nln_cas_checkin_disable) then
{
    call nln_cas_checkin_fnc_closeBackground;
    closeDialog 0;
    private _lP = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);

    createDialog "nln_cas_checkin";

    [_lP] call nln_cas_checkin_fnc_updateMenu;
};
