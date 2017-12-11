cw_cas_check_in_fnc_clearall = 
{
_emptySheet = ["","","","","","","","",""];
[_emptySheet] call cw_cas_check_in_fnc_fill;

_pagecounter = 1;

WHILE {_pagecounter <= 20}do
{
	_varname = "cw_cas_check_in_pageText_" + (str _pagecounter);
	profileNameSpace setVariable [_varname, nil];
	_pagecounter = _pagecounter + 1;
	If (_pagecounter == 21) then {hint "All 20 CAS Check-In Breefings where cleared and saved.";};
};
};