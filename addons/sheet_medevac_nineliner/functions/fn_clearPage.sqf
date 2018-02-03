
private _p = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);
private _pP = (["medevac_nineliner", _p] call nln_main_fnc_getPreviousPage);
if (["medevac_nineliner", _p] call nln_main_fnc_removePage) then
{
    hint ("STR_nln_main_interactions_clearPageHint" call BIS_fnc_localize);
    profileNamespace setVariable ["nln_medevac_nineliner_currentPage", _pP];
};

[(profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
