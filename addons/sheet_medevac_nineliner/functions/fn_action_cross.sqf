
params [
    ["_idc", -1, [0]]
];

if (_idc <= -1) exitWith {};

if ((ctrlText _idc) == "") then
{
    ctrlSetText [_idc, "\x\nln\addons\sheet_medevac_nineliner\data\ui\cross.paa"];
}
else
{
    ctrlSetText [_idc, ""];
};
