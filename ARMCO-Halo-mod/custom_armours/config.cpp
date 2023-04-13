#include "cfgPatches.hpp"
////////////////////////
// Damage & UNITS Start//
////////////////////////
/*class CfgMovesFatigueMedic
{
        staminaDuration=180;
        staminaCooldown=5;
        staminaRestoration=15;
        aimPrecisionSpeedCoef=0;
        terrainDrainSprint=0;
        terrainDrainRun=0;
        terrainSpeedCoef=1;
};*/
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
class CfgVehicles {
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
  class ARMCO_Soldier_Base : SoldierWB {
    class HitPoints : HitPoints {
      class HitFace {
        armor = 1; // "Healthpoints" of this hitpoint is armor value (of
                   // hitpoint) * armor value ( coefficient of the total armor
                   // defined below for the whole object
        material = -1;     // damage material (-1 means "unused")
        name = "face_hub"; // selection name from hit points LOD in object
        passThrough = 0.1; // coefficient defining how much damage will pass
                           // into total damage when this hit point is damaged
        radius =
            0.08; // size of the hit point sphere, this is how it works:
                  // https://community.bistudio.com/wiki/Arma_3_Damage_Description
        explosionShielding = 0.1; // multiplier of explosive damage (parameter:
                                  // explosive > 0 in ammunition type)
        minimalHit =
            0.01; // minimal damage value that can be applied (based on armor
                  // value), damage below this threshold is ignored
        // example: total hit point armor = 2 and hitpoint class armor = 10 and
        // minimalHit = 0.04  -> all damage below a hit value of 2*10*0.04= 0.8
        // is ignored
      };
      class HitNeck : HitFace {
        armor = 1;
        material = -1;
        name = "neck";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.1;
        minimalHit = 0.01;
      };
      class HitHead : HitNeck {
        armor = 1;
        material = -1;
        name = "head";
        passThrough = 0.1;
        radius = 0.2;
        explosionShielding = 0.1;
        minimalHit = 0.01;
        depends = "HitFace max HitNeck"; // returns the greater of HitFace and
                                         // HitNeck.
        // for depends to work, HitHead must be inheriting from HitFace and
        // HitNeck. "max" is not the only operator you can use. + and *  are
        // confirmed working. Other operators from the
        // https://community.bistudio.com/wiki/Simple_Expression list may be
        // usable as well.
      };
      class HitPelvis {
        armor = 1;
        material = -1;
        name = "pelvis";
        passThrough = 0.1;
        radius = 0.2;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitAbdomen : HitPelvis {
        armor = 1;
        material = -1;
        name = "spine1";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitDiaphragm : HitAbdomen {
        armor = 1;
        material = -1;
        name = "spine2";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitChest : HitDiaphragm {
        armor = 1;
        material = -1;
        name = "spine3";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitBody : HitChest {
        armor = 1000; // not supposed to take damage directly
        material = -1;
        name = "body";
        passThrough = 0.1;
        radius = 0.16;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
        depends =
            "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends
                                                                      // work
                                                                      // only
                                                                      // for hit
                                                                      // points
                                                                      // defined
                                                                      // in
                                                                      // inheritance
                                                                      // chain
        // arbitrary example for different operator usage: = "(2* (HitPelvis +
        // HitAbdomen) * HitDiaphragm) max HitChest";
      };
      class HitArms {
        armor = 1;
        material = -1;
        name = "arms";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
      };
      class HitHands : HitArms {
        armor = 1;
        material = -1;
        name = "hands";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "HitArms";
      };
      class HitLegs {
        armor = 1;
        material = -1;
        name = "legs";
        passThrough = 0.1;
        radius = 0.12;
        explosionShielding = 0.25;
        visual = "injury_legs";
        minimalHit = 0.01;
      };

      // ACE

      class HitLeftArm {
        armor = 1;
        material = -1;
        name = "hand_l";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
      };
      class HitRightArm : HitLeftArm {
        name = "hand_r";
      };
      class HitLeftLeg {
        armor = 1;
        material = -1;
        name = "leg_l";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
      };
      class HitRightLeg : HitLeftLeg {
        name = "leg_r";
      };
    };
  };

  ////////////////////
  // BASE UNITS Start//
  ////////////////////

  class I_crew_F;
  class AMRCO_Dress_Soldier_Base : ARMCO_Soldier_Base {
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "None"};
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    uniformClass = "OPTRE_UNSC_Dress_Uniform_gray";
    faction = "ARMCO_PMC";
    model = "\OPTRE_UNSC_Units\Army\officer.p3d";
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",
                            "OPTRE_NVG"};
    hiddenSelections[] = {
        "camo1", "insignia",
        "clan"}; // Determines what hiddenselections are enabled
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\dress_uniform_gray_co.paa"};
    class HitPoints : HitPoints {
      class HitNeck : HitNeck {
        armor = 2;
      };
      class HitPelvis : HitPelvis {
        armor = 2;
      };
      class HitAbdomen : HitAbdomen {
        armor = 2;
      };
      class HitDiaphragm : HitDiaphragm {
        armor = 2;
      };
      class HitChest : HitChest {
        armor = 2;
      };
      class HitArms : HitArms {
        armor = 2;
      };
      class HitHands : HitHands {
        armor = 2;
      };
      class HitLegs : HitLegs {
        armor = 2;
      };

      // ACE

      // class HitLeftArm: HitLeftArm
      //{
      //	armor               = 2;
      // };
      // class HitRightArm: HitRightArm
      //{
      //	armor               = 2;
      // };
      // class HitLeftLeg: HitLeftLeg
      //{
      //	armor               = 2;
      // };
      // class HitRightLeg: HitRightLeg
      //{
      //	armor               = 2;
      // };
    };
    class Wounds /// changes material of skin according to damage
    {
      tex[] = {};
      mat[] = {
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
          "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  class ARMCO_Soldier_WDL : AMRCO_Dress_Soldier_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "None"};
    author = "4th Battalion Mod Team";
    vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
    uniformClass = "OPTRE_UNSC_Army_Uniform_WDL";
    model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    Items[] = {"OPTRE_Biofoam"};
    RespawnItems[] = {"OPTRE_Biofoam"};
    magazines[] = {};
    respawnMagazines[] = {};
    // linkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    // respawnLinkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    hiddenSelections[] = {
        "camo", "camo2", "insignia", "clan",
        "A_SlimLeg"}; // Determines what hiddenselections are enabled
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa",
        "OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
    class Wounds /// changes material of skin according to damage
    {
      tex[] = {};
      mat[] = {
          "OPTRE_UNSC_Units\Army\data\uniform_a.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",

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
          "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class HitPoints : HitPoints {
      class HitNeck : HitNeck {
        armor = 4;
      };
      class HitPelvis : HitPelvis {
        armor = 4;
      };
      class HitAbdomen : HitAbdomen {
        armor = 4;
      };
      class HitDiaphragm : HitDiaphragm {
        armor = 4;
      };
      class HitChest : HitChest {
        armor = 4;
      };
      class HitArms : HitArms {
        armor = 4;
      };
      class HitHands : HitHands {
        armor = 4;
      };
      class HitLegs : HitLegs {
        armor = 4;
      };

      // ACE

      class HitLeftArm : HitLeftArm {
        armor = 4;
      };
      class HitRightArm : HitRightArm {
        armor = 4;
      };
      class HitLeftLeg : HitLeftLeg {
        armor = 4;
      };
      class HitRightLeg : HitRightLeg {
        armor = 4;
      };
    };
  };
  class ARMCO_Soldier_WDL_Medic : AMRCO_Dress_Soldier_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "None"};
    author = "4th Battalion Mod Team";
    vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
    uniformClass = "OPTRE_UNSC_Army_Uniform_WDL";
    model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    Items[] = {"OPTRE_Biofoam"};
    RespawnItems[] = {"OPTRE_Biofoam"};
    magazines[] = {};
    respawnMagazines[] = {};
    // linkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    // respawnLinkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    hiddenSelections[] = {
        "camo", "camo2", "insignia", "clan",
        "A_SlimLeg"}; // Determines what hiddenselections are enabled
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa",
        "OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
    class Wounds /// changes material of skin according to damage
    {
      tex[] = {};
      mat[] = {
          "OPTRE_UNSC_Units\Army\data\uniform_a.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",

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
          "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class HitPoints : HitPoints {
      class HitNeck : HitNeck {
        armor = 4;
      };
      class HitPelvis : HitPelvis {
        armor = 4;
      };
      class HitAbdomen : HitAbdomen {
        armor = 4;
      };
      class HitDiaphragm : HitDiaphragm {
        armor = 4;
      };
      class HitChest : HitChest {
        armor = 4;
      };
      class HitArms : HitArms {
        armor = 4;
      };
      class HitHands : HitHands {
        armor = 4;
      };
      class HitLegs : HitLegs {
        armor = 4;
      };

      // ACE

      class HitLeftArm : HitLeftArm {
        armor = 4;
      };
      class HitRightArm : HitRightArm {
        armor = 4;
      };
      class HitLeftLeg : HitLeftLeg {
        armor = 4;
      };
      class HitRightLeg : HitRightLeg {
        armor = 4;
      };
    };
  };
  class ARMCO_Soldier_WDL_ODST : AMRCO_Dress_Soldier_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "None"};
    author = "4th Battalion Mod Team";
    vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
    uniformClass = "OPTRE_UNSC_Army_Uniform_WDL";
    model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    Items[] = {"OPTRE_Biofoam"};
    RespawnItems[] = {"OPTRE_Biofoam"};
    magazines[] = {};
    respawnMagazines[] = {};
    // linkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    // respawnLinkedItems[]
    // =
    // {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    hiddenSelections[] = {
        "camo", "camo2", "insignia", "clan",
        "A_SlimLeg"}; // Determines what hiddenselections are enabled
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa",
        "OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
    class Wounds /// changes material of skin according to damage
    {
      tex[] = {};
      mat[] = {
          "OPTRE_UNSC_Units\Army\data\uniform_a.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",
          "OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat",

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
          "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class HitPoints : HitPoints {
      class HitNeck : HitNeck {
        armor = 4;
      };
      class HitPelvis : HitPelvis {
        armor = 4;
      };
      class HitAbdomen : HitAbdomen {
        armor = 4;
      };
      class HitDiaphragm : HitDiaphragm {
        armor = 4;
      };
      class HitChest : HitChest {
        armor = 4;
      };
      class HitArms : HitArms {
        armor = 4;
      };
      class HitHands : HitHands {
        armor = 4;
      };
      class HitLegs : HitLegs {
        armor = 4;
      };

      // ACE

      class HitLeftArm : HitLeftArm {
        armor = 4;
      };
      class HitRightArm : HitRightArm {
        armor = 4;
      };
      class HitLeftLeg : HitLeftLeg {
        armor = 4;
      };
      class HitRightLeg : HitRightLeg {
        armor = 4;
      };
    };
  };
  class ARMCO_Soldier_Security_Bureau : I_crew_F {
    author = "$STR_A3_Bohemia_Interactive";
    editorPreview =
        "\A3\EditorPreviews_F_Tank\Data\CfgVehicles\I_Story_Crew_F.jpg";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "None"};
    displayName = "Security Bureau Agent";
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
    modelSides[] = {2, 3};
    side = 2;
    engineer = 1;
    uniformClass = "U_Tank_green_F";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    Items[] = {"OPTRE_Biofoam"};
    RespawnItems[] = {"OPTRE_Biofoam"};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"OPTRE_UNSC_M52A_Armor1_WDL",
                     "OPTRE_UNSC_CH252_Helmet_WDL",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor1_WDL",
                            "OPTRE_UNSC_CH252_Helmet_WDL",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {
        "custom_uniform\data\uniform\u_armco_security_co.paa"};
    class Wounds {
      tex[] = {};
      mat[] = {
          "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F.rvmat",
          "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F_injury.rvmat",
          "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F_injury.rvmat",
          "A3\characters_f\common\data\coveralls.rvmat",
          "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
          "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
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
          "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
  };
  //----------END OF BASE UNIT----------//

  ///////////////////////
  // BASE Uniforms Start//
  ///////////////////////
  class ARMCO_Soldier_PT : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    uniformClass = "ARMCO_PT_Uniform";
    model = "\OPTRE_UNSC_Units\Army\uniform_PT.p3d";
    hiddenSelections[] = {
        "camo", "insignia",
        "clan"}; // Determines what hiddenselections are enabled
    hiddenSelectionsTextures[] = {
        "custom_armours\data\uniform\Summer_PT_odst_TO_CO.paa"};
    editorSubcategory = "armco_units_training";
  };

  //---Alpha Squad---//
  class ARMCO_Soldier_O_Alpha : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Alpha Squad] Rifleman (Olive)";
    author = "Frosty & Mac";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Alpha";
    uniformClass = "ARMCO_Uniform_Alpha_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_alpha_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_alpha_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Alpha_O",
                     "ARMCO_M52A_Armor_Alpha_Rifleman",
                     "ARMCO_CH252_Helmet_Alpha",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Alpha_O",
                            "ARMCO_M52A_Armor_Alpha_Rifleman",
                            "ARMCO_CH252_Helmet_Alpha",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Team Leader---//
  class ARMCO_Soldier_O_Alpha_TL : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Alpha Squad] Team Leader (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "ARMCO_Rucksack_Soft_Alpha";
    uniformClass = "ARMCO_Uniform_Alpha_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_alpha_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_alpha_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Alpha_O",
                     "ARMCO_M52A_Armor_Alpha_Team_Lead",
                     "ARMCO_CH252_Helmet_Alpha",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Alpha_O",
                            "ARMCO_M52A_Armor_Alpha_Team_Lead",
                            "ARMCO_CH252_Helmet_Alpha",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_O_Alpha_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Alpha Squad] Medic (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Rucksack_Soft_Medical";
    uniformClass = "ARMCO_Uniform_Alpha_O_Medical";
    icon = "iconManMedic";
    attendant = 1;
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_alpha_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_alpha_medic_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Alpha_O_Medical",
        "ARMCO_M52A_Armor_Alpha_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Alpha_O_Medical",
        "ARMCO_M52A_Armor_Alpha_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_O_Alpha_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Alpha Squad] Corpsman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    uniformClass = "ARMCO_Uniform_Alpha_O_Medical";
    icon = "iconManMedic";
    attendant = 1;
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_alpha_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_alpha_medic_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Alpha_O_Medical",
                     "ARMCO_M52A_Armor_Alpha_Corpsman",
                     "ARMCO_CH252_Helmet_Corpsman",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Alpha_O_Medical",
                            "ARMCO_M52A_Armor_Alpha_Corpsman",
                            "ARMCO_CH252_Helmet_Corpsman",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---EOD---//
  class ARMCO_Soldier_O_Alpha_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Alpha Squad] EOD (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_EOD";
    uniformClass = "ARMCO_Uniform_Alpha_O_EOD";
    icon = "iconManExplosive";
    engineer = 1;
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_alpha_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_alpha_eod_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Alpha_O_EOD",
        "ARMCO_M52E_Armor_Alpha_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Alpha_O_EOD",
        "ARMCO_M52E_Armor_Alpha_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };

  //---Sabre Squad---//
  class ARMCO_Soldier_O_Echo : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Sabre Squad] Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Echo";
    uniformClass = "ARMCO_Uniform_Echo_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Echo_O",
                     "ARMCO_M52A_Armor_Echo_Rifleman",
                     "ARMCO_CH252_Helmet_Echo",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Echo_O",
                            "ARMCO_M52A_Armor_Echo_Rifleman",
                            "ARMCO_CH252_Helmet_Echo",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Team Leader---//
  class ARMCO_Soldier_O_Echo_TL : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Sabre Squad] Team Leader (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "ARMCO_Rucksack_Soft_Echo";
    uniformClass = "ARMCO_Uniform_Echo_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Echo_O",
                     "ARMCO_M52A_Armor_Echo_Team_Lead",
                     "ARMCO_CH252_Helmet_Echo",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Echo_O",
                            "ARMCO_M52A_Armor_Echo_Team_Lead",
                            "ARMCO_CH252_Helmet_Echo",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_O_Echo_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Sabre Squad] Medic (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Rucksack_Soft_Medical";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Echo_O_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Echo_O_Medical",
        "ARMCO_M52M_Armor_Echo_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Echo_O_Medical",
        "ARMCO_M52M_Armor_Echo_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_O_Echo_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Sabre Squad] Corpsman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Echo_O_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Echo_O_Medical",
                     "ARMCO_M52M_Armor_Echo_Corpsman",
                     "ARMCO_CH252_Helmet_Corpsman",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Echo_O_Medical",
                            "ARMCO_M52M_Armor_Echo_Corpsman",
                            "ARMCO_CH252_Helmet_Corpsman",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---EOD---//
  class ARMCO_Soldier_O_Echo_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Sabre Squad] EOD (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_EOD";
    icon = "iconManExplosive";
    engineer = 1;
    uniformClass = "ARMCO_Uniform_Echo_O_EOD";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_echo_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_eod_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Echo_O_EOD",
        "ARMCO_M52E_Armor_Echo_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Echo_O_EOD",
        "ARMCO_M52E_Armor_Echo_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };

  //---Zulu Squad---//
  class ARMCO_Soldier_O_Zulu : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Zulu";
    uniformClass = "ARMCO_Uniform_zulu_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_zulu_O",
                     "ARMCO_M52A_Armor_Zulu_Rifleman",
                     "ARMCO_CH252_Helmet_Zulu",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_zulu_O",
                            "ARMCO_M52A_Armor_Zulu_Rifleman",
                            "ARMCO_CH252_Helmet_Zulu",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Team Leader---//
  class ARMCO_Soldier_O_Zulu_TL : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Team Leader (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "ARMCO_Rucksack_Soft_Zulu";
    uniformClass = "ARMCO_Uniform_zulu_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_zulu_O",
                     "ARMCO_M52A_Armor_Zulu_Team_Lead",
                     "ARMCO_CH252_Helmet_Zulu",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_zulu_O",
                            "ARMCO_M52A_Armor_Zulu_Team_Lead",
                            "ARMCO_CH252_Helmet_Zulu",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_O_Zulu_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Medic (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Rucksack_Soft_Medical";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_zulu_O_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_zulu_O_Medical",
        "ARMCO_M52M_Armor_Zulu_Medic",
        "ARMCO_CH252_Helmet_Zulu_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_zulu_O_Medical",
        "ARMCO_M52M_Armor_Zulu_Medic",
        "ARMCO_CH252_Helmet_Zulu_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_O_Zulu_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Corpsman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_zulu_O_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_zulu_O_Medical",
                     "ARMCO_M52M_Armor_Zulu_Corpsman",
                     "ARMCO_CH252_Helmet_Zulu_Corpsman",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_zulu_O_Medical",
                            "ARMCO_M52M_Armor_Zulu_Corpsman",
                            "ARMCO_CH252_Helmet_Zulu_Corpsman",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---EOD---//
  class ARMCO_Soldier_O_Zulu_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] EOD (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_EOD";
    icon = "iconManExplosive";
    engineer = 1;
    uniformClass = "ARMCO_Uniform_zulu_O_EOD";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_eod_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_zulu_O_EOD",
        "ARMCO_M52E_Armor_Zulu_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_zulu_O_EOD",
        "ARMCO_M52E_Armor_Zulu_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };

  //---Zulu Squad Ghillie---//
  class ARMCO_Soldier_Camo_Zulu : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Rifleman (Camo)";
    icon = "iconManRecon";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Zulu_Camo";
    uniformClass = "ARMCO_Uniform_Zulu_Camo";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_camo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_camo_co.paa"

    };
    linkedItems[] = {"ARMCO_Uniform_Zulu_Camo",
                     "ARMCO_M52A_Armor_Zulu_Camo_Rifleman",
                     "ARMCO_CH252_Helmet_Zulu_C",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Zulu_Camo",
                            "ARMCO_M52A_Armor_Zulu_Camo_Rifleman",
                            "ARMCO_CH252_Helmet_Zulu_C",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_camo";
  };
  //---Team Leader---//
  class ARMCO_Soldier_Camo_Zulu_TL : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Team Leader (Camo)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "ARMCO_Rucksack_Soft_Zulu";
    uniformClass = "ARMCO_Uniform_Zulu_Camo";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_camo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_camo_co.paa"

    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    linkedItems[] = {"ARMCO_Uniform_Zulu_Camo",
                     "ARMCO_M52A_Armor_Zulu_Camo_Team_Lead",
                     "ARMCO_CH252_Helmet_Zulu_C",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Zulu_Camo",
                            "ARMCO_M52A_Armor_Zulu_Camo_Team_Lead",
                            "ARMCO_CH252_Helmet_Zulu_C",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_camo";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_Camo_Zulu_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Medic (Camo)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Rucksack_Soft_Medical";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Zulu_Camo_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_camo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_camo_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Zulu_Camo_Medical",
        "ARMCO_M52M_Armor_Zulu_Camo_Medic",
        "ARMCO_CH252_Helmet_Zulu_C_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Zulu_Camo_Medical",
        "ARMCO_M52M_Armor_Zulu_Camo_Medic",
        "ARMCO_CH252_Helmet_Zulu_C_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_camo";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_Camo_Zulu_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] Corpsman (Camo)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman_Camo";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Zulu_Camo_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_camo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_medic_camo_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Zulu_Camo_Medical",
                     "ARMCO_M52M_Armor_Zulu_Camo_Corpsman",
                     "ARMCO_CH252_Helmet_Zulu_C_Corpsman",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Zulu_Camo_Medical",
                            "ARMCO_M52M_Armor_Zulu_Camo_Corpsman",
                            "ARMCO_CH252_Helmet_Zulu_C_Corpsman",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_camo";
  };
  //---EOD---//
  class ARMCO_Soldier_Camo_Zulu_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Zulu Squad] EOD (Camo)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_EOD";
    icon = "iconManExplosive";
    engineer = 1;
    uniformClass = "ARMCO_Uniform_Zulu_O_EOD";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_zulu_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_zulu_eod_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Zulu_O_EOD",
        "ARMCO_M52E_Armor_Zulu_Camo_EOD",
        "ARMCO_CH252_Helmet_EOD_Camo",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Zulu_O_EOD",
        "ARMCO_M52E_Armor_Zulu_Camo_EOD",
        "ARMCO_CH252_Helmet_EOD_Camo",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_camo";
  };

  //---Phoenix Squad---//
  class ARMCO_Soldier_O_Phoenix : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Phoenix Squad] Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    icon = "iconManMG";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Phoenix";
    uniformClass = "ARMCO_Uniform_Phoenix_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_phoenix_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_phoenix_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Phoenix_O",
                     "ARMCO_M52A_Armor_Phoenix_Rifleman",
                     "ARMCO_CH252_Helmet_Phoenix",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M73", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M73", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_200Rnd_95x40_Box", "OPTRE_200Rnd_95x40_Box",
                   "OPTRE_200Rnd_95x40_Box", "OPTRE_200Rnd_95x40_Box",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box", "OPTRE_200Rnd_95x40_Box",
                          "OPTRE_200Rnd_95x40_Box", "OPTRE_200Rnd_95x40_Box",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_O",
                            "ARMCO_M52A_Armor_Phoenix_Rifleman",
                            "ARMCO_CH252_Helmet_Phoenix",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Team Leader---//
  class ARMCO_Soldier_O_Phoenix_TL : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Phoenix Squad] Team Leader (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "ARMCO_Rucksack_Soft_Phoenix";
    uniformClass = "ARMCO_Uniform_Phoenix_O";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_phoenix_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_phoenix_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Phoenix_O",
                     "ARMCO_M52A_Armor_Phoenix_Team_Lead",
                     "ARMCO_CH252_Helmet_Phoenix",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_O",
                            "ARMCO_M52A_Armor_Phoenix_Team_Lead",
                            "ARMCO_CH252_Helmet_Phoenix",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_Phoenix_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Phoenix Squad] Medic (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Rucksack_Soft_Medical";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Phoenix_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_phoenix_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_phoenix_medic_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Phoenix_Medical",
        "ARMCO_M52M_Armor_Phoenix_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Phoenix_Medical",
        "ARMCO_M52M_Armor_Phoenix_Medic",
        "ARMCO_CH252_Helmet_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_Phoenix_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Phoenix Squad] Corpsman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_Phoenix_Medical";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_phoenix_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_phoenix_medic_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Phoenix_Medical",
                     "ARMCO_M52M_Armor_Phoenix_Corpsman",
                     "ARMCO_CH252_Helmet_Corpsman",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_Medic",
                            "ARMCO_M52M_Armor_Phoenix_Corpsman",
                            "ARMCO_CH252_Helmet_Corpsman",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };
  //---EOD---//
  class ARMCO_Soldier_Phoenix_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[Phoenix Squad] EOD (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_EOD";
    icon = "iconManExplosive";
    engineer = 1;
    uniformClass = "ARMCO_Uniform_Phoenix_EOD";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Uniform\uniform_phoenix_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_phoenix_eod_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_Phoenix_EOD",
        "ARMCO_M52E_Armor_Phoenix_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_Phoenix_EOD",
        "ARMCO_M52E_Armor_Phoenix_EOD",
        "ARMCO_CH252_Helmet_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_infantry";
  };

  //---ODSTs---//
  class ARMCO_Soldier_ODST : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    faction = "ARMCO_PMC";
    displayName = "[] - ()";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_ODST",
                     "ARMCO_M52D_Armor_Base",
                     "OPTRE_UNSC_CH252D_Helmet_Base",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_Medic",
                            "ARMCO_M52M_Armor_Phoenix_Corpsman",
                            "OPTRE_UNSC_CH252D_Helmet_Base",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorSubcategory = "armco_units_infantry";
  };
  class ARMCO_Soldier_ODST_Camo : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    faction = "ARMCO_PMC";
    displayName = "[] - ()";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST_Camo";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_camo_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_camo_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Phoenix_Medical",
                     "ARMCO_M52M_Armor_Phoenix_Corpsman",
                     "OPTRE_UNSC_CH252D_Helmet_Base",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_Medic",
                            "ARMCO_M52M_Armor_Phoenix_Corpsman",
                            "OPTRE_UNSC_CH252D_Helmet_Base",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorSubcategory = "armco_units_infantry";
  };
  class ARMCO_Soldier_ODST_M90_Camo : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    faction = "ARMCO_PMC";
    displayName = "[] - ()";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_Kitbag_Corpsman";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST_M90_Camo";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_M90_camo_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_M90_camo_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_Phoenix_Medical",
                     "ARMCO_M52M_Armor_Phoenix_Corpsman",
                     "OPTRE_UNSC_CH252D_Helmet_Base",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Phoenix_Medic",
                            "ARMCO_M52M_Armor_Phoenix_Corpsman",
                            "OPTRE_UNSC_CH252D_Helmet_Base",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorSubcategory = "armco_units_infantry";
  };
  class ARMCO_Soldier_ODST_Security_Medic : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[ARMCO] Security Officer (Medic)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_ANPRC_515_Security";
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST_Security";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa",
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                   "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M9_Frag",          "OPTRE_M9_Frag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Orange",
                          "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    editorSubcategory = "armco_units_security";
  };
  class ARMCO_Soldier_ODST_Security_RM : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[ARMCO] Security Officer (Rifleman)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_ANPRC_515_Security";
    icon = "iconMan";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST_Security";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa",
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    editorSubcategory = "armco_units_security";
  };
  class ARMCO_Soldier_ODST_Security_TL : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    faction = "ARMCO_PMC";
    displayName = "[ARMCO] Security Officer (Team Leader)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "ARMCO_ANPRC_515_Security";
    icon = "iconManOfficer";
    uniformClass = "ARMCO_Uniform_ODST_Security";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa",
        "custom_armours\data\security\uniform\u_armco_odst_security_co.paa"};
    linkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {
        "ARMCO_Uniform_ODST_Security",
        "ARMCO_M52D_Armor_Security",
        "ARMCO_CH252D_Helmet_Security",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
    };
    editorSubcategory = "armco_units_security";
  };
  class ARMCO_Security_Bureau_Officer : ARMCO_Soldier_Security_Bureau {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    side = 1;
    faction = "ARMCO_PMC";
    displayName = "[ARMCO] Security Bureau Officer";
    author = "4th Battalion Mod Team";
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
    backpack = "";
    uniformClass = "ARMCO_Uniform_Security";
    hiddenSelections[] = {"camo",
                          //"camo1",
                          //"camo2",
                          "insignia"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\uniform\u_armco_security_co.paa",
        //"custom_armours\data\security\uniform\u_armco_security_co.paa"
    };
    linkedItems[] = {"ARMCO_Uniform_Security",
                     "ARMCO_Security_Belt",
                     "ARMCO_Beret_Security",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_Security",
                            "ARMCO_Security_Belt",
                            "ARMCO_Beret_Security",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units";
    editorSubcategory = "armco_units_security";
  };

  //---GreenHorns---//
  class ARMCO_Soldier_ODST_Jackson : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    displayName = "[GH] Traitor ODST - (Jackson Moore)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    // backpack
    // = "ARMCO_Kitbag_Corpsman";
    icon = "iconManLeader";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST";
    faction = "ARMCO_Green_Horns";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_ODST",
                     "ARMCO_M52D_Armor_Jackson",
                     "ARMCO_CH252D_Helmet_Jackson",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_ODST",
                            "ARMCO_M52D_Armor_Jackson",
                            "ARMCO_CH252D_Helmet_Jackson",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns_s";
  };
  class ARMCO_Soldier_ODST_Girlie : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    displayName = "[GH] Traitor ODST - (Autumn Thorne)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    // backpack
    // = "ARMCO_Kitbag_Corpsman";
    icon = "iconManLeader";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST";
    faction = "ARMCO_Green_Horns";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_ODST",
                     "ARMCO_M52D_Armor_Girlie",
                     "ARMCO_CH252D_Helmet_Girlie",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_ODST",
                            "ARMCO_M52D_Armor_Girlie",
                            "ARMCO_CH252D_Helmet_Girlie",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns_s";
  };
  class ARMCO_Soldier_ODST_Sharkface : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    displayName = "[GH] Traitor ODST - (Gabriel Firewalker)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    // backpack
    // = "ARMCO_Kitbag_Corpsman";
    icon = "iconManLeader";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST";
    faction = "ARMCO_Green_Horns";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_ODST",
                     "ARMCO_M52D_Armor_Sharkface",
                     "ARMCO_CH252D_Helmet_Sharkface",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_ODST",
                            "ARMCO_M52D_Armor_Sharkface",
                            "ARMCO_CH252D_Helmet_Sharkface",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns_s";
  };
  class ARMCO_Soldier_ODST_Jaymes : ARMCO_Soldier_WDL_ODST {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    displayName = "[GH] Traitor ODST - (Jaymes Addington)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    // backpack
    // = "ARMCO_Kitbag_Corpsman";
    icon = "iconManLeader";
    attendant = 1;
    uniformClass = "ARMCO_Uniform_ODST";
    faction = "ARMCO_Green_Horns";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa",
        "custom_armours\data\ODST\Uniform\uniform_odst_black_co.paa"};
    linkedItems[] = {"ARMCO_Uniform_ODST",
                     "ARMCO_M52D_Armor_Jaymes",
                     "ARMCO_CH252D_Helmet_Jaymes",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    respawnLinkedItems[] = {"ARMCO_Uniform_ODST",
                            "ARMCO_M52D_Armor_Jaymes",
                            "ARMCO_CH252D_Helmet_Jaymes",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns_s";
  };

  //---GreenHorns Marines---//
  class ARMCO_Soldier_GH : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"*/
    };
    linkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                     "ARMCO_M52A_Armor_GH_Rifleman",
                     "ARMCO_CH252_Helmet_GH",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                            "ARMCO_M52A_Armor_Echo_Rifleman",
                            "ARMCO_CH252_Helmet_Echo",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---Auto-Rifleman---//
  class ARMCO_Soldier_AR : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] Auto-Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"*/
    };
    linkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                     "ARMCO_M52A_Armor_GH_Rifleman",
                     "ARMCO_CH252_Helmet_GH",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_M73", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M73", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                   "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                   "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                   "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                   "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",
                   "OPTRE_M2_Smoke_Green",
                   "ACE_M84",
                   "ACE_M84"};
    respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                          "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                          "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                          "OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
                          "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",
                          "OPTRE_M2_Smoke_Green",
                          "ACE_M84",
                          "ACE_M84"};
    respawnLinkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                            "ARMCO_M52A_Armor_Echo_Rifleman",
                            "ARMCO_CH252_Helmet_Echo",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---AT Rifleman---//
  class ARMCO_Soldier_AT : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] AT Rifleman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"*/
    };
    linkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                     "ARMCO_M52A_Armor_GH_Rifleman",
                     "ARMCO_CH252_Helmet_GH",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put", "OPTRE_M41_SSR"};
    respawnWeapons[] = {"OPTRE_MA5B", "OPTRE_M6G_SF", "Throw", "Put",
                        "OPTRE_M41_SSR"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_M41_Twin_HEAT",
                   "OPTRE_M41_Twin_HEAT",    "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_M41_Twin_HEAT",
                          "OPTRE_M41_Twin_HEAT",    "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                            "ARMCO_M52A_Armor_Echo_Rifleman",
                            "ARMCO_CH252_Helmet_Echo",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---Team Leader---//
  class ARMCO_Soldier_GH_TL : ARMCO_Soldier_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] Team Leader (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManLeader";
    backpack = "OPTRE_UNSC_Rucksack";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_co.paa"*/
    };
    linkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                     "ARMCO_M52A_Armor_GH_Team_Lead",
                     "ARMCO_CH252_Helmet_GH",
                     "ItemMap",
                     "ItemCompass",
                     "ItemWatch",
                     "ItemRadio",
                     "OPTRE_NVG"};
    weapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5BGL", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                   "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_60Rnd_762x51_Mag", "OPTRE_60Rnd_762x51_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_8Rnd_127x40_Mag",  "OPTRE_8Rnd_127x40_Mag",
                          "OPTRE_M2_Smoke",         "OPTRE_M2_Smoke_Green"};
    respawnLinkedItems[] = {"OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
                            "ARMCO_M52A_Armor_GH_Team_Lead",
                            "ARMCO_CH252_Helmet_GH",
                            "ItemMap",
                            "ItemCompass",
                            "ItemWatch",
                            "ItemRadio",
                            "OPTRE_NVG"};
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---Squad Medic---//
  class ARMCO_Soldier_GH_Medic : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] Medic (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManMedic";
    attendant = 1;
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa"*/
    };
    linkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52M_Armor_GH_Medic",
        "ARMCO_CH252_Helmet_GH_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_M2_Smoke",
                   "OPTRE_M2_Smoke",
                   "ACE_M84"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_8Rnd_127x40_Mag_Tracer",
                          "OPTRE_8Rnd_127x40_Mag_Tracer",
                          "OPTRE_M2_Smoke",
                          "OPTRE_M2_Smoke",
                          "ACE_M84"};
    respawnLinkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52M_Armor_GH_Medic",
        "ARMCO_CH252_Helmet_GH_Medic",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
    };
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---Squad Corpsman---//
  class ARMCO_Soldier_GH_Corpsman : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] Corpsman (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManMedic";
    attendant = 1;
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_medic_co.paa"*/
    };
    linkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52M_Armor_GH_Corpsman",
        "ARMCO_CH252_Helmet_GH_Corpsman",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
    };
    weapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7S", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_M2_Smoke",
                   "OPTRE_M2_Smoke",
                   "ACE_M84"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                          "OPTRE_8Rnd_127x40_Mag_Tracer",
                          "OPTRE_8Rnd_127x40_Mag_Tracer",
                          "OPTRE_M2_Smoke",
                          "OPTRE_M2_Smoke",
                          "ACE_M84"};
    respawnLinkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52M_Armor_GH_Corpsman",
        "ARMCO_CH252_Helmet_GH_Corpsman",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
        "OPTRE_Biofoam",
    };
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };
  //---EOD---//
  class ARMCO_Soldier_GH_EOD : ARMCO_Soldier_WDL_Medic {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    faction = "ARMCO_Green_Horns";
    displayName = "[GH] EOD (Olive)";
    author = "4th Battalion Mod Team";
    model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
    icon = "iconManExplosive";
    engineer = 1;
    backpack = "B_AssaultPack_khk";
    uniformClass = "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg";
    hiddenSelectionsTextures[] = {
        /*"custom_armours\data\Marines\Uniform\uniform_echo_eod_co.paa",
        "custom_armours\data\Marines\Uniform\uniform_echo_eod_co.paa"*/
    };
    linkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52E_Armor_GH_EOD",
        "ARMCO_CH252_Helmet_GH_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    weapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7", "OPTRE_M6G_SF", "Throw", "Put"};
    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_8Rnd_127x40_Mag_Tracer",
                   "OPTRE_M2_Smoke",
                   "OPTRE_M2_Smoke",
                   "ACE_M84",
                   "ACE_M84"};
    respawnMagazines[] = {
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_60Rnd_5x23mm_Mag_tracer_yellow",
        "OPTRE_8Rnd_127x40_Mag_Tracer",
        "OPTRE_8Rnd_127x40_Mag_Tracer",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke",
        "ACE_M84",
    };
    respawnLinkedItems[] = {
        "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg",
        "ARMCO_M52E_Armor_GH_EOD",
        "ARMCO_CH252_Helmet_GH_EOD",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        //"OPTRE_NVG"
    };
    editorCategory = "armco_units_green_horns";
    editorSubcategory = "armco_units_green_horns";
  };

  ////////////////////
  // BACKPACKS CONFIG//
  ////////////////////
  class B_Kitbag_base;
  // class tfw_ilbe_gr;
  class OPTRE_UNSC_Rucksack;
  class OPTRE_ILCS_Rucksack_Black;
  class Weapon_srifle_DMR_02_F;

  //---Kitbags---//
  class ARMCO_Kitbag_Black : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Kitbag (Black)";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\CM_BAG_armco_blk.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Alpha : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Alpha Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_alpha_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Echo : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Sabre Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_echo_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Zulu : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Zulu Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_zulu_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Zulu_Camo : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Zulu Kitbag (Camo)";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_zulu_camo_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Phoenix : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Phoenix Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_phoenix_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Corpsman : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Corpsman Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_corpsman_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Corpsman_Camo : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Corpsman Kitbag (Camo)";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_corpsman_camo_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Medic : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Medic Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_medic_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_Medic_Camo : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] Medic Kitbag (Camo)";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_medic_camo_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };
  class ARMCO_Kitbag_EOD : B_Kitbag_base {
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] EOD Kitbag";
    picture =
        "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
    hiddenSelectionsTextures[] = {
        "custom_armours\data\backpacks\backpack_soft_eod_co.paa"};
    containerClass = "Supply300";
    mass = 20;
  };

  //---Long Range Radio Backpacks---//
  // class ARMCO_LR_Bag_BLK : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE RT-1523G [Medical] (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\ilbe_armco_blk_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Alpha : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Alpha Squad RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\backpack_radio_alpha_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Echo : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Sabre Squad RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\backpack_radio_echo_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Zulu : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Zulu Squad RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\backpack_radio_zulu_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Zulu_Camo : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Camo Zulu Squad RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\backpack_radio_zulu_camo_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Phoenix : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Phoenix Squad RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\backpacks\backpack_radio_phoenix_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };
  // class ARMCO_LR_Bag_Security : tfw_ilbe_gr {
  //   author = "4th Battalion Mod Team";
  //   scope = 1;
  //   scopeCurator = 1;
  //   displayName = "[ARMCO] ILBE Security RT-1523G (ASIP)";
  //   descriptionShort = "RT-1523G (ASIP) long range radio 20km";
  //   picture = "\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
  //   editorPreview = "";
  //   model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
  //   hiddenSelectionsTextures[] = {
  //       "custom_armours\data\security\backpack\b_radio_armco_security_co.paa"};
  //   hiddenSelections[] = {"camo"};
  //   containerClass = "Supply250";
  //   mass = 80;
  //   isbackpack = 1;
  //   tf_encryptionCode = "tf_west_radio_code";
  //   tf_dialog = "rt1523g_radio_dialog";
  //   tf_subtype = "digital_lr";
  //   tf_range = 17000;
  //   tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  //   tf_hasLRradio = 1;
  // };

  //---ODST Long Range Backpacks---//
  class ARMCO_Rucksack_Soft_Alpha : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Alpha)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Addons", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_soft_alpha_co.paa"};
  };
  class ARMCO_Rucksack_Soft_Echo : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Sabre)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Addons", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_soft_echo_co.paa"};
  };
  class ARMCO_Rucksack_Soft_Zulu : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Zulu)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Addons", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_soft_zulu_co.paa"};
  };
  class ARMCO_Rucksack_Soft_Phoenix : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Phoenix)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_soft_phoenix_co.paa"};
  };
  class ARMCO_Rucksack_Soft_Medical : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Medical)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Addons", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_soft_medical_co.paa"};
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 17000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };

  //---ODST Hard Packs---// ,"AP_Heavy","BioFoam"
  class ARMCO_ANPRC_515_BLK_Medic : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Medical] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 600;
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_hard_medical_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Alpha : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Alpha] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 350;
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_hard_alpha_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Echo : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Sabre] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 350;
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_hard_sabre_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Zulu : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Zulu] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 350;
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_hard_zulu_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Phoenix : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Phoenix] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 350;
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_odst_hard_phoenix_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Security : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack [Security] (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    maximumLoad = 350;
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam", "AP_Heavy"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\backpack\b_hard_odst_security_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };

  //---Personal Packs---// ,"AP_Heavy","BioFoam"
  class ARMCO_Rucksack_Soft_Boone : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (Boone)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\boone_backpack_soft_co.paa"};
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_Rucksack_Soft_French : OPTRE_UNSC_Rucksack {
    dlc = "ARMCO OPTRE Reskins";
    author = "4th Battalion Mod Team";
    scope = 2;
    scopeCurator = 2;
    displayName = "[ARMCO] UNSC Rucksack (French)";
    containerClass = "Supply300";
    mass = 45;
    hiddenSelections[] = {"camo", "B_Medic", "B_Radio"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\french_backpack_soft_co.paa"};
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Frosty : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Frosty) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Frosty_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Spooks : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Spooks) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\backpack_spooks_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Nutters : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Nutters) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_nutters_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Shaw : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Shaw) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_shaw_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Defender : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Defender) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Defender_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Ciro : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Ciro) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Ciro_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Mac : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Mac) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "AP_Heavy"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_mac_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };

  //----Community Made Backpacks----// ,"AP_Heavy","BioFoam"
  class ARMCO_ANPRC_515_Gunner : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Gunner) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_gunner_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Darman : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Darman) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_darman_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Red : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Red) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
      "custom_armours\data\ODST\Backpack\odst_hard_backpack_RedDragon_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Symbol : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Symbol/Bruce) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Symbol_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Mini : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Mini) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Mini_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Night : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    scopeCurator = 1;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Night) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Night_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Garf : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Garfield) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Garf_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Apples : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Apples) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Apples_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Calamity : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Calamity) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Calamity_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Cheese : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Cheese) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Cheese_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Darkness : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Darkness) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Darkness_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Acanite : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Acanite) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Acanite_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Raziel : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Raziel) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Raz_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Valk : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Valkyrie) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_valk_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Runic : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Runic) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Runic_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Wolffe : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Wolffe) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_wolffe_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Addy : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Addy) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_addy_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Merek : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Merek) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "AP_Heavy"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_merek_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Belhun : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Belhun) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "AP_Heavy"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Belhun_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Reaper : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Reaper) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Reaper_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Viking : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Viking) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Viking_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Burford : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Burford) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Burford_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Blue : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Blue) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {"camo1", "BioFoam"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Blue_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Cybran : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Cybran) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {
        "camo1",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Backpack\odst_hard_backpack_Cybran_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };
  class ARMCO_ANPRC_515_Extortionist : OPTRE_ILCS_Rucksack_Black {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "4th Battalion Mod Team";
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
    containerClass = "Supply300";
    class DestructionEffects {};
    displayName = "[ARMCO] ILCS Rucksack (Extortionist) (With LR Radio)";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    vehicleClass = "OPTRE_UNSC_Backpack_class";
    allowedSlots[] = {901};
    mass = 40;
    hiddenSelections[] = {
        "camo1",
    };
    hiddenSelectionsTextures[] = {"custom_armours\data\ODST\Backpack\odst_hard_backpack_Extortionist_co.paa"};
    // TFAR Config
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
  };

  //---Soft Packs---// ,"B_Addons","B_Medic", "B_Radio"
  /*class ARMCO_Rucksack_Soft_Mac : OPTRE_UNSC_Rucksack
          {
                  dlc = "ARMCO OPTRE Reskins";
                  author
  = "Frosty & Mac"; scope = 0; scopeCurator = 0; displayName
  = "[ARMCO] UNSC Rucksack (Mac)"; containerClass
  = "Supply600"; mass
  = 45; hiddenSelections[]
  = {"camo","B_Addons"}; hiddenSelectionsTextures[] =
  {"custom_armours\data\ODST\Backpack\mac_backpack_soft_co.paa"};
                                  tf_encryptionCode
  = "tf_west_radio_code"; tf_dialog
  = "rt1523g_radio_dialog"; tf_subtype
  = "digital_lr"; tf_range
  = 25000;
                                  tf_dialogUpdate
  = "call TFAR_fnc_updateLRDialogToChannel;"; tf_hasLRradio
  = 1;
  };*/

  class Flag_White_F;
  class ARMCO_Flag : Flag_White_F {
    displayName = "[ARMCO] Unit Flag";
    scope = 2;
    scopeCurator = 2;
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\flags\flag_armco_co.paa"};
  };
};
//----------DAMAGE & UNITS END-----------//
class cfgWeapons {
  class U_B_CombatUniform_mcam;
  class VestItem;
  class UniformItem;
  class Uniform_Base;
  class HeadgearItem;
  class H_Cap_oli;
  class H_Beret_02;
  class V_PlateCarrierGL_rgr;
  class V_PlateCarrierSpec_rgr;
  class Vest_NoCamo_Base;
  class OPTRE_UNSC_CH252_Helmet_Base;  // Base Marine Helmet
  class OPTRE_UNSC_CH252D_Helmet_Base; // ODST Base Helmet

  //////////////////////
  // Base Helmets Start//
  //////////////////////

  ////////////////////////
  // Marine Helmets Start//
  ////////////////////////

  //-------------------------//

  /////////////////
  // Alpha Helmets//
  // "camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"
  /////////////////
  class ARMCO_CH252_Helmet_Alpha : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Alpha Squad CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",        "camo2",          "camo3",
                          "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                          "H_VacCollar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_alpha_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",        "camo2",          "camo3",
                            "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                            "H_VacCollar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_alpha_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Alpha_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Alpha Squad CH252 Helmet (Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo",           "camo2",          "camo3",       "H_Collar",
        "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_alpha_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo",           "camo2",          "camo3",       "H_Collar",
          "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_alpha_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };

  // Special Role Helmets//
  class ARMCO_CH252_Helmet_Medic : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Medic)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_Medic_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Medic/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };
  class ARMCO_CH252_Helmet_Medic_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Medic/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_Medic_C_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Medic/Ghillie/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };

  class ARMCO_CH252_Helmet_Corpsman : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Corpsman)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                          "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                            "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 12;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Corpsman_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Corpsman/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                          "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                            "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  class ARMCO_CH252_Helmet_Corpsman_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Corpsman/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo", "camo2", "camo3", "H_Collar", "H_UNSCVacLower", "H_VacCollar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {
          "camo", "camo2", "camo3", "H_Collar", "H_UNSCVacLower", "H_VacCollar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Corpsman_C_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (Corpsman/Ghillie/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo", "camo2", "camo3", "H_Collar", "H_UNSCVacLower", "H_VacCollar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo", "camo2", "camo3", "H_Collar", "H_UNSCVacLower", "H_VacCollar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  class ARMCO_CH252_Helmet_EOD : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (EOD)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo", "camo2", "camo3", "H_Collar", "H_Ghillie",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
        "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
          "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_EOD_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (EOD/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_helmet_eod_co.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };
  class ARMCO_CH252_Helmet_EOD_Camo : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (EOD/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
        "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
          "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_EOD_Camo_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] CH252 Helmet (EOD/Ghillie/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_eod_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_helmet_eod_co.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };

  ////////////////
  // Sabre Helmets//
  ////////////////
  class ARMCO_CH252_Helmet_Echo : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Sabre Squad CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo", "camo2", "camo3", "H_Collar", "H_Ghillie",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_Echo_DP : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Sabre Squad CH252 Helmet (Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_echo_co.paa.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };
  class ARMCO_CH252_Helmet_Echo_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Sabre Squad CH252 Helmet (Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_Echo_C_DP : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Sabre Squad CH252 Helmet (Ghillie/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Collar",

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_echo_co.paa",
        "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo",
          "camo2",
          "camo3",
          "H_Collar",

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_echo_co.paa.paa",
          "custom_armours\data\Marines\Helmet\visors\Helmet_Visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };

  ////////////////
  // Zulu Helmets//
  ////////////////
  class ARMCO_CH252_Helmet_Zulu : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",        "camo2",          "camo3",
                          "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                          "H_VacCollar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",        "camo2",          "camo3",
                            "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                            "H_VacCollar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Zulu_Medic : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Medic)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Zulu_Medic_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Medic)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };
  class ARMCO_CH252_Helmet_Zulu_Corpsman : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Corpsman)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                          "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                            "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Zulu_Corpsman_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Corpsman/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                          "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                            "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Zulu Ghillie Helmet---//
  class ARMCO_CH252_Helmet_Zulu_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",       "camo2",          "camo3",
                          "H_Collar",   "H_UNSCVacLower", "H_UNSCVacVisor",
                          "H_VacCollar"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_camo_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",       "camo2",          "camo3",
                            "H_Collar",   "H_UNSCVacLower", "H_UNSCVacVisor",
                            "H_VacCollar"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_camo_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Zulu_C_Medic : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Medic/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    subItems[] = {
        "Integrated_NVG_TI_0_F",
    };
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    /*subItems[]=
    {
            "Integrated_NVG_TI_0_F"
    };*/
  };
  class ARMCO_CH252_Helmet_Zulu_C_Medic_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Medic/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
    };
  };
  class ARMCO_CH252_Helmet_Zulu_C_Corpsman : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Corpsman/Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Zulu_C_Corpsman_dp : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad CH252 Helmet (Corpsman/Ghillie/Clear)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  ///////////////////
  // Phoenix Helmets//
  ///////////////////
  class ARMCO_CH252_Helmet_Phoenix : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",        "camo2",          "camo3",
                          "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                          "H_VacCollar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_phoenix_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",        "camo2",          "camo3",
                            "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                            "H_VacCollar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_phoenix_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_Phoenix_C : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad CH252 Helmet (Ghillie)";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {
        "camo",           "camo2",          "camo3",       "H_Collar",
        "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar",
    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Helmet\helmet_phoenix_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {
          "camo",           "camo2",          "camo3",       "H_Collar",
          "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar",
      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Helmet\helmet_phoenix_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };

  ///////////////////
  // O.D.S.T Helmets//
  ///////////////////
  class ARMCO_CH252D_Helmet_Frosty : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Frosty)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Frosty_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Frosty_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Frosty_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Frosty_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Frosty_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Frosty/Clear)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Frosty_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Frosty_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Frosty_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Frosty_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Super : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Super)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Super_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Super_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Super_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Super_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Super_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Super/Clear)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Super_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Super_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Boone : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Boone)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Boone_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Boone_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Boone_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Boone/Clear)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Boone_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Boone_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Shaw : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Shaw)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Shaw_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Shaw_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Shaw_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Nutters_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Shaw_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Shaw/Clear)";
    author = "4th Battalion Mod Team";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Shaw_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Shaw_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Defender : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Defender)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Defender_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Defender_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Defender_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Defender_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Defender_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Defender/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Defender_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Defender_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Ciro : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Ciro)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Ciro_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Ciro_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Ciro_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Ciro_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Ciro_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Ciro/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Ciro_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Ciro_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Ciro_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Runic : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Runic)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Runic_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Runic_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Runic_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Runic_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Runic_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Runic/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Runic_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Runic_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Viking : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Viking)";
    author = "Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Viking_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Viking_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Viking_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Viking_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Viking_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Viking/Clear)";
    author = "Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Viking_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Viking_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Viking_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Viking_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Burford : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Burford)";
    author = "Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Burford_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Burford_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Burford_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Burford_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Burford_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Burford/Clear)";
    author = "Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Burford_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Burford_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Burford_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Burford_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Blue : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Blue)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Blue_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Blue_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Blue_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Blue_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Blue_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Blue/Clear)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Blue_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Blue_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Cybran : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Cybran)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Cybran_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Cybran_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Cybran_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Cybran_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Cybran_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Cybran/Clear)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Cybran_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Cybran_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Extortionist : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Extortionist)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Extortionist_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Extortionist_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Extortionist_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Extortionist_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Extortionist_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Extortionist/Clear)";
    author = "Viking & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Extortionist_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Extortionist_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Extortionist_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_Helmet_Visor_Extortionist_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Squad Specific ODST Helmets---//
  class ARMCO_CH252D_Helmet_Alpha : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Alpha)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Alpha_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Alpha_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Alpha_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Alpha/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Alpha_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Alpha_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Echo : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Sabre)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_sabre_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_sabre_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Echo_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Sabre/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_sabre_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_sabre_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Phoenix : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Phoenix)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Phoenix_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Phoenix_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Phoenix_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Phoenix/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Phoenix_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Phoenix_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Zulu : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Zulu)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Zulu_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Zulu_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Zulu_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Zulu/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Zulu_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Zulu_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Security Helmet---//
  class ARMCO_CH252D_Helmet_Security : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Security Bureau)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\helmet\h_odst_security_co.paa",
        "custom_armours\data\security\helmet\h_visor_odst_security_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\security\helmet\h_odst_security_co.paa",
          "custom_armours\data\security\helmet\h_visor_odst_security_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Security_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Security Bureau/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\helmet\h_odst_security_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\security\helmet\h_odst_security_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  //-------Green Horns-------//
  class ARMCO_CH252D_Helmet_Jackson : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[GH] CH252D Helmet (Jackson Moore)";
    author = "Frosty";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jackson_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jackson_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jackson_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jackson_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Jackson_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[GH] CH252D Helmet (Jackson Moore/Clear)";
    author = "Frosty";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jackson_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jackson_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jackson_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jackson_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Girlie : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[GH] CH252D Helmet (Autumn Thorne)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Girlie_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Girlie_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Girlie_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Girlie_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Girlie_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[GH] CH252D Helmet (Autumn Thorne/Clear)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Girlie_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Girlie_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Girlie_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Girlie_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Sharkface : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[GH] CH252D Helmet (Gabriel Firewalker)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Sharkface_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Sharkface_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Sharkface_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Sharkface_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Sharkface_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[GH] CH252D Helmet (Gabriel Firewalker/Clear)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Sharkface_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Sharkface_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Sharkface_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Sharkface_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Jaymes : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[GH] CH252D Helmet (Jaymes Addington)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jaymes_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jaymes_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jaymes_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jaymes_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Jaymes_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[GH] CH252D Helmet (Jaymes Addington/Clear)";
    author = "Frosty & Viking";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jaymes_co.paa",
        "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jaymes_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\special\helmets\odst_helmet_Jaymes_co.paa",
          "custom_armours\data\Greenhorns\special\helmets\visors\ODST_Helmet_Visor_Jaymes_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Green horns Marine---//
  class ARMCO_CH252_Helmet_GH : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Viking";
    displayName = "[GH] Stolen Marine CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",        "camo2",          "camo3",
                          "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                          "H_VacCollar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_co.paa",
        "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",        "camo2",          "camo3",
                            "H_Collar",    "H_UNSCVacLower", "H_UNSCVacVisor",
                            "H_VacCollar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\Marines\Helmet\helmet_phoenix_co.paa",
          "custom_armours\data\Marines\Helmet\visors\helmet_visor_ca.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_GH_Medic : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Viking";
    displayName = "[GH] Stolen Marine Medic CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_Medical_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_Medical_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_GH_Corpsman : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Viking";
    displayName = "[GH] Stolen Marine Corpsman CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo",     "camo2",          "camo3",
                          "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                          "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_Medical_co.paa",
        "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo",     "camo2",          "camo3",
                            "H_Collar", "H_UNSCVacLower", "H_VacCollar",
                            "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_Medical_co.paa",
          "custom_armours\data\Marines\Helmet\visors\medical_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252_Helmet_GH_EOD : OPTRE_UNSC_CH252_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Viking";
    displayName = "[GH] Stolen EOD CH252 Helmet";
    picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
    model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
    hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Greenhorns\Marines\Helmet\helmet_Greenhorn_Marine_co.paa",
        "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
      hiddenSelections[] = {"camo", "camo2", "camo3", "H_Collar", "H_Ghillie"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Greenhorns\Marines\Helmet\helmet_phoenix_co.paa",
          "custom_armours\data\Marines\Helmet\visors\eod_visor_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa"};
      ace_hearing_protection = 1.50; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Community Made Helmets---//
  class ARMCO_CH252D_Helmet_VJ : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Vincent)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_VJ_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_VJ_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_VJ_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_VJ_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_VJ_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Vincent/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_VJ_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_VJ_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Nutters : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Nutters)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Nutters_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Nutters_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Nutters_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Nutters_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Nutters_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Nutters/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Nutters_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Nutters_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Boone_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Spooks : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Spooks)";
    author = "Frosty & Spooks";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Spooks_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Spooks_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Spooks_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Spooks_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Spooks_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Spooks/Clear)";
    author = "Frosty & Spooks";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Spooks_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Spooks_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Spooks_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Spooks_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_French : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (French)";
    author = "Frosty & French";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_French_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_French_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_French_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_French_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_French_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (French/Clear)";
    author = "Frosty & French";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_French_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_French_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Mac : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Mac)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Mac_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Mac_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Mac_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Mac_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Mac_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Mac/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Mac_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Mac_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Mac_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Gunner : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Gunner)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Gunner_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Gunner_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Gunner_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Gunner_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Gunner_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Gunner/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Gunner_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Gunner_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Gunner_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Gunner_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Darman : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Darman)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Darman_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Darman_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Darman_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Darman_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Darman_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Darman/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Darman_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Darman_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Red : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Red)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_RedDragon_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_RedDragon_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_RedDragon_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_RedDragon_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Red_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Red/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_RedDragon_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_RedDragon_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Night : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Night)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Night_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Night_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Night_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Night_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Night_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Night/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Night_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Night_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Symbol : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Symbol/Bruce)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Symbol_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Symbol_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Symbol_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Symbol_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Symbol_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Symbol/Bruce/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Symbol_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Symbol_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Mini : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Mini)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Mini_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Mini_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Mini_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Mini_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Mini_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Mini/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Mini_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Mini_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Garf : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Garfield)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Garf_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Garf_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Garf_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Garf_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Garf_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Garfield/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Garf_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Garf_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Cheese : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Cheese)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Cheese_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Cheese_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Cheese_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Cheese_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Cheese_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Cheese/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Cheese_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Cheese_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Calamity : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Calamity)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Calamity_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Calamity_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Calamity_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Calamity_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Calamity_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Calamity/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Calamity_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Calamity_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Darkness : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Darkness)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Darkness_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Darkness_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Darkness_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Darkness_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Darkness_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Darkness/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Darkness_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Darkness_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Apples : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Apples)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Apples_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Apples_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Apples_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Apples_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Apples_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Apples/Clear)";
    author = "Frosty & Mac";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Apples_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Apples_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Valk : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Valkyrie)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Valk_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Valk_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Valk_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Valk_.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Valk_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Valkyrie/Clear)";
    author = "Frosty & Gunnre";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Valk_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Valk_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Acanite : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Acanite)";
    author = "Frosty & Acanite";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Acanite_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Acanite_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Acanite_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Acanite_.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Acanite_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Acanite/Clear)";
    author = "Frosty & Acanite";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Acanite_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Acanite_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Acanite_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Acanite_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Raziel : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Raziel)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_raz_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_raz_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_raz_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_raz_.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Raziel_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Raziel/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_raz_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_raz_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  /*class ARMCO_CH252D_Helmet_Kellboy: OPTRE_UNSC_CH252D_Helmet_Base
          {
                  dlc = "ARMCO OPTRE Reskins";
                  scope
  = 2; displayName	="[ARMCO] CH252D Helmet (Kellboy)"; author
  = "Frosty & Kellboy"; picture
  = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa"; model
  = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d"; hiddenSelections[]
  =
                  {
                          "camo",
                          "camo2"
                  };
                  hiddenSelectionsTextures[]
  =
                  {
                          "custom_armours\data\ODST\Helmet\odst_helmet_kellboy_co.paa",
                          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_kellboy_co.paa"
                  };
                  optreVarietys[]
  = {"_dp","","_broken"}; optreHUDStyle
  = "ODST_1"; class ItemInfo: HeadgearItem
                  {
                          uniformModel
  = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d"; mass
  = 40; modelSides[]
  = {6}; passThrough
  = 0.1; hiddenSelections[]
  =
                          {
                                  "camo",
                                  "camo2"
                          };
                          hiddenSelectionsTextures[]
  =
                          {
                          "custom_armours\data\ODST\Helmet\odst_helmet_kellboy_co.paa",
                          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_kellboy_co.paa"
                          };
                          ace_hearing_protection = 1.10;  // Protection against
  deafening (0 to 1, higher means more protection) ace_hearing_lowerVolume =
  0.30;  // Muffling of the sound (0 to 1, higher means more muffling) class
  HitpointsProtectionInfo
                          {
                                  class Head
                                  {
                                          hitpointName
  = "HitHead";
                                          armor
  = 25; passThrough
  = 0.1;
                                  };
                                  class Face
                                  {
                                          hitpointName
  = "HitFace";
                                          armor
  = 25; passThrough
  = 0.1;
                                  };
                                  class Neck
                                  {
                                          hitpointName
  = "HitNeck";
                                          armor
  = 20; passThrough
  = 0.1;
                                  };
                          };
                  };
                  subItems[]=
                  {
                          "Integrated_NVG_F"
                  };
          };
  class ARMCO_CH252D_Helmet_Kellboy_dp: OPTRE_UNSC_CH252D_Helmet_Base
          {
                  dlc = "ARMCO OPTRE Reskins";
                  scope
  = 1; displayName	= "[ARMCO] CH252D Helmet (Kellboy/Clear)"; author
  = "Frosty & Kellboy"; picture
  = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa"; model
  = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d"; hiddenSelections[]
  =
                  {
                          "camo",
                          "camo2"
                  };
                  hiddenSelectionsTextures[]
  =
                  {
                          "custom_armours\data\ODST\Helmet\odst_helmet_kellboy_co.paa",
                          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"
                  };
                  optreVarietys[]
  = {"_dp","","_broken"}; optreHUDStyle
  = "ODST_1"; class ItemInfo: HeadgearItem
                  {
                          uniformModel
  = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d"; mass
  = 40; modelSides[]
  = {6}; passThrough
  = 0.1; hiddenSelections[]
  =
                          {
                                  "camo",
                                  "camo2"
                          };
                          hiddenSelectionsTextures[]
  =
                          {
                          "custom_armours\data\ODST\Helmet\odst_helmet_kellboy_co.paa",
                          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"
                          };
                          ace_hearing_protection = 1.10;  // Protection against
  deafening (0 to 1, higher means more protection) ace_hearing_lowerVolume =
  0.10;  // Muffling of the sound (0 to 1, higher means more muffling) class
  HitpointsProtectionInfo
                          {
                                  class Head
                                  {
                                          hitpointName
  = "HitHead";
                                          armor
  = 25; passThrough
  = 0.1;
                                  };
                                  class Face
                                  {
                                          hitpointName
  = "HitFace";
                                          armor
  = 25; passThrough
  = 0.1;
                                  };
                                  class Neck
                                  {
                                          hitpointName
  = "HitNeck";
                                          armor
  = 20; passThrough
  = 0.1;
                                  };
                          };
                  };
          };
  */
  class ARMCO_CH252D_Helmet_Wolffe : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Wolffe)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_wolffe_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_wolffe_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_wolffe_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_wolffe_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Wolffe_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Wolffe/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_wolffe_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_wolffe_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Addy : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Addy)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_addy_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_addy_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_addy_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_addy_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Addy_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Addy/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_addy_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_addy_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Merek : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Merek)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_merek_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_merek_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_merek_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_merek_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Merek_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Merek/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_merek_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_merek_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Belhun : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Belhun)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Belhun_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Belhun_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Belhun_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Belhun_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Belhun_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Belhun/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Belhun_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Belhun_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_CH252D_Helmet_Reaper : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    displayName = "[ARMCO] CH252D Helmet (Reaper)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Reaper_co.paa",
        "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Reaper_co.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Reaper_co.paa",
          "custom_armours\data\ODST\Helmet\visors\ODST_Helmet_Visor_Reaper_co.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.30; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
    subItems[] = {"Integrated_NVG_F"};
  };
  class ARMCO_CH252D_Helmet_Reaper_dp : OPTRE_UNSC_CH252D_Helmet_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    displayName = "[ARMCO] CH252D Helmet (Reaper/Clear)";
    author = "Frosty & Gunner";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Helmet\odst_helmet_Reaper_co.paa",
        "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
    optreVarietys[] = {"_dp", "", "_broken"};
    optreHUDStyle = "ODST_1";
    class ItemInfo : HeadgearItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      mass = 40;
      modelSides[] = {6};
      passThrough = 0.1;
      hiddenSelections[] = {"camo", "camo2"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Helmet\odst_helmet_Reaper_co.paa",
          "custom_armours\data\ODST\Helmet\visors\odst_helmet_visor_ca.paa"};
      ace_hearing_protection = 1.10; // Protection against deafening (0 to 1,
                                     // higher means more protection)
      ace_hearing_lowerVolume =
          0.10; // Muffling of the sound (0 to 1, higher means more muffling)
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face {
          hitpointName = "HitFace";
          armor = 5;
          passThrough = 0.1;
        };
        class Neck {
          hitpointName = "HitNeck";
          armor = 5;
          passThrough = 0.1;
        };
      };
    };
  };

  //----------HELMETS END-----------//

  /////////////////
  // Armours Start//
  /////////////////
  class OPTRE_UNSC_M52A_Armor_Base;
  class OPTRE_UNSC_M52A_Armor1_WDL;
  class ARMCO_M52A_Armor_Base : OPTRE_UNSC_M52A_Armor_Base {
    scope = 0;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Base M52A Body Armor";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Base",
                          "A_ChestArmor",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_ShinArmorLeft",
                          "A_ShinArmorRight",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight"};
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_co.paa",
        "optre_unsc_units\army\data\armor_co.paa",
        "optre_unsc_units\army\data\legs_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Base",
                            "A_ChestArmor",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesRight",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_ShinArmorLeft",
                            "A_ShinArmorRight",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight"};
      hiddenSelectionsTextures[] = {
          "OPTRE_UNSC_Units\Army\data\vest_co.paa",
          "optre_unsc_units\army\data\armor_co.paa",
          "optre_unsc_units\army\data\legs_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52M_Armor_Base : OPTRE_UNSC_M52A_Armor_Base {
    scope = 1;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Base M52A Body Armor [Medical]";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Base",
                          "A_ChestArmor",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_ShinArmorLeft",
                          "A_ShinArmorRight",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight"};
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_co.paa",
        "optre_unsc_units\army\data\armor_co.paa",
        "optre_unsc_units\army\data\legs_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Base",
                            "A_ChestArmor",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesRight",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_ShinArmorLeft",
                            "A_ShinArmorRight",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight"};
      hiddenSelectionsTextures[] = {
          "OPTRE_UNSC_Units\Army\data\vest_co.paa",
          "optre_unsc_units\army\data\armor_co.paa",
          "optre_unsc_units\army\data\legs_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52E_Armor_Base : OPTRE_UNSC_M52A_Armor_Base {
    scope = 1;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Base M52A Body Armor [EOD]";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Base",
                          "A_ChestArmor",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_ShinArmorLeft",
                          "A_ShinArmorRight",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight"};
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_co.paa",
        "optre_unsc_units\army\data\armor_co.paa",
        "optre_unsc_units\army\data\legs_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Base",
                            "A_ChestArmor",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesRight",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_ShinArmorLeft",
                            "A_ShinArmorRight",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight"};
      hiddenSelectionsTextures[] = {
          "OPTRE_UNSC_Units\Army\data\vest_co.paa",
          "optre_unsc_units\army\data\armor_co.paa",
          "optre_unsc_units\army\data\legs_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Base : OPTRE_UNSC_M52A_Armor1_WDL {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "Frosty & Mac";
    = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor Base";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_ShinArmorLeft",
                          "A_ShinArmorRight",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
        "optre_unsc_units\army\data\armor_odst_co.paa",
        "optre_unsc_units\army\data\legs_odst_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      containerClass = "Supply200";
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesRight",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_ShinArmorLeft",
                            "A_ShinArmorRight",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
          "optre_unsc_units\army\data\armor_odst_co.paa",
          "optre_unsc_units\army\data\legs_odst_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Base Vests End---//

  //---Alpha Squad---//
  class ARMCO_M52A_Armor_Alpha_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Rifleman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
        "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
        "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
          "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
          "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Alpha_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Team Leader Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
        "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
        "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
          "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
          "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52A_Armor_Alpha_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Medic)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "AP_AR",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "AP_AR",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52A_Armor_Alpha_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Corpsman)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Alpha_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (EOD)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "AP_AR",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "AP_AR",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Alpha Ghillie---//
  class ARMCO_M52A_Armor_Alpha_Rifleman_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Rifleman Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
        "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
        "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
          "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
          "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Alpha_Team_Lead_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Team Leader Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
        "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
        "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_alpha_co.paa",
          "custom_armours\data\Marines\Armour\armour_alpha_co.paa",
          "custom_armours\data\Marines\Armour\legs_alpha_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52A_Armor_Alpha_Medic_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Medic/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "AP_AR",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "AP_AR",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52A_Armor_Alpha_Corpsman_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (Corpsman/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Alpha_EOD_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Squad (EOD/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "AP_AR",
                          "A_ODST",
                          "AS_LargeRight",
                          "AP_Canteen",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "AP_AR",
                            "A_ODST",
                            "AS_LargeRight",
                            "AP_Canteen",
                            "AS_MediumLeft",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Echo Squad---//
  class ARMCO_M52A_Armor_Echo_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Rifleman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          ,
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_echo_co.paa",
        "custom_armours\data\Marines\Armour\armour_echo_co.paa",
        "custom_armours\data\Marines\Armour\legs_echo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            ,
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_echo_co.paa",
          "custom_armours\data\Marines\Armour\armour_echo_co.paa",
          "custom_armours\data\Marines\Armour\legs_echo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Echo_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Team Leader Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_echo_co.paa",
        "custom_armours\data\Marines\Armour\armour_echo_co.paa",
        "custom_armours\data\Marines\Armour\legs_echo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_echo_co.paa",
          "custom_armours\data\Marines\Armour\armour_echo_co.paa",
          "custom_armours\data\Marines\Armour\legs_echo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Echo_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Medic Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Echo_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Corpsman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Echo_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (EOD)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Echo Ghillie---//
  class ARMCO_M52A_Armor_Echo_Rifleman_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Rifleman Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          ,
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_echo_co.paa",
        "custom_armours\data\Marines\Armour\armour_echo_co.paa",
        "custom_armours\data\Marines\Armour\legs_echo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            ,
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_echo_co.paa",
          "custom_armours\data\Marines\Armour\armour_echo_co.paa",
          "custom_armours\data\Marines\Armour\legs_echo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Echo_Team_Lead_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Team Leader Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_echo_co.paa",
        "custom_armours\data\Marines\Armour\armour_echo_co.paa",
        "custom_armours\data\Marines\Armour\legs_echo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_echo_co.paa",
          "custom_armours\data\Marines\Armour\armour_echo_co.paa",
          "custom_armours\data\Marines\Armour\legs_echo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Echo_Medic_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Medic Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Echo_Corpsman_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (Corpsman Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Echo_EOD_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Squad (EOD/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Zulu Squad---//
  class ARMCO_M52A_Armor_Zulu_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Rifleman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Zulu_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Team Leader Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_BR",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_BR",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Zulu_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Medic Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "AP_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_medic_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "AP_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_medic_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Zulu_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Corpsman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ThighArmorRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "AP_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_medic_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ThighArmorRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "AP_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_medic_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Zulu_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (EOD Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "AP_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "AP_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Zulu Squad Ghille---//
  class ARMCO_M52A_Armor_Zulu_Camo_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Rifleman Camo Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_BR",
                          "AP_GL",
                          "APO_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_camo_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_camo_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_camo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_BR",
                            "AP_GL",
                            "APO_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_camo_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_camo_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_camo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Zulu_Camo_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Team Leader Camo Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "A_ThighArmorLeft",
                          "A_ThighArmorRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_BR",
                          "APO_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_camo_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_camo_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_camo_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "A_ThighArmorLeft",
                            "A_ThighArmorRight",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_BR",
                            "APO_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_camo_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_camo_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_camo_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Zulu_Camo_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Medic Camo Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_camo_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_camo_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Zulu_Camo_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (Corpsman Camo Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ThighArmorRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Armour\armour_zulu_camo_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_zulu_camo_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ThighArmorRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Armour\armour_zulu_camo_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_zulu_camo_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Zulu_Camo_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Zulu Squad (EOD 'Camo')";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesLeft",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesLeft",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Phoenix Squad---//
  class ARMCO_M52A_Armor_Phoenix_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Rifleman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_MediumLeft",
                          "AS_LargeRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_GL",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_MediumLeft",
                            "AS_LargeRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_GL",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Phoenix_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Team Leader Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_MediumLeft",
                          "AS_LargeRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_MediumLeft",
                            "AS_LargeRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Phoenix_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Medic Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_ODST",
                          "A_TacPad",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "AS_LargeRight",
                          "AS_LargeLeft",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_ODST",
                            "A_TacPad",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "AS_LargeRight",
                            "AS_LargeLeft",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Phoenix_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Corpsman)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Phoenix_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (EOD)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_ODST",
                          "A_TacPad",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "AS_LargeRight",
                          "AS_LargeLeft",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_ODST",
                            "A_TacPad",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "AS_LargeRight",
                            "AS_LargeLeft",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Phoenix Ghillie---//
  class ARMCO_M52A_Armor_Phoenix_Rifleman_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Rifleman Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_MediumLeft",
                          "AS_LargeRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_GL",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_MediumLeft",
                            "AS_LargeRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_GL",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_Phoenix_Team_Lead_C : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "4th Battalion Mod Team";
    displayName = "[ARMCO] Phoenix Squad (Team Leader Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_MediumLeft",
                          "AS_LargeRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
        "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "A_ODST",
                            "A_TacPad",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_MediumLeft",
                            "AS_LargeRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\armour_phoenix_co.paa",
          "custom_armours\data\Marines\Armour\legs_phoenix_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_Phoenix_Medic_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix Squad (Medic Armour/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_ODST",
                          "A_TacPad",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "AS_LargeRight",
                          "AS_LargeLeft",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_ODST",
                            "A_TacPad",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "AS_LargeRight",
                            "AS_LargeLeft",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_Phoenix_Corpsman_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix Squad (Corpsman/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Smoke",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_medic_co.paa",
        "custom_armours\data\Marines\Armour\armor_medic_co.paa",
        "custom_armours\data\Marines\Armour\legs_medic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Smoke",
                            "AP_MGThigh",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_medic_co.paa",
          "custom_armours\data\Marines\Armour\armor_medic_co.paa",
          "custom_armours\data\Marines\Armour\legs_medic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_Phoenix_EOD_C : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix Squad (EOD/Ghillie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_ODST",
                          "A_TacPad",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "AS_LargeRight",
                          "AS_LargeLeft",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\Marines\Armour\vest_eod_co.paa",
        "custom_armours\data\Marines\Armour\armor_eod_co.paa",
        "custom_armours\data\Marines\Armour\legs_eod_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_ODST",
                            "A_TacPad",
                            "A_KneesMarLeft",
                            "A_KneesMarRight",
                            "AS_LargeRight",
                            "AS_LargeLeft",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\Marines\Armour\vest_eod_co.paa",
          "custom_armours\data\Marines\Armour\armor_eod_co.paa",
          "custom_armours\data\Marines\Armour\legs_eod_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  //---GreenHorns Marine Armour---//
  class ARMCO_M52A_Armor_GH_Rifleman : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] Marine Defector (Rifleman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          ,
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa",
    };
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "A_TacPad",
                            ,
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa",
          ,
      };
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Team Leader---//
  class ARMCO_M52A_Armor_GH_Team_Lead : ARMCO_M52A_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] Marine Defector (Team Leader Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa",
    };
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa",
      };
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Medic---//
  class ARMCO_M52M_Armor_GH_Medic : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] Marine Defector (Medic Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa",
    };
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa",
      };
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---Corpsman---//
  class ARMCO_M52M_Armor_GH_Corpsman : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] Marine Defector (Corpsman Armour)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa",
    };
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa",
      };
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };
  //---EOD---//
  class ARMCO_M52E_Armor_GH_EOD : ARMCO_M52M_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] Marine Defector (EOD)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
        "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa",
    };
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_KneesMarLeft",
                            "A_ODST",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AP_AR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\armor_Greenhorn_Marine_co.paa",
          "custom_armours\data\Greenhorns\Marines\Armour\Legs_Greenhorn_Marine_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "optre_unsc_units\army\data\odst_armor_co.paa",
      };
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 30;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 30;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 30;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 30;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 30;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 30;
          passThrough = 0.1;
        };
      };
    };
  };

  /////////////////////////
  //---O.D.S.T Armours---//
  /////////////////////////
  class ARMCO_M52D_Armor_Frosty : ARMCO_M52D_Armor_Base {
    scope = 1;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty";
    displayName = "[ARMCO] M52D Body Armor (Frosty)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "AP_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Frosty_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Frosty_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "AP_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Frosty_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Frosty_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Mac : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Mac)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_SMG",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_Sniper",
                          "AP_Thigh",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_mac_co",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Mac_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Mac_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_SMG",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_Sniper",
                            "AP_Thigh",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_mac_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Mac_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Mac_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_French : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Franch";
    displayName = "[ARMCO] M52D Body Armor (French)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_French_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_French_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_French_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_French_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_French_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Vest\odst_armor_French_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Boone : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Boone)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Boone_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Boone_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Boone_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Boone_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Super : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Super)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Super_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Super_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Super_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Super_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_VJ : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Vincent)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          ,
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_BR",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Pistol",
                          "AP_Smoke",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Super_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_VJ_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            ,
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_BR",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Pistol",
                            "AP_Smoke",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Super_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_VJ_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Spooks : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Spooks)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Spooks_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Spooks_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Spooks_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Spooks_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Nutters : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Nutters)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Nutters_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_nutters_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Nutters_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_nutters_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Shaw : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Shaw)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Shaw_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_shaw_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_BaseLeft",
                            "AS_BaseRight",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Shaw_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_shaw_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Defender : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Defender)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Defender_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Defender_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Defender_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Defender_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Ciro : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Ciro)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_ODSTSniperLeft",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_ciro_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Ciro_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Ciro_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_ODSTSniperLeft",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_ciro_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Ciro_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Ciro_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Runic : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Runic)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_SMG",
                          "APO_Knife",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Runic_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Runic_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Runic_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_SMG",
                            "APO_Knife",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Runic_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Runic_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Runic_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Squad Specific Armours---//
  class ARMCO_M52D_Armor_Alpha : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Alpha)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Alpha_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Alpha_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Alpha_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Echo : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Sabre)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_sabre_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_sabre_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_sabre_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_sabre_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Zulu : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Zulu)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Zulu_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Zulu_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Zulu_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Zulu_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Phoenix : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Phoenix)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_TacPad",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Phoenix_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "A_TacPad",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Phoenix_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Phoenix_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };

  //----Green Horns----//
  class ARMCO_M52D_Armor_Jackson : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty";
    displayName = "[GH] M52D Body Armor (Jackson Moore)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\Greenhorns\special\armours\Legs_odst_Jackson_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\Greenhorns\special\armours\odst_armor_Jackson_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\Greenhorns\special\armours\Legs_odst_Jackson_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\Greenhorns\special\armours\odst_armor_Jackson_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Girlie : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] M52D Body Armor (Autumn Thorne)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\Greenhorns\special\armours\Legs_odst_Girlie_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\Greenhorns\special\armours\odst_armor_Girlie_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\Greenhorns\special\armours\Legs_odst_Girlie_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\Greenhorns\special\armours\odst_armor_Girlie_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Sharkface : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] M52D Body Armor (Gabriel Firewalker)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\Greenhorns\special\armours\Legs_odst_Sharkface_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\Greenhorns\special\armours\odst_armor_Sharkface_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\Greenhorns\special\armours\Legs_odst_Sharkface_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\Greenhorns\special\armours\odst_armor_Sharkface_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Jaymes : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Viking";
    displayName = "[GH] M52D Body Armor (Jaymes Addington)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\Greenhorns\special\armours\Legs_odst_Jaymes_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\Greenhorns\special\armours\odst_armor_Jaymes_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\Greenhorns\special\armours\Legs_odst_Jaymes_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\Greenhorns\special\armours\odst_armor_Jaymes_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };

  //--Security--//
  class ARMCO_M52D_Armor_Security : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Mac";
    displayName = "[ARMCO] M52D Body Armor (Security Bureau)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_SG",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\armour\v_odst_security_co",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\security\armour\l_odst_security_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\security\armour\a_odst_security_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_SG",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\security\armour\v_odst_security_co",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\security\armour\l_odst_security_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\security\armour\a_odst_security_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_Security_Belt : Vest_NoCamo_Base {
    scope = 2;
    scopeCurator = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Security Bureau Utility Belt";
    descriptionShort = "Standard issue utility belt and holster";
    picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
    editorPreview = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_belt";
    hiddenSelections[] = {"camo"};

    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\armour\v_security_belt_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
      uniformClass = "ARMCO_Security_Belt";
      containerClass = "Supply40";
      mass = 5;
      hiddenSelections[] = {"camo"};

      hiddenSelectionsTextures[] = {
          "custom_armours\data\security\armour\v_security_belt_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };

  //---Community Made Armours---//
  class ARMCO_M52D_Armor_Gunner : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Gunner)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Rounds",
                          "AP_Pack",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Smoke",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Gunner_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Gunner_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Gunner_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Rounds",
                            "AP_Pack",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Smoke",
                            "AP_Frag",
                            "AP_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Gunner_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Gunner_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Gunner_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Darman : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Darman)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Rounds",
                          "AP_Pack",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Smoke",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Darman_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Darman_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Darman_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Rounds",
                            "AP_Pack",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Smoke",
                            "AP_Frag",
                            "AP_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Darman_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Darman_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Darman_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Red : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Red)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Rounds",
                          "AP_Pack",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Smoke",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_RedDragon_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_RedDragon_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_RedDragon_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Rounds",
                            "AP_Pack",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Smoke",
                            "AP_Frag",
                            "AP_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_RedDragon_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_RedDragon_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_RedDragon_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Night : ARMCO_M52D_Armor_Base {
    scope = 1;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Night)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Night_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Night_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Night_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Night_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Night_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Night_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Mini : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Mini)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Mini_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Mini_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Mini_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Mini_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Garf : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Garfield)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Garf_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Garf_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Garf_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Garf_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Symbol : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Symbol/Bruce)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Symbol_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Symbol_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Symbol_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Symbol_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Cheese : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Cheese)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Cheese_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Cheese_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Cheese_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Cheese_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Cheese_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Cheese_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Calamity : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Calamity)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Calamity_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Calamity_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Calamity_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Calamity_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Calamity_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Calamity_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Darkness : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Darkness)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Darkness_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Darkness_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Darkness_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Darkness_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Darkness_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Darkness_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Apples : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Apples)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_Knife",
                          "AP_GL",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Apples_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Apples_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_Knife",
                            "AP_GL",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Calamity_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Calamity_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Valkyrie : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Valkyrie)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Valk_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Valk_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Valk_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Valk_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Valk_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Valk_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Acanite : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Acanite";
    displayName = "[ARMCO] M52D Body Armor (Acanite)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "custom_armours\data\ODST\Armour\Armor_odst_Acanite_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Acanite_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Acanite_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\ODST\Armour\Armor_odst_Acanite_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Acanite_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Acanite_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Raziel : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Raziel)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Raz_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Raz_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_AR",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "custom_armours\data\ODST\Armour\Armor_odst_Raz_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Raz_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Raz_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  /*class ARMCO_M52D_Armor_Kellboy: ARMCO_M52D_Armor_Base
          {
                  scope = 2;
                  dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
                  author
     = "Frosty & Kellboy"; displayName
     = "[ARMCO] M52D Body Armor (Kellboy)"; hiddenSelections[]
     =
                  {
                  "camo",
          "camo2",
          "camo3",
          "camo4",
          "camo5",
          "A_Ghillie",
          "AS_LargeLeft",
          "AS_LargeRight",
          "AS_MediumLeft",
          "AS_MediumRight",
          "AS_ODSTCQBLeft",
          "AS_ODSTCQBRight",
          "AS_ODSTLeft",
          "AS_ODSTRight",
          "AS_ODSTSniperLeft",
          "AS_ODSTSniperRight",
          "AS_SmallLeft",
          "AS_SmallRight",
          "AP_BR",
          "AP_Canteen",
          "AP_GL",
          "AP_Knife",
          "AP_MGThigh",
          "AP_AR",
          "AP_Pack",
          "AP_Pistol",
          "AP_Rounds",
          "AP_SG",
          "AP_SMG",
          "AP_Sniper",
          "AP_Thigh",
          "AP_Frag",
          "AP_Smoke",
          "APO_AR",
          "APO_BR",
          "APO_Knife",
          "APO_SMG",
          "APO_Sniper","CustomKit_Scorch"

                  };
                  hiddenSelectionsTextures[] =
                  {
                          "custom_armours\data\ODST\Vest\Vest_odst_Kellboy_co.paa",
                          "optre_unsc_units\army\data\Armor_odst_co.paa",
                          "custom_armours\data\ODST\Armour\Legs_odst_Kellboy_co.paa",
                          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
                          "custom_armours\data\ODST\Armour\odst_armor_Kellboy_co.paa"
                  };
                  class ItemInfo: VestItem
                  {
                          uniformModel
     = "\OPTRE_UNSC_Units\Army\armor.p3d"; containerClass
     = "Supply400";
                          mass
     = 80;
                          modelSides[]
     = {6}; hiddenSelections[] =
                          {
                   "camo",
          "camo2",
          "camo3",
          "camo4",
          "camo5",
          "A_Ghillie",
          "AS_LargeLeft",
          "AS_LargeRight",
          "AS_MediumLeft",
          "AS_MediumRight",
          "AS_ODSTCQBLeft",
          "AS_ODSTCQBRight",
          "AS_ODSTLeft",
          "AS_ODSTRight",
          "AS_ODSTSniperLeft",
          "AS_ODSTSniperRight",
          "AS_SmallLeft",
          "AS_SmallRight",
          "AP_BR",
          "AP_Canteen",
          "AP_GL",
          "AP_Knife",
          "AP_MGThigh",
          "AP_AR",
          "AP_Pack",
          "AP_Pistol",
          "AP_Rounds",
          "AP_SG",
          "AP_SMG",
          "AP_Sniper",
          "AP_Thigh",
          "AP_Frag",
          "AP_Smoke",
          "APO_AR",
          "APO_BR",
          "APO_Knife",
          "APO_SMG",
          "APO_Sniper","CustomKit_Scorch"

                          };
                          hiddenSelectionsTextures[] =
                          {
                          "custom_armours\data\ODST\Vest\Vest_odst_Kellboy_co.paa",
                          "optre_unsc_units\army\data\Armor_odst_co.paa",
                          "custom_armours\data\ODST\Armour\Legs_odst_Kellboy_co.paa",
                          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
                          "custom_armours\data\ODST\Armour\odst_armor_Kellboy_co.paa"
                          };
                          class HitpointsProtectionInfo
                          {
                                  class Neck
                                  {
                                          hitpointName
     = "HitNeck"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Legs
                                  {
                                          hitpointName
     = "HitLegs"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Arms
                                  {
                                          hitpointName
     = "HitArms"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Hands
                                  {
                                          hitpointName
     = "HitHands"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Chest
                                  {
                                          hitpointName
     = "HitChest"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Diaphragm
                                  {
                                          hitpointName
     = "HitDiaphragm";
                                          armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Abdomen
                                  {
                                          hitpointName
     = "HitAbdomen";
                                          armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                                  class Body
                                  {
                                          hitpointName
     = "HitBody"; armor
     = 45;
                                          passThrough
     = 0.1;
                                  };
                          };
                  };
          };
  */
  class ARMCO_M52D_Armor_Wolffe : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Wolffe)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_wolffe_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_wolffe_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_wolffe_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_wolffe_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Addy : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Addy)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_addy_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_addy_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_addy_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_addy_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Merek : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Merek)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "APO_AR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_merek_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_merek_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_merek_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "APO_AR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_merek_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_merek_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_merek_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Belhun : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Belhun)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Belhun_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Belhun_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Belhun_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Belhun_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Belhun_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Belhun_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Reaper : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod";
    author = "Frosty & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Reaper)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Reaper_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Reaper_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Reaper_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_Knife",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Pistol",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_BR",
                            "APO_Knife",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"};
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Reaper_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Reaper_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Reaper_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Viking : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Viking";
    displayName = "[ARMCO] M52D Body Armor (Viking)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Viking_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Viking_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "APO_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Viking_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Viking_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Burford : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Viking";
    displayName = "[ARMCO] M52D Body Armor (Burford)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Burford_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Burford_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Burford_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Burford_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Blue : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Viking & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Blue)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Blue_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Blue_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTCQBRight",
                            "AS_ODSTLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_Canteen",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_AR",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Blue_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Blue_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Cybran : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Viking & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Cybran)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_GL",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Cybran_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Cybran_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_GL",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Frag",
                            "AP_Smoke",
                            "APO_AR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Cybran_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Cybran_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  class ARMCO_M52D_Armor_Extortionist : ARMCO_M52D_Armor_Base {
    scope = 2;
    dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
    author = "Viking & Gunner";
    displayName = "[ARMCO] M52D Body Armor (Extortionist)";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"

    };
    hiddenSelectionsTextures[] = {
        "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
        "optre_unsc_units\army\data\Armor_odst_co.paa",
        "custom_armours\data\ODST\Armour\Legs_odst_Extortionist_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "custom_armours\data\ODST\Armour\odst_armor_Extortionist_co.paa"};
    class ItemInfo : VestItem {
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      mass = 80;
      modelSides[] = {6};
      hiddenSelections[] = {"camo",
                            "camo2",
                            "camo3",
                            "camo4",
                            "camo5",
                            "A_Ghillie",
                            "AS_LargeLeft",
                            "AS_LargeRight",
                            "AS_MediumLeft",
                            "AS_MediumRight",
                            "AS_ODSTCQBLeft",
                            "AS_ODSTRight",
                            "AS_ODSTSniperLeft",
                            "AS_ODSTSniperRight",
                            "AS_SmallLeft",
                            "AS_SmallRight",
                            "AP_BR",
                            "AP_MGThigh",
                            "AP_AR",
                            "AP_Pack",
                            "AP_Rounds",
                            "AP_SG",
                            "AP_SMG",
                            "AP_Sniper",
                            "AP_Thigh",
                            "AP_Smoke",
                            "APO_BR",
                            "APO_SMG",
                            "APO_Sniper",
                            "CustomKit_Scorch"

      };
      hiddenSelectionsTextures[] = {
          "custom_armours\data\ODST\Vest\Vest_odst_Black_co.paa",
          "optre_unsc_units\army\data\Armor_odst_co.paa",
          "custom_armours\data\ODST\Armour\Legs_odst_Extortionist_co.paa",
          "optre_unsc_units\army\data\ghillie_woodland_co.paa",
          "custom_armours\data\ODST\Armour\odst_armor_Extortionist_co.paa"};
      class HitpointsProtectionInfo {
        class Neck {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
        class Legs {
          hitpointName = "HitLegs";
          armor = 35;
          passThrough = 0.1;
        };
        class Arms {
          hitpointName = "HitArms";
          armor = 35;
          passThrough = 0.1;
        };
        class Hands {
          hitpointName = "HitHands";
          armor = 35;
          passThrough = 0.1;
        };
        class Chest {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm {
          hitpointName = "HitDiaphragm";
          armor = 35;
          passThrough = 0.1;
        };
        class Abdomen {
          hitpointName = "HitAbdomen";
          armor = 35;
          passThrough = 0.1;
        };
        class Body {
          hitpointName = "HitBody";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };
  //////////////////
  //---UNIFORMS---//
  //////////////////
  class ARMCO_Uniform_Base : U_B_CombatUniform_mcam {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "Frosty & Mac";
    displayName = "-";
    picture = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
      uniformModel = "-";
      uniformClass = "OPTRE_UNSC_Army_Soldier_WDL";
      containerClass = "Supply100";
      mass = 50;
      modelSides[] = {6};
    };
  };
  class ARMCO_Uniform_Medical_Base : U_B_CombatUniform_mcam {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "Frosty & Mac";
    displayName = "-";
    picture = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
      uniformModel = "-";
      uniformClass = "OPTRE_UNSC_Army_Soldier_WDL";
      containerClass = "Supply100";
      mass = 50;
      modelSides[] = {6};
    };
  };
  class ARMCO_Uniform_ODST_Base : U_B_CombatUniform_mcam {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "Frosty & Mac";
    displayName = "-";
    picture = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
      uniformModel = "-";
      uniformClass = "OPTRE_UNSC_Army_Soldier_WDL";
      containerClass = "Supply100";
      mass = 50;
      modelSides[] = {6};
    };
  };
  class ARMCO_Uniform_ODST_S_Base : U_B_CombatUniform_mcam {
    dlc = "ARMCO OPTRE Reskins";
    scope = 1;
    author = "Frosty & Mac";
    displayName = "-";
    picture = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
      uniformModel = "-";
      uniformClass = "OPTRE_UNSC_Army_Soldier_WDL";
      containerClass = "Supply100";
      mass = 50;
      modelSides[] = {6};
    };
  };
  class ARMCO_Uniform_Alpha_O : ARMCO_Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Alpha";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Alpha_O_Medical : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha Medical BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Alpha_Medic";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Alpha_O_EOD : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Alpha EOD BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Alpha_EOD";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Echo_O : ARMCO_Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Echo";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Echo_O_Medical : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre Medical BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Echo_Medic";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Echo_O_EOD : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Sabre EOD BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Echo_EOD";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_zulu_O : ARMCO_Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Zulu BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_zulu";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Zulu_O_Medical : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Zulu Medical BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_zulu_Medic";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Zulu_O_EOD : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Zulu EOD BDU [Woodland]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_zulu_EOD";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_zulu_Camo : ARMCO_Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Zulu BDU [Camo]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_Camo_zulu";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Zulu_Camo_Medical : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Zulu Medical BDU [Camo]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_Camo_zulu_Medic";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Phoenix_O : ARMCO_Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix BDU [Olive]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_O_Phoenix";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Phoenix_Medical : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix Medical BDU [Olive]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_Phoenix_Medic";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_Phoenix_EOD : ARMCO_Uniform_Medical_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Phoenix EOD BDU [Olive]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_Phoenix_EOD";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  //---ODST Uniforms--//
  class ARMCO_Uniform_ODST : ARMCO_Uniform_ODST_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] ODST BDU [Black]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_ODST";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_ODST_Camo : ARMCO_Uniform_ODST_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] ODST BDU [Camo]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_ODST_Camo";
      containerClass = "Supply100";
      mass = 50;
    };
  };
  class ARMCO_Uniform_ODST_M90_Camo : ARMCO_Uniform_ODST_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty";
    displayName = "[ARMCO] ODST BDU [M90 Splinter Camo]";
    // picture
    // =
    // "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_ODST_M90_Camo";
      containerClass = "Supply100";
      mass = 50;
    };
  };

  //--Security--//
  class ARMCO_Uniform_Security : Uniform_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    scopeCurator = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Security Tactical Overalls";
    picture = "\a3\Characters_F_Tank\Uniforms\Data\UI\icon_U_Tank_crew_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo : UniformItem {
      uniformModel = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
      uniformClass = "ARMCO_Security_Bureau_Officer";
      containerClass = "Supply100";
      mass = 50;
      modelSides[] = {6};
    };
  };
  class ARMCO_Uniform_ODST_Security : ARMCO_Uniform_ODST_S_Base {
    dlc = "ARMCO OPTRE Reskins";
    scope = 2;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Security Bureau ODST BDU [Black/Gold]"
        // picture   = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
        class ItemInfo : ItemInfo {
      uniformClass = "ARMCO_Soldier_ODST_Security_RM";
      containerClass = "Supply100";
      mass = 50;
    };
  };
};
