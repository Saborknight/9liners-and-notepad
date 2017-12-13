nln_noteblock_fnc_clearBlock =
{
	ctrlSetText [1400, ""];

	_pagecounter = 1;

	while {_pagecounter <= 50} do
	{
		_varname = "nln_noteblock_pageText_" + (str _pagecounter);
		profileNameSpace setVariable [_varname, nil];
		_pagecounter = _pagecounter + 1;
		if (_pagecounter == 51) then {hint "All 50 pages where cleared and saved.";};
	};
};
