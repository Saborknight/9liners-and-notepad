
private _p = (profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1]);
private _pP = (["adjust_fire_mission", _p] call nln_main_fnc_getPreviousPage);
if (["adjust_fire_mission", _p] call nln_main_fnc_removePage) then
{
    hint ("STR_nln_main_interactions_clearPageHint" call BIS_fnc_localize);
    profileNamespace setVariable ["nln_adjust_fire_mission_currentPage", _pP];
};

[(profileNamespace getVariable ["nln_adjust_fire_mission_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
