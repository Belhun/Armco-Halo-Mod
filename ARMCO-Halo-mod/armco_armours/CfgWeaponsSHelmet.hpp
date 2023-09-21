// Need to Define ItemInfo to use it in the Helmets(and maby others)

// class ItemInfo {
//   displayName="";
//   nameSound="";
//   scope = 2;
//   picture="";
//   class Library {
// 	libTextDesc = "";
//   };
//   type = 616;
//   hmdType = 0;
//   uniformModel = "";
//   modelOff = "";
//   mass = 1;
//   ace_hearing_protection = 1.10; //Hearing protection
//   ace_hearing_lowerVolume = 0.10;
//   model="";
//   simulation = "";
//   fireLightDuration = "";
//   fireLightIntensity = "";
//   fireLightDiffuse = "";

// };
class OPTRE_UNSC_CH252_Helmet_WDL;
// class OPTRE_UNSC_CH252_Helmet_WDL;
class OPTRE_UNSC_CH252_Helmet3_WDL;
// Alpha Helmet
class Alpha_CH252_Helmet : OPTRE_UNSC_CH252_Helmet_WDL {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][S] Squad CH252 Helmet (Alpha)";
  hiddenSelectionsTextures[] = {
    "armco_armours\data\marine\helmets\helmet_alpha_co.paa",
    "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"
  };
  ace_hearing_protection = 0.95;
};
// Sabre Helmet
class Sabre_CH252_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][S] Squad CH252 Helmet (Sabre)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_sabre_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};

};
// Phoenix Helmet
class Phoenix_CH252_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][S] Squad CH252 Helmet (Phoenix)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_phoenix_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};

};
// Zulu Helmet
class Zulu_CH252_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][S] Squad CH252 Helmet (Zulu)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa"};

};
// Medical Helmet
class Medical_CH252_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][V] Unit CH252 Helmet (Medical)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_medic_co.paa",
      "armco_armours\data\marine\helmets\visors\medical_visor_co.paa"};

};
// EOD Helmet
class EOD_CH252_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][W] Unit CH252 Helmet (EOD)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_eod_co.paa",
      "armco_armours\data\marine\helmets\visors\eod_visor_co.paa"};

};
class ARMCO_Generic_CH252_Ghillie_Helmet : Alpha_CH252_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][Y] Unit CH252 Helmet (Ghillie)";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
      "armco_armours\data\marine\helmets\visors\Helmet_Visor_ca.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa"};

};

// ODST Helmet
class OPTRE_UNSC_CH252D_Helmet; // Brings in the base Helmet for ODST Helmet

class Alpha_CH252D_Helmet : OPTRE_UNSC_CH252D_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][Y] Alpha ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Alpha_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  ace_hearing_protection = 0.95;
};
class Sabre_CH252D_Helmet : Alpha_CH252D_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][Y] Sabre ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Sabre_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // class ItemInfo : ItemInfo {
  //   hiddenSelectionsTextures[] = {
  //       "armco_armours\data\odst\squad_helmets\odst_helmet_Sabre_co.paa",
  //       "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // };
};
class Zulu_CH252D_Helmet : Alpha_CH252D_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][Y] Zulu ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Zulu_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // class ItemInfo : ItemInfo {
  //   hiddenSelectionsTextures[] = {
  //       "armco_armours\data\odst\squad_helmets\odst_helmet_Zulu_co.paa",
  //       "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // };
};
class Phoenix_CH252D_Helmet : Alpha_CH252D_Helmet {
  dlc = "ARMCO";
  author = "Belhun";
  displayname = "[ARMCO][Y] Phoenix ODST Helmet";
  hiddenSelectionsTextures[] = {
      "armco_armours\data\odst\squad_helmets\odst_helmet_Phoenix_co.paa",
      "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // class ItemInfo : ItemInfo {
  //   hiddenSelectionsTextures[] = {
  //       "armco_armours\data\odst\squad_helmets\odst_helmet_Phoenix_co.paa",
  //       "armco_armours\data\odst\squad_helmets\visors\odst_helmet_visor_ca.paa"};
  // };
};