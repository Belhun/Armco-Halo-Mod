#include "script_component.hpp"
class CfgPatches {
	class 4thot_opfor
	{
		units[] = {};
		weapons[] = {};
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
	   // United Rebel Front
};
class 4thot_urf3
{
	displayName = "URF, 3rd Expeditionary Unit";
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
};

class CfgMagazines
{
	class OPTRE_M2_Smoke;
	class OPTRE_M2_Smoke_Red;
	class OPTRE_M2_Smoke_Green;
	class OPTRE_M2_Smoke_Orange;
	class HandGrenade;
	class MiniGrenade;

	class 4thot_g_hef_h : MiniGrenade
	{
		scope = 1;
		displayName = "OGH-13 HE-F Grenade";
	};

	class 4thot_g_hef_l : MiniGrenade
	{
		scope = 1;
		displayName = "OGL-7 HE Grenade";
		mass = 5;
	};

	class 4thot_g_smk_urf_w : OPTRE_M2_Smoke
	{
		scope = 1;
		displayName = "DGS-9 Smoke Grenade (White)";
	};

	class 4thot_g_smk_urf_r : OPTRE_M2_Smoke_Red
	{
		scope = 1;
		displayName = "DGS-9 Smoke Grenade (Red)";
	};

	class 4thot_g_smk_urf_g : OPTRE_M2_Smoke_Green
	{
		scope = 1;
		displayName = "DGS-9 Smoke Grenade (Green)";
	};

	class 4thot_g_smk_urf_o : OPTRE_M2_Smoke_Orange
	{
		scope = 1;
		displayName = "DGS-9 Smoke Grenade (Orange)";
	};
};

class CfgWeapons
{
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

	class U_C_Uniform_Farmer_01_F_nrm : U_C_Uniform_Farmer_01_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_Uniform_Farmer_01_nrm";
		};
	};

	class U_C_ArtTShirt_01_v5_F_nrm : U_C_ArtTShirt_01_v5_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_ArtTShirt_01_v5_nrm";
		};
	};

	class U_C_ArtTShirt_01_v6_F_nrm : U_C_ArtTShirt_01_v6_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_ArtTShirt_01_v6_nrm";
		};
	};

	class U_I_C_Soldier_Bandit_3_F_nrm : U_I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_C_Soldier_Bandit_3_nrm";
		};
	};

	class U_I_C_Soldier_Bandit_5_F_nrm : U_I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_C_Soldier_Bandit_5_nrm";
		};
	};

	class U_I_G_resistanceLeader_F_nrm : U_I_G_resistanceLeader_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_G_resistanceLeader_nrm";
		};
	};

	class U_I_L_Uniform_01_tshirt_olive_F_nrm : U_I_L_Uniform_01_tshirt_olive_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_I_L_Uniform_01_tshirt_olive_nrm";
		};
	};
	       // TODO: Fix Mechanic uniform(Possably note inherinting)
	class U_C_Mechanic_01_F_nrm : U_C_Mechanic_01_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class ItemInfo : ItemInfo
		{
			uniformClass = "U_C_Mechanic_01_nrm";
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
	class C_Mechanic_01_F;

	class U_C_Uniform_Farmer_01_nrm : C_Uniform_Farmer_01_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_Uniform_Farmer_01_F_nrm";
	};

	class U_C_ArtTShirt_01_v5_nrm : C_Uniform_ArtTShirt_01_v5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_ArtTShirt_01_v5_F_nrm";
	};

	class U_C_ArtTShirt_01_v6_nrm : C_Uniform_ArtTShirt_01_v6_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_ArtTShirt_01_v6_F_nrm";
	};

	class U_I_C_Soldier_Bandit_3_nrm : I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_C_Soldier_Bandit_3_F_nrm";
	};

	class U_I_C_Soldier_Bandit_5_nrm : I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_C_Soldier_Bandit_5_F_nrm";
	};

	class U_I_G_resistanceLeader_nrm : I_G_resistanceLeader_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_G_resistanceLeader_F_nrm";
	};

	class U_I_L_Uniform_01_tshirt_olive_nrm : I_L_Uniform_01_tshirt_olive_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_I_L_Uniform_01_tshirt_olive_F_nrm";
	};

	class U_C_Mechanic_01_nrm : C_Mechanic_01_F
	{
		scope = 1;
		side = 0;
		uniformClass = "U_C_Mechanic_01_F_nrm";
	};
};