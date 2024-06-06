#include "..\script_component.hpp"
class CfgPatches {
	class Armco_4th_Weapons_Bafw
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

class CfgMagazines {
	// Grenade_Shell
	class UK3CB_BAF_1Rnd_Smoke_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell;
	class UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell;
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