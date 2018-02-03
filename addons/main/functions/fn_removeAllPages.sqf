/* ----------------------------------------------------------------------------
Function: nln_main_fnc_removeAllPages

Description:
    Removes all pages of a specific sheet.

Parameters:
    _type - a predefined type <STRING>

Returns:
    Remove status <BOOLEAN>

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
    ["_type", "", [""]]
];

if !(_type in nln_availableTypes) exitWith { false; };

private _namespaceVar = (format["nln_pages_%1", _type]);
profileNamespace setVariable [_namespaceVar, ([[], []] call CBA_fnc_hashCreate)];
true;
