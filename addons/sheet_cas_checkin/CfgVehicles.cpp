
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class cas_checkin
            {
                displayName = "$STR_nln_cas_checkin_interactions_selfAction";
                condition = "!nln_cas_checkin_disable";
                statement = "call nln_cas_checkin_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_cas_checkin_disable";
                    statement = "call nln_cas_checkin_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_cas_checkin_disable && (isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_cas_checkin_disable && !(isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_closeBackground;";
                };
            };
        };
    };
};
