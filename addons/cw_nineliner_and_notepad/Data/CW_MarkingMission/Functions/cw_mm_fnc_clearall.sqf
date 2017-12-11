cw_mm_fnc_clearall = 
{
_emptySheet = ["","","","","","","","","","","","","","","","","","","",""];
[_emptySheet] call cw_mm_fnc_fill;

_pagecounter = 1;

WHILE {_pagecounter <= 20}do
{
	_varname = "cw_mm_pageText_" + (str _pagecounter);
	profileNameSpace setVariable [_varname, nil];
	_pagecounter = _pagecounter + 1;
	If (_pagecounter == 21) then {hint "All 20 Marking-Mission sheets where cleared and saved.";};
};
};