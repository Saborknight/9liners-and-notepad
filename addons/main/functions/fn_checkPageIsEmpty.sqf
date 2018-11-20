/* ----------------------------------------------------------------------------
Function: nln_main_fnc_checkPageIsEmpty

Description:
    Checks whether or not a page contains any non-default data.

Parameters:
    _values - an array containing neccessary information <ARRAY>
    _defaultValues - an array containing default field values (excluding
                     "profileName" and font) <ARRAY>

Returns:
    Result of the check <BOOLEAN>

Examples:
    (begin example)
    (end)

Author:
    Saborknight
---------------------------------------------------------------------------- */

params [
    ["_values", [], [[]]]
];

if ((count _values) <= 0) exitWith { -1; };

// Extract only the field data
private _rawValues = + _values;
_rawValues set [0, -1];
_rawValues = _rawValues - [-1];

_filledCount = 0;
{
    // Only check the actual fields, not "profileName" or the fonts used
    if !(_x isEqualTo (_defaultValues select _forEachIndex)) then
    {
        _filledCount = _filledCount + 1;
    };
} forEach _rawValues;

if (_filledCount <= 0) then { true; } else { false; };
