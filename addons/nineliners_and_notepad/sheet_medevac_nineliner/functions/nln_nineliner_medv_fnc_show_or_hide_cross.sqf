nln_nineliner_medv_fnc_show_or_hide_cross =
{
	_idc = _this select 0;
	if (ctrlText _idc == "") exitWith {ctrlSetText [_idc, "\nln_nineliner_and_notepad\data\nln_nineliner_medevac\images\cross.paa"];};
	if (ctrlText _idc == "\nln_nineliner_and_notepad\data\nln_nineliner_medevac\images\cross.paa") exitWith {ctrlSetText [_idc, ""];};
};
