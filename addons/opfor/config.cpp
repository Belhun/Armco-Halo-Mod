#include "script_component.hpp"
class CfgPatches {
	class 4thot_opfor
	{
		units[] =
		{
			"U_C_Uniform_Farmer_01_nmr",
			"U_C_ArtTShirt_01_v5_nmr",
			"U_C_ArtTShirt_01_v6_nmr",
			"U_I_C_Soldier_Bandit_3_nmr",
			"U_I_C_Soldier_Bandit_5_nmr",
			"U_I_G_resistanceLeader_nmr",
			"U_I_L_Uniform_01_tshirt_olive_nmr",
			"U_C_Mechanic_01_nmr"
		};
		weapons[] =
		{
			"4thot_a_OPTRE_MA5AGL_mrco",
			"4thot_a_OPTRE_MA5A_mrco",
			"4thot_a_OPTRE_MA5A_scope",
			"4thot_a_OPTRE_MA5A_aco",
			"4thot_a_OPTRE_Commando_Snow_ch",
			"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos",
			"4thot_a_OPTRE_Bulldog_Riot_Shield_Snow_acos",
			"4thot_a_OPTRE_MA5K_acos",
			"4thot_a_OPTRE_HMG38_std",
			"4thot_a_OPTRE_HMG38_auto",
			"4thot_a_OPTRE_BR37_srm",
			"4thot_w_a_hmg48_a_srm",
			"4thot_a_OPTRE_M90A_lsr",
			"optre_hgun_sas10_F_a_lsr",
			"4thot_a_OPTRE_SAS10_Riot_Shield_Snow_lsr",
			"U_C_Uniform_Farmer_01_F_nmr",
			"U_C_ArtTShirt_01_v5_F_nmr",
			"U_C_ArtTShirt_01_v6_F_nmr",
			"U_C_ArtTShirt_01_v5_F_nmr",
			"U_C_ArtTShirt_01_v6_F_nmr",
			"U_I_C_Soldier_Bandit_3_F_nmr",
			"U_I_C_Soldier_Bandit_5_F_nmr",
			"U_I_G_resistanceLeader_F_nmr",
			"U_I_L_Uniform_01_tshirt_olive_F_nmr",
			"U_C_Mechanic_01_F_nmr"
		};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Data_F_Mark_Loadorder",
			"OPTRE_Loadorder",
			"4thot_weapons"
		};
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class CfgFactionClasses
{
// Madrigal Republican Marines
	class 4thot_nmr_mrm
	{
		displayName = "Madrigal Republican Marines (Space)";
	};

	class 4thot_nmr_mrm_j
	{
		displayName = "Madrigal Republican Marines (Jungle)";
	};

	class 4thot_nmr_mrm_d
	{
		displayName = "Madrigal Republican Marines (Desert)";
	};

// Madrigal Military Forces
	class 4thot_nmr_mmf
	{
		displayName = "Madrigal Military Forces (Jungle)";
	};

	class 4thot_nmr_mmf_d
	{
		displayName = "Madrigal Military Forces (Desert)";
	};

	class 4thot_nmr_mmf_l
	{
		displayName = "Madrigal Military Forces (Lunar)";
	};

// Free Madrigal Militia
	class 4thot_nmr_fmm
	{
		displayName = "Free Madrigal Militia";
	};

// Covenant
	class 4thot_cov_me
	{
		displayName = "Mafaam Enclave";
	};

	class 4thot_cov_me_ind
	{
		displayName = "Mafaam Remnant";
	};

	class 4thot_cov_va
	{
		displayName = "Volkam Ascendacy";
	};

// United Nations Space Command (UNSC)
	class 4thot_unsc_arm91
	{
		displayName = "UNSC Army, 91st Infantry Garrison";
	};

	class 4thot_unsc_arm65
	{
		displayName = "UNSC Army, 65th Armored Division (Jungle)";
	};

	class 4thot_unsc_arm65_d
	{
		displayName = "UNSC Army, 65th Armored Division (Desert)";
	};

	class 4thot_unsc_mar3
	{
		displayName = "UNSCMC, 3rd Marine Division";
	};

	class 4thot_unsc_mar21
	{
		displayName = "UNSCMC, 77th Marine Regiment";
	};

// United Rebel Front
	class 4thot_urf_ex3
	{
		displayName = "URF, 3rd Expeditionary Unit";
	};

	class 4thot_urf_des91
	{
		displayName = "URF, 91st Infantry Deserters";
	};
};


class CfgEditorSubcategories
{
	class 4thot_men_mar
	{
		displayName = "Men (Marines)";
	};
	class 4thot_men_sec
	{
		displayName = "Men (Security)";
	};
	class 4thot_men_mil
	{
		displayName = "Men (Militia)";
	};
	class 4thot_men_des
	{
		displayName = "Men (Deserters)";
	};
	class 4thot_men_odst
	{
		displayName = "Men (ODST)";
	};

// Madrigal Republican Marines
	class 4thot_comp_mrm
	{
		displayName = "Madrigal Republican Marines (Space)";
	};

	class 4thot_comp_mrm_j
	{
		displayName = "Madrigal Republican Marines (Jungle)";
	};

	class 4thot_comp_mrm_d
	{
		displayName = "Madrigal Republican Marines (Desert)";
	};

// Madrigal Military Forces
	class 4thot_comp_mmf
	{
		displayName = "Madrigal Military Forces (Jungle)";
	};

	class 4thot_comp_mmf_d
	{
		displayName = "Madrigal Military Forces (Desert)";
	};

	class 4thot_comp_mmf_l
	{
		displayName = "Madrigal Military Forces (Lunar)";
	};

// Free Madrigal Militia
	class 4thot_comp_fmm
	{
		displayName = "Free Madrigal Militia";
	};

// Covenant
	class 4thot_comp_me
	{
		displayName = "Mafaam Enclave";
	};

	class 4thot_comp_me_ind
	{
		displayName = "Mafaam Remnant";
	};

	class 4thot_comp_va
	{
		displayName = "Volkam Ascendacy";
	};

// United Nations Space Command (UNSC)
	class 4thot_comp_unsc_arm
	{
		displayName = "UNSC Army";
	};

	class 4thot_comp_unsc_mar
	{
		displayName = "UNSC Marine Corps";
	};

// United Rebel Front
	class 4thot_comp_urf_ex3
	{
		displayName = "URF, 3rd Expeditionary Unit";
	};

	class 4thot_comp_urf_des91
	{
		displayName = "URF, 91st Infantry Deserters";
	};
};

class CfgWeapons
{
// Equiped Weapons (Attachments)
	class OPTRE_MA5AGL;
	class OPTRE_MA5A;
	class OPTRE_Commando_Snow;
	class OPTRE_CQS48_Bulldog_Automatic_Snow;
	class OPTRE_Bulldog_Riot_Shield_Snow;
	class OPTRE_MA5K;
	class OPTRE_HMG38;
	class OPTRE_BR37;
	class 4thot_w_a_hmg48;
	class OPTRE_M90A;
	class optre_hgun_sas10_F;
	class OPTRE_SAS10_Riot_Shield_Snow;
	class OPTRE_BR45_Black;
	class OPTRE_SRM77_S1_Green;

	class 4thot_a_OPTRE_MA5AGL_mrco : OPTRE_MA5AGL
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};

	class 4thot_a_OPTRE_MA5A_mrco : OPTRE_MA5A
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};

	class 4thot_a_OPTRE_MA5A_scope : OPTRE_MA5A
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_BR55HB_Scope_Grey";
			};
		};
	};

	class 4thot_a_OPTRE_MA5A_aco : OPTRE_MA5A
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
		};
	};

	class 4thot_a_OPTRE_Commando_Snow_ch : OPTRE_Commando_Snow
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_HMG38_CarryHandle";
			};

			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "OPTRE_Riot_Shield_Icon_Fist";
			};
		};
	};

	class 4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos : OPTRE_CQS48_Bulldog_Automatic_Snow
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco_smg";
			};

			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
	};

	class 4thot_a_OPTRE_Bulldog_Riot_Shield_Snow_acos : OPTRE_Bulldog_Riot_Shield_Snow
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
	};

	class 4thot_a_OPTRE_MA5K_acos : OPTRE_MA5K
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M6C_Scope";
			};
		};
	};

	class 4thot_a_OPTRE_HMG38_std : OPTRE_HMG38
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ACE_muzzle_mzls_B";
			};
		};
	};

	class 4thot_a_OPTRE_HMG38_auto : OPTRE_HMG38
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};

	class 4thot_a_OPTRE_BR37_srm : OPTRE_BR37
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_SRM_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M7_silencer";
			};
		};
	};

	class 4thot_w_a_hmg48_a_srm : 4thot_w_a_hmg48
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_SRM_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};

	class 4thot_a_OPTRE_M90A_lsr : OPTRE_M90A
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
	};

	class optre_hgun_sas10_F_a_lsr : optre_hgun_sas10_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
		};
	};

	class optre_hgun_sas10_F_a_sop : optre_hgun_sas10_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M6C_Scope";
			};
		};
	};

	class 4thot_a_OPTRE_SAS10_Riot_Shield_Snow_lsr : OPTRE_SAS10_Riot_Shield_Snow
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};

			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "OPTRE_Riot_Shield_Icon_Fist";
			};
		};
	};

	class OPTRE_BR45_Black_a_slsr : OPTRE_BR45_Black
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_MA37KSuppressor";
			};

			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
	};

	class OPTRE_SRM77_S1_Green_a_bp : OPTRE_SRM77_S1_Green
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};

			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
		};
	};

// Uniforms
	class Uniform_Base;
	class U_C_Uniform_Farmer_01_F : Uniform_Base
	{
		class ItemInfo;
	};
	class U_C_ArtTShirt_01_v5_F : Uniform_Base
	{
		class ItemInfo;
	};
	class U_C_ArtTShirt_01_v6_F : Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_C_Soldier_Bandit_3_F : Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_C_Soldier_Bandit_5_F : Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_G_resistanceLeader_F : Uniform_Base
	{
		class ItemInfo;
	};

	class U_I_L_Uniform_01_tshirt_olive_F : Uniform_Base
	{
		class ItemInfo;
	};

	class U_C_Mechanic_01_F : Uniform_Base
	{
		class ItemInfo;
	};

	class U_BG_Guerrilla_6_1 : Uniform_Base
	{
		class ItemInfo;
	};

	class U_C_Uniform_Farmer_01_F_nmr : U_C_Uniform_Farmer_01_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_Uniform_Farmer_01_nmr";
		};
	};

	class U_C_ArtTShirt_01_v5_F_nmr : U_C_ArtTShirt_01_v5_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_ArtTShirt_01_v5_nmr";
		};
	};

	class U_C_ArtTShirt_01_v6_F_nmr : U_C_ArtTShirt_01_v6_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_ArtTShirt_01_v6_nmr";
		};
	};

	class U_I_C_Soldier_Bandit_3_F_nmr : U_I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_C_Soldier_Bandit_3_nmr";
		};
	};

	class U_I_C_Soldier_Bandit_5_F_nmr : U_I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_C_Soldier_Bandit_5_nmr";
		};
	};

	class U_I_G_resistanceLeader_F_nmr : U_I_G_resistanceLeader_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_G_resistanceLeader_nmr";
		};
	};

	class U_I_L_Uniform_01_tshirt_olive_F_nmr : U_I_L_Uniform_01_tshirt_olive_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_L_Uniform_01_tshirt_olive_nmr";
		};
	};

	class U_C_Mechanic_01_F_nmr : U_C_Mechanic_01_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_Mechanic_01_nmr";
		};
	};

	class U_BG_Guerrilla_6_1_nmr : U_BG_Guerrilla_6_1
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "B_G_Guerrilla_6_1_nmr";
		};
	};
};

class CfgVehicles
{
	class OPTRE_Ins_URF_Unarmed;

	class 4thot_u_opfor : OPTRE_Ins_URF_Unarmed
	{
		scope = 0;
		side = 0;
		author = "Darknessvoid99";
		icon = "iconMan";
	};

	class C_Uniform_Farmer_01_F;
	class C_Uniform_ArtTShirt_01_v5_F;
	class C_Uniform_ArtTShirt_01_v6_F;
	class I_C_Soldier_Bandit_3_F;
	class I_C_Soldier_Bandit_5_F;
	class I_G_resistanceLeader_F;
	class I_L_Uniform_01_tshirt_olive_F;
	class C_Story_Mechanic_01_F;
	class B_G_Soldier_LAT_F;

	class U_C_Uniform_Farmer_01_nmr : C_Uniform_Farmer_01_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_Uniform_Farmer_01_F_nmr";
	};

	class U_C_ArtTShirt_01_v5_nmr : C_Uniform_ArtTShirt_01_v5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_ArtTShirt_01_v5_F_nmr";
	};

	class U_C_ArtTShirt_01_v6_nmr : C_Uniform_ArtTShirt_01_v6_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_ArtTShirt_01_v6_F_nmr";
	};

	class U_I_C_Soldier_Bandit_3_nmr : I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_C_Soldier_Bandit_3_F_nmr";
	};

	class U_I_C_Soldier_Bandit_5_nmr : I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_C_Soldier_Bandit_5_F_nmr";
	};

	class U_I_G_resistanceLeader_nmr : I_G_resistanceLeader_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_G_resistanceLeader_F_nmr";
	};

	class U_I_L_Uniform_01_tshirt_olive_nmr : I_L_Uniform_01_tshirt_olive_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_L_Uniform_01_tshirt_olive_F_nmr";
	};

	class U_C_Mechanic_01_nmr : C_Story_Mechanic_01_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_Mechanic_01_F_nmr";
	};

	class B_G_Guerrilla_6_1_nmr : B_G_Soldier_LAT_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_BG_Guerrilla_6_1_nmr";
	};
};