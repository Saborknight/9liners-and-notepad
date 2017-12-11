cw_9liner_medv_fnc_show_or_hide_cross =
{
_idc = _this select 0;
If (ctrlText _idc == "") exitWith {ctrlSetText [_idc, "\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Images\cross.paa"];};
If (ctrlText _idc == "\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Images\cross.paa") exitWith {ctrlSetText [_idc, ""];};


};