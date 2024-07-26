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

class CfgAmmo
{
	//Penetrators (p)
		class ammo_Penetrator_PG7;
		class ammo_Penetrator_MRAAWS;
		class ammo_Penetrator_120mm;

		//at1 - Light Anti-Tank
			class 4thot_p_at1_lat : ammo_Penetrator_PG7
			{
				caliber = 20;
				hit = 400;
				warheadName = "HEAT";
			};

		//at2 - Medium-Light Anti-Tank
			class 4thot_p_at2_mlat : 4thot_p_at1_lat
			{
				caliber = 26;
				hit = 450;
			};

		//at3 - Medium Anti-Tank
			class 4thot_p_at3_mat : 4thot_p_at1_lat
			{
				caliber = 33;
				hit = 500;
			};

		//at4 - Medium-Heavy Anti-Tank
			class 4thot_p_at4_mhat : ammo_Penetrator_MRAAWS
			{
				caliber = 56;
				hit = 600;

				warheadName = "TandemHEAT";
			};

		//at5 - Heavy Anti-Tank
			class 4thot_p_at5_hat : 4thot_p_at4_mhat
			{
				caliber = 70;
				hit = 800;

				warheadName = "TandemHEAT";
			};

		//at6 - APFSDS
			class 4thot_p_at6_ke : ammo_Penetrator_120mm
			{
				caliber = 74;
				hit = 300;

				warheadName = "TandemHEAT";

				explosive = 0;
			};

		//at0 - Ultralight Anti-Tank (40mm / AT Grenade)
			class 4thot_p_at0_gmp : 4thot_p_at1_lat
			{
				caliber = 26;
				hit = 120;

				indirectHit = 10;
				indirectHitRange = 2.25;
			};

			class 4thot_p_at0_gdp : 4thot_p_at1_lat
			{
				caliber = 20;
				hit = 100;

				indirectHit = 12;
				indirectHitRange = 3;
			};

			class 4thot_p_at0_gat : 4thot_p_at1_lat
			{
				caliber = 26;
				hit = 250;
			};

	//Infantry Ammo (a)
		/*
			SB/Standard Ball:	Caliber 1.0x, Hit 1.0x.
			AP/Armor-Piercing:	Caliber 2.0x, Hit 0.7x.
			LR/Long-Range:		Caliber 0.8x, Hit 1.2x.
		*/

		class B_93x64_Ball;
		class OPTRE_65_Creedmoor : B_93x64_Ball
		{					// MA5		Default
			caliber = 1.8;	// 2.1		2.2
			hit = 14;		// 12 		18
		};

		class ACE_762x67_Ball_Mk248_Mod_1;
		class 4thot_a_762x67_sb_m248_y : ACE_762x67_Ball_Mk248_Mod_1
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			caliber = 1.9;
			hit = 18;
		};

		class 4thot_a_762x67_sb_m248_r : 4thot_a_762x67_sb_m248_y
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};

		class ACE_762x67_Ball_Mk248_Mod_0;
		class 4thot_a_762x67_ap_m348_y : ACE_762x67_Ball_Mk248_Mod_0
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";

			caliber = 3.8;	//2x
			hit = 12.6;		//0.7x
		};

		class ACE_762x67_Ball_Berger_Hybrid_OTM;
		class 4thot_a_762x67_lr_otm_y : ACE_762x67_Ball_Berger_Hybrid_OTM
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";

			caliber = 1.52;	//0.8x
			hit = 21.6;		//1.2x
		};
	// GL Grenades (u)
		//class G_40mm_HE;
	// Grenades / Throwables (g)

		//class OPTRE_M9_Frag;
		//class GrenadeHand;
		//class mini_Grenade;
		class OPTRE_AU44_122mm_Grenade;

		class 4thot_g_at : OPTRE_AU44_122mm_Grenade
		{
			model = "\z\ace\addons\grenades\models\ace_anm14th3_armed.p3d";

			//submunitionAmmo = "4thot_p_at0_gat";
			//submunitionDirectionType = "SubmunitionAutoLeveling";
			//triggerOnImpact = 1;

			//fuseDistance = 0;

			caliber = 20;
			hit = 1200;
			warheadName = "HEAT";

			indirectHit = 10;
			indirectHitRange = 1;

			ace_frag_enabled = 0;

			//typicalspeed = 18;
			//thrust = 210;
			//thrustTime = 1.5;

			explosive = 0; //0.5
		};
};

class Cfgmagazines {
	// 40mm / Shared Magazines
		class 1Rnd_HE_Grenade_shell;
		class OPTRE_1Rnd_MasterKey_Pellets;

		class OPTRE_1Rnd_Smoke_Grenade_shell;		//White
		class OPTRE_1Rnd_SmokeOrange_Grenade_shell;	//Orange
		class OPTRE_1Rnd_SmokeGreen_Grenade_shell;	//Green
		class OPTRE_1Rnd_SmokeRed_Grenade_shell;	//Red
		class OPTRE_1Rnd_SmokeBlue_Grenade_shell;	//Blue
		class OPTRE_1Rnd_SmokeYellow_Grenade_shell;	//Yellow
		class OPTRE_1Rnd_SmokePurple_Grenade_shell;	//Purple

		class 1Rnd_SmokeOrange_Grenade_shell;
		class 1Rnd_Smoke_Grenade_shell;
		class 1Rnd_SmokeYellow_Grenade_shell;
		class 1Rnd_SmokeGreen_Grenade_shell;
		class 1Rnd_SmokeRed_Grenade_shell;

		class UGL_FlareGreen_F;
		class UGL_FlareCIR_F;
		class UGL_FlareRed_F;
		class UGL_FlareWhite_F;
		class UGL_FlareYellow_F;

		class ACE_40mm_Flare_white;
		class ACE_40mm_Flare_green;
		class ACE_40mm_Flare_red;
		class ACE_40mm_Flare_ir;

		class ACE_HuntIR_M203;

		class 4thot_u_40x57_1_huntir : ACE_HuntIR_M203
		{
			displayname = "40x57mm SeekIR Round";
			displaynameShort = "HuntIR";
			descriptionShort = "40mm Launched SeekIR Camera<br/>Used by: All Grenade Launchers";

			mass = 5;
		};

		//UEG - United Earth Government / UNSC - United Nations Space Command
			class 4thot_u_40x72_1_ap : 1Rnd_HE_Grenade_shell
			{
				displayname = "40x72mm M13 HE-HP Grenade";
				displaynameShort = "HE-HP";
				descriptionShort = "High Power, High Explosive Grenade<br/>Medium Fragmentation<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x72_he";
				count = 1;

				mass = 8;
			};

			class 4thot_u_40x72_1_dp : 4thot_u_40x72_1_ap
			{
				displayname = "40x72mm M20 HE-MP Grenade";
				displaynameShort = "HE-MP";
				descriptionShort = "High Explosive, Multi-Purpose Grenade<br/>Limited Fragmentation<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x72_hemp";
			};

			class 4thot_u_40x72_1_sg : OPTRE_1Rnd_MasterKey_Pellets
			{
				displayname = "40x72mm Master-Key Round";
				displaynameShort = "Buckshot";
				descriptionShort = "4-Gauge #000 Buckshot<br/>Used by: Short Grenade Launchers (UGLs)";

				//ammo = "4thot_u_40x72_sg";

				mass = 8;
			};

			class 4thot_u_40x72_1_smk_clu_w : 1Rnd_Smoke_Grenade_shell
			{
				displayname = "40x72mm X25 Smoke Grenade (White)";
				displaynameShort = "SMK (W)";
				descriptionShort = "Cluster Smoke Grenade, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x72_smk_clu_w";

				mass = 10;
			};

			class 4thot_u_40x47_3_ap : 4thot_u_40x72_1_ap
			{
				displayname = "40x47mm 3rnd M22 HE/C Grenade";
				displaynameShort = "3x HE";
				descriptionShort = "Compact High Explosive Grenades<br/>Limited Fragmentation, 3 Rounds<br/>Used by: Short Grenade Launchers (UGLs)";

				//ammo = "4thot_u_40x47_he";
				count = 3;

				mass = 10;
			};

			class 4thot_u_40x57_1_smk_ueg_r : OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3/H Smoke Grenade (Red)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Launched Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_ueg_w : OPTRE_1Rnd_Smoke_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3B Smoke Grenade (White)";
				displaynameShort = "SMK (W)";
				descriptionShort = "Launched Smoke Grenade, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_w";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_ueg_o : OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3B Smoke Grenade (Orange)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Launched Smoke Grenade, Yellow-Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_r : UGL_FlareRed_F
			{
				displayname = "40x57mm M1 Flare Round (Red)";
				displaynameShort = "FLR (R)";
				descriptionShort = "40mm Launched Flare, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_g : UGL_FlareGreen_F
			{
				displayname = "40x57mm M1 Flare Round (Green)";
				displaynameShort = "FLR (G)";
				descriptionShort = "40mm Launched Flare, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_o : UGL_FlareYellow_F
			{
				displayname = "40x57mm M1 Flare Round (Orange)";
				displaynameShort = "FLR (O)";
				descriptionShort = "40mm Launched Flare, Yellow-Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_ilm_w : ACE_40mm_Flare_white
			{
				displayname = "40x57mm M1/L Illum. Flare Round (White)";
				displaynameShort = "FLR (White)";
				descriptionShort = "40mm Launched Illumination Flare, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_w";

				mass = 6;
			};

			class 4thot_u_40x57_1_flr_ilm_i : ACE_40mm_Flare_ir
			{
				displayname = "40x57mm M1/L Illum. Flare Round (IR)";
				displaynameShort = "FLR (IR)";
				descriptionShort = "40mm Launched Illumination Flare, Infra-Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_i";

				mass = 6;
			};

		//ARMCO - Free Armitage Company
			class 4thot_u_40x57_1_smk_r : OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Red)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Impact Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_p : OPTRE_1Rnd_SmokePurple_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Purple)";
				displaynameShort = "SMK (P)";
				descriptionShort = "Impact Smoke Grenade, Purple<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_p";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_y : OPTRE_1Rnd_SmokeYellow_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Yellow)";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Impact Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_y";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_b : OPTRE_1Rnd_SmokeBlue_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Blue)";
				displaynameShort = "SMK (B)";
				descriptionShort = "Impact Smoke Grenade, Blue<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_b";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_g : OPTRE_1Rnd_SmokeGreen_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Green)";
				displaynameShort = "SMK (G)";
				descriptionShort = "Impact Smoke Grenade, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_o : OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Orange)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Impact Smoke Grenade, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_o";

				mass = 5;
			};

			class 4thot_u_40x72_1_smk_clu_y : 1Rnd_SmokeYellow_Grenade_shell
			{
				displayname = "40x72mm X5 Smoke Grenade (Yellow)";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Cluster Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_clu_y";

				mass = 10;
			};

			class 4thot_u_40x57_1_flr_i : UGL_FlareCIR_F
			{
				displayname = "40x57mm M1 Flare Round (IR)";
				displaynameShort = "FLR (IR)";
				descriptionShort = "40mm Launched Flare, Infra-Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_i";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_w : UGL_FlareWhite_F
			{
				displayname = "40x57mm M1 Flare Round (White)";
				displaynameShort = "FLR (White)";
				descriptionShort = "40mm Launched Flare, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_w";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_y : UGL_FlareYellow_F
			{
				displayname = "40x57mm M1 Flare Round (Yellow)";
				displaynameShort = "FLR (Y)";
				descriptionShort = "40mm Launched Flare, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_y";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_ilm_g : ACE_40mm_Flare_green
			{
				displayname = "40x57mm M1/L Illum. Flare Round (Green)";
				displaynameShort = "FLR (Green)";
				descriptionShort = "40mm Launched Illumination Flare, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_g";

				mass = 6;
			};

			class 4thot_u_40x57_1_flr_ilm_r : ACE_40mm_Flare_red
			{
				displayname = "40x57mm M1/L Illum. Flare Round (Red)";
				displaynameShort = "FLR (Red)";
				descriptionShort = "40mm Launched Illumination Flare, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_r";

				mass = 6;
			};

		//URF - United Rebel Front / Insurrectionists
			class 4thot_u_40x72_1_sg_urf : 4thot_u_40x72_1_sg
			{
				displayname = "40x72mm LGSG-1 Buckshot Round";
				displaynameShort = "Buckshot";
				descriptionShort = "4-Gauge #00 Buckshot<br/>Used by: Short Grenade Launchers (UGLs)";

				//ammo = "4thot_u_40x72_sg";
			};

			class 4thot_u_40x57_1_ap : 1Rnd_HE_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm LGAI-3 AI Grenade";
				displaynameShort = "AI";
				descriptionShort = "Launched Anti-Infantry Grenade<br/>Medium Fragmentation<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_he";

				mass = 6.5;
			};

			class 4thot_u_40x57_1_smk_urf_o : 1Rnd_SmokeOrange_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm LGS-1 Smoke Grenade (Target)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Launched Smoke Grenade, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_urf_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_urf_w : 1Rnd_Smoke_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm LGS-1 Smoke Grenade (Cover)";
				displaynameShort = "SMK (W)";
				descriptionShort = "Launched Smoke Grenade, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_urf_w";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_urf_g : 1Rnd_SmokeGreen_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm LGS-1 Smoke Grenade (Mark A)";
				displaynameShort = "SMK (G)";
				descriptionShort = "Launched Smoke Grenade, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_urf_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_urf_r : 1Rnd_SmokeRed_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm LGS-1 Smoke Grenade (Mark B)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Launched Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_urf_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_urf_r : UGL_FlareRed_F
			{
				scope = 1;

				displayname = "40x57mm LGF-3 Flare Round (Red)";
				displaynameShort = "FLR (R)";
				descriptionShort = "40mm Launched Flare, High Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_urf_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_urf_g : UGL_FlareGreen_F
			{
				scope = 1;

				displayname = "40x57mm LGF-3 Flare Round (Green)";
				displaynameShort = "FLR (G)";
				descriptionShort = "40mm Launched Flare, High Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_urf_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_urf_o : UGL_FlareYellow_F
			{
				scope = 1;

				displayname = "40x57mm LGF-3 Flare Round (Orange)";
				displaynameShort = "FLR (O)";
				descriptionShort = "40mm Launched Flare, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_urf_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_ilm_urf_y : ACE_40mm_Flare_white
			{
				displayname = "40x57mm LGFI-5 Illum. Flare Round (Yellow)";
				displaynameShort = "FLR (Yellow)";
				descriptionShort = "40mm Launched Illumination Flare, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_urf_y";

				mass = 6;
			};

			class 4thot_u_40x57_1_flr_ilm_urf_r : ACE_40mm_Flare_red
			{
				displayname = "40x57mm LGFI-5 Illum. Flare Round (Red)";
				displaynameShort = "FLR (Red)";
				descriptionShort = "40mm Launched Illumination Flare, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_urf_r";

				mass = 6;
			};

	// 40mm / M319 Multiple Grenade Launcher (MGL) Magazines
		class 4thot_u_40x57_5_huntir : 4thot_u_40x57_1_huntir
		{
			displayname = "40x57mm 5rnd SeekIR Tube";
			displaynameShort = "HuntIR";
			descriptionShort = "40mm Launched SeekIR Camera<br/>5 Rounds, Used by: All Grenade Launchers";

			count = 5;

			mass = 25;
		};

	/*	//UEG - United Earth Government / UNSC - United Nations Space Command
			class 4thot_u_40x72_3_ap : 4thot_u_40x72_1_ap
			{
				displayname = "40x72mm M13 HE-HP Grenade";
				displaynameShort = "HE-HP";
				descriptionShort = "High Power, High Explosive Grenade<br/>3 Rounds, Medium Fragmentation<br/>Used by: All Grenade Launchers";

				count = 3;

				mass = 25;
			};

			class 4thot_u_40x72_3_dp : 4thot_u_40x72_1_dp
			{
				displayname = "40x72mm M20 HE-MP Grenade";
				displaynameShort = "HE-MP";
				descriptionShort = "High Explosive, Multi-Purpose Grenade<br/>3 Rounds, Limited Fragmentation<br/>Used by: All Grenade Launchers";

				count = 3;

				mass = 25;
			};

			class 4thot_u_40x72_3_sg : 4thot_u_40x72_1_sg
			{
				displayname = "40x72mm Master-Key Round";
				displaynameShort = "Buckshot";
				descriptionShort = "4-Gauge #000 Buckshot<br/>Used by: Short Grenade Launchers (UGLs)";

				count = 3;

				mass = 25;
			};

			class 4thot_u_40x72_1_smk_clu_w : OPTRE_1Rnd_Smoke_Grenade_shell
			{
				displayname = "40x72mm X25 Smoke Grenade (White)";
				displaynameShort = "SMK (W)";
				descriptionShort = "Cluster Smoke Grenade, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x72_smk_clu_w";

				count = 3;

				mass = 25;
			};

			class 4thot_u_40x47_3_ap : 4thot_u_40x72_1_ap
			{
				displayname = "40x47mm 3rnd M22 HE/C Grenade";
				displaynameShort = "3x HE";
				descriptionShort = "Compact High Explosive Grenades<br/>Limited Fragmentation, 3 Rounds<br/>Used by: Short Grenade Launchers (UGLs)";

				//ammo = "4thot_u_40x47_he";
				count = 3;

				mass = 10;
			};

			class 4thot_u_40x57_1_smk_ueg_r : OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3/H Smoke Grenade (Red)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Launched Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_ueg_w : OPTRE_1Rnd_Smoke_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3B Smoke Grenade (White)";
				displaynameShort = "SMK (W)";
				descriptionShort = "Launched Smoke Grenade, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_w";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_ueg_o : OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				scope = 1;

				displayname = "40x57mm M3B Smoke Grenade (Orange)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Launched Smoke Grenade, Yellow-Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_ueg_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_r : UGL_FlareRed_F
			{
				displayname = "40x57mm M1 Flare Round (Red)";
				displaynameShort = "FLR (R)";
				descriptionShort = "40mm Launched Flare, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_g : UGL_FlareGreen_F
			{
				displayname = "40x57mm M1 Flare Round (Green)";
				displaynameShort = "FLR (G)";
				descriptionShort = "40mm Launched Flare, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_o : UGL_FlareYellow_F
			{
				displayname = "40x57mm M1 Flare Round (Orange)";
				displaynameShort = "FLR (O)";
				descriptionShort = "40mm Launched Flare, Yellow-Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_o";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_ilm_w : ACE_40mm_Flare_white
			{
				displayname = "40x57mm M1/L Illum. Flare Round (White)";
				displaynameShort = "FLR (White)";
				descriptionShort = "40mm Launched Illumination Flare, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_w";

				mass = 6;
			};

			class 4thot_u_40x57_1_flr_ilm_i : ACE_40mm_Flare_ir
			{
				displayname = "40x57mm M1/L Illum. Flare Round (IR)";
				displaynameShort = "FLR (IR)";
				descriptionShort = "40mm Launched Illumination Flare, Infra-Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_i";

				mass = 6;
			};

		//ARMCO - Free Armitage Company
			class 4thot_u_40x57_1_smk_r : OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Red)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Impact Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_r";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_p : OPTRE_1Rnd_SmokePurple_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Purple)";
				displaynameShort = "SMK (P)";
				descriptionShort = "Impact Smoke Grenade, Purple<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_p";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_y : OPTRE_1Rnd_SmokeYellow_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Yellow)";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Impact Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_y";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_b : OPTRE_1Rnd_SmokeBlue_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Blue)";
				displaynameShort = "SMK (B)";
				descriptionShort = "Impact Smoke Grenade, Blue<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_b";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_g : OPTRE_1Rnd_SmokeGreen_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Green)";
				displaynameShort = "SMK (G)";
				descriptionShort = "Impact Smoke Grenade, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_g";

				mass = 5;
			};

			class 4thot_u_40x57_1_smk_o : OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				displayname = "40x57mm M3 Smoke Grenade (Orange)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Impact Smoke Grenade, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_o";

				mass = 5;
			};

			class 4thot_u_40x72_1_smk_clu_y : OPTRE_1Rnd_SmokeYellow_Grenade_shell
			{
				displayname = "40x72mm X5 Smoke Grenade (Yellow)";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Cluster Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_clu_y";

				mass = 10;
			};

			class 4thot_u_40x57_1_flr_i : UGL_FlareCIR_F
			{
				displayname = "40x57mm M1 Flare Round (IR)";
				displaynameShort = "FLR (IR)";
				descriptionShort = "40mm Launched Flare, Infra-Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_i";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_w : UGL_FlareWhite_F
			{
				displayname = "40x57mm M1 Flare Round (White)";
				displaynameShort = "FLR (White)";
				descriptionShort = "40mm Launched Flare, White<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_w";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_y : UGL_FlareYellow_F
			{
				displayname = "40x57mm M1 Flare Round (Yellow)";
				displaynameShort = "FLR (Y)";
				descriptionShort = "40mm Launched Flare, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_y";

				mass = 5;
			};

			class 4thot_u_40x57_1_flr_ilm_g : ACE_40mm_Flare_green
			{
				displayname = "40x57mm M1/L Illum. Flare Round (Green)";
				displaynameShort = "FLR (Green)";
				descriptionShort = "40mm Launched Illumination Flare, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_g";

				mass = 6;
			};

			class 4thot_u_40x57_1_flr_ilm_r : ACE_40mm_Flare_red
			{
				displayname = "40x57mm M1/L Illum. Flare Round (Red)";
				displaynameShort = "FLR (Red)";
				descriptionShort = "40mm Launched Illumination Flare, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_flr_ilm_r";

				mass = 6;
			};
		*/

	// HMG-48 Medium Machinegun (MMG) Magazines
		class 130Rnd_338_Mag;
		class 4thot_b_858x70_100_apr_t3 : 130Rnd_338_Mag
		{
			displayname = "100rnd 8.6x70mm AP-R(T3E10) HBOX";
			displaynameShort = "AP-T3";
			descriptionShort = "AP17 Armor-Piercing rounds<br/>AP17T piercing Tracer(R) rounds<br/>100 rounds, Tracer every 3, 10 End Tracers";

			ammo = "OPTRE_B_338_AP";
			tracersEvery = 3;
			lastroundstracer = 10;

					// mass = 60;
			count = 100;
		};

	// VK Commando Battlerifle (BR)
		class Command_20Rnd_65_TracerR_Mag;
		class 4thot_m_858x70_20_ap_nt : Command_20Rnd_65_TracerR_Mag
		{
			displayname = "20Rnd 8.58x70mm AP Magazine";
			displaynameShort = "AP";
			descriptionShort = "AP17 Armor-Piercing rounds<br/>20 rounds, No Tracers";

			ammo = "OPTRE_B_338_AP";
			tracersEvery = 0;
			lastroundstracer = 0;

			mass = 30;
			count = 20;
		};

		class 4thot_m_858x70_20_slr : 4thot_m_858x70_20_ap_nt
		{
			displayname = "20Rnd 8.58x70mm SLR Magazine";
			displaynameShort = "SLR";
			descriptionShort = "300gr Scenar Long Range Rounds<br/>20 rounds, No Tracers";

			ammo = "ACE_338_Ball";
		};

		class 4thot_m_858x70_20_apr_t : 4thot_m_858x70_20_ap_nt
		{
			displayname = "20Rnd 8.58x70mm AP-R(T) Magazines";
			displaynameShort = "AP-T";
			descriptionShort = "AP17T piercing Tracer(R) rounds<br/>20 rounds, All Tracers";

			tracersEvery = 1;
			lastroundstracer = 1;
		};

		class 4thot_m_858x70_20_apr_t3 : 4thot_m_858x70_20_apr_t
		{
			displayname = "20Rnd 8.58x70mm AP-R(T3E3) Magazines";
			displaynameShort = "AP-T3";
			descriptionShort = "AP17 Armor-Piercing rounds<br/>AP17T piercing Tracer(R) rounds<br/>20 rounds, Tracer every 3, 3 End Tracers";

			tracersEvery = 3;
			lastroundstracer = 3;
		};

	// M392/M393 Designated Marksman Rifle (DMR)
		//Compat
			class OPTRE_60Rnd_762x51_Mag;
			class OPTRE_15Rnd_762x51_Mag : OPTRE_60Rnd_762x51_Mag
			{
				scope = 1;
				ammo = "4thot_a_762x67_sb_m248_y";
			};

			class OPTRE_15Rnd_762x51_Mag_Tracer : OPTRE_15Rnd_762x51_Mag
			{
				ammo = "4thot_a_762x67_sb_m248_y";
			};

			class OPTRE_15Rnd_762x51_Mag_Tracer_Yellow : OPTRE_15Rnd_762x51_Mag_Tracer
			{
				ammo = "4thot_a_762x67_sb_m248_r";
			};

			class OPTRE_15Rnd_762x51_AP_Mag : OPTRE_15Rnd_762x51_Mag
			{
				ammo = "4thot_a_762x67_ap_m348_y";
			};

			class OPTRE_15Rnd_762x51_AP_Mag_Tracer : OPTRE_15Rnd_762x51_AP_Mag
			{
				ammo = "4thot_a_762x67_ap_m348_y";
			};

		//class OPTRE_15Rnd_762x51_Mag;
		class 4thot_m_762x67_15_sbr_nt : OPTRE_15Rnd_762x51_Mag
		{
			scope = 2;

			displayname = "15Rnd 7.62x67mm EMB(NT) Magazine";
			displaynameShort = "EMB";
			descriptionShort = "M248 Enhanced Military Ball<br/>15 rounds, No Tracers";

			ammo = "4thot_a_762x67_sb_m248_y";
			tracersEvery = 0;
			lastroundstracer = 0;

			mass = 20;
			count = 15;
		};

		class 4thot_m_762x67_15_sbr_mt : 4thot_m_762x67_15_sbr_nt
		{
			displayname = "15Rnd 7.62x67mm EMB/T-R(T2E4) Magazine";
			displaynameShort = "EMB-T2";
			descriptionShort = "M248 Enhanced Military Ball<br/>M248R Enhanced Military Red Tracers<br/>15 rounds, Tracers every 2, 4 End Tracers";

			tracersEvery = 2;
			lastroundstracer = 4;
		};

		class 4thot_m_762x67_15_sbr_t : 4thot_m_762x67_15_sbr_nt
		{
			displayname = "20Rnd 7.62x67mm EMT-R Tracer Magazine";
			displaynameShort = "EMT-T";
			descriptionShort = "M248R Enhanced Military Red Tracers<br/>15 rounds, All Tracers";

			tracersEvery = 1;
			lastroundstracer = 1;
		};

		class 4thot_m_762x67_15_lr_nt : 4thot_m_762x67_15_sbr_nt
		{
			displayname = "15Rnd 7.62x67mm SBLR(NT) Magazine";
			displaynameShort = "SBLR";
			descriptionShort = "OTM Hybrid Special Ballistc Long Range<br/>15 rounds, No Tracers";

			ammo = "4thot_a_762x67_lr_otm_y";
		};

		class 4thot_m_762x67_15_apr_nt : 4thot_m_762x67_15_sbr_nt
		{
			displayname = "15Rnd 7.62x67mm API(NT) Magazine";
			displaynameShort = "API";
			descriptionShort = "M248 Enhanced Military Ball<br/>15 rounds, No Tracers";

			ammo = "4thot_a_762x67_ap_m348_y";
		};

		class 4thot_m_762x67_15_apr_mt : 4thot_m_762x67_15_apr_nt
		{
			displayname = "15Rnd 7.62x67mm API/T-R(T4E2) Magazine";
			displaynameShort = "API-T4";
			descriptionShort = "M348 Armor-Piercing Incendiary<br/>M348R Armor-Piercing Red Tracers<br/>15 rounds, Tracers every 4, 2 End Tracers";

			tracersEvery = 4;
			lastroundstracer = 2;
		};


	// Grenades (Throwables)
		class SmokeShell;
		class OPTRE_M2_Smoke_Red;
		class OPTRE_M2_Smoke_Green;
		class OPTRE_M2_Smoke_Orange;
		class OPTRE_M2_Smoke_Blue;
		class HandGrenade;
		class MiniGrenade;

		class OPTRE_M9_Frag : HandGrenade
		{
			displayName = "M9 HE-MP Grenade";
			displayNameShort = "M9 HEMP";
			descriptionShort = "High Explosive Multi-Purpose Grenade<br/>Medium Fragmentation";

			//ammo = "OPTRE_G_M9_Frag";

			//mass = 8;
		};

		class 4thot_g_he_h : HandGrenade
		{
			scope = 1;

			displayName = "OGAI-14 AI+ Grenade";
			displayNameShort = "OGAI-14";
			descriptionShort = "Heavy Anti-Infantry Grenade<br/>High Fragmentation";

			//ammo = "GrenadeHand";

			mass = 10;
		};

		class 4thot_g_he_l : MiniGrenade
		{
			scope = 1;

			displayName = "OGAI-7 AI Grenade";
			displayNameShort = "OGAI-7";
			descriptionShort = "Light Anti-Infantry Grenade<br/>Limited Fragmentation";

			//ammo = "mini_Grenade";

			mass = 5;
		};

		class 4thot_g_heat : HandGrenade
		{
			scope = 2;

			displayName = "OGAT-11 AP Grenade";
			displayNameShort = "OGAT-11";
			descriptionShort = "Light Anti-Tank Grenade<br/>Armor-Piercing, Limited Fragmentation";

			ammo = "4thot_g_at";

			mass = 12.5;

			model = "\z\ace\addons\grenades\models\ace_anm14th3.p3d";
			picture = "\z\ace\addons\grenades\UI\ace_anm14th3_x_ca.paa";
		};

		class OPTRE_M2_Smoke : SmokeShell
		{
			mass = 5;
		};

		class 4thot_g_smk_urf_w : OPTRE_M2_Smoke
		{
			scope = 1;

			displayName = "DGS-9 Smoke Grenade (Cover)";
			displayNameShort = "DGS-9 (W)";
			descriptionShort = "Singal Smoke Grenade, White";
		};

		class 4thot_g_smk_urf_r : OPTRE_M2_Smoke_Red
		{
			scope = 1;

			displayName = "DGS-9 Smoke Grenade (Red)";
			displayNameShort = "DGS-9 (R)";
			descriptionShort = "Signal Smoke Grenade, Red";
		};

		class 4thot_g_smk_urf_g : OPTRE_M2_Smoke_Green
		{
			scope = 1;

			displayName = "DGS-9 Smoke Grenade (Green)";
			displayNameShort = "DGS-9 (G)";
			descriptionShort = "Signal Smoke Grenade, Green";
		};

		class 4thot_g_smk_urf_o : OPTRE_M2_Smoke_Orange
		{
			scope = 1;

			displayName = "DGS-9 Smoke Grenade (Target)";
			displayNameShort = "DGS-9 (O)";
			descriptionShort = "Signal Smoke Grenade, Orange";
		};

		class 4thot_g_smk_urf_b : OPTRE_M2_Smoke_Blue
		{
			scope = 1;
			displayName = "DGS-9 Smoke Grenade (Blue)";
			displayNameShort = "DGS-9 (B)";
			descriptionShort = "Signal Smoke Grenade, Blue";
		};

	// MSRM-10 (MSBS Grot)
		class 30Rnd_65x39_caseless_msbs_mag; //red
		class 100Rnd_580x42_Mag_F;
		class 4thot_m_65x50c_100_br_t : 100Rnd_580x42_Mag_F
		{
			scope = 1;
			scopeArsenal = 1;

			displayname = "100Rnd 6.5x40mm Ball-R(T) Magazines";
			ammo = "OPTRE_65_Creedmoor";
		};

		//4thot_m_65x50_35_br_t3
		//4thot_m_65x50_100_br_t3
};
class CfgMagazineWells
{
	class 4thot_u_40_MGL
	{
		4thot[] =
		{
			"4thot_u_40x57_5_huntir"
		};
	};

	class UGL_40x36
	{
		4thot[] =
		{
			"4thot_u_40x72_1_ap",
			"4thot_u_40x72_1_dp",
			"4thot_u_40x72_1_sg",
			"4thot_u_40x72_1_smk_clu_w",
			"4thot_u_40x47_3_ap",
			"4thot_u_40x57_1_smk_ueg_r",
			"4thot_u_40x57_1_smk_ueg_w",
			"4thot_u_40x57_1_smk_ueg_o",
			"4thot_u_40x57_1_flr_r",
			"4thot_u_40x57_1_flr_g",
			"4thot_u_40x57_1_flr_o",
			"4thot_u_40x57_1_flr_ilm_w",
			"4thot_u_40x57_1_flr_ilm_i",

			"4thot_u_40x57_1_smk_r",
			"4thot_u_40x57_1_smk_p",
			"4thot_u_40x57_1_smk_y",
			"4thot_u_40x57_1_smk_b",
			"4thot_u_40x57_1_smk_g",
			"4thot_u_40x57_1_smk_o",
			"4thot_u_40x72_1_smk_clu_y",
			"4thot_u_40x57_1_flr_i",
			"4thot_u_40x57_1_flr_w",
			"4thot_u_40x57_1_flr_y",
			"4thot_u_40x57_1_flr_ilm_g",
			"4thot_u_40x57_1_flr_ilm_r",

			"4thot_u_40x72_1_sg",
			"4thot_u_40x57_1_ap",
			"4thot_u_40x57_1_smk_urf_o",
			"4thot_u_40x57_1_smk_urf_w",
			"4thot_u_40x57_1_smk_urf_g",
			"4thot_u_40x57_1_smk_urf_r",
			"4thot_u_40x57_1_flr_urf_r",
			"4thot_u_40x57_1_flr_urf_g",
			"4thot_u_40x57_1_flr_urf_o",
			"4thot_u_40x57_1_flr_ilm_urf_y",
			"4thot_u_40x57_1_flr_ilm_urf_r"
		};
	};
};

// 4thot_g_heat

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
				"4thot_g_he_h_Muzzle",
				"4thot_g_he_l_Muzzle",
				"4thot_g_heat_Muzzle",
				"4thot_g_smk_urf_w_Muzzle",
				"4thot_g_smk_urf_r_Muzzle",
				"4thot_g_smk_urf_g_Muzzle",
				"4thot_g_smk_urf_o_Muzzle",
				"4thot_g_smk_urf_b_Muzzle",
			};

			class 4thot_g_he_h_Muzzle : throwMuzzle
			{
				magazines[] = {
					"4thot_g_he_h"
				};
			};
			class 4thot_g_he_l_Muzzle : throwMuzzle
			{
				magazines[] = {
					"4thot_g_he_l"
				};
			};
			class 4thot_g_heat_Muzzle : throwMuzzle
			{
				magazines[] = {
					"4thot_g_heat"
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
			class 4thot_g_smk_urf_b_Muzzle : throwMuzzle
			{
				magazines[] = {
					"4thot_g_smk_urf_b"
				};
			};
		};

	// HMG-48 Medium Machinegun (MMG)
		class MMG_02_camo_F;
		class MMG_02_black_F : MMG_02_camo_F
		{
			class manual;
		};

		class 4thot_w_a_hmg48 : MMG_02_black_F
		{
			baseweapon = "4thot_w_a_hmg48";

			displayname = "HMG-48 Machinegun";
			descriptionShort = "Medium Machine Gun<br />Caliber: 8.6x70mm";

			magazines[] = {
				"4thot_b_858x70_100_apr_t3"
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

	// VK Type 2 Commando Battlerifle (BR)
		class DMR_03_base_F;
		class OPTRE_Commando : DMR_03_base_F
		{
			magazineWell[] = {};
			magazines[] =
			{
				"4thot_m_858x70_20_ap_nt",
				"4thot_m_858x70_20_slr",
				"4thot_m_858x70_20_apr_t",
				"4thot_m_858x70_20_apr_t3"
			};

			recoil = "4thot_a_vkc2";
		};
		/*
			class OPTRE_Commando;
			class 4thot_w_rm_cmdo2 : OPTRE_Commando
			{
				baseWeapon = "4thot_w_rm_cmdo2";

				displayName = "VK Type 2 Commando";

				magazineWell[] = {};
				magazines[] =
				{
					"4thot_m_858x70_20_ap_nt",
					"4thot_m_858x70_20_slr",
					"4thot_m_858x70_20_apr_t",
					"4thot_m_858x70_20_apr_t3"
				};

				recoil = "4thot_a_vkc2";
			};


			class OPTRE_Commando_Red;
			class 4thot_w_rm_cmdo2_red : OPTRE_Commando_Red
			{
				baseWeapon = "4thot_w_rm_cmdo2_red";

				displayName = "VK Type 2 Commando";

				magazineWell[] = {};
				magazines[] =
				{
					"4thot_m_858x70_20_ap_nt",
					"4thot_m_858x70_20_slr",
					"4thot_m_858x70_20_apr_t",
					"4thot_m_858x70_20_apr_t3"
				};

				recoil = "4thot_a_vkc2";
			};

			class OPTRE_Commando_Black;
			class 4thot_w_rm_cmdo2_blk : OPTRE_Commando_Black
			{
				baseWeapon = "4thot_w_rm_cmdo2_blk";

				displayName = "VK Type 2 Commando";

				magazineWell[] = {};
				magazines[] =
				{
					"4thot_m_858x70_20_ap_nt",
					"4thot_m_858x70_20_slr",
					"4thot_m_858x70_20_apr_t",
					"4thot_m_858x70_20_apr_t3"
				};

				recoil = "4thot_a_vkc2";
			};
		*/

	// M247 Medium Machinegun (MMG)
		class OPTRE_MachineGun_Base;
		class OPTRE_M73 : OPTRE_MachineGun_Base
		{
			class Single;
			class FullAuto;
		};
		class OPTRE_M247: OPTRE_M73
		{
			modes[] = {"FullerAuto","FullAuto","close","short","medium","far"};
			class Single : Single
			{
				showToPlayer=0;
				dispersion = 0.001*1.05;
			};
			class FullAuto : FullAuto
			{
				reloadTime=0.14;
				dispersion = 0.001*1.05;
			};
			class FullerAuto : FullAuto
			{
				reloadTime=0.035;
				textureType = "fastAuto";
				dispersion = 0.001*1.05;
			};
			class close : FullerAuto
			{
				burst=50;
				aiRateOfFire=0.25;
				aiRateOfFireDistance=50;
				minRange=0;
				minRangeProbab=0.050000001;
				midRange=30;
				midRangeProbab=0.69999999;
				maxRange=50;
				maxRangeProbab=0.039999999;
				showToPlayer=0;
			};
			class short: close
			{
				burst=35;
				aiRateOfFire=0.75;
				aiRateOfFireDistance=300;
				minRange=50;
				minRangeProbab=0.050000001;
				midRange=150;
				midRangeProbab=0.69999999;
				maxRange=300;
				maxRangeProbab=0.039999999;
			};
			class medium: close
			{
				burst=25;
				aiRateOfFire=1;
				aiRateOfFireDistance=600;
				minRange=200;
				minRangeProbab=0.050000001;
				midRange=400;
				midRangeProbab=0.60000002;
				maxRange=600;
				maxRangeProbab=0.1;
			};
			class far: close
			{
				burst=15;
				aiRateOfFire=1;
				aiRateOfFireDistance=700;
				minRange=350;
				minRangeProbab=0.039999999;
				midRange=550;
				midRangeProbab=0.5;
				maxRange=700;
				maxRangeProbab=0.0099999998;
			};

			recoil = "4thot_a_m247";
		};
	// M392/M393 Designated Marksman Rifle (DMR)
		class OPTRE_LongRifle_Base;
		class OPTRE_M392_DMR : OPTRE_LongRifle_Base
		{
			//magazineWell[] = {};
			magazines[] =
			{
				"4thot_m_762x67_15_sbr_nt",
				"4thot_m_762x67_15_sbr_mt",
				"4thot_m_762x67_15_sbr_t",
				"4thot_m_762x67_15_lr_nt",
				"4thot_m_762x67_15_apr_nt",
				"4thot_m_762x67_15_apr_mt"
			};

			recoil = "4thot_a_m392";
		};

		class OPTRE_M393_DMR : OPTRE_M392_DMR
		{
			recoil = "4thot_a_m393";
		};

		class OPTRE_M393S_DMR : OPTRE_M393_DMR
		{
			recoil = "4thot_a_m393S";
		};

	// Madrigal Standard Rifle Model 10 (MSBS Grot)
		class arifle_MSBS65_black_F;
		class arifle_MSBS65_GL_black_F;
		class arifle_MSBS65_Mark_black_F;
		class arifle_MSBS65_UBS_black_F;

		class 4thot_w_ra_grot : arifle_MSBS65_Mark_black_F
		{
			scope = 1;
			scopeArsenal = 1;

			baseWeapon = "4thot_w_ra_grot";
			displayName = "Drum Test";

			magazines[] =
			{
				"4thot_m_65x50c_100_br_t"
			};
		};
};

class CfgRecoils
{
	class recoil_mk200;
	class recoil_dmr_03;

	class 4thot_a_hmg48h : recoil_mk200
	{
		permanent = "0.05*0.65";
		temporary = "0.01*0.65";
	};

	class 4thot_a_m247 : recoil_mk200
	{
		permanent = "0.05*0.45";
		temporary = "0.01*0.4";
	};

	class 4thot_a_vkc : recoil_dmr_03
	{
		permanent = "0.05*0.55";
		temporary = "0.03*0.55";
	};

	class 4thot_a_vkc2 : recoil_dmr_03
	{
		permanent = "0.05*0.9";
		temporary = "0.03*0.9";
	};

	class 4thot_a_m392 : recoil_dmr_03
	{
		permanent = "0.05*0.75";
		temporary = "0.03*0.75";
	};

	class 4thot_a_m393 : 4thot_a_m392
	{
		permanent = "0.05*0.7";
		temporary = "0.03*0.7";
	};

	class 4thot_a_m393S : 4thot_a_m393
	{
		temporary = "0.03*0.85";
	};
};