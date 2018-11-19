
if (!nln_notepad_disable) then
{
    call nln_notepad_fnc_closeBackground;
    closeDialog 0;
    private _lP = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);

    createDialog "nln_notepad";

    [_lP] call nln_notepad_fnc_updateMenu;
};
