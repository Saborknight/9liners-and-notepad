cw_afm_fnc_clearPage = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_afm_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageClearedNotSaved"] call BIS_fnc_localize), cw_afm_currentPage];
};