
params [
	["_unit", objNull, [objNull]],
	["_type", "", [""]],
	["_values", [], [[]]]
];

if (isNull _unit || !isPlayer _unit) exitWith {};

if ([_type, _values] call nln_fnc_addPage) then
{
	hint (format["You got a new page from %1", profileName]);
};
