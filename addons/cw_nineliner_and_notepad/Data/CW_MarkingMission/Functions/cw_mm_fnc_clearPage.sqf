cw_mm_fnc_clearPage = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_mm_fnc_fill;

hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", cw_mm_currentPage];
};