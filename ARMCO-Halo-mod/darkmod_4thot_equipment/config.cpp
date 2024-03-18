class CfgPatches {
    class darkmod_4thot_equipment
	{
        weapons[] =
        {
            "4thot_h_s1onir_c_nutters",
            "4thot_h_s1onir_c_nutters_dp",
            "4thot_h_ch252_des_alpha",
            "4thot_h_ech252_des_alpha",
            "4thot_h_ech252_des_alpha_tl",
            "4thot_h_ech252_des_alpha_sl",
            "4thot_h_ech252_oli_alpha",
            "4thot_h_ech252_oli_sabre",
            "4thot_h_ech252_oli_zulu",
            "4thot_h_ech252_oli_phnix",
            "4thot_h_ech252_des_alpha_dp",
            "4thot_h_ech252_oli_alpha_dp",
            "4thot_h_ech252_oli_sabre_dp",
            "4thot_h_ech252_oli_zulu_dp",
            "4thot_h_ech252_oli_phnix_dp"
        };
        units[] =
        {
        };
        magazines[] =
        {
        };
        requiredAddons[] =
            {
            "OPTRE_Loadorder",
            "ARMCO_Units_Army"
            };

        author = "Darknessvoid99";
    };
};

#include "CfgArsenalExp.hpp"

class CfgWeapons
{
    class OPTRE_UNSC_CH252_Helmet_WDL;
    class OPTRE_UNSC_CH252_Helmet2_Vacuum_WDL;
    class OPTRE_UNSC_CH252_Helmet_Vacuum_WDL;
    class OPTRE_UNSC_Recon_Helmet;
    class OPTRE_UNSC_Recon_Helmet_dp;

    class 4thot_h_s1onir_c_nutters : OPTRE_UNSC_Recon_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        ScopeArsenal = 2;

        dlc = "ARMCO";
        author = "Darknessvoid99";
        displayName = "[A] S1/ONI/R Helmet (Nutters)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_s1onir_m_nutters.paa",
            "darkmod_4thot_equipment\data\h_s1onir_v_nutters.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };

        ace_hearing_lowerVolume = 0.4;
        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

    class 4thot_h_s1onir_c_nutters_dp : OPTRE_UNSC_Recon_Helmet_dp
    {
        scope = 2;
        scopeCurator = 2;
        ScopeArsenal = 2;

        dlc = "ARMCO";
        author = "Darknessvoid99";
        displayName = "[A] S1/ONI/R Helmet (Nutters)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_s1onir_m_nutters.paa",
            "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };

        ace_hearing_lowerVolume = 0.1;
        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

/*
    class 4thot_h_ch252_des_alpha : OPTRE_UNSC_CH252_Helmet_WDL
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        dlc = "ARMCO";
        author = "Darknessvoid99";
        displayname = "[A] Desert CH252 Helmet (Alpha)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_ch252_des_alpha.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };

        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

    class 4thot_h_ech252_des_alpha : OPTRE_UNSC_CH252_Helmet2_Vacuum_WDL
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        dlc = "ARMCO";
        author = "Darknessvoid99";
        displayname = "[ARMCO][S] Desert ECH252 Helmet (Alpha)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_ch252_des_alpha.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";

        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

    class 4thot_h_ech252_des_alpha_tl : 4thot_h_ech252_des_alpha
    {
        displayname = "[ARMCO][S] Desert ECH252 Helmet (Alpha/TL)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_ch252_des_alpha_tl.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };

    class 4thot_h_ech252_des_alpha_sl : 4thot_h_ech252_des_alpha
    {
        displayname = "[ARMCO][S] Desert ECH252 Helmet (Alpha/SL)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_ch252_des_alpha_sl.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };
*/
    class 4thot_h_ech252_oli_alpha : OPTRE_UNSC_CH252_Helmet2_Vacuum_WDL
    {
        scope = 2;
        scopeCurator = 2;
        ScopeArsenal = 2;

        dlc = "ARMCO";
        author = "Belhun";
        displayname = "[A] Olive ECH252 Helmet (Alpha)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_alpha_co.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";

        ace_hearing_lowerVolume = 0.4;
        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

    class 4thot_h_ech252_oli_sabre : 4thot_h_ech252_oli_alpha
    {
        displayname = "[A] Olive ECH252 Helmet (Sabre)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_sabre_co.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };

    class 4thot_h_ech252_oli_zulu : 4thot_h_ech252_oli_alpha
    {
        displayname = "[A] Olive ECH252 Helmet (Zulu)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };

    class 4thot_h_ech252_oli_phnix : 4thot_h_ech252_oli_alpha
    {
        displayname = "[A] Olive ECH252 Helmet (Phoenix)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_phoenix_co.paa",
            "darkmod_4thot_equipment\data\h_ch252_v_gold.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };
/*
    class 4thot_h_ech252_des_alpha_dp : OPTRE_UNSC_CH252_Helmet_Vacuum_WDL
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        dlc = "ARMCO";
        author = "Darknessvoid99";
        displayname = "[A] Desert ECH252 Helmet (Alpha)";

        hiddenSelectionsTextures[] =
        {
            "darkmod_4thot_equipment\data\h_ch252_des_alpha.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";

        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };
*/
    class 4thot_h_ech252_oli_alpha_dp : OPTRE_UNSC_CH252_Helmet_Vacuum_WDL
    {
        scope = 2;
        scopeCurator = 2;
        ScopeArsenal = 2;
        
        dlc = "ARMCO";
        author = "Belhun";
        displayname = "[A] Olive ECH252 Helmet (Alpha)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_alpha_co.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";

        ace_hearing_lowerVolume = 0.1;
        ace_hearing_protection = 0.95;
        TFAR_ExternalIntercomWirelessCapable = 1;
    };

    class 4thot_h_ech252_oli_sabre_dp : 4thot_h_ech252_oli_alpha_dp
    {
        displayname = "[A] Olive ECH252 Helmet (Sabre)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_sabre_co.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };

    class 4thot_h_ech252_oli_zulu_dp : 4thot_h_ech252_oli_alpha_dp
    {
        displayname = "[A] Olive ECH252 Helmet (Zulu)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_zulu_co.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };

    class 4thot_h_ech252_oli_phnix_dp : 4thot_h_ech252_oli_alpha_dp
    {
        displayname = "[A] Olive ECH252 Helmet (Phoenix)";

        hiddenSelectionsTextures[] =
        {
            "armco_armours\data\marine\helmets\helmet_phoenix_co.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };
};