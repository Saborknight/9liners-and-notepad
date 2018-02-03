/* ----------------------------------------------------------------------------
Function: nln_main_fnc_removePage

Description:
    Removes a single page of a sheet.

Parameters:
    _type - a predefined type <STRING>
    _id - uid to remove <NUMBER>

Returns:
    Remove status <BOOLEAN>

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

if !(_type in nln_availableTypes) exitWith { false; };
if (_id <= -1) exitWith { false; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { false; };
if !(_id in ([_hash] call CBA_fnc_hashKeys)) exitWith { false; };

profileNamespace setVariable [_namespaceVar, ([_hash, _id] call CBA_fnc_hashRem)];
true;
