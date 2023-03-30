class CfgPatches {
    /*Squad names: 
    Alpha
    Saber
    Phoenix
    Zulu
    */
	class CA_ARMCO_INFANTRY { 
		units[] = {
			//Marine Units//
			"ARMCO_Soldier_Alpha",
			"ARMCO_Soldier_Alpha_TL",
			"ARMCO_Soldier_Alpha_Medic",
			"ARMCO_Soldier_Alpha_Corpsman",
			"ARMCO_Soldier_Alpha_EOD",

		};
		requiredVersion = 0.1; 
		requiredAddons[] = {"OPTRE_UNSC_Units","ace_main","A3_Characters_F_BLUFOR"}; 
	}; 
};
class CfgEditorCategories {
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
	
};
class CfgFactionClasses
{
	class ARMCO_PMC
	{
		dlc 							= "ARMCO OPTRE Reskins";
		displayName = "ARMCO";
		author		= "Frosty & Mac";
		priority 	= 1;
		side 		= 1;
		scope		= 2;
		scopeArsenal= 2;
		scopeCurator= 2;
		icon 		= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 		= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage= "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
	class ARMCO_PMC
	{

	}

};

class tfw_ilbe_gr;

class CfgMarkerClasses
{
	class ARMCO_Markers
	{
		displayName="ARMCO";
	};
};
class CfgMarkers 	
{
		class ARMCO_Flag
		{
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
class CfgVehicles
{
    class OPTRE_UNSC_Army_Soldier_WDL;
	class ARMCO_Army_Soldier: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc="OPTRE";
		scope=2;
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"OPTRE_UNSC_M52A_Armor_TL_WDL",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"OPTRE_UNSC_M52A_Armor_TL_WDL",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		backpack="OPTRE_UNSC_Rucksack_Lead";
		weapons[]=
		{
			"OPTRE_MA37GL",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA37GL",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Orange",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Orange",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManLeader";
	}; 

};

class cfgWeapons {
	
	
};
