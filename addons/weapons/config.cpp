#include "script_component.hpp"
class CfgPatches {
	class 4thot_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"OPTRE_weapons"
		};
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class Cfgmagazines {
//M319 Multiple Grenade Launcher (MGL) Magazines
	class M319_HE_Grenade_Shell;
	class M319_HEDP_Grenade_Shell;
	class M319_Buckshot;
	class OPTRE_1Rnd_Smoke_Grenade_shell;
	class OPTRE_1Rnd_SmokeRed_Grenade_shell;
	class OPTRE_1Rnd_SmokeGreen_Grenade_shell;
	class OPTRE_1Rnd_SmokeYellow_Grenade_shell;
	class OPTRE_1Rnd_SmokePurple_Grenade_shell;
	class OPTRE_1Rnd_SmokeBlue_Grenade_shell;
	class OPTRE_1Rnd_Smokeorange_Grenade_shell;
	class OPTRE_signalSmokeR;
	class OPTRE_signalSmokeO;
	class OPTRE_signalSmokeY;
	class OPTRE_signalSmokeG;
	class OPTRE_signalSmokeB;
	class OPTRE_signalSmokeP;
	class ACE_40mm_Flare_white;
	class ACE_40mm_Flare_ir;
	class OPTRE_1Rnd_MasterKey_Pellets;
	class OPTRE_1Rnd_MasterKey_Slugs;
	class 4thot_u_40_8_HE: M319_HE_Grenade_Shell {
		displayname = "8rnd M319 HE Grenade";
		count = 8;
	};
	class 4thot_u_40_8_HEDP: M319_HEDP_Grenade_Shell {
		displayname = "8rnd M319 HEDP";
		count = 8;
	};
	class 4thot_u_40_8_Smoke: OPTRE_1Rnd_Smoke_Grenade_shell {
		displayname = "8rnd Signal Smoke round (White)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_Red: OPTRE_1Rnd_SmokeRed_Grenade_shell {
		displayname = "8rnd Signal Smoke round (Red)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_Green: OPTRE_1Rnd_SmokeGreen_Grenade_shell {
		displayname = "8rnd Signal Smoke round (Green)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_Yellow: OPTRE_1Rnd_SmokeYellow_Grenade_shell {
		displayname = "8rnd Signal Smoke round (Yellow)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_Purple: OPTRE_1Rnd_SmokePurple_Grenade_shell {
		displayname = "8rnd Signal Smoke round (Purple)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_Blue: OPTRE_1Rnd_SmokeBlue_Grenade_shell {
		displayname = "8rnd Signal Smoke round (Blue)";
		count = 8;
	};
	class 4thot_u_40_8_Smoke_orange: OPTRE_1Rnd_Smokeorange_Grenade_shell {
		displayname = "8rnd Signal Smoke round (orange)";
		count = 8;
	};
	    // 8rnd Optre Flare rounds
	class 4thot_u_40_8_Flare_Red: OPTRE_signalSmokeR {
		displayname = "8rnd Flare Smoke (Red)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_orange: OPTRE_signalSmokeO {
		displayname = "8rnd Flare Smoke (orange)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_Yellow: OPTRE_signalSmokeY {
		displayname = "8rnd Flare Smoke (Yellow)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_Green: OPTRE_signalSmokeG {
		displayname = "8rnd Flare Smoke (Green)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_Blue: OPTRE_signalSmokeB {
		displayname = "8rnd Flare Smoke (Blue)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_Purple: OPTRE_signalSmokeP {
		displayname = "8rnd Flare Smoke (Purple)";
		count = 8;
	};
	    // Ace Mags
	class 4thot_u_40_8_Flare_Illumination_White: ACE_40mm_Flare_white {
		displayname = "8rnd M583 Illumination Flare (White)";
		count = 8;
	};
	class 4thot_u_40_8_Flare_ir: ACE_40mm_Flare_ir {
		displayname = "8rnd M583 Flare (IR)";
		count = 8;
	};
	    // 4rnd Optre Pellets & Slugs
	class 4thot_u_40_4_Buckshot: OPTRE_1Rnd_MasterKey_Pellets {
		displayname = "8rnd Buckshot";
		count = 4;
	};
	class 4thot_u_40_4_Slug: OPTRE_1Rnd_MasterKey_Slugs {
		displayname = "8rnd Slug ";
		count = 4;
	};

//HMG-48 Medium Machinegun (MMG) Magazines
	class 130Rnd_338_Mag;
	class 4thot_b_86070_100_ap : 130Rnd_338_Mag
	{
		displayname = "100rnd 8.6x70mm AP-W(T3E10) HBOX";
		displaynameShort = "";
		descriptionShort = "AP17 Armor piercing rounds<br/>AP17T piercing Tracer(W) rounds<br/>100 rounds, Tracer every 3, 3 End Tracers";

		ammo = "OPTRE_B_338_AP";
		tracersEvery = 3;
		lastroundstracer = 10;

		        // mass = 60;
		count = 100;
	};

//VK Commando Autorifle Magazines
	class Command_20Rnd_65_TracerR_Mag;
	class 4thot_m_65048_75_sy : Command_20Rnd_65_TracerR_Mag
	{
		displayname = "75Rnd 6.5x48mm magazines";
		mass = 40;
		count = 75;
	};

//Grenades (Throwables)
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
class CfgMagazineWells
{
	class 4thot_u_40_MGL
	{
		4thot[] =
		{
			"4thot_u_40_8_HE",
			"4thot_u_40_8_HEDP",
			"4thot_u_40_8_Smoke",
			"4thot_u_40_8_Smoke_Red",
			"4thot_u_40_8_Smoke_Green",
			"4thot_u_40_8_Smoke_Yellow",
			"4thot_u_40_8_Smoke_Purple",
			"4thot_u_40_8_Smoke_Blue",
			"4thot_u_40_8_Smoke_orange",
			"4thot_u_40_8_Flare_Red",
			"4thot_u_40_8_Flare_orange",
			"4thot_u_40_8_Flare_Yellow",
			"4thot_u_40_8_Flare_Green",
			"4thot_u_40_8_Flare_Blue",
			"4thot_u_40_8_Flare_Purple",
			"4thot_u_40_8_Flare_Illumination_White",
			"4thot_u_40_8_Flare_ir",
			"4thot_u_40_4_Buckshot",
			"4thot_u_40_4_Slug"
		};
	};
};
class Cfgweapons {
// OPTRE_M319 Overwrite
	class OPTRE_Rifle_Base;
	class OPTRE_M319: OPTRE_Rifle_Base {
		magazineWell[] = {
			"UGL_40x36",
			"CBA_40mm_M203",
			"CBA_40mm_EGLM",
			"4thot_u_40_MGL"
		};
	};
// Grenades (Throwables)
	class GrenadeLauncher;
	class throwMuzzle;

	class throw : GrenadeLauncher
	{
		muzzles[] +=
		{
			"4thot_g_hef_h_Muzzle",
			"4thot_g_hef_l_Muzzle",
			"4thot_g_smk_urf_w_Muzzle",
			"4thot_g_smk_urf_r_Muzzle",
			"4thot_g_smk_urf_g_Muzzle",
			"4thot_g_smk_urf_o_Muzzle",
		};

		class 4thot_g_hef_h_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_hef_h"
			};
		};
		class 4thot_g_hef_l_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_hef_l"
			};
		};
		class 4thot_g_smk_urf_w_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_smk_urf_w"
			};
		};
		class 4thot_g_smk_urf_r_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_smk_urf_r"
			};
		};
		class 4thot_g_smk_urf_g_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_smk_urf_g"
			};
		};
		class 4thot_g_smk_urf_o_Muzzle : throwMuzzle
		{
			magazines[] = {
				"4thot_g_smk_urf_o"
			};
		};
	};

//HMG-48 Medium Machinegun (MMG)
	class MMG_02_camo_F;
	class MMG_02_black_F : MMG_02_camo_F
	{
		class manual;
	};

	class 4thot_w_a_hmg48h : MMG_02_black_F
	{
		baseweapon = "4thot_w_a_hmg48h";

		displayname = "HMG-48H Machinegun";
		descriptionShort = "Medium Machine Gun<br />Caliber: 8.6x70mm";

		magazines[] = {
			"4thot_b_86070_100_ap"
		};
		magazineWell[] = {};
		recoil = "4thot_a_hmg48h";

		class manual : manual
		{
			reloadtime = 0.075;
			dispersion = 0.00126;
		};

		class close : manual
		{
			aiDispersionCoefX = 3;
			            // 3.78 MIL
			aiDispersionCoefY = 5;
			            // 6.30 MIL

			aiBurstTerminable = 1;
			aiRateOffire = 1;
			aiRateOffireDispersion = 1;
			aiRateOffiredistance = 50;
			burst = 10;

			maxRange = 50;
			maxRangeProbab = 0.04;
			midRange = 25;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.05;

			showtoplayer = 0;
		};

		class short : close
		{
			aiDispersionCoefX = 1;
			            // 1.26 MIL
			aiDispersionCoefY = 2;
			            // 2.52 MIL

			aiBurstTerminable = 0;
			aiRateOffiredistance = 200;
			burst = 10;

			maxRange = 200;
			maxRangeProbab = 0.04;
			midRange = 100;
			midRangeProbab = 0.7;
			minRange = 50;
			minRangeProbab = 0.05;
		};

		class medium : short
		{
			aiDispersionCoefX = 1.5;
			            // 1.80 MIL
			aiDispersionCoefY = 2.5;
			            // 3.15 MIL

			aiRateOffire = 3;
			aiRateOffireDispersion = 2;
			aiRateOffiredistance = 800;
			burst = 10;

			maxRange = 800;
			maxRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			minRange = 200;
			minRangeProbab = 0.05;
		};

		class far_optic1 : medium
		{
			aiDispersionCoefX = 2;
			            // 2.52 MIL
			aiDispersionCoefY = 3;
			            // 3.78 MIL

			aiRateOffire = 3;
			aiRateOffireDispersion = 3;
			aiRateOffiredistance = 800;
			burst = 5;

			maxRange = 1200;
			maxRangeProbab = 0.01;
			midRange = 1000;
			midRangeProbab = 0.5;
			minRange = 800;
			minRangeProbab = 0.04;

			requiredoptictype = 1;
		};

		class far_optic2 : far_optic1
		{
			aiDispersionCoefX = 1.5;
			            // 1.80 MIL
			aiDispersionCoefY = 2.5;
			            // 3.15 MIL

			aiRateOffire = 4;
			aiRateOffireDispersion = 4;
			aiRateOffiredistance = 1200;
			burst = 5;

			maxRange = 2000;
			maxRangeProbab = 0.01;
			midRange = 1600;
			midRangeProbab = 0.5;
			minRange = 1200;
			minRangeProbab = 0.05;

			requiredoptictype = 2;
		};
	};

//VK Commando Autorifle
	class DMR_03_base_F;
	class OPTRE_Commando : DMR_03_base_F
	{
		magazines[] =
		{
			"Commando_20Rnd_65_Mag",
			"Commando_20Rnd_65_TracerY_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Commando_20Rnd_65_reloadY_Mag",
			"Commando_20Rnd_65_reloadR_Mag",
			"4thot_m_65048_75_sy"
		};
	};
};

class CfgRecoils
{
	class recoil_ebr;

	class 4thot_a_hmg48h : recoil_ebr
	{
		permanent = "0.05*0.6";
		temporary = "0.003*0.6";
	};
};