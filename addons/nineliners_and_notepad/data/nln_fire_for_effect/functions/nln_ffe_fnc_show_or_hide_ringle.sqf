nln_ffe_fnc_show_or_hide_ringle =
{
	_idc = _this select 0;

	if (ctrlText _idc == "") exitWith {ctrlSetText [_idc, "\nln_nineliner_and_notepad\data\nln_fire_for_effect\images\ringle.paa"];};
	if (ctrlText _idc == "\nln_nineliner_and_notepad\data\nln_fire_for_effect\images\ringle.paa") exitWith {ctrlSetText [_idc, ""];};
};
