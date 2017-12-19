
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class notepad
			{
				displayName = "$STR_nln_Interactions_selfActionNotepad";
				condition = "nln_notepad_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interactions_selfActionEdit";
					condition = "nln_notepad_enable";
					statement = "call nln_notepad_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interactions_selfActionShow";
					condition = "nln_notepad_enable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interactions_selfActionHide";
					condition = "nln_notepad_enable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_closeBackground;";
				};
			};
		};
	};
};
