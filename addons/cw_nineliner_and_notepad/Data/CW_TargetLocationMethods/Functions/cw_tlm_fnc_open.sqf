cw_tlm_fnc_open =
{
	If !(isNil {cw_9liners_and_notepad_currentResource} OR cw_9liners_and_notepad_currentResource == "")exitWith {hint (["STR_cw_nineline_and_notepad_Scripts_CloseSheetFirst"] call BIS_fnc_localize);};
	closeDialog 0;
	createDialog "CW_TARGETLOCATIONMETHODS";
};