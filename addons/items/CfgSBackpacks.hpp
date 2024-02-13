class OPTRE_ILCS_Rucksack_Black;
// ODST Hard Backpacks
class ARMCO_Rucksack_Hard_Alpha : OPTRE_ILCS_Rucksack_Black {
  dlc = "ARMCO";
  author = "Belhun";
  maximumLoad = 400;
  mass = 50;
  displayname = "[ARMCO][C]Hard Rucksack [Alpha]";
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

  displayname = "[ARMCO][C]Hard Rucksack [Sabre]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_sabre_co.paa"};
};
class ARMCO_Rucksack_Hard_Zulu : ARMCO_Rucksack_Hard_Alpha {

  displayname = "[ARMCO][C]Hard Rucksack [Zulu]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_zulu_co.paa"};
};
class ARMCO_Rucksack_Hard_Phoenix : ARMCO_Rucksack_Hard_Alpha {

  displayname = "[ARMCO][C]Hard Rucksack [Phoenix]";
  hiddenSelections[] = {"camo1", "biofoam"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_phoenix_co.paa"};
};
class ARMCO_Rucksack_Hard_Medical : ARMCO_Rucksack_Hard_Alpha {

  displayname = "[ARMCO][D]Hard Rucksack [Medical]";
  hiddenSelections[] = {"camo1"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_hard_medical_co.paa"};
};

// Basic Backpacks
class OPTRE_UNSC_Rucksack_Heavy;
class ARMCO_Rucksack_Soft_Alpha : OPTRE_UNSC_Rucksack_Heavy {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][A] Soft Rucksack (Alpha)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_alpha_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Sabre : OPTRE_UNSC_Rucksack_Heavy {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][A] Soft Rucksack (Sabre)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_sabre_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Zulu : OPTRE_UNSC_Rucksack_Heavy {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][A] Soft Rucksack (Zulu)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_zulu_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Phoenix : OPTRE_UNSC_Rucksack_Heavy {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][A] Soft Rucksack (Phoenix)";
  hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_phoenix_co.paa", ""};
};
class ARMCO_Rucksack_Soft_Medical : OPTRE_UNSC_Rucksack_Heavy {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][B] Soft Rucksack (Medical)";
  hiddenSelections[] = {"camo", "camo2", "B_Addons", "B_Radio"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\backpack_odst_soft_medical_co.paa", ""};
};

class B_Kitbag_base;
// Kitbags
class ARMCO_Kitbag_Black : B_Kitbag_base {
  author = "Belhun";
  displayname = "[ARMCO][H] Kitbag (Black)";
  scope = 2;
  maximumLoad = 320;
  picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_blk.paa"};
};
class ARMCO_Kitbag_Alpha : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][E] Kitbag (Alpha)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_alpha_co.paa"};
};
class ARMCO_Kitbag_Sabre : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][E] Kitbag (Sabre)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_sabre_co.paa"};
};
class ARMCO_Kitbag_Zulu : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][E] Kitbag (Zulu)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_zulu_co.paa"};
};
class ARMCO_Kitbag_Zulu_Camo : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][G] Zulu Kitbag (Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_zulu_camo_co.paa"};
};
class ARMCO_Kitbag_EOD : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][F] Kitbag (EOD)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_eod_co.paa"};
};
class ARMCO_Kitbag_Phoenix : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][E] Kitbag (Phoenix)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_phoenix_co.paa"};
};
class ARMCO_Kitbag_Corpsman : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][F] Kitbag (Corpsman)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_corpsman_co.paa"};
};
class ARMCO_Kitbag_Corpsman_Camo : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][G] Kitbag (Corpsman Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_corpsman_camo_co.paa"};
};
class ARMCO_Kitbag_Medic : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][F] Kitbag (Medic)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_medic_co.paa"};
};
class ARMCO_Kitbag_Medic_Camo : ARMCO_Kitbag_Black {
  displayname = "[ARMCO][G] Kitbag (Medic Camo)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\backpacks\Kitbag\backpack_kitbag_medic_camo_co.paa"};
};