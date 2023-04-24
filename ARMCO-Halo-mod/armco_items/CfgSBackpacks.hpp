class OPTRE_ILCS_Rucksack_Black;
// ODST Hard Backpacks
class ARMCO_Rucksack_Hard_Alpha : OPTRE_ILCS_Rucksack_Black {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  maximumLoad = 400;
  mass = 50;
  displayName = "[A][ARMCO]Hard Rucksack [Alpha]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_alpha_co.paa"};
  // TFAR Config
  tf_encryptionCode = "tf_west_radio_code";
  tf_dialog = "rt1523g_radio_dialog";
  tf_subtype = "digital_lr";
  tf_range = 25000;
  tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  tf_hasLRradio = 1;
};
class ARMCO_Rucksack_Hard_Sabre : ARMCO_Rucksack_Hard_Alpha {

  displayName = "[A][ARMCO]Hard Rucksack [Sabre]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_sabre_co.paa"};
};
class ARMCO_Rucksack_Hard_Zulu : ARMCO_Rucksack_Hard_Alpha {

  displayName = "[A][ARMCO]Hard Rucksack [Zulu]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_zulu_co.paa"};
};
class ARMCO_Rucksack_Hard_Phoenix : ARMCO_Rucksack_Hard_Alpha {

  displayName = "[A][ARMCO]Hard Rucksack [Phoenix]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_phoenix_co.paa"};
};
class ARMCO_Rucksack_Hard_Medical : ARMCO_Rucksack_Hard_Alpha {

  displayName = "[A][ARMCO]Hard Rucksack [Medical]";
  hiddenSelections[] = {"camo1"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_medical_co.paa"};
};

// Basic Backpacks
class ARMCO_PMC_UNSC_Rucksack;
class ARMCO_Rucksack_Soft_Alpha : ARMCO_PMC_UNSC_Rucksack {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Soft Rucksack (Alpha)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_alpha_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Sabre : ARMCO_PMC_UNSC_Rucksack {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Soft Rucksack (Sabre)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_sabre_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Zulu : ARMCO_PMC_UNSC_Rucksack {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Soft Rucksack (Zulu)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_zulu_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Phoenix : ARMCO_PMC_UNSC_Rucksack {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Soft Rucksack (Phoenix)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_phoenix_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Medical : ARMCO_PMC_UNSC_Rucksack {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Soft Rucksack (Medical)";
  hiddenSelections[] = {"camo", "camo2", "B_Addons", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_medical_co.paa", ""};
};

class B_Kitbag_base;
// Kitbags
class ARMCO_Kitbag_Black : B_Kitbag_base {
  author = "Belhun";
  displayName = "[A][ARMCO] Kitbag (Black)";
  scope = 2;
  maximumLoad = 320;
  picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_blk.paa"};
};
class ARMCO_Kitbag_Alpha : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Alpha)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_alpha_co.paa"};
};
class ARMCO_Kitbag_Sabre : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Sabre)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_sabre_co.paa"};
};
class ARMCO_Kitbag_Zulu : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Zulu)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_zulu_co.paa"};
};
class ARMCO_Kitbag_Zulu_Camo : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Zulu Kitbag (Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_zulu_camo_co.paa"};
};
class ARMCO_Kitbag_EOD : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (EOD)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_eod_co.paa"};
};
class ARMCO_Kitbag_Phoenix : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Phoenix)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_phoenix_co.paa"};
};
class ARMCO_Kitbag_Corpsman : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Corpsman)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_corpsman_co.paa"};
};
class ARMCO_Kitbag_Corpsman_Camo : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Corpsman Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_corpsman_camo_co.paa"};
};
class ARMCO_Kitbag_Medic : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Medic)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_medic_co.paa"};
};
class ARMCO_Kitbag_Medic_Camo : ARMCO_Kitbag_Black {
  displayName = "[A][ARMCO] Kitbag (Medic Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_medic_camo_co.paa"};
};