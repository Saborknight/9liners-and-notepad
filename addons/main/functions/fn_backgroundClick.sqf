/* ----------------------------------------------------------------------------
Function: nln_main_fnc_backgroundClick

Description:
    Decides whether the click was outside of the open sheet, and if so, whether
    to open the background of the sheet and enable controls or to just close
    the dialog.

Parameters:
    _this - the _this variable of the interaction display <DISPLAY>

Returns:
    Success|failure of the operation <BOOLEAN>

Examples:
    (begin example)
    onMouseButtonUp = "_this call nln_main_fnc_backgroundClick;";
    (end)

Author:
    Saborknight
---------------------------------------------------------------------------- */

params [
    "_display",
    ["_button", 2, [0]],
    ["_mouseXPos", 0, [0]],
    ["_mouseYPos", 0, [0]]
];

private _exitCodes = [1,3]; // Which exit code to which button (index)

// 0 = x position, 1 = y position, 2 = width, 3 = height
private _ctrlPos = ctrlPosition (_display displayCtrl 1200);

// If inside the area of _ctrlPos
if (
    _mouseXPos >= (_ctrlPos select 0) &&
    _mouseXPos <= (_ctrlPos select 0) + (_ctrlPos select 2) &&
    _mouseYPos >= (_ctrlPos select 1) &&
    _mouseYPos <= (_ctrlPos select 1) + (_ctrlPos select 3)
) then { false; } else {
    if (_button == 0 || _button == 1) then
    {
        closeDialog (_exitCodes select _button);
        true;
    }
    else
    {
        false;
    };
};
