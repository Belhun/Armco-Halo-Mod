// Need to Define ItemInfo to use it in the Helmets(and maby others)
class ItemInfo {
  type = 616;
  hmdType = 0;
  uniformModel = "";
  modelOff = "";
  mass = 1;
};
class OPTRE_UNSC_CH252_Helmet_WDL;
// class OPTRE_UNSC_CH252_Helmet_WDL;
class OPTRE_UNSC_CH252_Helmet3_WDL;
// Alpha Helmet
class Alpha_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad CH252 Helmet (Alpha)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_alpha_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_alpha_co.paa",
        "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  };
};
// Sabre Helmet
class Sabre_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad CH252 Helmet (Sabre)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_sabre_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_sabre_co.paa",
        "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  };
};
// Phoenix Helmet
class Phoenix_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad CH252 Helmet (Phoenix)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_phoenix_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_phoenix_co.paa",
        "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  };
};
// Zulu Helmet
class Zulu_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad CH252 Helmet (Zulu)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
        "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  };
};
// Medical Helmet
class Medical_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit CH252 Helmet (Medical)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_medic_co.paa",
      "armco_armours\data\marine\helmets\visors\medical_visor_co.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_medic_co.paa",
        "armco_armours\data\marine\helmets\visors\medical_visor_co.paa"};
  };
};
// EOD Helmet
class EOD_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit CH252 Helmet (EOD)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_eod_co.paa",
      "armco_armours\data\marine\helmets\visors\eod_visor_co.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_eod_co.paa",
        "armco_armours\data\marine\helmets\visors\eod_visor_co.paa"};
  };
};
class ARMCO_Generic_CH252_Ghillie_Helmet : OPTRE_UNSC_CH252_Helmet3_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit CH252 Helmet (Ghillie)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
        "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};
  };
};

// ODST Helmet
class OPTRE_UNSC_CH252D_Helmet; // Brings in the base Helmet for ODST Helmet

class Alpha_CH252D_Helmet : OPTRE_UNSC_CH252D_Helmet {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Alpha ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Alpha_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\odst\squad_helmets\odst_helmet_Alpha_co.paa",
        "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  };
};
class Sabre_CH252D_Helmet : OPTRE_UNSC_CH252D_Helmet {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Sabre ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Sabre_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\odst\squad_helmets\odst_helmet_Sabre_co.paa",
        "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  };
};
class Zulu_CH252D_Helmet : OPTRE_UNSC_CH252D_Helmet {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Zulu ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Zulu_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\odst\squad_helmets\odst_helmet_Zulu_co.paa",
        "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  };
};
class Phoenix_CH252D_Helmet : OPTRE_UNSC_CH252D_Helmet {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Phoenix ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Phoenix_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelectionsTextures[] = {
        "armco_armours\data\odst\squad_helmets\odst_helmet_Phoenix_co.paa",
        "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  };
};