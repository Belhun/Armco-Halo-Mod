class CfgPatches 
{
    /*Squad names: 
    Alpha
    Saber
    Phoenix
    Zulu
    */
	class ARMCO_Units_Army { 
		units[] = {
			// Units class names go here
		};
		weapons[]=
		{
			// item class names go here
			// Squad Helmets
			"Alpha_CH252_Helmet",
			"Sabre_CH252_Helmet",
			"Phoenix_CH252_Helmet",
			"Zulu_CH252_Helmet",
			"ARMCO_Generic_CH252_Ghillie_Helmet",
			//Uniforms
			"Alpha_BDU",
			"Alpha_EOD_BDU",
			"Alpha_Medic_BDU",
			"Sabre_BDU",
			"Sabre_EOD_BDU",
			"Sabre_Medic_BDU",
			"Zulu_BDU",
			"Zulu_Camo_BDU",
			"Zulu_EOD_BDU",
			"Zulu_Medic_BDU",
			"Zulu_Medic_Camo_BDU",
			"Phoenix_BDU",
			"Phoenix_EOD_BDU",
			"Phoenix_Medic_BDU"
			// Squad Armor
			
		};
		requiredVersion = 0.1; 
		requiredAddons[] = {"OPTRE_UNSC_Units", "OPTRE_Core" ,"ace_main","A3_Characters_F_BLUFOR"}; 
	}; 
};

//unsure if i need it yet(gona message around with it)
/* class CfgEditorCategories {
	class armco_units
	{
		displayName = "ARMCO"; 
	};
}
class CfgEditorSubcategories {
	class armco_units_infantry
	{
		displayName = "Infantry (Baseline)"; 
	};
	
}; */
class CfgFactionClasses{
	class ARMCO_PMC{
		dlc="ARMCO OPTRE Reskins";
		displayName="ARMCO";
		author="Armco Community";
		priority = 1;
		side= 1;
		scope= 2;
		scopeArsenal= 2;
		scopeCurator= 2;
		icon="\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag="\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage="EN";
		backpack_tf_faction_radio_api ="OPTRE_Como_pack_2";
	};
};

class tfw_ilbe_gr;

class CfgMarkerClasses {
	class ARMCO_Markers {
		displayName="ARMCO";
	};
};

class CfgMarkers{
	class ARMCO_Flag{
		name ="ARMCO HQ";
		scope=2;
		scopeCurator=2;
		icon = "custom_armours\data\flags\flag_armco_ca.paa";
		color[] = {1, 1, 1, 1};
		size = 29;
		shadow = 0;
		texture = "custom_armours\data\flags\flag_armco_ca.paa";
		markerClass="ARMCO_Markers";
	};
};

class CfgVehicles{
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class OPTRE_UNSC_Soldier_Base;
	class OPTRE_UNSC_Man_Army_W_class;
	class SoldierWB;
	/* class ARMCO_PMC_Soldier_Base: SoldierWB
	{
		class EventHandlers;
		class HitPoints
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
	}; */
	class EventHandlers;
	class ARMCO_PMC_Army_Soldier: SoldierWB
	{
		
		dlc="ARMCO_PMC";
		scope=1;
		scopeCurator=0;
		author="Belhun";
		vehicleClass="OPTRE_UNSC_Man_Army_W_class";
		uniformClass="ARMCO_PMC_Army_Uniform_WDL";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
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
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\uniforms\uniform_alpha_co.paa",
			"armco_armours\data\uniforms\uniform_alpha_co.paa"
		};
		
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), nil, ['', 0.35,'OPTRE_HUD_Glasses',0.5 ,'OPTRE_HUD_g_Glasses',0.5 ,'OPTRE_HUD_r_Glasses',0.25 ,'OPTRE_HUD_b_Glasses',0.3 ,'OPTRE_HUD_p_Glasses',0.2 ,'OPTRE_HUD_w_Glasses',0.25 ,'OPTRE_EyePiece',0.5 ,'G_Bandanna_blk',0.5,'G_Bandanna_khk',0.5,'G_Bandanna_oli',0.5,'G_Bandanna_tan',0.5,'G_Balaclava_TI_blk_F',0.6]] call BIS_fnc_unitHeadgear;};";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
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
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"
			};
		};
		class HitPoints
		{
			class HitNeck
			{
				name="neck";
				material=-1;
				armor=4;
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitPelvis
			{
				name="pelvis";
				armor=8;
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen
			{
				name="abdomen";
				material=-1;
				armor=4;
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm
			{
				name="diaphragm";
				material=-1;
				armor=4;
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest
			{
				name="chest";
				material=-1;
				armor=4;
				passThrough=1;
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				name="arms";
				material=-1;
				armor=6;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitHands
			{
				name="hands";
				material=-1;
				armor=6;
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLegs
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
		editorSubcategory="OPTRE_EditorSubcategory_MenWDL";
	};

	class ARMCO_Soldier_A_Rifle: ARMCO_PMC_Army_Soldier
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		vehicleClass="OPTRE_UNSC_Man_Army_W_class";
		uniformClass="ARMCO_PMC_Army_Uniform_WDL";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\uniforms\uniform_alpha_co.paa",
			"armco_armours\data\uniforms\uniform_alpha_co.paa"
		};
	};
	class ARMCO_Soldier_A_EOD: ARMCO_PMC_Army_Soldier
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		vehicleClass="OPTRE_UNSC_Man_Army_W_class";
		uniformClass="ARMCO_PMC_Army_Uniform_WDL";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\uniforms\uniform_alpha_eod_co.paa",
			"armco_armours\data\uniforms\uniform_alpha_eod_co.paa"
		};
	};
	class ARMCO_Soldier_A_Medical: ARMCO_PMC_Army_Soldier
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		vehicleClass="OPTRE_UNSC_Man_Army_W_class";
		uniformClass="ARMCO_PMC_Army_Uniform_WDL";
		model="\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\uniforms\uniform_alpha_medic_co.paa",
			"armco_armours\data\uniforms\uniform_alpha_medic_co.paa"
		};
	};
};

class cfgWeapons {
	//Need to Define ItemInfo to use it in the Helmets(and maby others)
	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel="";
		modelOff="";
		mass=1;
	};
	class OPTRE_UNSC_CH252_Helmet_WDL;
	class OPTRE_UNSC_CH252_Helmet2_WDL;
	class Alpha_CH252_Helmet: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad CH252 Helmet (Alpha)";
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\helmets\helmet_alpha_co.paa",
			"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"armco_armours\data\helmets\helmet_alpha_co.paa",
				"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
			};
		};
	};
	class Sabre_CH252_Helmet: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad CH252 Helmet (Sabre)";
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\helmets\helmet_sabre_co.paa",
			"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"armco_armours\data\helmets\helmet_sabre_co.paa",
				"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
			};
		};
	};
	class Phoenix_CH252_Helmet: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad CH252 Helmet (Phoenix)";
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\helmets\helmet_phoenix_co.paa",
			"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"armco_armours\data\helmets\helmet_phoenix_co.paa",
				"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
			};
		};
	};
	class Zulu_CH252_Helmet: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad CH252 Helmet (Zulu)";
		hiddenSelectionsTextures[]=
		{
			"armco_armours\data\helmets\helmet_zulu_co.paa",
			"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"armco_armours\data\helmets\helmet_zulu_co.paa",
				"armco_armours\data\helmets\visors\Helmet_Visor_ca.paa"
			};
		};
	};

	//Uniforms Start
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class ARMCO_PMC_Army_Uniform_WDL: U_B_CombatUniform_mcam
	{
		dlc="ARMCO_PMC";
		scope=2;
		author="Belhun";
		displayName="[0](FUCKING WORK???) BDU";
		picture="\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ARMCO_PMC_Army_Soldier_WDL";
			containerClass="Supply40";
			mass=50;
			modelSides[]={6};
		};
	};

	//Squad Uniforms
	class Alpha_BDU: ARMCO_PMC_Army_Uniform_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad BDU (Alpha)";
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ARMCO_Soldier_A_Rifle";
			containerClass="Supply40";
			mass=50;
			modelSides[]={6};
		}
	};
	class Alpha_EOD_BDU: ARMCO_PMC_Army_Uniform_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad BDU (Alpha EOD)";
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ARMCO_Soldier_A_EOD";
			containerClass="Supply40";
			mass=50;
			modelSides[]={6};
		}
	};
	class Alpha_Medic_BDU: ARMCO_PMC_Army_Uniform_WDL
	{
		dlc="ARMCO_PMC";
		author="Belhun";
		displayName="[A][ARMCO] Squad BDU (Alpha Medical)";
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ARMCO_Soldier_A_Medical";
			containerClass="Supply40";
			mass=50;
			modelSides[]={6};
		}
	};
};
