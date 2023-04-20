

class OPTRE_UNSC_Marine_Soldier_Unarmed;

class ARMCO_Rucksack_Hard_Alpha;
class ARMCO_Rucksack_Hard_Medical;
class ARMCO_Rucksack_Hard_Sabre;
class ARMCO_Rucksack_Hard_Zulu;
class ARMCO_Rucksack_Hard_Phoenix;
class ARMCO_Rucksack_tSoft_Phoenix;
class ARMCO_Rucksack_tSoft_Medical;
class ARMCO_Rucksack_tSoft_Alpha;
class ARMCO_Rucksack_tSoft_Zulu;
class ARMCO_Rucksack_tSoft_Sabre;

class ARMCO_Alpha_Squad_Lead : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha Squad Lead";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
      "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Alpha_CH252_Helmet",
                   "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Alpha_CH252_Helmet",
                          "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Squad_Lead_pack";
};

class ARMCO_Alpha_Medic : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "ALpha Medic";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs",
             "ACE_EntrenchingTool",
             "ACE_MapTools",
             "ACE_IR_Strobe_Item",
             "ACE_surgicalKit",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_PainkillerItem",
             "kat_PainkillerItem",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "kat_X_AED",
             "ACE_personalAidKit",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "kat_Pulseoximeter",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_scalpel",
             "kat_scalpel",
             "kat_scalpel",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "kat_CarbonateItem",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_plasmaIV",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs"};
  respawnItems[] = {"ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs",
                    "ACE_EntrenchingTool",
                    "ACE_MapTools",
                    "ACE_IR_Strobe_Item",
                    "ACE_surgicalKit",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_PainkillerItem",
                    "kat_PainkillerItem",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "kat_X_AED",
                    "ACE_personalAidKit",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "kat_Pulseoximeter",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "kat_CarbonateItem",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_plasmaIV",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple", "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple",
                        "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Medic_pack";
};

class ARMCO_Alpha_Corpsman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha Corpsman";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  respawnItems[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Alpha_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Alpha_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Corpsman_pack";
};

class ARMCO_Alpha_Engineer : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha Engineer";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Alpha_CH252_Helmet",
                   "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Alpha_CH252_Helmet",
                          "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Engineer_pack";
};

class ARMCO_Alpha_Special_Weapons_Operator : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha Special Weapons Operator";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Alpha_CH252_Helmet",
                   "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Alpha_CH252_Helmet",
                          "ARMCO_Alpha_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Special_Weapons_Operator_pack";
};

class ARMCO_Alpha_EOD : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha EOD";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",         "ItemCompass",
                   "ItemWatch",       "TFAR_anprc152",
                   "ItemGPS",         "OPTRE_NVG",
                   "Rangefinder",     "Alpha_CH252_Helmet",
                   "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",         "ItemCompass",
                          "ItemWatch",       "TFAR_anprc152",
                          "ItemGPS",         "OPTRE_NVG",
                          "Rangefinder",     "Alpha_CH252_Helmet",
                          "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_EOD_pack";
};

class ARMCO_Alpha_Marksman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Alpha Marksman";
  uniformClass = "Alpha_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_M392_DMR_OPTRE_M393_ACOG",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_M392_DMR_OPTRE_M393_ACOG",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Phoenix_CH252_Helmet",
                   "ARMCO_Alpha_Armor", "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Phoenix_CH252_Helmet",
                          "ARMCO_Alpha_Armor", "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Alpha_Marksman_pack";
};

class ARMCO_Sabre_Sqaud_Lead : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Sqaud Lead";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
      "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Sabre_CH252_Helmet",
                   "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Sabre_CH252_Helmet",
                          "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Sqaud_Lead_pack";
};

class ARMCO_Sabre_Medic : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Medic";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs",
             "ACE_EntrenchingTool",
             "ACE_MapTools",
             "ACE_IR_Strobe_Item",
             "ACE_surgicalKit",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_PainkillerItem",
             "kat_PainkillerItem",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "kat_X_AED",
             "ACE_personalAidKit",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "kat_Pulseoximeter",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_scalpel",
             "kat_scalpel",
             "kat_scalpel",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "kat_CarbonateItem",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_plasmaIV",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs"};
  respawnItems[] = {"ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs",
                    "ACE_EntrenchingTool",
                    "ACE_MapTools",
                    "ACE_IR_Strobe_Item",
                    "ACE_surgicalKit",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_PainkillerItem",
                    "kat_PainkillerItem",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "kat_X_AED",
                    "ACE_personalAidKit",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "kat_Pulseoximeter",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "kat_CarbonateItem",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_plasmaIV",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple", "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple",
                        "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Sabre_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Sabre_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Medic_pack";
};

class ARMCO_Sabre_Corpsman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Corpsman";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  respawnItems[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Sabre_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Sabre_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Corpsman_pack";
};

class ARMCO_Sabre_Special_Weapons_Operator : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Special Weapons Operator";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Sabre_CH252_Helmet",
                   "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Sabre_CH252_Helmet",
                          "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Special_Weapons_Operator_pack";
};

class ARMCO_Sabre_Engineer : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Engineer";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",         "ItemCompass",
                   "ItemWatch",       "TFAR_anprc152",
                   "ItemGPS",         "OPTRE_NVG",
                   "Rangefinder",     "Sabre_CH252_Helmet",
                   "ARMCO_EOD_Armor", "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",         "ItemCompass",
                          "ItemWatch",       "TFAR_anprc152",
                          "ItemGPS",         "OPTRE_NVG",
                          "Rangefinder",     "Sabre_CH252_Helmet",
                          "ARMCO_EOD_Armor", "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Engineer_pack";
};

class ARMCO_Sabre_EOD : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre EOD";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",         "ItemCompass",
                   "ItemWatch",       "TFAR_anprc152",
                   "ItemGPS",         "OPTRE_NVG",
                   "Rangefinder",     "Sabre_CH252_Helmet",
                   "ARMCO_EOD_Armor", "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",         "ItemCompass",
                          "ItemWatch",       "TFAR_anprc152",
                          "ItemGPS",         "OPTRE_NVG",
                          "Rangefinder",     "Sabre_CH252_Helmet",
                          "ARMCO_EOD_Armor", "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_EOD_pack";
};

class ARMCO_Sabre_Marksmen : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Marksmen";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_M392_DMR_OPTRE_M393_ACOG",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_M392_DMR_OPTRE_M393_ACOG",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_15Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_15Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Sabre_CH252_Helmet",
                   "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Sabre_CH252_Helmet",
                          "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Marksmen_pack";
};

class ARMCO_Sabre_Rifleman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Sabre Rifleman";
  uniformClass = "Sabre_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "ACE_splint",          "ACE_splint",         "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet",     "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "ACE_splint",          "ACE_splint",         "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",     "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "kat_Painkiller",
                 "kat_Painkiller"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "kat_Painkiller",
                        "kat_Painkiller"};
  linkedItems[] = {"ItemMap",           "ItemCompass",
                   "ItemWatch",         "TFAR_anprc152",
                   "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",       "Sabre_CH252_Helmet",
                   "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",           "ItemCompass",
                          "ItemWatch",         "TFAR_anprc152",
                          "ItemGPS",           "OPTRE_NVG",
                          "Rangefinder",       "Sabre_CH252_Helmet",
                          "ARMCO_Sabre_Armor", "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Sabre_Rifleman_pack";
};

class ARMCO_Zulu_Squad_Lead : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Squad Lead";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_IR_Strobe_Item",
      "ACE_IR_Strobe_Item",  "ACE_MapTools",       "ACE_RangeCard",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",        "ItemCompass",       "ItemWatch",
                   "TFAR_anprc152",  "ItemGPS",           "OPTRE_NVG",
                   "Rangefinder",    "Zulu_CH252_Helmet", "ARMCO_Zulu_Armor",
                   "OPTRE_EyePiece", "OPTRE_NVG"};
  respawnLinkedItems[] = {
      "ItemMap",          "ItemCompass",    "ItemWatch",   "TFAR_anprc152",
      "ItemGPS",          "OPTRE_NVG",      "Rangefinder", "Zulu_CH252_Helmet",
      "ARMCO_Zulu_Armor", "OPTRE_EyePiece", "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Squad_Lead_pack";
};

class ARMCO_Zulu_Medic : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Medic";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs",
             "ACE_EntrenchingTool",
             "ACE_MapTools",
             "ACE_IR_Strobe_Item",
             "ACE_surgicalKit",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_PainkillerItem",
             "kat_PainkillerItem",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "kat_X_AED",
             "ACE_personalAidKit",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "kat_Pulseoximeter",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_scalpel",
             "kat_scalpel",
             "kat_scalpel",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "kat_CarbonateItem",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_plasmaIV",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs"};
  respawnItems[] = {"ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs",
                    "ACE_EntrenchingTool",
                    "ACE_MapTools",
                    "ACE_IR_Strobe_Item",
                    "ACE_surgicalKit",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_PainkillerItem",
                    "kat_PainkillerItem",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "kat_X_AED",
                    "ACE_personalAidKit",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "kat_Pulseoximeter",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "kat_CarbonateItem",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_plasmaIV",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple", "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple",
                        "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Zulu_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Zulu_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Medic_pack";
};

class ARMCO_Zulu_EOD : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu EOD";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",         "ItemCompass",
                   "ItemWatch",       "TFAR_anprc152",
                   "ItemGPS",         "OPTRE_NVG",
                   "Rangefinder",     "Zulu_CH252_Helmet",
                   "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",         "ItemCompass",
                          "ItemWatch",       "TFAR_anprc152",
                          "ItemGPS",         "OPTRE_NVG",
                          "Rangefinder",     "Zulu_CH252_Helmet",
                          "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_EOD_pack";
};

class ARMCO_Zulu_Engineer : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Engineer";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",          "ItemCompass",
                   "ItemWatch",        "TFAR_anprc152",
                   "ItemGPS",          "OPTRE_NVG",
                   "Rangefinder",      "Zulu_CH252_Helmet",
                   "ARMCO_Zulu_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",          "ItemCompass",
                          "ItemWatch",        "TFAR_anprc152",
                          "ItemGPS",          "OPTRE_NVG",
                          "Rangefinder",      "Zulu_CH252_Helmet",
                          "ARMCO_Zulu_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Engineer_pack";
};

class ARMCO_Zulu_Refleman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Refleman";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",          "ItemCompass",
                   "ItemWatch",        "TFAR_anprc152",
                   "ItemGPS",          "OPTRE_NVG",
                   "Rangefinder",      "Phoenix_CH252_Helmet",
                   "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",          "ItemCompass",
                          "ItemWatch",        "TFAR_anprc152",
                          "ItemGPS",          "OPTRE_NVG",
                          "Rangefinder",      "Phoenix_CH252_Helmet",
                          "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Refleman_pack";
};

class ARMCO_Zulu_Special_Weapons_Operator : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Special Weapons Operator";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",          "ItemCompass",
                   "ItemWatch",        "TFAR_anprc152",
                   "ItemGPS",          "OPTRE_NVG",
                   "Rangefinder",      "Phoenix_CH252_Helmet",
                   "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",          "ItemCompass",
                          "ItemWatch",        "TFAR_anprc152",
                          "ItemGPS",          "OPTRE_NVG",
                          "Rangefinder",      "Phoenix_CH252_Helmet",
                          "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Special_Weapons_Operator_pack";
};

class ARMCO_Zulu_Sniper : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Zulu Sniper";
  uniformClass = "Zulu_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",          "ItemCompass",
                   "ItemWatch",        "TFAR_anprc152",
                   "ItemGPS",          "OPTRE_NVG",
                   "Rangefinder",      "Phoenix_CH252_Helmet",
                   "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",          "ItemCompass",
                          "ItemWatch",        "TFAR_anprc152",
                          "ItemGPS",          "OPTRE_NVG",
                          "Rangefinder",      "Phoenix_CH252_Helmet",
                          "ARMCO_Zulu_Armor", "OPTRE_HUD_g_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Zulu_Sniper_pack";
};

class ARMCO_Phoenix_Squad_Lead : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Squad Lead";
  uniformClass = "ARMCO_Uniform_Phoenix_O";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_HuntIR_monitor",  "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_Flashlight_XL50", "ACE_MapTools",
             "ACE_RangeCard",       "ACE_EarPlugs",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",           "kat_chestSeal",
             "kat_IO_FAST",         "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",          "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",        "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_HuntIR_monitor",  "ACE_IR_Strobe_Item",
      "ACE_IR_Strobe_Item",  "ACE_Flashlight_XL50", "ACE_MapTools",
      "ACE_RangeCard",       "ACE_EarPlugs",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_500",     "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "kat_IV_16",           "kat_IV_16",           "kat_chestSeal",
      "kat_IO_FAST",         "kat_PainkillerItem",  "kat_PainkillerItem",
      "ACE_splint",          "ACE_splint",          "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Squad_Lead_pack";
};

class ARMCO_Phoenix_Medic : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Medic";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {"ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs",
             "ACE_EntrenchingTool",
             "ACE_MapTools",
             "ACE_IR_Strobe_Item",
             "ACE_surgicalKit",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_amiodarone",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_atropine",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_chestSeal",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IO_FAST",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_IV_16",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_aatKit",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_ketamine",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_etomidate",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "kat_lidocaine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "ACE_morphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_nalbuphine",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_naloxone",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_nitroglycerin",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_norepinephrine",
             "kat_PainkillerItem",
             "kat_PainkillerItem",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "kat_phenylephrine",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_splint",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "ACE_tourniquet",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_EACA",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "kat_fentanyl",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_250",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_bloodIV_500",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_elasticBandage",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_fieldDressing",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_adenosine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "ACE_epinephrine",
             "kat_X_AED",
             "ACE_personalAidKit",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "ACE_salineIV_250",
             "kat_Pulseoximeter",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_retractor",
             "kat_scalpel",
             "kat_scalpel",
             "kat_scalpel",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_lorazepam",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_flumazenil",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_clamp",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_plate",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "kat_vacuum",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "ACE_quikclot",
             "kat_CarbonateItem",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_packingBandage",
             "ACE_plasmaIV",
             "OPTRE_Biofoam",
             "OPTRE_Biofoam",
             "ACE_CableTie",
             "ACE_CableTie",
             "ACE_EarPlugs"};
  respawnItems[] = {"ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs",
                    "ACE_EntrenchingTool",
                    "ACE_MapTools",
                    "ACE_IR_Strobe_Item",
                    "ACE_surgicalKit",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_amiodarone",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_atropine",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_chestSeal",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IO_FAST",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_IV_16",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_aatKit",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_ketamine",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_etomidate",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "kat_lidocaine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_nalbuphine",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_naloxone",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_nitroglycerin",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_norepinephrine",
                    "kat_PainkillerItem",
                    "kat_PainkillerItem",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "kat_phenylephrine",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "ACE_tourniquet",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_EACA",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "kat_fentanyl",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_250",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_fieldDressing",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_adenosine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "kat_X_AED",
                    "ACE_personalAidKit",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "ACE_salineIV_250",
                    "kat_Pulseoximeter",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_retractor",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_scalpel",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_lorazepam",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_flumazenil",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_clamp",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_plate",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "kat_vacuum",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "ACE_quikclot",
                    "kat_CarbonateItem",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_packingBandage",
                    "ACE_plasmaIV",
                    "OPTRE_Biofoam",
                    "OPTRE_Biofoam",
                    "ACE_CableTie",
                    "ACE_CableTie",
                    "ACE_EarPlugs"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple", "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple",
                        "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Medic_pack";
};

class ARMCO_Phoenix_Corpsmen : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Corpsmen";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G", "Put", "Throw"};
  items[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  respawnItems[] = {
      "ACE_EarPlugs",        "ACE_EntrenchingTool", "ACE_MapTools",
      "ACE_Flashlight_XL50", "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_SpraypaintBlue",  "ACE_SpraypaintBlack",
      "ACE_EarPlugs",        "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "kat_IO_FAST",
      "kat_IO_FAST",         "kat_fentanyl",        "kat_fentanyl",
      "kat_ketamine",        "kat_ketamine",        "kat_PainkillerItem",
      "kat_PainkillerItem",  "kat_amiodarone",      "kat_amiodarone",
      "kat_amiodarone",      "kat_amiodarone",      "kat_amiodarone",
      "kat_atropine",        "kat_atropine",        "kat_atropine",
      "kat_atropine",        "kat_atropine",        "kat_chestSeal",
      "kat_chestSeal",       "kat_chestSeal",       "kat_chestSeal",
      "kat_chestSeal",       "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IO_FAST",         "kat_IO_FAST",         "kat_IO_FAST",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_IV_16",           "kat_IV_16",           "kat_IV_16",
      "kat_aatKit",          "kat_aatKit",          "kat_aatKit",
      "kat_aatKit",          "kat_aatKit",          "kat_ketamine",
      "kat_ketamine",        "kat_ketamine",        "kat_ketamine",
      "kat_ketamine",        "kat_lidocaine",       "kat_lidocaine",
      "kat_lidocaine",       "kat_lidocaine",       "kat_lidocaine",
      "ACE_morphine",        "ACE_morphine",        "ACE_morphine",
      "ACE_morphine",        "ACE_morphine",        "kat_nalbuphine",
      "kat_nalbuphine",      "kat_nalbuphine",      "kat_nalbuphine",
      "kat_nalbuphine",      "kat_naloxone",        "kat_naloxone",
      "kat_naloxone",        "kat_naloxone",        "kat_naloxone",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_nitroglycerin",
      "kat_nitroglycerin",   "kat_nitroglycerin",   "kat_norepinephrine",
      "kat_norepinephrine",  "kat_norepinephrine",  "kat_norepinephrine",
      "kat_norepinephrine",  "kat_PainkillerItem",  "kat_PainkillerItem",
      "kat_phenylephrine",   "kat_phenylephrine",   "kat_phenylephrine",
      "kat_phenylephrine",   "kat_phenylephrine",   "ACE_splint",
      "ACE_splint",          "ACE_splint",          "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",      "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet",
      "kat_fentanyl",        "kat_fentanyl",        "kat_fentanyl",
      "kat_fentanyl",        "kat_fentanyl",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_250",     "ACE_bloodIV_250",     "ACE_bloodIV_500",
      "ACE_bloodIV_500",     "ACE_bloodIV_500",     "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_epinephrine",
      "ACE_epinephrine",     "ACE_epinephrine",     "ACE_salineIV_250",
      "ACE_salineIV_250",    "ACE_salineIV_250",    "kat_Pulseoximeter",
      "kat_Pulseoximeter",   "kat_flumazenil",      "kat_flumazenil",
      "kat_flumazenil",      "kat_flumazenil",      "kat_flumazenil",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "kat_CarbonateItem",   "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_plasmaIV",        "OPTRE_Biofoam",       "OPTRE_Biofoam",
      "ACE_CableTie",        "ACE_CableTie",        "kat_etomidate",
      "kat_etomidate",       "kat_lorazepam",       "kat_lorazepam",
      "ACE_surgicalKit"};
  magazines[] = {"SmokeShellYellow", "SmokeShellYellow", "SmokeShellYellow",
                 "SmokeShellPurple"};
  respawnMagazines[] = {"SmokeShellYellow", "SmokeShellYellow",
                        "SmokeShellYellow", "SmokeShellPurple"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Medical_Armor",
                   "OPTRE_HUD_r_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Medical_Armor",
                          "OPTRE_HUD_r_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Corpsmen_pack";
};

class ARMCO_Phoenix_JTAC : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix JTAC";
  uniformClass = "ARMCO_Uniform_Phoenix_O";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G", "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37GL", "ARMCO_OPTRE_M6G",
                      "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_HuntIR_monitor",  "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_Flashlight_XL50", "ACE_MapTools",
             "ACE_RangeCard",       "ACE_EarPlugs",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",           "kat_chestSeal",
             "kat_IO_FAST",         "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",          "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",        "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",        "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_HuntIR_monitor",  "ACE_IR_Strobe_Item",
      "ACE_IR_Strobe_Item",  "ACE_Flashlight_XL50", "ACE_MapTools",
      "ACE_RangeCard",       "ACE_EarPlugs",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV",         "ACE_bloodIV_250",
      "ACE_bloodIV_500",     "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",        "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",   "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage",  "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage",  "ACE_packingBandage",
      "kat_IV_16",           "kat_IV_16",           "kat_chestSeal",
      "kat_IO_FAST",         "kat_PainkillerItem",  "kat_PainkillerItem",
      "ACE_splint",          "ACE_splint",          "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"3Rnd_UGL_FlareCIR_F",    "3Rnd_UGL_FlareRed_F",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag", "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_EyePiece",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_EyePiece",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_JTAC_pack";
};

class ARMCO_Phoenix_Sniper : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Sniper";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_SRS99C_OPTRE_SRS99C_Scope",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_SRS99C_OPTRE_SRS99C_Scope",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_4Rnd_145x114_APFSDS_Mag",
                 "OPTRE_4Rnd_145x114_APFSDS_Mag",
                 "OPTRE_4Rnd_145x114_APFSDS_Mag",
                 "OPTRE_4Rnd_145x114_APFSDS_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_4Rnd_145x114_APFSDS_Mag",
                        "OPTRE_4Rnd_145x114_APFSDS_Mag",
                        "OPTRE_4Rnd_145x114_APFSDS_Mag",
                        "OPTRE_4Rnd_145x114_APFSDS_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_HUD_p_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_HUD_p_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Sniper_pack";
};

class ARMCO_Phoenix_Engineer : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Engineer";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",
             "ACE_CableTie",        "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
             "ACE_IR_Strobe_Item",  "ACE_MapTools",
             "ACE_RangeCard",       "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ToolKit",
             "ACE_bloodIV",         "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",
             "ACE_bloodIV_500",     "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage",
             "kat_IV_16",           "kat_IV_16",
             "kat_chestSeal",       "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem",
             "ACE_splint",          "ACE_splint",
             "ACE_tourniquet",      "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {"ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_CableTie",
                    "ACE_CableTie",        "ACE_EarPlugs",
                    "ACE_EntrenchingTool", "ACE_IR_Strobe_Item",
                    "ACE_IR_Strobe_Item",  "ACE_MapTools",
                    "ACE_RangeCard",       "ACE_Flashlight_XL50",
                    "ACE_EarPlugs",        "ToolKit",
                    "ACE_bloodIV",         "ACE_bloodIV",
                    "ACE_bloodIV",         "ACE_bloodIV_250",
                    "ACE_bloodIV_500",     "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_quikclot",
                    "ACE_quikclot",        "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_fieldDressing",   "ACE_fieldDressing",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_elasticBandage",
                    "ACE_elasticBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "ACE_packingBandage",  "ACE_packingBandage",
                    "kat_IV_16",           "kat_IV_16",
                    "kat_chestSeal",       "kat_IO_FAST",
                    "kat_PainkillerItem",  "kat_PainkillerItem",
                    "ACE_splint",          "ACE_splint",
                    "ACE_tourniquet",      "ACE_tourniquet",
                    "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Engineer_pack";
};

class ARMCO_Phoenix_EOD : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix EOD";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder",
               "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M41_SSR",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
               "Put",
               "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M41_SSR",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope",
                      "Put",
                      "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",         "ItemCompass",
                   "ItemWatch",       "TFAR_anprc152",
                   "ItemGPS",         "OPTRE_NVG",
                   "Rangefinder",     "Phoenix_CH252_Helmet",
                   "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",         "ItemCompass",
                          "ItemWatch",       "TFAR_anprc152",
                          "ItemGPS",         "OPTRE_NVG",
                          "Rangefinder",     "Phoenix_CH252_Helmet",
                          "ARMCO_EOD_Armor", "OPTRE_HUD_b_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_EOD_pack";
};

class ARMCO_Phoenix_Auto_Rifleman : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Auto Rifleman";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_M73",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder", "ARMCO_OPTRE_M73",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_200Rnd_95x40_Box_Tracer",
                 "OPTRE_100Rnd_95x40_Box",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_100Rnd_95x40_Box",
                 "OPTRE_200Rnd_95x40_Box_Tracer",
                 "OPTRE_200Rnd_95x40_Box_Tracer",
                 "SmokeShellYellow",
                 "SmokeShellYellow"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_200Rnd_95x40_Box_Tracer",
                        "OPTRE_100Rnd_95x40_Box",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_100Rnd_95x40_Box",
                        "OPTRE_200Rnd_95x40_Box_Tracer",
                        "OPTRE_200Rnd_95x40_Box_Tracer",
                        "SmokeShellYellow",
                        "SmokeShellYellow"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_HUD_p_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_HUD_p_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Auto_Rifleman_pack";
};

class ARMCO_Phoenix_Special_Weapons_Operator
    : OPTRE_UNSC_Marine_Soldier_Unarmed {
  faction = "ARMCO_Armco_Faction";
  side = 1;
  displayName = "Phoenix Special Weapons Operator";
  uniformClass = "Phoenix_BDU";
  weapons[] = {"Rangefinder", "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
               "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  respawnWeapons[] = {"Rangefinder",
                      "ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope",
                      "ARMCO_OPTRE_M6G_OPTRE_M6G_Scope", "Put", "Throw"};
  items[] = {"ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
             "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
             "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
             "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
             "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
             "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
             "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
             "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
             "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
             "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
             "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
             "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
             "ACE_tourniquet",      "ACE_tourniquet"};
  respawnItems[] = {
      "ACE_CableTie",        "ACE_CableTie",       "ACE_CableTie",
      "ACE_CableTie",        "ACE_CableTie",       "ACE_EarPlugs",
      "ACE_EntrenchingTool", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
      "ACE_MapTools",        "ACE_RangeCard",      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",        "ACE_bloodIV",        "ACE_bloodIV",
      "ACE_bloodIV",         "ACE_bloodIV_250",    "ACE_bloodIV_500",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_quikclot",       "ACE_quikclot",
      "ACE_quikclot",        "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_fieldDressing",  "ACE_fieldDressing",
      "ACE_fieldDressing",   "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_elasticBandage",  "ACE_elasticBandage", "ACE_elasticBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "ACE_packingBandage",
      "ACE_packingBandage",  "ACE_packingBandage", "kat_IV_16",
      "kat_IV_16",           "kat_chestSeal",      "kat_IO_FAST",
      "kat_PainkillerItem",  "kat_PainkillerItem", "ACE_splint",
      "ACE_splint",          "ACE_tourniquet",     "ACE_tourniquet",
      "ACE_tourniquet",      "ACE_tourniquet"};
  magazines[] = {"SmokeShellYellow",
                 "SmokeShellYellow",
                 "SmokeShellRed",
                 "SmokeShellBlue",
                 "OPTRE_8Rnd_127x40_AP_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_32Rnd_762x51_Mag",
                 "OPTRE_8Rnd_127x40_AP_Mag"};
  respawnMagazines[] = {"SmokeShellYellow",
                        "SmokeShellYellow",
                        "SmokeShellRed",
                        "SmokeShellBlue",
                        "OPTRE_8Rnd_127x40_AP_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_32Rnd_762x51_Mag",
                        "OPTRE_8Rnd_127x40_AP_Mag"};
  linkedItems[] = {"ItemMap",
                   "ItemCompass",
                   "ItemWatch",
                   "TFAR_anprc152",
                   "ItemGPS",
                   "OPTRE_NVG",
                   "Rangefinder",
                   "Phoenix_CH252_Helmet",
                   "ARMCO_Phoenix_Armor",
                   "OPTRE_HUD_p_Glasses",
                   "OPTRE_NVG"};
  respawnLinkedItems[] = {"ItemMap",
                          "ItemCompass",
                          "ItemWatch",
                          "TFAR_anprc152",
                          "ItemGPS",
                          "OPTRE_NVG",
                          "Rangefinder",
                          "Phoenix_CH252_Helmet",
                          "ARMCO_Phoenix_Armor",
                          "OPTRE_HUD_p_Glasses",
                          "OPTRE_NVG"};
  backpack = "ARMCO_Phoenix_Special_Weapons_Operator_pack";
};

class ARMCO_Alpha_Squad_Lead_pack : ARMCO_Rucksack_Hard_Alpha {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_Medic_pack : ARMCO_Rucksack_Hard_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 2;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 10;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 10;
      name = "kat_ketamine";
    };
    class _xx_kat_etomidate {
      count = 5;
      name = "kat_etomidate";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_EACA {
      count = 5;
      name = "kat_EACA";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_adenosine {
      count = 5;
      name = "ACE_adenosine";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_kat_X_AED {
      count = 1;
      name = "kat_X_AED";
    };
    class _xx_ACE_personalAidKit {
      count = 1;
      name = "ACE_personalAidKit";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 1;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_retractor {
      count = 4;
      name = "kat_retractor";
    };
    class _xx_kat_scalpel {
      count = 3;
      name = "kat_scalpel";
    };
    class _xx_kat_lorazepam {
      count = 5;
      name = "kat_lorazepam";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_kat_clamp {
      count = 5;
      name = "kat_clamp";
    };
    class _xx_kat_plate {
      count = 5;
      name = "kat_plate";
    };
    class _xx_kat_vacuum {
      count = 5;
      name = "kat_vacuum";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_ACE_EarPlugs {
      count = 1;
      name = "ACE_EarPlugs";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_Corpsman_pack : ARMCO_Rucksack_tSoft_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 1;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 8;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 5;
      name = "kat_ketamine";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 2;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_kat_etomidate {
      count = 2;
      name = "kat_etomidate";
    };
    class _xx_kat_lorazepam {
      count = 2;
      name = "kat_lorazepam";
    };
    class _xx_ACE_surgicalKit {
      count = 1;
      name = "ACE_surgicalKit";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_Engineer_pack : ARMCO_Rucksack_tSoft_Alpha {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_Special_Weapons_Operator_pack : ARMCO_Rucksack_tSoft_Alpha {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_EOD_pack : ARMCO_Rucksack_tSoft_Alpha {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Alpha_Marksman_pack : ARMCO_Rucksack_tSoft_Alpha {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Sqaud_Lead_pack : ARMCO_Rucksack_Hard_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Medic_pack : ARMCO_Rucksack_Hard_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 2;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 10;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 10;
      name = "kat_ketamine";
    };
    class _xx_kat_etomidate {
      count = 5;
      name = "kat_etomidate";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_EACA {
      count = 5;
      name = "kat_EACA";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_adenosine {
      count = 5;
      name = "ACE_adenosine";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_kat_X_AED {
      count = 1;
      name = "kat_X_AED";
    };
    class _xx_ACE_personalAidKit {
      count = 1;
      name = "ACE_personalAidKit";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 1;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_retractor {
      count = 4;
      name = "kat_retractor";
    };
    class _xx_kat_scalpel {
      count = 3;
      name = "kat_scalpel";
    };
    class _xx_kat_lorazepam {
      count = 5;
      name = "kat_lorazepam";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_kat_clamp {
      count = 5;
      name = "kat_clamp";
    };
    class _xx_kat_plate {
      count = 5;
      name = "kat_plate";
    };
    class _xx_kat_vacuum {
      count = 5;
      name = "kat_vacuum";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_ACE_EarPlugs {
      count = 1;
      name = "ACE_EarPlugs";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Corpsman_pack : ARMCO_Rucksack_tSoft_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 1;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 8;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 5;
      name = "kat_ketamine";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 2;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_kat_etomidate {
      count = 2;
      name = "kat_etomidate";
    };
    class _xx_kat_lorazepam {
      count = 2;
      name = "kat_lorazepam";
    };
    class _xx_ACE_surgicalKit {
      count = 1;
      name = "ACE_surgicalKit";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Special_Weapons_Operator_pack : ARMCO_Rucksack_tSoft_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Engineer_pack : ARMCO_Rucksack_tSoft_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_EOD_pack : ARMCO_Rucksack_tSoft_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Marksmen_pack : ARMCO_Rucksack_tSoft_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Sabre_Rifleman_pack : ARMCO_Rucksack_tSoft_Sabre {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
    class _xx_kat_Painkiller {
      count = 2;
      magazine = "kat_Painkiller";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Squad_Lead_pack : ARMCO_Rucksack_Hard_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Medic_pack : ARMCO_Rucksack_Hard_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 2;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 10;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 10;
      name = "kat_ketamine";
    };
    class _xx_kat_etomidate {
      count = 5;
      name = "kat_etomidate";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_EACA {
      count = 5;
      name = "kat_EACA";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_adenosine {
      count = 5;
      name = "ACE_adenosine";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_kat_X_AED {
      count = 1;
      name = "kat_X_AED";
    };
    class _xx_ACE_personalAidKit {
      count = 1;
      name = "ACE_personalAidKit";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 1;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_retractor {
      count = 4;
      name = "kat_retractor";
    };
    class _xx_kat_scalpel {
      count = 3;
      name = "kat_scalpel";
    };
    class _xx_kat_lorazepam {
      count = 5;
      name = "kat_lorazepam";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_kat_clamp {
      count = 5;
      name = "kat_clamp";
    };
    class _xx_kat_plate {
      count = 5;
      name = "kat_plate";
    };
    class _xx_kat_vacuum {
      count = 5;
      name = "kat_vacuum";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_ACE_EarPlugs {
      count = 1;
      name = "ACE_EarPlugs";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_EOD_pack : ARMCO_Rucksack_tSoft_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Engineer_pack : ARMCO_Rucksack_tSoft_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Refleman_pack : ARMCO_Rucksack_tSoft_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Special_Weapons_Operator_pack : ARMCO_Rucksack_tSoft_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Zulu_Sniper_pack : ARMCO_Rucksack_tSoft_Zulu {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Squad_Lead_pack : ARMCO_Rucksack_Hard_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Medic_pack : ARMCO_Rucksack_Hard_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 2;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 10;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 10;
      name = "kat_ketamine";
    };
    class _xx_kat_etomidate {
      count = 5;
      name = "kat_etomidate";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_EACA {
      count = 5;
      name = "kat_EACA";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_adenosine {
      count = 5;
      name = "ACE_adenosine";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_kat_X_AED {
      count = 1;
      name = "kat_X_AED";
    };
    class _xx_ACE_personalAidKit {
      count = 1;
      name = "ACE_personalAidKit";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 1;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_retractor {
      count = 4;
      name = "kat_retractor";
    };
    class _xx_kat_scalpel {
      count = 3;
      name = "kat_scalpel";
    };
    class _xx_kat_lorazepam {
      count = 5;
      name = "kat_lorazepam";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_kat_clamp {
      count = 5;
      name = "kat_clamp";
    };
    class _xx_kat_plate {
      count = 5;
      name = "kat_plate";
    };
    class _xx_kat_vacuum {
      count = 5;
      name = "kat_vacuum";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_ACE_EarPlugs {
      count = 1;
      name = "ACE_EarPlugs";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Corpsmen_pack : ARMCO_Rucksack_tSoft_Medical {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_SmokeShellYellow {
      count = 3;
      magazine = "SmokeShellYellow";
    };
    class _xx_SmokeShellPurple {
      count = 1;
      magazine = "SmokeShellPurple";
    };
  };
  class TransportItems {
    class _xx_kat_amiodarone {
      count = 5;
      name = "kat_amiodarone";
    };
    class _xx_kat_atropine {
      count = 5;
      name = "kat_atropine";
    };
    class _xx_kat_chestSeal {
      count = 5;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 8;
      name = "kat_IO_FAST";
    };
    class _xx_kat_IV_16 {
      count = 15;
      name = "kat_IV_16";
    };
    class _xx_kat_aatKit {
      count = 5;
      name = "kat_aatKit";
    };
    class _xx_kat_ketamine {
      count = 5;
      name = "kat_ketamine";
    };
    class _xx_kat_lidocaine {
      count = 5;
      name = "kat_lidocaine";
    };
    class _xx_ACE_morphine {
      count = 5;
      name = "ACE_morphine";
    };
    class _xx_kat_nalbuphine {
      count = 5;
      name = "kat_nalbuphine";
    };
    class _xx_kat_naloxone {
      count = 5;
      name = "kat_naloxone";
    };
    class _xx_kat_nitroglycerin {
      count = 5;
      name = "kat_nitroglycerin";
    };
    class _xx_kat_norepinephrine {
      count = 5;
      name = "kat_norepinephrine";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_kat_phenylephrine {
      count = 5;
      name = "kat_phenylephrine";
    };
    class _xx_ACE_splint {
      count = 5;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 5;
      name = "ACE_tourniquet";
    };
    class _xx_kat_fentanyl {
      count = 5;
      name = "kat_fentanyl";
    };
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 3;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 3;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_elasticBandage {
      count = 25;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_epinephrine {
      count = 5;
      name = "ACE_epinephrine";
    };
    class _xx_ACE_salineIV_250 {
      count = 3;
      name = "ACE_salineIV_250";
    };
    class _xx_kat_Pulseoximeter {
      count = 2;
      name = "kat_Pulseoximeter";
    };
    class _xx_kat_flumazenil {
      count = 5;
      name = "kat_flumazenil";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_kat_CarbonateItem {
      count = 1;
      name = "kat_CarbonateItem";
    };
    class _xx_ACE_packingBandage {
      count = 10;
      name = "ACE_packingBandage";
    };
    class _xx_ACE_plasmaIV {
      count = 1;
      name = "ACE_plasmaIV";
    };
    class _xx_OPTRE_Biofoam {
      count = 2;
      name = "OPTRE_Biofoam";
    };
    class _xx_ACE_CableTie {
      count = 2;
      name = "ACE_CableTie";
    };
    class _xx_kat_etomidate {
      count = 2;
      name = "kat_etomidate";
    };
    class _xx_kat_lorazepam {
      count = 2;
      name = "kat_lorazepam";
    };
    class _xx_ACE_surgicalKit {
      count = 1;
      name = "ACE_surgicalKit";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_JTAC_pack : ARMCO_Rucksack_Hard_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Sniper_pack : ARMCO_Rucksack_tSoft_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Engineer_pack : ARMCO_Rucksack_tSoft_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_EOD_pack : ARMCO_Rucksack_tSoft_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Auto_Rifleman_pack : ARMCO_Rucksack_tSoft_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 2;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
    class _xx_OPTRE_100Rnd_95x40_Box {
      count = 1;
      magazine = "OPTRE_100Rnd_95x40_Box";
    };
    class _xx_OPTRE_200Rnd_95x40_Box_Tracer {
      count = 2;
      magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
    };
    class _xx_SmokeShellYellow {
      count = 2;
      magazine = "SmokeShellYellow";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};

class ARMCO_Phoenix_Special_Weapons_Operator_pack
    : ARMCO_Rucksack_tSoft_Phoenix {
  scope = 1;
  scopeCurator = 1;
  ScopeArsenal = 1;
  class TransportMagazines {
    class _xx_OPTRE_8Rnd_127x40_AP_Mag {
      count = 1;
      magazine = "OPTRE_8Rnd_127x40_AP_Mag";
    };
  };
  class TransportItems {
    class _xx_ACE_bloodIV {
      count = 3;
      name = "ACE_bloodIV";
    };
    class _xx_ACE_bloodIV_250 {
      count = 1;
      name = "ACE_bloodIV_250";
    };
    class _xx_ACE_bloodIV_500 {
      count = 1;
      name = "ACE_bloodIV_500";
    };
    class _xx_ACE_quikclot {
      count = 10;
      name = "ACE_quikclot";
    };
    class _xx_ACE_fieldDressing {
      count = 15;
      name = "ACE_fieldDressing";
    };
    class _xx_ACE_elasticBandage {
      count = 5;
      name = "ACE_elasticBandage";
    };
    class _xx_ACE_packingBandage {
      count = 5;
      name = "ACE_packingBandage";
    };
    class _xx_kat_IV_16 {
      count = 2;
      name = "kat_IV_16";
    };
    class _xx_kat_chestSeal {
      count = 1;
      name = "kat_chestSeal";
    };
    class _xx_kat_IO_FAST {
      count = 1;
      name = "kat_IO_FAST";
    };
    class _xx_kat_PainkillerItem {
      count = 2;
      name = "kat_PainkillerItem";
    };
    class _xx_ACE_splint {
      count = 2;
      name = "ACE_splint";
    };
    class _xx_ACE_tourniquet {
      count = 4;
      name = "ACE_tourniquet";
    };
  };
  class TransportWeapons {};
};
