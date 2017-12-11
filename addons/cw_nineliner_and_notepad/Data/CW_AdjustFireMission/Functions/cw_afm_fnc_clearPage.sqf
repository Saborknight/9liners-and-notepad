cw_afm_fnc_clearPage = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_afm_fnc_fill;

hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", cw_afm_currentPage];
};