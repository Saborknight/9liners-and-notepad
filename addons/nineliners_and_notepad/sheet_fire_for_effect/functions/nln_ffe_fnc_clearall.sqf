nln_ffe_fnc_clearall =
{
	_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
	[_emptySheet] call nln_ffe_fnc_fill;

	_pagecounter = 1;

	while {_pagecounter <= 20} do
	{
		_varname = "nln_ffe_pageText_" + (str _pagecounter);
		profileNameSpace setVariable [_varname, nil];
		_pagecounter = _pagecounter + 1;
		if (_pagecounter == 21) then {hint "All 20 Fire-For-Effect sheets where cleared and saved.";};
	};
};
