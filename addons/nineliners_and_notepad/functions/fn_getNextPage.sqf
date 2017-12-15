
//ids = [0, 2, _id, 5, 7]; next values are right values

params [
	["_type"],
	["_id", -1, [0]]
];

if !(_type in nln_availableTypes) exitWith { []; };
if (_id <= -1) exitWith { []; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { []; };

private _keys = ([_hash] call CBA_fnc_hashKeys);
if !(_id in _keys) exitWith { []; };

private _index = (_keys find _id);

if (_index <= -1) exitWith { []; };

_index = (_index + 1);
if (_index > ((count _keys) - 1)) exitWith { []; };

([_type, _index] call nln_fnc_getPage);
