
if (["notepad"] call nln_main_fnc_removeAllPages) then
{
    hint ("STR_nln_main_interactions_clearAllPagesHint" call BIS_fnc_localize);
    profileNamespace setVariable ["nln_notepad_currentPage", -1];
};

[(profileNamespace getVariable ["nln_notepad_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
