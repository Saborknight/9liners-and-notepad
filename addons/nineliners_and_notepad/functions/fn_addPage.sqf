
params [
    ["_type", "", [""]],
    ["_values", [], [[]]]
];

//nln_availableTypes = all available page/sheet types

if !(_type in nln_availableTypes) exitWith { -1; };
if ((count _values) <= 0) exitWith { -1; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith { -1; };

private _keys = ([_hash] call CBA_fnc_hashKeys);

private _id = 0;
while
{
    (_id in _keys)
}
do
{
    _id = _id + 1;
};

[_type, _id, _values] call nln_fnc_setPage;
//maybe save. But its slow as hell! -> saveProfileNamespace;
_id;
