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

	class SmokeShell;

	//40mm Shared Magazines

		class 4thot_u_40x57_1_smk_urf_w : 1Rnd_Smoke_Grenade_shell
		{
			displayname = "40x57mm LGS-2 Smoke Grenade (Cover)";
			displaynameShort = "SMK (W)";
			descriptionShort = "Launched Heavy Smoke Grenade, White<br/>Used by: All Grenade Launchers";

			ammo = "UK3CB_BAF_G_40mm_Smoke";

			mass = 6;
		};

	//40mm / M319 Multiple Grenade Launcher (MGL) Magazines
		class 4thot_u_40_8_Smoke_White_3CB: UK3CB_BAF_1Rnd_Smoke_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (White)";
			count = 8;
		};
		class 4thot_u_40_8_Smoke_Red_3CB: UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (Red)";
			count = 8;
		};
		class 4thot_u_40_8_Smoke_Green_3CB: UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (Green)";
			count = 8;
		};
		class 4thot_u_40_8_Smoke_Yellow_3CB: UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (Yellow)";
			count = 8;
		};
		class 4thot_u_40_8_Smoke_Purple_3CB: UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (Purple)";
			count = 8;
		};
		class 4thot_u_40_8_Smoke_Orange_3CB: UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell {
			displayName = "8rnd Impact Smoke Round (Orange)";
			count = 8;
		};

	//Grenades (Throwables)
		class OPTRE_M2_Smoke : SmokeShell
		{
			ammo = "UK3CB_BAF_SmokeShell";
		};

		class 4thot_g_smk_urf_w : OPTRE_M2_Smoke
		{
			scope = 1;
			scopeArsenal = 1;

			displayName = "DGS-11 Smoke Grenade (Cover)";
			displayNameShort = "DGS-11 (W)";
			descriptionShort = "Defensive Smoke Grenade, White";

			mass = 4.5;
		};
};
class CfgMagazineWells
{
	class 4thot_u_40_MGL
	{
		4thot_Bafw[] =
		{
			"4thot_u_40_8_Smoke_White_3CB",
			"4thot_u_40_8_Smoke_Red_3CB",
			"4thot_u_40_8_Smoke_Green_3CB",
			"4thot_u_40_8_Smoke_Yellow_3CB",
			"4thot_u_40_8_Smoke_Purple_3CB",
			"4thot_u_40_8_Smoke_Orange_3CB"
		};
	};
};