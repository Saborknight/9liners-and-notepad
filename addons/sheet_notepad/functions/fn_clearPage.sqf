
private _p = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);
private _pP = (["notepad", _p] call nln_main_fnc_getPreviousPage);
if (["notepad", _p] call nln_main_fnc_removePage) then
{
    hint ("STR_nln_main_interactions_clearPageHint" call BIS_fnc_localize);
    profileNamespace setVariable ["nln_notepad_currentPage", _pP];
};

[(profileNamespace getVariable ["nln_notepad_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
