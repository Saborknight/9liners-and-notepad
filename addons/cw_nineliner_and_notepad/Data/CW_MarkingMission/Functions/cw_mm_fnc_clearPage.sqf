cw_mm_fnc_clearPage = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_mm_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageClearedNotSaved"] call BIS_fnc_localize), cw_mm_currentPage];
};