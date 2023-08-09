class CfgPatches {
  class ARMCO_Warthogs {
    units[] = {"ARMCO_M12_LRV",     "ARMCO_M12G1_LRV",       "ARMCO_M12A1_LRV",
               "ARMCO_M12R_AA",     "ARMCO_M914_RV",         "ARMCO_M12_FAV",
               "ARMCO_M12_FAV_APC", "ARMCO_M12_FAV_APC_MED", "ARMCO_M813_TT",
               "ARMCO_M12_TD"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main",
                        "A3_Characters_F_BLUFOR"};
  };
};

class CfgEditorCategories {
  class ARMCO_Armco_Faction {
    displayName = "Armco Faction";
  };
};
class CfgEditorSubcategories {
  class ARMCO_Factions_cars {
    displayName = "Warthogs";
  };
};