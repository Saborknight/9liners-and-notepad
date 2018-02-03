/* ----------------------------------------------------------------------------
Function: nln_main_fnc_getPagePosition

Description:
    Get the current position of a page and the amount of entries of a sheet.

Parameters:
    _type - a predefined type <STRING>
    _id - uid to get position for <NUMBER>

Returns:
    Array containing the page position and the amount of entries of the sheet <ARRAY>

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
    ["_type", "", [""]],
    ["_id", -1, [0]]
];

if !(_type in nln_availableTypes) exitWith { []; };
if (_id <= -1) exitWith { []; };

private _hashKeys = ([(profileNamespace getVariable [(format["nln_pages_%1", _type]), []])] call CBA_fnc_hashKeys);

[((_hashKeys find _id) + 1), (count _hashKeys)];
