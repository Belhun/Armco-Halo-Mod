// if you add a new Unifrom you need to add a corasponding unit in
// CfgVehicalSoldier.hpp
class U_B_CombatUniform_mcam;
class UniformItem;
class ARMCO_PMC_Army_Uniform_WDL : U_B_CombatUniform_mcam {
  dlc = "ARMCO_PMC";
  scope = 2;
  author = "Belhun";
  picture = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Base_Soldier";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  };
};

// Squad Uniforms
// Alpha Uniforms
class Alpha_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Alpha)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_A_Rifle";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Alpha_EOD_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Alpha EOD)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_A_EOD";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Alpha_Medic_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Alpha Medical)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_A_Medical";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
// Sabre Uniforms
class Sabre_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Sabre)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_S_Rifle";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Sabre_EOD_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Sabre EOD)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_S_EOD";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Sabre_Medic_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Sabre Medical)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_S_Medical";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
// Zulu Uniforms
class Zulu_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Zulu)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_Z_Rifle";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Zulu_EOD_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Zulu EOD)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_Z_EOD";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Zulu_Medic_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Zulu Medical)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_Z_Medical";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
// Phoenix Uniforms
class Phoenix_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Phoenix)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_P_Rifle";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Phoenix_EOD_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Phoenix EOD)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_P_EOD";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class Phoenix_Medic_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Squad BDU (Phoenix Medical)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_P_Medical";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
// ODST Uniforms
class ARMCO_ODST_BLK_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (ODST)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_BLK";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_camo_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (ODST Camo)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_camo";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_M90_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (ODST M90)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_M90";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_GDJungle_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (Jungle)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_GDJungle";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_GDDMOUNT_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (Dark Mountain)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_Dark_Mountain";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_NEWGDDMOUNT_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (New Jungle)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_New_Dark_Mountain";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_DDRKWDL_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (Digital Dark Woodland)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_DDRKWDL";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};
class ARMCO_ODST_DWLD_BDU : ARMCO_PMC_Army_Uniform_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Unit BDU (Digital Woodland)";
  class ItemInfo : UniformItem {
    uniformModel = "-";
    uniformClass = "ARMCO_Soldier_ODST_DWLD";
    containerClass = "Supply40";
    mass = 50;
    modelSides[] = {6};
  }
};