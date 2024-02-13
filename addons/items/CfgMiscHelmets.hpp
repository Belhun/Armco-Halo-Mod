class U_B_CombatUniform_mcam;
class HeadgearItem;
class H_Beret_02;
class V_PlateCarrierGL_rgr;
class OPTRE_UNSC_Hat_Base;
class OPTRE_CPD_Beret;
class OPTRE_h_PatrolCap_Brown;

class ARMCO_Beret_Rifleman : OPTRE_CPD_Beret {
  author = "Belhun";
  displayname = "[ARMCO][B] Rifleman Beret";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\armco_beret_regular_co.paa"};
};

class ARMCO_Beret_Medical : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] Medical Beret";
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\armco_beret_medical_co.paa"};
};
class ARMCO_Beret_TL : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] TL Beret";
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\armco_beret_teamleader_co.paa"};
};
class ARMCO_Beret_Veteran : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] Beret (Distinguished Veteran)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\armco_beret_special_co.paa"};
};
class ARMCO_Beret_Security : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] Security Bureau Beret";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\security\helmet\helmet_beret_security_co.paa"};
};
class ARMCO_Beret_EOD : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] Beret (EOD)";
  hiddenSelectionsTextures[] = {"armco_items\data\hats\armco_beret_eod_co.paa"};
};
class ARMCO_Beret_ODST : ARMCO_Beret_Rifleman {
  displayname = "[ARMCO][B] Beret (ODST)";
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\armco_beret_odst_co.paa"};
};
class ARMCO_PatrolCap_Hat : OPTRE_h_PatrolCap_Brown {
  author = "Belhun";
  displayname = "[ARMCO][B] Patrol Cap";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {
      "armco_items\data\hats\cappatrol_Armco_co.paa"};
};