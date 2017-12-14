nln_cas_check_in_fnc_clearPage =
{
	_emptySheet = ["","","","","","","","",""];
	[_emptySheet] call nln_cas_check_in_fnc_fill;

	hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", nln_cas_check_in_currentPage];
};
