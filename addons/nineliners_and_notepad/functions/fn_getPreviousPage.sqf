
//ids = [0, 2, _id, 5, 7]; previous values are left values

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

_index = (_index - 1);
if (_index > ((count _keys) - 1) || _index <= -1) exitWith { -1; };

(_keys select _index);
