
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class gunship_cff
            {
                displayName = "$STR_nln_gunship_call_for_fire_interactions_selfAction";
                condition = "!nln_gunship_cff_disable";
                statement = "call nln_gunship_cff_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_gunship_cff_disable";
                    statement = "call nln_gunship_cff_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_gunship_cff_disable && (isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_gunship_cff_disable && !(isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_closeBackground;";
                };
            };
        };
    };
};
