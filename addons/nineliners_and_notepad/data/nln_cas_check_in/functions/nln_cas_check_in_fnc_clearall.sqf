nln_cas_check_in_fnc_clearall =
{
	_emptySheet = ["","","","","","","","",""];
	[_emptySheet] call nln_cas_check_in_fnc_fill;

	_pagecounter = 1;

	while {_pagecounter <= 20} do
	{
		_varname = "nln_cas_check_in_pageText_" + (str _pagecounter);
		profileNameSpace setVariable [_varname, nil];
		_pagecounter = _pagecounter + 1;
		if (_pagecounter == 21) then {hint "All 20 CAS Check-In Briefings where cleared and saved.";};
	};
};
