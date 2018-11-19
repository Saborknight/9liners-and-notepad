
class Man;
class CAManBase : Man {
    class ACE_SelfActions {
        class nln_sheets {
            class target_location_methods {
                displayName = "$STR_nln_target_location_methods_interactions_selfAction";
                condition = "!nln_target_location_methods_disable";
                statement = "call nln_target_location_methods_fnc_openMenu;";

                class edit {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_target_location_methods_disable";
                    statement = "call nln_target_location_methods_fnc_openMenu;";
                };

                class show {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_target_location_methods_disable && (isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_openBackground;";
                };

                class hide {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_target_location_methods_disable && !(isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_closeBackground;";
                };
            };
        };
    };
};
