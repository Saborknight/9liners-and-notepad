/* ----------------------------------------------------------------------------
Function: nln_main_fnc_getNextPage

Description:
    Get the next right element to a given base uid.

Parameters:
    _type - a predefined type <STRING>
    _id - a given start uid <NUMBER>

Returns:
    Next right page uid. If it not exists it returns -1. <NUMBER>

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

if !(_type in nln_availableTypes) exitWith { -1; };
if (_id <= -1) exitWith { -1; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { -1; };

private _keys = ([_hash] call CBA_fnc_hashKeys);
if !(_id in _keys) exitWith { -1; };

private _index = (_keys find _id);

if (_index <= -1) exitWith { -1; };

_index = (_index + 1);
if (_index > ((count _keys) - 1)) exitWith { -1; };

((_hash select 1) select _index);
