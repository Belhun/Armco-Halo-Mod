 #include "cfgPatches.hpp"
////////////////////////
//Damage & UNITS Start//
////////////////////////
	class Mode_SemiAuto;
	class WeaponSlotsInfo;
	class Mode_Burst;
	class Mode_FullAuto;
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
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
	class SoldierWB: CAManBase
	{
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
				// minimalHit          = 0.01;
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
				armor= 1;
				material= -1;
				name= "legs";
				passThrough= 0.1;
				radius= 0.12;
				explosionShielding= 0.25;
				visual= "injury_legs";
				minimalHit= 0.01;
			};
			
			// ACE
			
			class HitLeftArm
			{
				armor= 1;
				material= -1;
				name= "hand_l";
				passThrough= 0.1;
				radius= 0.1;
				explosionShielding= 0.25;
				visual= "injury_hands";
				minimalHit= 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name= "hand_r";
			};
			class HitLeftLeg
			{
				armor=1;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.25;
				visual="injury_hands";
				minimalHit=0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};
////////////////////
//BASE UNITS Start//
////////////////////
class I_crew_F;
class AMRCO_Dress_Soldier_Base: ARMCO_Soldier_Base {
		scope = 1;
		scopeCurator=1;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","None"};
		dlc = "ARMCO OPTRE Reskins";
		author= "Frosty & Mac";
		uniformClass= "OPTRE_UNSC_Dress_Uniform_gray";
		faction	= "ARMCO_PMC";
		model= "\OPTRE_UNSC_Units\Army\officer.p3d";
		linkedItems[] 	= 
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
		hiddenSelectionsTextures[]= 
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
		scopeCurator													= 1;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","None"};
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
		scopeCurator													= 1;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","None"};
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
		scopeCurator													= 1;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","None"};
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
class ARMCO_Soldier_Security_Bureau: I_crew_F {
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Tank\Data\CfgVehicles\I_Story_Crew_F.jpg";
		scope=1;
		scopeCurator=1;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","None"};
		displayName="Security Bureau Agent";
		model="\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
		modelSides[]={2,3};
		side=2;
		engineer=1;
		uniformClass="U_Tank_green_F";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]=
		{
			"OPTRE_UNSC_M52A_Armor1_WDL",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"OPTRE_UNSC_M52A_Armor1_WDL",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_uniform\data\uniform\u_armco_security_co.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
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
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
//----------END OF BASE UNIT----------//

///////////////////////
//BASE Uniforms Start//
///////////////////////

/////////////////////////
//DRESS UNIFORMS CONFIG//
/////////////////////////


//---Command---//
class ARMCO_Dress_Soldier_Frosty: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		icon 															= "iconManOfficer";
		displayName="Frosty (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Frosty";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ONI\dress_uniform_oni_frosty_CO.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Frosty",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Frosty",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};  
class ARMCO_Dress_Soldier_Boone: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Boone (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Boone";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Command\dress_uniform_odst_boone_CO.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Boone",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Boone",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
}; 



//---Training Officers---///
class ARMCO_Dress_Soldier_Shaw: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Shaw (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Shaw";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TO\dress_uniform_Shaw_CO.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Shaw",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Shaw",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Ciro: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Ciro (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Ciro";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TO\dress_uniform_Ciro_STO_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Ciro",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Ciro",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};		
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Runic: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Runic (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Runic";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TO\dress_uniform_Runic_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Runic",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Runic",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Super: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Super (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Super";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TO\dress_uniform_Super_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Super",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Super",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Mini: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Mini (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_mini";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TO\dress_uniform_Mini_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Mini",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Mini",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};



//---Squad Leaders---//
class ARMCO_Dress_Soldier_VJ: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Vincent (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_VJ";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\SL\dress_uniform_vj_CO.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_VJ",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_VJ",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Merek: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Merek (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Merek";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\SL\dress_uniform_Merek_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Merek",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Merek",
			"ARMCO_Dress_Hat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};


//---Squad Sgt/Cpl---//	
class ARMCO_Dress_Soldier_Darman: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Darman (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Darman";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Darman_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Darman",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Darman",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Red: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="RedDragon (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Red";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_reddragon_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Red",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Red",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Viking: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Viking (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Viking";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Viking_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Viking",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Viking",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Tom: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Tom (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Tom";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_Tom_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Tom",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Tom",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Garfield: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Garfield (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Garfield";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Garfield_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Garfield",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Garfield",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Mac: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Mac (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Mac";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Mac_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Mac",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Mac",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
}; 
class ARMCO_Dress_Soldier_Spooks: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Spooks (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Spooks";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Spooks_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Spooks",
			"ARMCO_Beret_Veteran",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Spooks",
			"ARMCO_Beret_Veteran",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};



//---Team Leaders---//
class ARMCO_Dress_Soldier_Symbol: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Symbol (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Symbol";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Symbol_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Symbol",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Symbol",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Cheese: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Cheese (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Cheese";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_Cheese_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Cheese",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Cheese",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Wolffe: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Wolffe (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Wolffe";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Wolffe_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Wolffe",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Wolffe",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Valkyrie: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Valkyrie (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Valkyrie";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Valk_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Valkyrie",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Valkyrie",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Gunner: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Gunner (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Gunner";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Gunner_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_gunner",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_gunner",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	
class ARMCO_Dress_Soldier_Extortionist: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Extortionist (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Extortionist";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Extortionist_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Extortionist",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Extortionist",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Raziel: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Raziel (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Raziel";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Raziel_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Raziel",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Raziel",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	




//---Medical Dress Uniforms---//
class ARMCO_Dress_Soldier_Darkness: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Darkness (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Darkness";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
		"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Darkness_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Darkness",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Darkness",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Belhun: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Belhun (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Belhun";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Belhun_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Belhun",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Belhun",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Raven: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Raven (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Raven";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_raven_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Raven",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Raven",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Acanite: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Acanite (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Acanite";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Acanite_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Acanite",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Acanite",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Cybran: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Cybran (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Cybran";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Cybran_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Cybran",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Cybran",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	
class ARMCO_Dress_Soldier_Kellboy: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Kellboy (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Kellboy";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Kellboy_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Kellboy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Kellboy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Apples: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Apples (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Apples";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Apples_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Apples",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Apples",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Addy: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Addy (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Addy";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Addy_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Addy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Addy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};		
class ARMCO_Dress_Soldier_TK: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="TK (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_TK";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_TK_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_TK",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_TK",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	
class ARMCO_Dress_Soldier_Defender: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Defender (Dress Uniform)";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Defender";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		icon 															= "iconManMedic";
		attendant = 1;
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Defender_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Defender",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Defender",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_Coolguy: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Coolguy (Dress Uniform)";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Coolguy";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		icon 															= "iconManMedic";
		attendant = 1;
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Coolguy_co.paa"
		};
		linkedItems[] 													= 
		{
			"dress_uniform_Coolguy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"dress_uniform_Coolguy",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};
class ARMCO_Dress_Soldier_HiddenDragon: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="HiddenDragon (Dress Uniform)";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_HiddenDragon";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		icon 															= "iconManMedic";
		attendant = 1;
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_HiddenDragon_co.paa"
		};
		linkedItems[] 													= 
		{
			"dress_uniform_HiddenDragon",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"dress_uniform_HiddenDragon",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
};


	
//---EOD Uniforms---//
	
	
//---Generic Dress Uniforms---//

//Members//
class ARMCO_Dress_Soldier_Crigo: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 0;
		scopeCurator = 0;
		displayName="Crigo (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Crigo";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_crigo_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Crigo",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Crigo",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Blue: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Blue (Dress Uniform)";
		icon 															= "iconMan";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Blue";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Blue_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Blue",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Blue",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
}; 
class ARMCO_Dress_Soldier_Sam: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 0;
		scopeCurator = 0;
		displayName="Sam (Dress Uniform)";
		icon 															= "iconManMedic";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Sam";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_sam_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Sam",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Sam",
			"ARMCO_Beret_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Night: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 0;
		scopeCurator = 0;
		displayName="Night (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Night";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_night_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Night",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Night",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_French: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 0;
		scopeCurator = 0;
		displayName="French (Dress Uniform)";
		icon 															= "iconManOfficer";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_French";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\TL\dress_uniform_French_CO.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_French",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_French",
			"ARMCO_Beret_TL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Nutters: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Nutters (Dress Uniform)";
		icon 															= "iconManLeader";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Nutters";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Nutters_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Nutters",
			"ARMCO_Beret_Veteran",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Nutters",
			"ARMCO_Beret_Veteran",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	}; 
class ARMCO_Dress_Soldier_Burford: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Burford (Dress Uniform)";
		icon 															= "iconMan";
		author											= "Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Burford";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Burford_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Burford",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Burford",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	}; 	
class ARMCO_Dress_Soldier_Droidbot: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Droidbot (Dress Uniform)";
		icon 															= "iconMan";
		author											= "Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Droidbot";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_Droidbot_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Droidbot",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Droidbot",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	}; 	
class ARMCO_Dress_Soldier_CTLithios: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="CT Lithios (Dress Uniform)";
		icon 															= "iconMan";
		author											= "Viking";
		uniformClass													= "ARMCO_Dress_Uniform_CTLithios";
		model															= "\OPTRE_UNSC_Units\Army\officer_b.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\ODST\dress_uniform_CTLithios_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_CTLithios",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_CTLithios",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
}; 	


//Alpha
class ARMCO_Dress_Soldier_Alpha_One: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 1 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_One";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_one_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Alpha_Two: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 2 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_Two";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_two_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Alpha_Three: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 3 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_Three";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_three_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Alpha_Four: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 4 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_Four";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_four_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_Four",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_Four",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Alpha_Five: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 5 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_Five";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_five_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_Five",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_Five",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Alpha_Six: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Alpha 6 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Alpha_Six";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_alpha_Six_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Alpha_Six",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Alpha_Six",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};

//Echo
class ARMCO_Dress_Soldier_Echo_One: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Echo 1 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Echo_One";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_echo_one_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Echo_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Echo_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Echo_Two: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Echo 2 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Echo_Two";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_echo_two_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Echo_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Echo_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Echo_Three: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Echo 3 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Echo_Three";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_echo_three_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Echo_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Echo_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	

//Zulu
class ARMCO_Dress_Soldier_Zulu_One: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Zulu 1 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Zulu_One";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_zulu_One_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Zulu_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Zulu_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};	
class ARMCO_Dress_Soldier_Zulu_Two: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Zulu 2 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Zulu_Two";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_zulu_Two_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Zulu_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Zulu_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Zulu_Three: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Zulu 3 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Zulu_Three";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_zulu_Three_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Zulu_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Zulu_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};

//Poenix
class ARMCO_Dress_Soldier_Phoenix_One: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Phoenix 1 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Phoenix_One";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_phoenix_one_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Phoenix_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Phoenix_One",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Phoenix_Two: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Phoenix 2 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Phoenix_Two";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_phoenix_two_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Phoenix_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Phoenix_Two",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};
class ARMCO_Dress_Soldier_Phoenix_Three: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		scopeCurator = 2;
		displayName="Phoenix 3 (Dress Uniform)";
		author											= "Frosty & Mac";
		uniformClass													= "ARMCO_Dress_Uniform_Phoenix_Three";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Unranked\dress_uniform_phoenix_three_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Phoenix_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Phoenix_Three",
			"ARMCO_Beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
	};

//Medical
class ARMCO_Dress_Soldier_Medical: AMRCO_Dress_Soldier_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 1;
		scopeCurator = 1;
		displayName="Medical (Dress Uniform)";
		author											= "Frosty & Viking";
		uniformClass													= "ARMCO_Dress_Uniform_Medical";
		model															= "\OPTRE_UNSC_Units\Army\officer.p3d";
		icon 															= "iconManMedic";
		attendant = 1;
		hiddenSelections[] 												= 
		{
			"camo1",
			"insignia",
			"clan"
		}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= 
		{
			"custom_dress_uniforms\data\DressUniform\Medical\dress_uniform_Medical_co.paa"
		};
		linkedItems[] 													= 
		{
			"ARMCO_Dress_Uniform_Medical",
			"ARMCO_Dress_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[] 											= 
		{
			"ARMCO_Dress_Uniform_Medical",
			"ARMCO_Dress_Medical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory = "armco_units_fancy";
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

//////////////////////
//Base Helmets Start//
//////////////////////

//---Dress Uniform Hats---//
class ARMCO_Hat_Base: H_Cap_oli	
	{
		dlc = "ARMCO OPTRE Reskins";
		scope   										= 0;
		author											= "Frosty & Mac";
		displayName    									= "-";
		//picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model     										= "\OPTRE_UNSC_Units\Army\officer_hat.p3d";
		hiddenSelections[]   							= 
		{
			"camo1"
		};
		hiddenSelectionsTextures[]   					= 
		{
			"custom_dress_uniforms\data\hats\dress_hat_armco_CO.paa"
		};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\officer_hat.p3d";
			//armor   									= 8;
			allowedSlots[] = {801,901,701};
			mass   										= 4;
			modelSides[]   								= {6};
			passThrough   								= 1;
			hiddenSelections[]   						= 
			{
				"camo1"
			};
			hiddenSelectionsTextures[]   				= 
			{
				"custom_dress_uniforms\data\hats\dress_hat_armco_CO.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 1;
				};
			};
		};
	};	
class ARMCO_Dress_Hat: ARMCO_Hat_Base 
	{
		dlc = "ARMCO OPTRE Reskins";
		scope   										=2;
		author											= "Frosty & Mac";
		displayName    									= "[ARMCO] Dress Uniform Cap";
};
class ARMCO_Beret: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (Rifleman)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\custom_dress_uniforms\data\hats\armco_beret_regular_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_Medical: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (Medical)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\custom_dress_uniforms\data\hats\armco_beret_medical_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_TL: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (Team Leader)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\custom_dress_uniforms\data\hats\armco_beret_teamleader_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_Veteran: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (Distinguished Veteran)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\custom_dress_uniforms\data\hats\armco_beret_special_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_Security: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Security Bureau Beret";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"custom_armours\data\security\helmet\h_beret_security_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_EOD: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (EOD)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"custom_dress_uniforms\data\hats\armco_beret_eod_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_Beret_ODST: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Frosty & Mac";
		displayName = "[ARMCO] Dress Uniform Beret (ODST)";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"custom_dress_uniforms\data\hats\armco_beret_odst_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};
class ARMCO_PatrolCap_Hat: H_Beret_02 
	{
		dlc = "ARMCO OPTRE Re-textures";
		scope = 2;
		weaponPoolAvailable = 1;
		author= "Viking";
		displayName = "[ARMCO] Patrol Cap";
		//picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
		model = "\A3\characters_f\common\cappatrol";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"custom_dress_uniforms\data\hats\cappatrol_Armco_co.paa"
		};
		
		class ItemInfo : HeadgearItem {
			mass = 6;
			allowedSlots[] = {801,901,701};
			uniformModel = "\A3\characters_f\common\cappatrol";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};

	
//////////////////
//---UNIFORMS---//
//////////////////	
class ARMCO_Uniform_Base: U_B_CombatUniform_mcam
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
class ARMCO_Uniform_Medical_Base: U_B_CombatUniform_mcam
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
class ARMCO_Uniform_ODST_Base: U_B_CombatUniform_mcam
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


//---ODST Uniforms--//
class ARMCO_Uniform_ODST: ARMCO_Uniform_ODST_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] ODST BDU [Black]";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Soldier_ODST";
		};
	};
class ARMCO_Uniform_ODST_Camo: ARMCO_Uniform_ODST_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] ODST BDU [Camo]";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Soldier_ODST_Camo";
		};
	};

//--Security--//
class ARMCO_Uniform_Security: Uniform_Base
	{
		dlc 			= "ARMCO OPTRE Reskins";
		scope			= 2;
		author			= "Frosty & Mac";				
		displayName		= "[ARMCO] Security Tactical Overalls";
		picture			="\a3\Characters_F_Tank\Uniforms\Data\UI\icon_U_Tank_crew_CA.paa";
		model			="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem				
		{				
			uniformModel="\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
			uniformClass												= "ARMCO_Security_Bureau_Officer";
			containerClass												= "Supply300";
			mass														= 50;
			modelSides[] 												= {6};
		};
	};
class ARMCO_Uniform_ODST_Security: ARMCO_Uniform_ODST_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author		= "Frosty & Mac";				
		displayName	= "[ARMCO] Security Bureau ODST BDU [Black/Gold]"
		//picture   = "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass = "ARMCO_Soldier_ODST_Security_RM";
		};
	};

//////////////////
//Dress Uniforms//
//////////////////
class ARMCO_Dress_Uniform_Boone : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] Dress Uniform (Boone)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Boone";
		};	
	};
class ARMCO_Dress_Uniform_Mac : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] Dress Uniform (Mac)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Mac";
		};	
	};
class ARMCO_Dress_Uniform_Nutters : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Nutters)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Nutters";
		};	
	};
class ARMCO_Dress_Uniform_Frosty : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] Dress Uniform (Frosty)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Frosty";
		};	
	};
class ARMCO_Dress_Uniform_Defender : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Defender)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Defender";
		};	
	};
class ARMCO_Dress_Uniform_Shaw : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Shaw)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Shaw";
		};	
	};
class ARMCO_Dress_Uniform_Spooks : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Spooks)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Spooks";
		};	
	};
class ARMCO_Dress_Uniform_Valkyrie : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Valkyrie)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Valkyrie";
		};	
	};
class ARMCO_Dress_Uniform_Ciro : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Ciro)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Ciro";
		};	
	};
class ARMCO_Dress_Uniform_Super : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";				
		displayName														= "[ARMCO] Dress Uniform (Super)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Super";
		};	
	};
class ARMCO_Dress_Uniform_VJ : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";				
		displayName														= "[ARMCO] Dress Uniform (Vincent)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_VJ";
		};	
	};
class ARMCO_Dress_Uniform_Symbol : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Symbol)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Symbol";
		};	
	};
class ARMCO_Dress_Uniform_Red : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (RedDragon)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Red";
		};	
	};
class ARMCO_Dress_Uniform_Mini : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Mini)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Mini";
		};	
	};
class ARMCO_Dress_Uniform_Cheese : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Cheese)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Cheese";
		};	
	};
class ARMCO_Dress_Uniform_Darman : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Darman)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Darman";
		};	
	};
class ARMCO_Dress_Uniform_Darkness : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Darkness)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Darkness";
		};	
	};
class ARMCO_Dress_Uniform_TK : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (TK)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_TK";
		};	
	};
class ARMCO_Dress_Uniform_Tom : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Tom)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Tom";
		};	
	};
class ARMCO_Dress_Uniform_Belhun : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Belhun)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Belhun";
		};	
	};
class ARMCO_Dress_Uniform_Night : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 1;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Night)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Night";
		};	
	};
class ARMCO_Dress_Uniform_Crigo : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Crigo)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Crigo";
		};	
	};	
class ARMCO_Dress_Uniform_Garfield : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Garfield)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Garfield";
		};	
	};	
class ARMCO_Dress_Uniform_Raven : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Raven)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Raven";
		};	
	};	
class ARMCO_Dress_Uniform_Raziel : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Raziel)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Raziel";
		};	
	};		
class ARMCO_Dress_Uniform_Apples : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Apples)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Apples";
		};	
	};	
class ARMCO_Dress_Uniform_Acanite : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Acanite)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Acanite";
		};	
	};	
class ARMCO_Dress_Uniform_Extortionist : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Extortionist)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Extortionist";
		};	
	};
class ARMCO_Dress_Uniform_Runic : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Runic)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Runic";
		};	
	};
class ARMCO_Dress_Uniform_Viking : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Viking)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Viking";
		};	
	};
class ARMCO_Dress_Uniform_Addy : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Addy)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Addy";
		};	
	};
class ARMCO_Dress_Uniform_Sam : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Sam)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Sam";
		};	
	};
class ARMCO_Dress_Uniform_Kellboy : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Kellboy)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Kellboy";
		};	
	};
class ARMCO_Dress_Uniform_Cybran : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Cybran)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Cybran";
		};	
	};
class ARMCO_Dress_Uniform_Gunner : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Gunner)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Gunner";
		};	
	};
class ARMCO_Dress_Uniform_Wolffe : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Wolffe)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Wolffe";
		};	
	};
class ARMCO_Dress_Uniform_Blue : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Blue)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Blue";
		};	
	};
class ARMCO_Dress_Uniform_Merek : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Merek)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Merek";
		};	
	};
class ARMCO_Dress_Uniform_Coolguy : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Coolguy)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Coolguy";
		};	
	};
class ARMCO_Dress_Uniform_HiddenDragon : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (HiddenDragon)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_HiddenDragon";
		};	
	};
class ARMCO_Dress_Uniform_Burford : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Burford)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Burford";
		};	
	};
class ARMCO_Dress_Uniform_CTLithios : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (CT Lithios)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_CTLithios";
		};	
	};
class ARMCO_Dress_Uniform_Droidbot: ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Droidbot)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Droidbot";
		};	
	};

//---Medical Dress Uniform---//
class ARMCO_Dress_Uniform_Medical : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Viking";
		displayName														= "[ARMCO] Dress Uniform (Medical)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Medical";
		};	
	};

	
//---Squad Specific Dress Uniforms---//
class ARMCO_Dress_Uniform_Alpha_one : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 1)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_One";
		};	
	};
class ARMCO_Dress_Uniform_Alpha_two : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 2)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_Two";
		};	
	};
class ARMCO_Dress_Uniform_Alpha_Three : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 3)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_Three";
		};	
	};
class ARMCO_Dress_Uniform_Alpha_Four : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 4)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_Four";
		};	
	};
class ARMCO_Dress_Uniform_Alpha_Five : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 5)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_Five";
		};	
	};
class ARMCO_Dress_Uniform_Alpha_Six : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Alpha 6)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Alpha_Six";
		};	
	};
class ARMCO_Dress_Uniform_Echo_one : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Echo 1)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Echo_One";
		};	
	};
class ARMCO_Dress_Uniform_Echo_two : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Echo 2)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Echo_Two";
		};	
	};
class ARMCO_Dress_Uniform_Echo_Three : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Echo 3)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Echo_Three";
		};	
	};
class ARMCO_Dress_Uniform_Zulu_One : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Zulu 1)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Zulu_One";
		};	
	};
class ARMCO_Dress_Uniform_Zulu_Two : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Zulu 2)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Zulu_Two";
		};	
	};
class ARMCO_Dress_Uniform_Zulu_Three : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Zulu 3)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Zulu_Three";
		};	
	};
class ARMCO_Dress_Uniform_Phoenix_One : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Phoenix 1)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Phoenix_One";
		};	
	};
class ARMCO_Dress_Uniform_Phoenix_Two : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Phoenix 2)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Phoenix_Two";
		};	
	};
class ARMCO_Dress_Uniform_Phoenix_Three : ARMCO_Uniform_Base
	{
		dlc = "ARMCO OPTRE Reskins";
		scope = 2;
		author											= "Frosty & Mac";
		displayName														= "[ARMCO] Dress Uniform (Phoenix 3)";
		//picture   														= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo				
		{				
			uniformClass												= "ARMCO_Dress_Soldier_Phoenix_Three";
		};	
	};
};
 