cw_ffe_fnc_clearPage = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_ffe_fnc_fill;

hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", cw_ffe_currentPage];
};