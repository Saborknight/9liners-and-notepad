
// exitCodes:
//  0 = default
//  1 = close dialog and open background
//  2 = reserved for default, since the `ESC` key uses this exit code
//  3 = close dialog without opening background
params ["_closedDialog", "_exitCode"];

call nln_marking_mission_fnc_savePage;

if (
    (nln_dialogToDisplay_enable or (_exitCode == 1)) &&
    (_exitCode != 3)
) then {
    call nln_marking_mission_fnc_openBackground;
};

nln_ui_fonts_currentFont = nil;
