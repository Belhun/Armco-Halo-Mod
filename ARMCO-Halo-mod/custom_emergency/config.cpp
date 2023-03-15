#include "cfgPatches.hpp"
////////////////////////
//Damage & UNITS Start//
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
class CfgVehicles
{
	class Land;
	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierWB: CAManBase {
		class HitPoints: HitPoints
		{
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
class ARMCO_Soldier_Base: SoldierWB	{
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor               = 1; // "Healthpoints" of this hitpoint is armor value (of hitpoint) * armor value ( coefficient of the total armor defined below for the whole object
				material            = -1; // damage material (-1 means "unused")
				name                = "face_hub"; // selection name from hit points LOD in object
				passThrough         = 0.1; // coefficient defining how much damage will pass into total damage when this hit point is damaged
				radius              = 0.08; // size of the hit point sphere, this is how it works: https://community.bistudio.com/wiki/Arma_3_Damage_Description
				explosionShielding  = 0.1; // multiplier of explosive damage (parameter: explosive > 0 in ammunition type)
				minimalHit          = 0.01; // minimal damage value that can be applied (based on armor value), damage below this threshold is ignored
                //example: total hit point armor = 2 and hitpoint class armor = 10 and minimalHit = 0.04  -> all damage below a hit value of 2*10*0.04= 0.8 is ignored
			};
			class HitNeck: HitFace
			{
				armor               = 1;
				material            = -1;
				name                = "neck";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.1;
				minimalHit          = 0.01;
			};
			class HitHead: HitNeck
			{
				armor               = 1;
				material            = -1;
				name                = "head";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 0.1;
				minimalHit          = 0.01;
				depends             = "HitFace max HitNeck"; // returns the greater of HitFace and HitNeck.
                // for depends to work, HitHead must be inheriting from HitFace and HitNeck.
                // "max" is not the only operator you can use. + and *  are confirmed working. 
                // Other operators from the https://community.bistudio.com/wiki/Simple_Expression list may be usable as well.
			};
			class HitPelvis
			{
				armor               = 1;
				material            = -1;
				name                = "pelvis";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 0.25;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor               = 1;
				material            = -1;
				name                = "spine1";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 0.25;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor               = 1;
				material            = -1;
				name                = "spine2";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 2;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor               = 1;
				material            = -1;
				name                = "spine3";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 2;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitBody: HitChest
			{
				armor               = 1000; // not supposed to take damage directly
				material            = -1;
				name                = "body";
				passThrough         = 0.1;
				radius              = 0.16;
				explosionShielding  = 2;
				visual              = "injury_body";
				minimalHit          = 0.01;
				depends             = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends work only for hit points defined in inheritance chain
                //arbitrary example for different operator usage: = "(2* (HitPelvis + HitAbdomen) * HitDiaphragm) max HitChest";
			};
			class HitArms
			{
				armor               = 1;
				material            = -1;
				name                = "arms";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.25;
				visual              = "injury_hands";
				minimalHit          = 0.01;
			};
			class HitHands: HitArms
			{
				armor               = 1;
				material            = -1;
				name                = "hands";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.25;
				visual              = "injury_hands";
				minimalHit          = 0.01;
				depends             = "HitArms";
			};
			class HitLegs
			{
				armor               = 1;
				material            = -1;
				name                = "legs";
				passThrough         = 0.1;
				radius              = 0.12;
				explosionShielding  = 0.25;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
			
			// ACE
			
			class HitLeftArm
			{
				armor               = 1;
				material            = -1;
				name                = "hand_l";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.25;
				visual              = "injury_hands";
				minimalHit          = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name                = "hand_r";
			};
			class HitLeftLeg
			{
				armor               = 1;
				material            = -1;
				name                = "leg_l";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.25;
				visual              = "injury_hands";
				minimalHit          = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name                = "leg_r";
			};
		};
	};
////////////////////
//BASE UNITS Start//
////////////////////
class AMRCO_Dress_Soldier_Base: ARMCO_Soldier_Base {
		scope = 1;
		dlc = "ARMCO OPTRE Reskins";
		author											= "Frosty & Mac";
		uniformClass													= "OPTRE_UNSC_Dress_Uniform_gray";
		faction															= "ARMCO_Fancy_Faction";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		linkedItems[] 													= 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"OPTRE_UNSC_Units\Army\data\dress_uniform_gray_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor               = 2;
			};
			class HitPelvis: HitPelvis
			{
				armor               = 2;
			};
			class HitAbdomen: HitAbdomen
			{
				armor               = 2;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor               = 2;
			};
			class HitChest: HitChest
			{
				armor               = 2;
			};
			class HitArms: HitArms
			{
				armor               = 2;
			};
			class HitHands: HitHands
			{
				armor               = 2;
			};
			class HitLegs: HitLegs
			{
				armor               = 2;
			};
			
			// ACE
			
			//class HitLeftArm: HitLeftArm
			//{
			//	armor               = 2;
			//};
			//class HitRightArm: HitRightArm
			//{
			//	armor               = 2;
			//};
			//class HitLeftLeg: HitLeftLeg
			//{
			//	armor               = 2;
			//};
			//class HitRightLeg: HitRightLeg
			//{
			//	armor               = 2;
			//};
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
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_infantry";
	};
class ARMCO_Soldier_WDL: AMRCO_Dress_Soldier_Base {
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		scopeCurator													= 0;
		author											= "Frosty & Mac";
		vehicleClass													= "OPTRE_UNSC_Man_Army_W_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_WDL";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		//linkedItems[] 													= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		//respawnLinkedItems[] 											= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo","camo2","insignia","clan","A_SlimLeg"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
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
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor               = 4;
			};
			class HitPelvis: HitPelvis
			{
				armor               = 4;
			};
			class HitAbdomen: HitAbdomen
			{
				armor               = 4;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor               = 4;
			};
			class HitChest: HitChest
			{
				armor               = 4;
			};
			class HitArms: HitArms
			{
				armor               = 4;
			};
			class HitHands: HitHands
			{
				armor               = 4;
			};
			class HitLegs: HitLegs
			{
				armor               = 4;
			};
			
			// ACE
			
			class HitLeftArm: HitLeftArm
			{
				armor               = 4;
			};
			class HitRightArm: HitRightArm
			{
				armor               = 4;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor               = 4;
			};
			class HitRightLeg: HitRightLeg
			{
				armor               = 4;
			};
		};
};
class ARMCO_Soldier_WDL_Medic: AMRCO_Dress_Soldier_Base {
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		scopeCurator													= 0;
		author											= "Frosty & Mac";
		vehicleClass													= "OPTRE_UNSC_Man_Army_W_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_WDL";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		//linkedItems[] 													= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		//respawnLinkedItems[] 											= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo","camo2","insignia","clan","A_SlimLeg"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
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
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor               = 4;
			};
			class HitPelvis: HitPelvis
			{
				armor               = 4;
			};
			class HitAbdomen: HitAbdomen
			{
				armor               = 4;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor               = 4;
			};
			class HitChest: HitChest
			{
				armor               = 4;
			};
			class HitArms: HitArms
			{
				armor               = 4;
			};
			class HitHands: HitHands
			{
				armor               = 4;
			};
			class HitLegs: HitLegs
			{
				armor               = 4;
			};
			
			// ACE
			
			class HitLeftArm: HitLeftArm
			{
				armor               = 4;
			};
			class HitRightArm: HitRightArm
			{
				armor               = 4;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor               = 4;
			};
			class HitRightLeg: HitRightLeg
			{
				armor               = 4;
			};
		};
};
class ARMCO_Soldier_WDL_ODST: AMRCO_Dress_Soldier_Base {
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		scopeCurator													= 0;
		author											= "Frosty & Mac";
		vehicleClass													= "OPTRE_UNSC_Man_Army_W_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_WDL";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		//linkedItems[] 													= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		//respawnLinkedItems[] 											= {"OPTRE_UNSC_M52A_Armor1_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo","camo2","insignia","clan","A_SlimLeg"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
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
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor               = 4;
			};
			class HitPelvis: HitPelvis
			{
				armor               = 4;
			};
			class HitAbdomen: HitAbdomen
			{
				armor               = 4;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor               = 4;
			};
			class HitChest: HitChest
			{
				armor               = 4;
			};
			class HitArms: HitArms
			{
				armor               = 4;
			};
			class HitHands: HitHands
			{
				armor               = 4;
			};
			class HitLegs: HitLegs
			{
				armor               = 4;
			};
			
			// ACE
			
			class HitLeftArm: HitLeftArm
			{
				armor               = 4;
			};
			class HitRightArm: HitRightArm
			{
				armor               = 4;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor               = 4;
			};
			class HitRightLeg: HitRightLeg
			{
				armor               = 4;
			};
		};
};
//----------END OF BASE UNIT----------//


//---Actual Vehicles---//
	class OPTRE_M12_FAV;
	class OPTRE_M12_FAV_APC;
	class OPTRE_M813_TT;
	class OPTRE_M12_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M12_FAV_tan;
	class OPTRE_M813_TT_tan;
	class OPTRE_M12_LRV_tan;
	class OPTRE_M12_LRV_black;
	class OPTRE_M12_LRV_snow;
	class OPTRE_M12G1_LRV_tan;
	class OPTRE_M12_FAV_snow;
	class OPTRE_M813_TT_snow;
	class OPTRE_M12G1_LRV_snow;
	class OPTRE_M12A1_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M914_RV;
	
	class C_P_M12_FAV: OPTRE_M12_FAV_snow
	{
		side=2;
		scope=2;
		scopeCurator = 2;
		author= "Frosty & Gunner";
		crew="ARMCO_Police_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Police] M12 Warthog LRV (Unarmed)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\warthog\Warthog_CP_black_clean_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_police_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_P_M12_LRV: OPTRE_M12_LRV
	{
		side=2;
		scope=2;
		scopeCurator = 2;
		author= "Frosty & Gunner";
		crew="ARMCO_Police_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Police] M12 Warthog FAV (MG)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\warthog\Warthog_CP_black_clean_co.paa",
			"custom_emergency\data\police\warthog\Warthog_CP_LAAG_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_police_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_R_M12_FAV: OPTRE_M12_FAV_snow
	{
		side=2;
		scope=2;
		scopeCurator = 2;
		author= "Frosty & Gunner";
		crew="ARMCO_Rescue_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Rescue] M12 Warthog LRV (Unarmed)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\warthog\Warthog_CR_black_clean_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_rescue_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_R_M914_RV: OPTRE_M914_RV
	{
		side=2;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		author= "Frosty & Gunner";
		crew="ARMCO_Rescue_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Rescue] M12 Warthog Recovery";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\warthog\Warthog_CR_black_clean_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_rescue_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_R_M12_Medical: OPTRE_M12_FAV_APC
	{
		side = 2;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		author= "Frosty & Gunner";
		crew="ARMCO_Rescue_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Rescue] M12 Warthog Medical";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\warthog\Warthog_CR_black_clean_co.paa",
			"custom_emergency\data\medical\warthog\Warthog_CR_apc_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_rescue_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_P_M12_PT: OPTRE_M12_FAV_APC
	{
		side = 2;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		author= "Frosty & Gunner";
		crew="ARMCO_Police_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Police] M12T Prisoner Transport";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\warthog\Warthog_CP_black_clean_co.paa",
			"custom_emergency\data\police\warthog\Warthog_CP_apc_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_police_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
	class C_F_M12_RRV: OPTRE_M12_FAV_APC
	{
		side = 2;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		author= "Frosty & Gunner";
		crew="ARMCO_Firefighter_Officer";
		faction="ARMCO_C_Admin";
		displayName="[Colonial Fire Department] M12F Rapid Response Vehicle";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\warthog\Warthog_black_CF_co.paa",
			"custom_emergency\data\firefighter\warthog\Warthog_CF_apc_co.paa"
		};
	editorCategory = "colonial_administration";
	editorSubcategory = "c_firefighter_v";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
///////////////////////
//BASE Uniforms Start//
///////////////////////

//--Police Officer--//
class ARMCO_Police_Officer: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Police] Officer";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_Kitbag_Police";
		uniformClass="ARMCO_Uniform_Police";
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\uniform\u_colonial_police_co.paa",
			"custom_emergency\data\police\uniform\u_colonial_police_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Police",
			"ARMCO_M52P_Armor_Police",
			"ARMCO_CH252_Helmet_Police",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		weapons[] 				= {"OPTRE_MA5A","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 		= {"OPTRE_MA5A","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 			= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 		= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Police",
			"ARMCO_M52P_Armor_Police",
			"ARMCO_CH252_Helmet_Police",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_police";
	};
class ARMCO_Police_Officer_tl: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Police] Team Officer";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_LR_Bag_Police";
		uniformClass="ARMCO_Uniform_Police";
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\uniform\u_colonial_police_co.paa",
			"custom_emergency\data\police\uniform\u_colonial_police_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Police",
			"ARMCO_M52P_Armor_Police",
			"ARMCO_CH252_Helmet_Police",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		weapons[] 				= {"OPTRE_MA5A","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 		= {"OPTRE_MA5A","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 			= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 		= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Police",
			"ARMCO_M52P_Armor_Police",
			"ARMCO_CH252_Helmet_Police",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_police";
	};
	
//--Rescue Officer--//
class ARMCO_Rescue_Officer: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Rescue] Officer";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_Kitbag_Rescue";
		uniformClass="ARMCO_Uniform_Rescue";
		icon="iconManMedic";
		attendant=1;
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\uniform\u_colonial_rescue_co.paa",
			"custom_emergency\data\medical\uniform\u_colonial_rescue_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Rescue",
			"ARMCO_M52R_Armor_Rescue",
			"ARMCO_CH252_Helmet_Rescue",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Rescue",
			"ARMCO_M52R_Armor_Rescue",
			"ARMCO_CH252_Helmet_Rescue",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_rescue";
	};
class ARMCO_Rescue_Officer_tl: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Rescue] Team Officer";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_LR_Bag_Rescue";
		uniformClass="ARMCO_Uniform_Rescue";
		icon="iconManMedic";
		attendant=1;
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\uniform\u_colonial_rescue_co.paa",
			"custom_emergency\data\medical\uniform\u_colonial_rescue_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Rescue",
			"ARMCO_M52R_Armor_Rescue",
			"ARMCO_CH252_Helmet_Rescue",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Rescue",
			"ARMCO_M52R_Armor_Rescue",
			"ARMCO_CH252_Helmet_Rescue",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_rescue";
	};

//---Biohazard---//


//--Firefighter---//
class ARMCO_Firefighter_Officer: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Fire Department] Firefighter";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_Kitbag_Firefighter";
		uniformClass="ARMCO_Uniform_Firefighter";
		icon="iconManMedic";
		attendant=1;
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\uniform\u_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\uniform\u_colonial_firefighter_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Firefighter",
			"ARMCO_M52R_Armor_Firefighter",
			"ARMCO_CH252_Helmet_Firefighter",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Firefighter",
			"ARMCO_M52R_Armor_Firefighter",
			"ARMCO_CH252_Helmet_Firefighter",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_firefighter";
	};
class ARMCO_Firefighter_Officer_tl: ARMCO_Soldier_WDL_Medic
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		side = 2;
		displayName="[Colonial Fire Department] Team Leader";
		author= "Frosty & Mac";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		backpack="ARMCO_LR_Bag_Firefighter";
		uniformClass="ARMCO_Uniform_Firefighter";
		icon="iconManMedic";
		attendant=1;
		faction = "ARMCO_C_Admin";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\uniform\u_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\uniform\u_colonial_firefighter_co.paa"
		};
		linkedItems[]=
		{
			"ARMCO_Uniform_Firefighter",
			"ARMCO_M52R_Armor_Firefighter",
			"ARMCO_CH252_Helmet_Firefighter",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"ARMCO_Uniform_Firefighter",
			"ARMCO_M52R_Armor_Firefighter",
			"ARMCO_CH252_Helmet_Firefighter",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		editorCategory = "colonial_administration";
		editorSubcategory = "c_firefighter";
	};


////////////////////
//BACKPACKS CONFIG//
////////////////////
class B_Kitbag_base;
class tfw_ilbe_gr;
class OPTRE_UNSC_Rucksack;
class OPTRE_ILCS_Rucksack_Black;

//--Kitbags--//
class ARMCO_Kitbag_Police: B_Kitbag_base
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Police] Kitbag";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\backpack\b_soft_police_co.paa"
		};
		maximumLoad=350;
		mass=20;
	};
class ARMCO_Kitbag_Rescue: B_Kitbag_base
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Rescue] Kitbag";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\backpack\b_soft_rescue_co.paa"
		};
		maximumLoad=350;
		mass=20;
	};
class ARMCO_Kitbag_Firefighter: B_Kitbag_base
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Fire Department] Kitbag";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\backpack\b_colonial_firefighter_soft_co.paa"
		};
		maximumLoad=350;
		mass=20;
	};

//---Long Range Radio Backpacks---//
class ARMCO_LR_Bag_Police: tfw_ilbe_gr
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Police] ILBE RT-1523G (ASIP)";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\backpack\b_radio_police_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=350;
		mass=80;
		isbackpack=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=17000;
	};
class ARMCO_LR_Bag_Rescue: tfw_ilbe_gr
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Rescue] ILBE RT-1523G (ASIP)";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\backpack\b_radio_rescue_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=350;
		mass=80;
		isbackpack=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=17000;
	};
class ARMCO_LR_Bag_Firefighter: tfw_ilbe_gr
	{
		author="Frosty";
		scope=2;
		displayName="[Colonial Fire Department] ILBE RT-1523G (ASIP)";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="\y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="\y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\backpack\b_colonial_firefighter_radio_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=350;
		mass=80;
		isbackpack=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=17000;
	};
//---ODST Long Range Backpacks---//


//ODST Hard Packs//


//Personal Packs// ,"AP_Heavy","BioFoam"

//----------DAMAGE & UNITS END-----------//

};
class cfgWeapons {
	class U_B_CombatUniform_mcam;
	class VestItem;
	class UniformItem;
    class HeadgearItem;
	class H_Cap_oli;
	class H_Beret_02;
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrierSpec_rgr;
	class OPTRE_UNSC_CH252_Helmet_Base; //Base Marine Helmet
	class OPTRE_UNSC_CH252D_Helmet_Base; //ODST Base Helmet
//////////////////////
//Base Helmets Start//
//////////////////////

//---Dress Uniform Hats---//
class ARMCO_Beret_Police: H_Beret_02
	{
		dlc="-";
		scope=2;
		weaponPoolAvailable=1;
		author= "Frosty & Mac";
		displayName="[Colonial Police] Beret";
		model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\police\helmet\h_beret_police_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02";
			allowedSlots[] = {801,901,701};
			modelSides[]={3,1};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_Rescue: H_Beret_02
	{
		dlc="-";
		scope=2;
		weaponPoolAvailable=1;
		author= "Frosty & Mac";
		displayName="[Colonial Rescue] Beret";
		model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\medical\helmet\h_beret_rescue_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02";
			allowedSlots[] = {801,901,701};
			modelSides[]={3,1};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_Firefighter: H_Beret_02
	{
		dlc="-";
		scope=2;
		weaponPoolAvailable=1;
		author= "Frosty & Mac";
		displayName="[Colonial Fire Department] Beret";
		model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_emergency\data\firefighter\helmet\h_beret_colonial_firefighter_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02";
			allowedSlots[] = {801,901,701};
			modelSides[]={3,1};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
////////////////////////
//Marine Helmets Start//
////////////////////////

//-------------------------//

/////////////////
//Polce Helmets// "camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar"
/////////////////	
class ARMCO_CH252_Helmet_Police: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		author= "Frosty & Mac";
		displayName="[Colonial Police] CH252 Helmet (Vac Sealed)";
		picture= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model= "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\police\helmet\h_colonial_police_co.paa",
			"custom_emergency\data\police\helmet\h_visor_colonial_police_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
			"custom_emergency\data\police\helmet\h_colonial_police_co.paa",
			"custom_emergency\data\police\helmet\h_visor_colonial_police_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
		class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName 										= "HitHead";
					armor 												= 25;
					passThrough 										= 0.1;
				};
				class Face
				{
					hitpointName 										= "HitFace";
					armor 												= 25;
					passThrough 										= 0.1;
				};			
				class Neck				
				{				
					hitpointName										= "HitNeck";
					armor												= 20;
					passThrough											= 0.1;
				};
			};
		};
	};
class ARMCO_CH252_Helmet_Police_dp: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=1;
		scopeCurator=1;
		author= "Frosty & Mac";
		displayName="[Colonial Police] CH252 Helmet (Vac Sealed/clear)";
		picture= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\police\helmet\h_colonial_police_co.paa",
			"custom_emergency\data\visor\Helmet_Visor_ca.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
				"custom_emergency\data\police\helmet\h_colonial_police_co.paa",
				"custom_emergency\data\visor\Helmet_Visor_ca.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName 										= "HitHead";
					armor 												= 25;
					passThrough 										= 0.1;
				};
				class Face
				{
					hitpointName 										= "HitFace";
					armor 												= 10;
					passThrough 										= 0.1;
				};			
				class Neck				
				{				
					hitpointName										= "HitNeck";
					armor												= 20;
					passThrough											= 0.1;
				};
			};
		};
	};	

	
//////////////////
//Rescue Helmets//
//////////////////
class ARMCO_CH252_Helmet_Rescue: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		author="Frosty & Mac";
		displayName="[Colonial Rescue] CH252 Helmet (Vac Sealed)";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model 															= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\medical\helmet\h_colonial_rescue_co.paa",
			"custom_emergency\data\medical\helmet\h_visor_colonial_rescue_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
			"custom_emergency\data\medical\helmet\h_colonial_rescue_co.paa",
			"custom_emergency\data\medical\helmet\h_visor_colonial_rescue_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
		};
	};
class ARMCO_CH252_Helmet_Rescue_dp: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=1;
		scopeCurator=1;
		author="Frosty & Mac";
		displayName="[Colonial Rescue] CH252 Helmet (Vac Sealed/clear)";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model 															= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\medical\helmet\h_colonial_rescue_co.paa",
			"custom_emergency\data\visor\Helmet_Visor_ca.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
			"custom_emergency\data\medical\helmet\h_colonial_rescue_co.paa",
			"custom_emergency\data\visor\Helmet_Visor_ca.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName 										= "HitHead";
					armor 												= 25;
					passThrough 										= 0.1;
				};
				class Face
				{
					hitpointName 										= "HitFace";
					armor 												= 10;
					passThrough 										= 0.1;
				};			
				class Neck				
				{				
					hitpointName										= "HitNeck";
					armor												= 20;
					passThrough											= 0.1;
				};
			};
		};
	};

	
/////////////////////
//Biohazard Helmets//
/////////////////////


///////////////////////
//Firefighter Helmets//
///////////////////////
class ARMCO_CH252_Helmet_Firefighter: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=2;
		scopeCurator=2;
		author="Frosty & Mac";
		displayName="[Colonial Fire Department] CH252 Helmet (Vac Sealed)";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model 															= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\firefighter\helmet\h_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\helmet\h_visor_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
			"custom_emergency\data\firefighter\helmet\h_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\helmet\h_visor_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
		};
	};
class ARMCO_CH252_Helmet_Firefighter_dp: OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope=1;
		scopeCurator=1;
		author="Frosty & Mac";
		displayName="[Colonial Fire Department] CH252 Helmet (Vac Sealed/clear)";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model 															= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]= 
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= 
		{
			"custom_emergency\data\firefighter\helmet\h_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\helmet\h_visor_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		subItems[] = 
		{
			"Integrated_NVG_TI_0_F",
		};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel												= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]   										= 
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]   								= 
			{
			"custom_emergency\data\firefighter\helmet\h_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\helmet\h_visor_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			ace_hearing_protection = 1.50;  // Protection against deafening (0 to 1, higher means more protection)
			ace_hearing_lowerVolume = 0.10;  // Muffling of the sound (0 to 1, higher means more muffling)
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName 										= "HitHead";
					armor 												= 25;
					passThrough 										= 0.1;
				};
				class Face
				{
					hitpointName 										= "HitFace";
					armor 												= 10;
					passThrough 										= 0.1;
				};			
				class Neck				
				{				
					hitpointName										= "HitNeck";
					armor												= 20;
					passThrough											= 0.1;
				};
			};
		};
	};


///////////////////
//O.D.S.T Helmets//
///////////////////
	
//----------HELMETS END-----------//

/////////////////
//Armours Start//
/////////////////
class OPTRE_UNSC_M52A_Armor_Base;
class OPTRE_UNSC_M52A_Armor1_WDL;
class ARMCO_M52A_Armor_Base: OPTRE_UNSC_M52A_Armor_Base 
	{	
		scope = 0;
		dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
		author											= "Frosty & Mac";
		displayName  									= "[ARMCO] Base M52A Body Armor";
		hiddenSelections[]   							= 
		{
			"camo",
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
			"AS_SmallRight"
		};
		hiddenSelectionsTextures[]   					= 
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass 								= "Supply300";
			mass 										= 80;
			modelSides[] 								= {6};
			hiddenSelections[]   						= 
			{
				"camo",
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
				"AS_SmallRight"
			};
			hiddenSelectionsTextures[]   				= 
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName						= "HitNeck";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Legs
				{
					hitpointName						= "HitLegs";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Arms
				{
					hitpointName						= "HitArms";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Hands
				{
					hitpointName						= "HitHands";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Chest
				{
					hitpointName 						= "HitChest";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Diaphragm
				{
					hitpointName 						= "HitDiaphragm";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Abdomen
				{
					hitpointName 						= "HitAbdomen";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Body
				{
					hitpointName 						= "HitBody";
					armor 								= 35;
					passThrough 						= 0.1;
				};
			};
		};
}; 
class ARMCO_M52M_Armor_Base: OPTRE_UNSC_M52A_Armor_Base 
	{	
		scope = 1;
		dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
		author											= "Frosty & Mac";
		displayName  									= "[ARMCO] Base M52A Body Armor [Medical]";
		hiddenSelections[]   							= 
		{
			"camo",
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
			"AS_SmallRight"
		};
		hiddenSelectionsTextures[]   					= 
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass 								= "Supply350";
			mass 										= 80;
			modelSides[] 								= {6};
			hiddenSelections[]   						= 
			{
				"camo",
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
			hiddenSelectionsTextures[]   				= 
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName						= "HitNeck";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Legs
				{
					hitpointName						= "HitLegs";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Arms
				{
					hitpointName						= "HitArms";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Hands
				{
					hitpointName						= "HitHands";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Chest
				{
					hitpointName 						= "HitChest";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Diaphragm
				{
					hitpointName 						= "HitDiaphragm";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Abdomen
				{
					hitpointName 						= "HitAbdomen";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Body
				{
					hitpointName 						= "HitBody";
					armor 								= 35;
					passThrough 						= 0.1;
				};
			};
		};
}; 
class ARMCO_M52D_Armor_Base: OPTRE_UNSC_M52A_Armor1_WDL 
	{	
		dlc = "ARMCO OPTRE Reskins";
		scope = 1;
		author											= "Frosty & Mac";							= "Frosty & Mac";
		displayName  													= "[ARMCO] M52D Body Armor Base";
		hiddenSelections[]   											= 
		{
			"camo",
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
            "APO_Sniper","CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]   									= 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"optre_unsc_units\army\data\legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem				
		{
			containerClass 								= "Supply350";			
			hiddenSelections[]   										= 
			{
			"camo",
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
            "APO_Sniper","CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]   								= 
			{
				"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
				"optre_unsc_units\army\data\armor_odst_co.paa",
				"optre_unsc_units\army\data\legs_odst_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo				
			{				
				class Neck				
				{				
					hitpointName										= "HitNeck";
					armor												= 45;
					passThrough											= 0.1;
				};				
				class Legs				
				{				
					hitpointName										= "HitLegs";
					armor												= 45;
					passThrough											= 0.1;
				};				
				class Arms				
				{				
					hitpointName										= "HitArms";
					armor												= 45;
					passThrough											= 0.1;
				};				
				class Hands				
				{				
					hitpointName										= "HitHands";
					armor												= 45;
					passThrough											= 0.1;
				};				
				class Chest				
				{				
					hitpointName 										= "HitChest";
					armor 												= 45;
					passThrough 										= 0.1;
				};				
				class Diaphragm				
				{				
					hitpointName 										= "HitDiaphragm";
					armor 												= 45;
					passThrough 										= 0.1;
				};				
				class Abdomen				
				{				
					hitpointName 										= "HitAbdomen";
					armor 												= 45;
					passThrough 										= 0.1;
				};				
				class Body				
				{				
					hitpointName 										= "HitBody";
					armor 												= 45;
					passThrough 										= 0.1;
				};
			};
		};
}; 

//---Base Vests End---//
//--------------------//
//---Police Armour---//
class ARMCO_M52P_Armor_Police: ARMCO_M52A_Armor_Base
	{
		scope = 2;
		dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
		author	= "Frosty & Mac";
		displayName  = "[Colonial Police] M52M Vest";
		hiddenSelections[]= 
		{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]   					= 
		{
			"custom_emergency\data\police\armour\v_colonial_police_co.paa",
			"custom_emergency\data\police\armour\a_colonial_police_co.paa",
			"custom_emergency\data\police\armour\l_colonial_police_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass 								= "Supply200";
			mass 										= 80;
			modelSides[] 								= {6};
			hiddenSelections[]   						= 
			{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]   				= 
			{
			"custom_emergency\data\police\armour\v_colonial_police_co.paa",
			"custom_emergency\data\police\armour\a_colonial_police_co.paa",
			"custom_emergency\data\police\armour\l_colonial_police_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName						= "HitNeck";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Legs
				{
					hitpointName						= "HitLegs";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Arms
				{
					hitpointName						= "HitArms";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Hands
				{
					hitpointName						= "HitHands";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Chest
				{
					hitpointName 						= "HitChest";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Diaphragm
				{
					hitpointName 						= "HitDiaphragm";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Abdomen
				{
					hitpointName 						= "HitAbdomen";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Body
				{
					hitpointName 						= "HitBody";
					armor 								= 35;
					passThrough 						= 0.1;
				};
			};
		};
	};
//---Rescue Armour---//
class ARMCO_M52R_Armor_Rescue: ARMCO_M52M_Armor_Base
	{
		scope = 2;
		dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
		author	= "Frosty & Mac";
		displayName = "[Colonial Rescue] M52M Vest";
		hiddenSelections[] = 
		{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]   					=
		{
			"custom_emergency\data\medical\armour\v_colonial_rescue_co.paa",
			"custom_emergency\data\medical\armour\a_colonial_rescue_co.paa",
			"custom_emergency\data\medical\armour\l_colonial_rescue_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass 								= "Supply200";
			mass 										= 80;
			modelSides[] 								= {6};
			hiddenSelections[]   						= 
			{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]   				= 
			{
				"custom_emergency\data\medical\armour\v_colonial_rescue_co.paa",
				"custom_emergency\data\medical\armour\a_colonial_rescue_co.paa",
				"custom_emergency\data\medical\armour\l_colonial_rescue_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName						= "HitNeck";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Legs
				{
					hitpointName						= "HitLegs";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Arms
				{
					hitpointName						= "HitArms";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Hands
				{
					hitpointName						= "HitHands";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Chest
				{
					hitpointName 						= "HitChest";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Diaphragm
				{
					hitpointName 						= "HitDiaphragm";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Abdomen
				{
					hitpointName 						= "HitAbdomen";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Body
				{
					hitpointName 						= "HitBody";
					armor 								= 35;
					passThrough 						= 0.1;
				};
			};
		};
	};
//---Biohazard Armour---//

//---Medic---//

//---Firefighter Armour---//
class ARMCO_M52R_Armor_Firefighter: ARMCO_M52M_Armor_Base
	{
		scope = 2;
		dlc = "ARMCO Faction Mod ; OPTRE Re-textures";
		author	= "Frosty & Mac";
		displayName = "[Colonial Fire Department] M52F Vest";
		hiddenSelections[] = 
		{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]   					=
		{
			"custom_emergency\data\firefighter\armour\v_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\armour\a_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\armour\l_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass 								= "Supply200";
			mass 										= 80;
			modelSides[] 								= {6};
			hiddenSelections[]   						= 
			{
				"camo",
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
				"A_TacPad",
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
				"APO_Sniper","CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]   				= 
			{
				"custom_emergency\data\firefighter\armour\v_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\armour\a_colonial_firefighter_co.paa",
			"custom_emergency\data\firefighter\armour\l_colonial_firefighter_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName						= "HitNeck";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Legs
				{
					hitpointName						= "HitLegs";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Arms
				{
					hitpointName						= "HitArms";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Hands
				{
					hitpointName						= "HitHands";
					armor								= 35;
					passThrough							= 0.1;
				};
				class Chest
				{
					hitpointName 						= "HitChest";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Diaphragm
				{
					hitpointName 						= "HitDiaphragm";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Abdomen
				{
					hitpointName 						= "HitAbdomen";
					armor 								= 35;
					passThrough 						= 0.1;
				};
				class Body
				{
					hitpointName 						= "HitBody";
					armor 								= 35;
					passThrough 						= 0.1;
				};
			};
		};
	};

//---Uniforms Start---//
class C_Uniform_Base: U_B_CombatUniform_mcam
	{
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		author											= "Frosty & Mac";				
		displayName														= "-";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem				
		{				
			uniformModel												= "-";
			uniformClass												= "OPTRE_UNSC_Army_Soldier_WDL";
			containerClass												= "Supply200";
			mass														= 50;
			modelSides[] 												= {6};
		};
};
class C_Uniform_Medical_Base: U_B_CombatUniform_mcam
	{
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		author											= "Frosty & Mac";				
		displayName														= "-";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem				
		{				
			uniformModel												= "-";
			uniformClass												= "OPTRE_UNSC_Army_Soldier_WDL";
			containerClass												= "Supply250";
			mass														= 50;
			modelSides[] 												= {6};
		};
};
class C_Uniform_ODST_Base: U_B_CombatUniform_mcam
	{
		dlc = "ARMCO OPTRE Reskins";
		scope															= 1;
		author											= "Frosty & Mac";				
		displayName														= "-";
		picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem				
		{				
			uniformModel												= "-";
			uniformClass												= "OPTRE_UNSC_Army_Soldier_WDL";
			containerClass												= "Supply300";
			mass														= 50;
			modelSides[] 												= {6};
		};
};
//---Police---//
class ARMCO_Uniform_Police: C_Uniform_ODST_Base
	{
		dlc 		 = "ARMCO OPTRE Reskins";
		scope 	     = 2;
		author		 = "Frosty & Mac";				
		displayName	 = "[Colonial Rescue] BDU";
		//picture    = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass = "ARMCO_Police_Officer";
		};
	};

//---Rescue---//
class ARMCO_Uniform_Rescue: C_Uniform_ODST_Base
	{
		dlc 		 = "ARMCO OPTRE Reskins";
		scope 	     = 2;
		author		 = "Frosty & Mac";				
		displayName	 = "[Colonial Rescue] BDU";
		//picture    = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass = "ARMCO_Rescue_Officer";
		};
	};

//---Biohazard---//


//---Firefighter---//
class ARMCO_Uniform_Firefighter: C_Uniform_ODST_Base
	{
		dlc 		 = "ARMCO OPTRE Reskins";
		scope 	     = 2;
		author		 = "Frosty & Mac";				
		displayName	 = "[Colonial Fire Department] BDU";
		//picture    = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass = "ARMCO_Firefighter_Officer";
		};
	};

};
