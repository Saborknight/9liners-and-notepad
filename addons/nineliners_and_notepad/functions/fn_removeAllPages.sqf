
params [
	["_type", "", [""]]
];

if !(_type in nln_availableTypes) exitWith { false; };

private _namespaceVar = (format["nln_pages_%1", _type]);
profileNamespace setVariable [_namespaceVar, ([[], []] call CBA_fnc_hashCreate)];
true;
