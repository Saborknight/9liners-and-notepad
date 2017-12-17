
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class notepad
			{
				displayName = ["STR_nln_Interaction_selfActionNotepad"] call BIS_fnc_localize;
				condition = "nln_notepad_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_notepad_enable";
					statement = "call nln_notepad_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_notepad_enable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_notepad_enable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_closeBackground;";
				};
			};
		};
	};
};
