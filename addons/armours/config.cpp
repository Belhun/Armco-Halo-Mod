#include "script_component.hpp"
class CfgPatches {
  class ADDON    {
      name = COMPONENT_NAME;
      requiredVersion = REQUIRED_VERSION;
      units[] = {
        "ARMCO_Soldier_A_Rifle"
      };
      weapons[] = {
      "Alpha_CH252_Helmet",
      "Sabre_CH252_Helmet",
      "Phoenix_CH252_Helmet",
      "Zulu_CH252_Helmet",
      "Medical_CH252_Helmet",
      "EOD_CH252_Helmet",
      "ARMCO_Generic_CH252_Ghillie_Helmet",
      "Alpha_CH252D_Helmet",
      "Sabre_CH252D_Helmet",
      "Zulu_CH252D_Helmet",
      "Phoenix_CH252D_Helmet",
      "ARMCO_PMC_Army_Uniform_WDL",
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
      "ARMCO_ODST_BLK_BDU",
      "ARMCO_ODST_camo_BDU",
      "ARMCO_ODST_M90_BDU",
      "ARMCO_ODST_GDJungle_BDU",
      "ARMCO_ODST_GDDMOUNT_BDU",
      "ARMCO_ODST_DDRKWDL_BDU",
      "ARMCO_ODST_DWLD_BDU",
      "ARMCO_SEC_OVAL_BDU",
      "ARMCO_ODST_SEC_BDU",
      "ARMCO_Alpha_Armor",
      "ARMCO_Sabre_Armor",
      "ARMCO_Zulu_Armor",
      "ARMCO_Phoenix_Armor",
      "ARMCO_Medical_Armor",
      "ARMCO_EOD_Armor",
      "ARMCO_Alpha_Ghillie_Armor",
      "ARMCO_Sabre_Ghillie_Armor",
      "ARMCO_Zulu_Ghillie_Armor",
      "ARMCO_Phoenix_Ghillie_Armor",
      "ARMCO_Medical_Ghillie_Armor",
      "ARMCO_EOD_Ghillie_Armor",
      "ARMCO_Alpha_ODST_Armor",
      "ARMCO_Sabre_ODST_Armor",
      "ARMCO_Zulu_ODST_Armor",
      "ARMCO_Phoenix_ODST_Armor"
      };
      magazines[] = { };
      requiredAddons[] = {
          "OPTRE_UNSC_Units",
          "OPTRE_Core",
          "ace_main",
          "A3_Characters_F_BLUFOR",
          "OPTRE_Weapons"
      };
      author = "Belhun";
      authors[] = {"Belhun", "Darknessvoid"};
      url = ECSTRING(main,URL);
      VERSION_CONFIG;
  };
  // This include brings in class CfgPatches and CfgFactionClasses,
  // CfgMarkerClasses, CfgMarkers CfgFactionClasses
  #include "CfgPatchesMisc.hpp"

  //Arsonal exstened setup
  #include "CfgArsonalExspa.hpp"
};
class CfgVehicles {
#include "CfgVehicleSoldier.hpp"
};
// cfgWeapons includes weapons armours and helmets and uniforms.
class cfgWeapons {

// this include brings in all the all the Uniforms from the
// CfgVehicleUniform.hpp
#include "CfgWeaponsUniform.hpp"

// this include brings in all the all the Helmets from the CfgVehicleHelmet.hpp
#include "CfgWeaponsSHelmet.hpp"

// this include Squad based Armours from the CfgWeaponsSArmour.hpp
#include "CfgWeaponsSArmour.hpp"

// this include Squad based Armours from the CfgWeaponsSArmour.hpp
#include "CfgWeaponsSArmourVariants.hpp"

// this include brings in all the all the Custom armour from the
// CfgWeaponsCArmour.hpp
#include "CfgWeaponsCArmour.hpp"

// Brings in all the custom helmets from the CfgWeaponsCHelmet.hpp
#include "CfgWeaponsCHelmet.hpp"



};
