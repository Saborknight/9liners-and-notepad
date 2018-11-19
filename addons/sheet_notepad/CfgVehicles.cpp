
class Man;
class CAManBase : Man {
    class ACE_SelfActions {
        class nln_sheets {
            class notepad {
                displayName = "$STR_nln_notepad_interactions_selfAction";
                condition = "!nln_notepad_disable";
                statement = "call nln_notepad_fnc_openMenu;";

                class edit {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_notepad_disable";
                    statement = "call nln_notepad_fnc_openMenu;";
                };

                class show {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_notepad_disable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_openBackground;";
                };

                class hide {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_notepad_disable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_closeBackground;";
                };
            };
        };
    };
};
