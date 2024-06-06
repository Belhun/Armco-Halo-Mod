#include "script_component.hpp"
class CfgPatches {
    class 4thot_weapons
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"OPTRE_Weapons"};
    authors[] = {"Belhun", "Darknessvoid99"};
    url = ECSTRING(main,URL);
    VERSION_CONFIG;
    };
};

class CfgMagazines {
    //8 Round Optre M319 Grenade Shells
    class M319_HE_Grenade_Shell;
    class M319_HEDP_Grenade_Shell;
	class M319_Buckshot;
	class OPTRE_1Rnd_Smoke_Grenade_shell;
    class OPTRE_1Rnd_SmokeRed_Grenade_shell;
    class OPTRE_1Rnd_SmokeGreen_Grenade_shell;
    class OPTRE_1Rnd_SmokeYellow_Grenade_shell;
    class OPTRE_1Rnd_SmokePurple_Grenade_shell;
    class OPTRE_1Rnd_SmokeBlue_Grenade_shell;
    class OPTRE_1Rnd_SmokeOrange_Grenade_shell;
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
        displayName = "8rnd M319 HE Grenade";
        count = 8;
    };
    class 4thot_u_40_8_HEDP: M319_HEDP_Grenade_Shell {
        displayName = "8rnd M319 HEDP";
        count = 8;
    };
    class 4thot_u_40_8_Smoke: OPTRE_1Rnd_Smoke_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (White)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Red: OPTRE_1Rnd_SmokeRed_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Red)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Green: OPTRE_1Rnd_SmokeGreen_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Green)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Yellow: OPTRE_1Rnd_SmokeYellow_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Yellow)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Purple: OPTRE_1Rnd_SmokePurple_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Purple)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Blue: OPTRE_1Rnd_SmokeBlue_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Blue)";
        count = 8;
    };
    class 4thot_u_40_8_Smoke_Orange: OPTRE_1Rnd_SmokeOrange_Grenade_shell {
        displayName = "8rnd Signal Smoke Round (Orange)";
        count = 8;
    };
    // 8rnd Optre Flare Rounds
    class 4thot_u_40_8_Flare_Red: OPTRE_signalSmokeR {
        displayName = "8rnd Flare Smoke (Red)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_Orange: OPTRE_signalSmokeO {
        displayName = "8rnd Flare Smoke (Orange)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_Yellow: OPTRE_signalSmokeY {
        displayName = "8rnd Flare Smoke (Yellow)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_Green: OPTRE_signalSmokeG {
        displayName = "8rnd Flare Smoke (Green)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_Blue: OPTRE_signalSmokeB {
        displayName = "8rnd Flare Smoke (Blue)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_Purple: OPTRE_signalSmokeP {
        displayName = "8rnd Flare Smoke (Purple)";
        count = 8;
    };
    // Ace Mags
    class 4thot_u_40_8_Flare_Illumination_White: ACE_40mm_Flare_white {
        displayName = "8rnd M583 Illumination Flare (White)";
        count = 8;
    };
    class 4thot_u_40_8_Flare_ir: ACE_40mm_Flare_ir {
        displayName = "8rnd M583 Flare (IR)";
        count = 8;
    };
    // 4rnd Optre Pellets & Slugs
    class 4thot_u_40_4_Buckshot: OPTRE_1Rnd_MasterKey_Pellets {
        displayName = "8rnd Buckshot";
        count = 4;
    };
    class 4thot_u_40_4_Slug: OPTRE_1Rnd_MasterKey_Slugs {
        displayName = "8rnd Slug ";
        count = 4;
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
            "4thot_u_40_8_Smoke_Orange",
            "4thot_u_40_8_Flare_Red",
            "4thot_u_40_8_Flare_Orange",
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
class CfgWeapons {
    //OPTRE_M319 Overwrite
    class OPTRE_Rifle_Base;
    class OPTRE_M319: OPTRE_Rifle_Base {
        magazineWell[] = {
            "UGL_40x36",
            "CBA_40mm_M203",
            "CBA_40mm_EGLM",
            "4thot_u_40_MGL"
            };
    };
};