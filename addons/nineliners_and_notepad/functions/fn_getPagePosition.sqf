
params [
	["_type", "", [""]],
	["_id", -1, [0]]
];

if !(_type in nln_availableTypes) exitWith { []; };
if (_id <= -1) exitWith { []; };

private _hashKeys = ([(profileNamespace getVariable [(format["nln_pages_%1", _type]), []])] call CBA_fnc_hashKeys);

[((_hashKeys find _id) + 1), (count _hashKeys)];
