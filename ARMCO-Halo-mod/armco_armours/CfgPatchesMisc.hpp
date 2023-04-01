class CfgPatches 
{
    /*
	Squad names: 
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
			//Squad Uniforms
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
			"Phoenix_Medic_BDU",
			// ODST uniforms
			"ARMCO_ODST_BLK_BDU",
			"ARMCO_ODST_camo_BDU",
			"ARMCO_ODST_M90_BDU",
			// Squad Marine Armours
			//Alpha Squad
			"Alpha_Armour_Corpsman",
			"Alpha_Armour_Corpsman_Ghillie",
			"Alpha_Armour_EOD",
			"Alpha_Armour_EOD_Ghillie",
			"Alpha_Armour_Medic",
			"Alpha_Armour_Medic_Ghillie",
			"Alpha_Armour_Rifleman",
			"Alpha_Armour_Rifleman_Ghillie",
			"Alpha_Armour_Team_Leader",
			"Alpha_Armour_Team_Leader_Ghillie",
			//Phoenix Squad
			"Phoenix_Squad_Corpsman",
			"Phoenix_Squad_Corpsman_Ghillie",
			"Phoenix_Squad_EOD",
			"Phoenix_Squad_EOD_Ghillie",
			"Phoenix_Squad_Medic",
			"Phoenix_Squad_Medic_Ghillie",
			"Phoenix_Squad_Rifleman",
			"Phoenix_Squad_Rifleman_Ghillie",
			"Phoenix_Squad_Team_Leader",
			"Phoenix_Squad_Team_Leader_Ghillie",
			//Sabre Squad
			"Sabre_Squad_Corpsman",
			"Sabre_Squad_Corpsman_Ghillie",
			"Sabre_Squad_EOD",
			"Sabre_Squad_EOD_Ghillie",
			"Sabre_Squad_Medic",
			"Sabre_Squad_Medic_Ghillie",
			"Sabre_Squad_Rifleman",
			"Sabre_Squad_Rifleman_Ghillie",
			"Sabre_Squad_Team_Leader",
			"Sabre_Squad_Team_Leader_Ghillie",
			//Zulu Squad
			"Zulu_Squad_Corpsman",
			"Zulu_Squad_Corpsman_Ghillie",
			"Zulu_Squad_EOD",
			"Zulu_Squad_EOD_Ghillie",
			"Zulu_Squad_Medic",
			"Zulu_Squad_Medic_Ghillie",
			"Zulu_Squad_Rifleman",
			"Zulu_Squad_Rifleman_Ghillie",
			"Zulu_Squad_Team_Leader",
			"Zulu_Squad_Team_Leader_Ghillie",
			"ARMCO_Test_ArmorA_ChestArmor",
			"ARMCO_Test_ArmorA_Ghillie",
			"ARMCO_Test_ArmorA_KneesLeft",
			"ARMCO_Test_ArmorA_KneesRight",
			"ARMCO_Test_ArmorA_KneesMarLeft",
			"ARMCO_Test_ArmorA_KneesMarRight",
			"ARMCO_Test_ArmorA_ODST",
			"ARMCO_Test_ArmorA_ShinArmorLeft",
			"ARMCO_Test_ArmorA_ShinArmorRight",
			"ARMCO_Test_ArmorA_TacPad",
			"ARMCO_Test_ArmorA_ThighArmorLeft",
			"ARMCO_Test_ArmorA_ThighArmorRight",
			"ARMCO_Test_ArmorAS_BaseLeft",
			"ARMCO_Test_ArmorAS_BaseRight",
			"ARMCO_Test_ArmorAS_LargeLeft",
			"ARMCO_Test_ArmorAS_LargeRight",
			"ARMCO_Test_ArmorAS_MediumLeft",
			"ARMCO_Test_ArmorAS_MediumRight",
			"ARMCO_Test_ArmorAS_ODSTCQBLeft",
			"ARMCO_Test_ArmorAS_ODSTCQBRight",
			"ARMCO_Test_ArmorAS_ODSTLeft",
			"ARMCO_Test_ArmorAS_ODSTRight",
			"ARMCO_Test_ArmorAS_ODSTSniperLeft",
			"ARMCO_Test_ArmorAS_ODSTSniperRight",
			"ARMCO_Test_ArmorAS_SmallLeft",
			"ARMCO_Test_ArmorAS_SmallRight",
			"ARMCO_Test_ArmorAP_AR",
			"ARMCO_Test_ArmorAP_BR",
			"ARMCO_Test_ArmorAP_Canteen",
			"ARMCO_Test_ArmorAP_GL",
			"ARMCO_Test_ArmorAP_Knife",
			"ARMCO_Test_ArmorAP_MGThigh",
			"ARMCO_Test_ArmorAP_Pack",
			"ARMCO_Test_ArmorAP_Pistol",
			"ARMCO_Test_ArmorAP_Rounds",
			"ARMCO_Test_ArmorAP_SG",
			"ARMCO_Test_ArmorAP_SMG",
			"ARMCO_Test_ArmorAP_Sniper",
			"ARMCO_Test_ArmorAP_Thigh",
			"ARMCO_Test_ArmorAP_Frag",
			"ARMCO_Test_ArmorAP_Smoke",
			"ARMCO_Test_ArmorAPO_AR",
			"ARMCO_Test_ArmorAPO_BR",
			"ARMCO_Test_ArmorAPO_Knife",
			"ARMCO_Test_ArmorAPO_SMG",
			"ARMCO_Test_ArmorAPO_Sniper",
			"ARMCO_Test_ArmorCustomKit_Scorch",
			"ARMCO_Test_ArmorA_base",

			//Test Aromor

			
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