class CfgPatches {
  class CA_ARMCO_INFANTRY {
    units[] = {
        // Groups//
        "GH_Fireteam",
        "GH_AT_Team",
        "GH_AR_Team"

    };
    weapons[] = {

    };
    requiredVersion = 0.1;
    requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main",
                        "A3_Characters_F_BLUFOR"};
  };
};
class CfgFactionClasses { // This configures the in-game factions
  class ARMCO_Green_Horns {
    dlc = "ARMCO OPTRE Reskins";
    displayName = "Insurrectionist (Green Horns)";
    author = "Frosty & Mac";
    priority = 2;
    side = 0;
    icon = "\OPTRE_Core\data\icon_UNSC_ca.paa";
    flag = "\OPTRE_Core\Data\flag_UNSC_ca.paa";
    primaryLanguage = "EN";
    backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
  };
};
