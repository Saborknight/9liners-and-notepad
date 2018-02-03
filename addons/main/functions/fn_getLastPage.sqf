/* ----------------------------------------------------------------------------
Function: nln_main_fnc_getLastPage

Description:
    Returns the last page added to a sheet.

Parameters:
    _type - a predefined type <STRING>

Returns:
    Unique id of page entry <NUMBER>

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
    ["_type", "", [""]]
];

if !(_type in nln_availableTypes) exitWith { -1; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { -1; };

private _c = (count (_hash select 1));
if (_c <= 0) exitWith { -1; };

((_hash select 1) select (_c - 1));
