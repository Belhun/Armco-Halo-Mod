class Flag_White_F;
  class ARMCO_Flag : Flag_White_F {
    displayName = "[A][ARMCO] Unit Flag";
    scope = 2;
    scopeCurator = 2;
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\flags\flag_armco_co.paa"};
  };

// importing the base classes from ARMA and OPTRE
class UniformItem;                 // ARMA
class OPTRE_UNSC_Man_Army_W_class; // OPTRE
// class SoldierWB;                   // ARMA
class EventHandlers; // ARMA

// This is a base class for all soldiers use this too make new soldiers

class Land;
class Man : Land {
  class EventHandlers;
};
class CAManBase : Man {
  class HitPoints;
};
class SoldierWB : CAManBase {
  class HitPoints : HitPoints {
    class HitFace;
    class HitNeck;
    class HitHead;
    class HitPelvis;
    class HitAbdomen;
    class HitDiaphragm;
    class HitChest;
    class HitBody;
    class HitArms;
    class HitHands;
    class HitLegs;
  };
};

class ARMCO_Base_Soldier : SoldierWB {

  dlc = "ARMCO";
  scope = 1;
  scopeCurator = 0;
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  weapons[] = {"Throw", "Put"};
  respawnWeapons[] = {"Throw", "Put"};
  Items[] = {"OPTRE_Biofoam"};
  RespawnItems[] = {"OPTRE_Biofoam"};
  magazines[] = {};
  respawnMagazines[] = {};
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_alpha_co.paa",
      "armco_armours\data\uniforms\uniform_alpha_co.paa"};

  class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), nil, ['', 0.35,'OPTRE_HUD_Glasses',0.5 ,'OPTRE_HUD_g_Glasses',0.5 ,'OPTRE_HUD_r_Glasses',0.25 ,'OPTRE_HUD_b_Glasses',0.3 ,'OPTRE_HUD_p_Glasses',0.2 ,'OPTRE_HUD_w_Glasses',0.25 ,'OPTRE_EyePiece',0.5 ,'G_Bandanna_blk',0.5,'G_Bandanna_khk',0.5,'G_Bandanna_oli',0.5,'G_Bandanna_tan',0.5,'G_Balaclava_TI_blk_F',0.6]] call BIS_fnc_unitHeadgear;};";
		};
  class Wounds {
    tex[] = {};
    mat[] = {
        "OPTRE_UNSC_Units\Army\data\uniform_a.rvmat",
        "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",
        "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",
        "OPTRE_UNSC_Units\Army\data\uniform_b.rvmat",
        "OPTRE_UNSC_Units\Army\data\uniform_b_injury.rvmat",
        "OPTRE_UNSC_Units\Army\data\uniform_b_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
        "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
        "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
        "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
        "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
        "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
        "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"};
  };
  class HitPoints : HitPoints {
    class HitFace {
      armor = 1;
      material = -1;
      name = "face_hub";
      passThrough = 0.80000001;
      radius = 0.079999998;
      explosionShielding = 0.1;
      minimalHit = 0.0099999998;
    };
    class HitNeck : HitFace {
      armor = 1;
      material = -1;
      name = "neck";
      passThrough = 0.80000001;
      radius = 0.1;
      explosionShielding = 0.5;
      minimalHit = 0.0099999998;
    };
    class HitHead : HitNeck {
      armor = 1;
      material = -1;
      name = "head";
      passThrough = 0.80000001;
      radius = 0.2;
      explosionShielding = 0.5;
      minimalHit = 0.0099999998;
      depends = "HitFace max HitNeck";
    };
    class HitPelvis : HitHead {
      armor = 6;
      material = -1;
      name = "pelvis";
      passThrough = 0.80000001;
      radius = 0.23999999;
      explosionShielding = 1;
      visual = "injury_body";
      minimalHit = 0.0099999998;
      depends = "0";
    };
    class HitAbdomen : HitPelvis {
      armor = 1;
      material = -1;
      name = "spine1";
      passThrough = 0.80000001;
      radius = 0.16;
      explosionShielding = 1;
      visual = "injury_body";
      minimalHit = 0.0099999998;
    };
    class HitDiaphragm : HitAbdomen {
      armor = 1;
      material = -1;
      name = "spine2";
      passThrough = 0.80000001;
      radius = 0.18000001;
      explosionShielding = 2.4000001;
      visual = "injury_body";
      minimalHit = 0.0099999998;
    };
    class HitChest : HitDiaphragm {
      armor = 1;
      material = -1;
      name = "spine3";
      passThrough = 0.80000001;
      radius = 0.18000001;
      explosionShielding = 2.4000001;
      visual = "injury_body";
      minimalHit = 0.0099999998;
    };
    class HitBody : HitChest {
      armor = 1000;
      material = -1;
      name = "body";
      passThrough = 1;
      radius = 0;
      explosionShielding = 2.4000001;
      visual = "injury_body";
      minimalHit = 0.0099999998;
      depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
    };
    class HitArms : HitBody {
      armor = 5;
      material = -1;
      name = "arms";
      passThrough = 1;
      radius = 0.1;
      explosionShielding = 0.30000001;
      visual = "injury_hands";
      minimalHit = 0.0099999998;
      depends = "0";
    };
    class HitHands : HitArms {
      armor = 5;
      material = -1;
      name = "hands";
      passThrough = 1;
      radius = 0.1;
      explosionShielding = 0.30000001;
      visual = "injury_hands";
      minimalHit = 0.0099999998;
      depends = "HitArms";
    };
    class HitLegs : HitHands {
      armor = 5;
      material = -1;
      name = "legs";
      passThrough = 1;
      radius = 0.14;
      explosionShielding = 0.30000001;
      visual = "injury_legs";
      minimalHit = 0.0099999998;
      depends = "0";
    };
  };
  editorSubcategory = "OPTRE_EditorSubcategory_MenWDL";
};


class ARMCO_Soldier_A_Rifle : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_alpha_co.paa",
      "armco_armours\data\uniforms\uniform_alpha_co.paa"};
};
class ARMCO_Soldier_A_EOD : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_alpha_eod_co.paa",
      "armco_armours\data\uniforms\uniform_alpha_eod_co.paa"};
};
class ARMCO_Soldier_A_Medical : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_alpha_medic_co.paa",
      "armco_armours\data\uniforms\uniform_alpha_medic_co.paa"};
};
class ARMCO_Soldier_S_Rifle : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_sabre_co.paa",
      "armco_armours\data\uniforms\uniform_sabre_co.paa"};
};
class ARMCO_Soldier_S_EOD : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_sabre_eod_co.paa",
      "armco_armours\data\uniforms\uniform_sabre_eod_co.paa"};
};
class ARMCO_Soldier_S_Medical : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_sabre_medic_co.paa",
      "armco_armours\data\uniforms\uniform_sabre_medic_co.paa"};
};
class ARMCO_Soldier_Z_Rifle : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_zulu_co.paa",
      "armco_armours\data\uniforms\uniform_zulu_co.paa"};
};
class ARMCO_Soldier_Z_EOD : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_zulu_eod_co.paa",
      "armco_armours\data\uniforms\uniform_zulu_eod_co.paa"};
};
class ARMCO_Soldier_Z_Medical : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_zulu_medic_co.paa",
      "armco_armours\data\uniforms\uniform_zulu_medic_co.paa"};
};
class ARMCO_Soldier_P_Rifle : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_phoenix_co.paa",
      "armco_armours\data\uniforms\uniform_phoenix_co.paa"};
};
class ARMCO_Soldier_P_EOD : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_phoenix_eod_co.paa",
      "armco_armours\data\uniforms\uniform_phoenix_eod_co.paa"};
};
class ARMCO_Soldier_P_Medical : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_phoenix_medic_co.paa",
      "armco_armours\data\uniforms\uniform_phoenix_medic_co.paa"};
};
// ODST Uniforms
// black
// camo
// M90
class ARMCO_Soldier_ODST_BLK : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_odst_black_co.paa",
      "armco_armours\data\uniforms\uniform_odst_black_co.paa"};
};
class ARMCO_Soldier_ODST_camo : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_odst_camo_co.paa",
      "armco_armours\data\uniforms\uniform_odst_camo_co.paa"};
};
class ARMCO_Soldier_ODST_M90 : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_odst_M90_camo_co.paa",
      "armco_armours\data\uniforms\uniform_odst_M90_camo_co.paa"};
};
class ARMCO_Soldier_ODST_GDJungle : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_a_gdjungle_CO.paa",
      "armco_armours\data\uniforms\uniform_a_gdjungle_CO.paa"};
};
//BDUs made by Belhun
class ARMCO_Soldier_ODST_Dark_Mountain : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_a_gddmount_CO.paa",
      "armco_armours\data\uniforms\uniform_a_gddmount_CO.paa"};
};
class ARMCO_Soldier_ODST_New_Dark_Mountain : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_a_newdarkdigitalgreen_CO.paa",
      "armco_armours\data\uniforms\uniform_a_newdarkdigitalgreen_CO.paa"};
};
class ARMCO_Soldier_ODST_DDRKWDL : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_a_darkwoodland_CO.paa",
      "armco_armours\data\uniforms\uniform_a_darkwoodland_CO.paa"};
};
class ARMCO_Soldier_ODST_DWLD : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\uniforms\uniform_a_DigitalWoodland_CO.paa",
      "armco_armours\data\uniforms\uniform_a_DigitalWoodland_CO.paa"};
};
//Scurity BDU
class ARMCO_Soldier_SEC : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\security\uniform\uniform_armco_security_co.paa"};
};
class ARMCO_Soldier_ODST_SEC : ARMCO_Base_Soldier {
  dlc = "ARMCO";
  author = "Belhun";
  vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
  uniformClass = "ARMCO_PMC_Army_Uniform_WDL";
  model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
  hiddenSelections[] = {"camo", "camo2", "insignia", "clan", "A_SlimLeg"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\security\uniform\uniform_armco_odst_security_co.paa",
      "armco_armours\data\security\uniform\uniform_armco_odst_security_co.paa"};
};