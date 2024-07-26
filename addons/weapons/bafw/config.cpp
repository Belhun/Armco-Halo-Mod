#include "..\script_component.hpp"
class CfgPatches {
	class 4thot_weapons_bafw
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"UK3CB_BAF_Weapons_LoadOrder"
		};
		skipWhenMissingDependencies = 1;
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class CfgMagazines
{
	class 1Rnd_Smoke_Grenade_shell;
	class UK3CB_BAF_1Rnd_Smoke_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell;

	class OPTRE_1Rnd_Smoke_Grenade_shell;		//White
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeYellow_Grenade_shell;

	class SmokeShell;

	//40mm Shared Magazines
		class 4thot_u_40x57_1_smk_ueg_w : OPTRE_1Rnd_Smoke_Grenade_shell
		{
			displayname = "40x57mm M5 Smoke Grenade (White)";
			descriptionShort = "Launched Heavy Smoke Grenade, White<br/>Used by: All Grenade Launchers";

			ammo = "UK3CB_BAF_G_40mm_Smoke";	//4thot_u_40x57_smk_ueg_w_h

			mass = 6;
		};

		class 4thot_u_40x57_1_smk_urf_w : OPTRE_1Rnd_Smoke_Grenade_shell
		{
			displayname = "40x57mm LGS-2 Smoke Grenade (Cover)";
			descriptionShort = "Launched Heavy Smoke Grenade, White<br/>Used by: All Grenade Launchers";

			ammo = "UK3CB_BAF_G_40mm_Smoke";	//4thot_u_40x57_smk_urf_w_h

			mass = 6;
		};

		class 4thot_u_40x72_1_smk_clu_w : 1Rnd_Smoke_Grenade_shell
		{
			//ammo = "4thot_u_40x72_smk_clu_w_h";
		};

		//ARMCO
			class 4thot_u_40x57_1_smk_hev_r : UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Red)";
				displaynameShort = "SMK (R)";
				descriptionShort = "Heavy Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_r";

				mass = 6;
			};

			class 4thot_u_40x57_1_smk_hev_p : UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Purple)";
				displaynameShort = "SMK (P)";
				descriptionShort = "Heavy Smoke Grenade, Purple<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_p";

				mass = 6;
			};

			class 4thot_u_40x57_1_smk_hev_y : UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Yellow)";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Heavy Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_y";

				mass = 6;
			};

			class 4thot_u_40x57_1_smk_hev_b : UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Blue)";
				displaynameShort = "SMK (B)";
				descriptionShort = "Heavy Smoke Grenade, Blue<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_b";

				mass = 6;
			};

			class 4thot_u_40x57_1_smk_hev_g : UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Green)";
				displaynameShort = "SMK (G)";
				descriptionShort = "Heavy Smoke Grenade, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_g";

				mass = 6;
			};

			class 4thot_u_40x57_1_smk_hev_o : UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell
			{
				displayname = "40x57mm M5 Smoke Grenade (Orange)";
				displaynameShort = "SMK (O)";
				descriptionShort = "Heavy Smoke Grenade, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_o";

				mass = 6;
			};

			class 4thot_u_40x72_1_smk_clu_y : 1Rnd_SmokeYellow_Grenade_shell
			{
				//ammo = "4thot_u_40x57_smk_clu_y_h";
			};

	//40mm / M319 Multiple Grenade Launcher (MGL) Magazines
			class 4thot_u_40x57_5_smk_hev_r : 4thot_u_40x57_1_smk_hev_r
			{
				displayname = "40x57mm 5rnd M5 Smoke (Red) Tube";
				displaynameShort = "SMK (R)";
				descriptionShort = "Heavy Smoke Grenade, Red<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_r";

				mass = 25;
			};

			class 4thot_u_40x57_5_smk_hev_p : 4thot_u_40x57_1_smk_hev_p
			{
				displayname = "40x57mm 5rnd M5 Smoke (Purple) Tube";
				displaynameShort = "SMK (P)";
				descriptionShort = "Heavy Smoke Grenade, Purple<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_p";

				mass = 25;
			};

			class 4thot_u_40x57_5_smk_hev_y : 4thot_u_40x57_1_smk_hev_y
			{
				displayname = "40x57mm 5rnd M5 Smoke (Yellow) Tube";
				displaynameShort = "SMK (Y)";
				descriptionShort = "Heavy Smoke Grenade, Yellow<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_y";

				mass = 25;
			};

			class 4thot_u_40x57_5_smk_hev_b : 4thot_u_40x57_1_smk_hev_b
			{
				displayname = "40x57mm 5rnd M5 Smoke (Blue) Tube";
				displaynameShort = "SMK (B)";
				descriptionShort = "Heavy Smoke Grenade, Blue<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_b";

				mass = 25;
			};

			class 4thot_u_40x57_5_smk_hev_g : 4thot_u_40x57_1_smk_hev_g
			{
				displayname = "40x57mm 5rnd M5 Smoke (Green) Tube";
				displaynameShort = "SMK (G)";
				descriptionShort = "Heavy Smoke Grenade, Green<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_g";

				mass = 25;
			};

			class 4thot_u_40x57_5_smk_hev_o : 4thot_u_40x57_1_smk_hev_o
			{
				displayname = "40x57mm 5rnd M5 Smoke (Orange) Tube";
				displaynameShort = "SMK (O)";
				descriptionShort = "Heavy Smoke Grenade, Orange<br/>Used by: All Grenade Launchers";

				//ammo = "4thot_u_40x57_smk_hev_o";

				mass = 25;
			};

	//Grenades (Throwables)
		class OPTRE_M2_Smoke : SmokeShell
		{
			displayName = "M2/H Smoke Grenade (White)";
			ammo = "UK3CB_BAF_SmokeShell";

			mass = 5;
		};

		class 4thot_g_smk_urf_w : OPTRE_M2_Smoke
		{
			scope = 1;
			scopeArsenal = 1;

			displayName = "DGS-11 Smoke Grenade (Cover)";
			displayNameShort = "DGS-11 (W)";
			descriptionShort = "Defensive Smoke Grenade, White";
		};
};
class CfgMagazineWells
{
	class 4thot_u_40_MGL
	{
		4thot_Bafw[] =
		{
			"4thot_u_40x57_5_smk_hev_r",
			"4thot_u_40x57_5_smk_hev_p",
			"4thot_u_40x57_5_smk_hev_y",
			"4thot_u_40x57_5_smk_hev_b",
			"4thot_u_40x57_5_smk_hev_g",
			"4thot_u_40x57_5_smk_hev_o"
		};
	};
};