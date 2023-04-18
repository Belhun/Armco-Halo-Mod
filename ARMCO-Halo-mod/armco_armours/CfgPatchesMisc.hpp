class CfgPatches {
  /*
      Squad names:
  Alpha
  Saber
  Phoenix
  Zulu
  */
  class ARMCO_Units_Army {
    units[] = {
        // Units class names go here
        "ARMCO_Soldier_A_Rifle"
    };
    weapons[] = {
        // item class names go here
        // Squad Helmets
        "Alpha_CH252_Helmet",
        "Sabre_CH252_Helmet",
        "Phoenix_CH252_Helmet",
        "Zulu_CH252_Helmet",
        "Medical_CH252_Helmet",
        "EOD_CH252_Helmet",
        "ARMCO_Generic_CH252_Ghillie_Helmesssssssast",

        // Squad ODST Helmet
        "Alpha_CH252D_Helmet",
        "Sabre_CH252D_Helmet",
        "Zulu_CH252D_Helmet",
        "Phoenix_CH252D_Helmet",

        "ARMCO_PMC_Army_Uniform_WDL",

        // Squad Uniforms
        "Alpha_BDU",
        "Alpha_EOD_BDU",
        "Alpha_Medic_BDU",
        "Sabre_BDU",
        "Sabre_EOD_BDU",
        "Sabre_Medic_BDU",
        "Zulu_BDU",
        "Zulu_Camo_BDU",
        "Zulu_EOD_BDU",
        "Zulu_Medic_BDU",
        "Zulu_Medic_Camo_BDU",
        "Phoenix_BDU",
        "Phoenix_EOD_BDU",
        "Phoenix_Medic_BDU",
        // ODST uniforms
        "ARMCO_ODST_BLK_BDU",
        "ARMCO_ODST_camo_BDU",
        "ARMCO_ODST_M90_BDU",
        "ARMCO_ODST_GDJungle_BDU",
        "ARMCO_ODST_GDDMOUNT_BDU",
        "ARMCO_ODST_DDRKWDL_BDU",
        "ARMCO_ODST_DWLD_BDU",
        "ARMCO_SEC_OVAL_BDU",
        "ARMCO_ODST_SEC_BDU",

        // Squad Marine Armours
        // Squad Base armour
        "ARMCO_Alpha_Armor",
        "ARMCO_Sabre_Armor",
        "ARMCO_Zulu_Armor",
        "ARMCO_Phoenix_Armor",
        "ARMCO_Medical_Armor",
        "ARMCO_EOD_Armor",
        "ARMCO_Zulu_Ghillie_Armor",
        // ODST armour
        "ARMCO_Alpha_ODST_Armor",
        "ARMCO_Sabre_ODST_Armor",
        "ARMCO_Zulu_ODST_Armor",
        "ARMCO_Phoenix_ODST_Armor",

    };
    requiredVersion = 0.1;
    requiredAddons[] = {"OPTRE_UNSC_Units", "OPTRE_Core", "ace_main",
                        "A3_Characters_F_BLUFOR", "OPTRE_Weapons"};
  };
};

// unsure if i need it yet(gona message around with it)
/* class CfgEditorCategories {
        class armco_units
        {
                displayName = "ARMCO";
        };
}
class CfgEditorSubcategories {
        class armco_units_infantry
        {
                displayName = "Infantry (Baseline)";
        };

}; */

class CfgFactionClasses {
  class ARMCO_PMC {
    dlc = "ARMCO OPTRE Reskins";
    displayName = "ARMCO";
    author = "Armco Community";
    priority = 1;
    side = 1;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    icon = "\OPTRE_Core\data\icon_UNSC_ca.paa";
    flag = "\OPTRE_Core\Data\flag_UNSC_ca.paa";
    primaryLanguage = "EN";
    backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
  };
};

class CfgMarkerClasses {
  class ARMCO_Markers {
    displayName = "ARMCO";
  };
};

class CfgMarkers {
  class ARMCO_Flag {
    name = "ARMCO HQ";
    scope = 2;
    scopeCurator = 2;
    icon = "custom_armours\data\flags\flag_armco_ca.paa";
    color[] = {1, 1, 1, 1};
    size = 29;
    shadow = 0;
    texture = "custom_armours\data\flags\flag_armco_ca.paa";
    markerClass = "ARMCO_Markers";
  };
};