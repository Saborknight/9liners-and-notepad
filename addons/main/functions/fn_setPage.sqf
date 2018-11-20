/* ----------------------------------------------------------------------------
Function: nln_main_fnc_setPage

Description:
    Sets the values of a sheet page.

Parameters:
    _type - a predefined type <STRING>
    _id - uid to remove <NUMBER>
    _values - values to set <ARRAY>

Returns:
    Set status <BOOLEAN>

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
    ["_type", "", [""]],
    ["_id", -1, [0]],
    ["_values", [], [[]]]
];

if !(_type in nln_availableTypes) exitWith { false; };
if (_id <= -1) exitWith { false; };
if ((count _values) <= 0) exitWith { false; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { false; };

profileNamespace setVariable [_namespaceVar, ([_hash, _id, _values] call CBA_fnc_hashSet)];

private _pP = ([_type, _id] call nln_main_fnc_getPagePosition);
hint (format[("STR_nln_main_scripts_pageSaved" call BIS_fnc_localize), (_pP select 0)]);

true;
