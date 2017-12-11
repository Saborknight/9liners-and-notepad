cw_noteblock_fnc_clearBlock =
{
ctrlSetText [1400, ""];

_pagecounter = 1;

WHILE {_pagecounter <= 50}do
{
	_varname = "cw_noteblock_pageText_" + (str _pagecounter);
	profileNameSpace setVariable [_varname, nil];
	_pagecounter = _pagecounter + 1;
	If (_pagecounter == 51) then {hint "All 50 pages where cleared and saved.";};
};
};