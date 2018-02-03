/* ----------------------------------------------------------------------------
Function: nln_main_fnc_sharePage

Description:
    Shares a single page to another player (Multiplayer only).

Parameters:
    _target - the affected target player <OBJNULL>
    _type - a predefined type <STRING>
    _id - uid to remove <NUMBER>
    _copy - copy files to the target instead of removing it on the local player machine <BOOL>

Returns:

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
    ["_target", objNull, [objNull]],
    ["_type", "", [""]],
    ["_id", -1, [0]],
    ["_copy", false, [false]]
];

if (isNull _target || !isPlayer _target) exitWith { false; };
if !(_type in nln_availableTypes) exitWith { false; };
if (_id <= -1) exitWith { false; };

private _values = ([_type, _id] call nln_main_fnc_getPage);
if ((count _values) <= 0) exitWith { false; };

if !(_copy) then
{
    [_type, _id] call nln_main_fnc_removePage;
};

[
    _type,
    _values
]
remoteExec
[
    "nln_main_fnc_sharePageReceived",
    _target
];

hint (format[("STR_nln_main_interactions_sharePageHint" call BIS_fnc_localize), (name _target)]);
