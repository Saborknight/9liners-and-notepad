
params [
    ["_target", objNull, [objNull]],
    ["_type", "", [""]],
    ["_id", -1, [0]],
	["_copy", false, [false]]
];

if (isNull _target || !isPlayer _target) exitWith { false; };
if !(_type in nln_availableTypes) exitWith { false; };
if (_id <= -1) exitWith { false; };

private _values = ([_type, _id] call nln_fnc_getPage);
if ((count _values) <= 0) exitWith { false; };

if !(_copy) then
{
	[_type, _id] call nln_fnc_removePage;
};

[
	_type,
	_values
]
remoteExec
[
	"nln_fnc_sharePageReceived",
	_target
];

hint (format["You gave %1 a page.", (profileName _target)]);
