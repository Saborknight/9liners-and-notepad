nln_fiveliner_gcff_fnc_clearPage =
{
	_emptySheet = ["","","","","","",""];
	[_emptySheet] call nln_fiveliner_gcff_fnc_fill;

	hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", nln_fiveliner_gcff_currentPage];
};
