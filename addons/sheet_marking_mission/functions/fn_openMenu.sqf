
if (!nln_marking_mission_disable) then
{
    call nln_marking_mission_fnc_closeBackground;
    closeDialog 0;
    private _lP = (profileNamespace getVariable ["nln_marking_mission_currentPage", -1]);

    createDialog "nln_marking_mission";

    [_lP] call nln_marking_mission_fnc_updateMenu;
};
