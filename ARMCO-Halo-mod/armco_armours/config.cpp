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
			"ARMCO_Generic_CH252_Ghillie_Helmet"
			// Squad Armor
		};
		requiredVersion = 0.1; 
		requiredAddons[] = {"OPTRE_UNSC_Units","ace_main","A3_Characters_F_BLUFOR"}; 
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
};
