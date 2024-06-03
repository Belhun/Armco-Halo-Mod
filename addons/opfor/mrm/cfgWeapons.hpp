/*
    class OPTRE_MA5AGL;
    class OPTRE_MA5A;
    class OPTRE_Commando_Snow;
    class OPTRE_CQS48_Bulldog_Automatic_Snow;
    class OPTRE_Bulldog_Riot_Shield_Snow;
    class OPTRE_MA5K;
    class OPTRE_HMG38;
    class OPTRE_BR37;
    class OPTRE_M90A;
    class optre_hgun_sas10_F;
    class OPTRE_SAS10_Riot_Shield_Snow;
    class OPTRE_Ins_URF_Helmet1_White;
    class OPTRE_ONI_Researcher_Headgear;
    class OPTRE_Ins_BJ_Helmet_URB;
*/
    
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

    class 4thot_w_a_hmg48h_a_srm : 4thot_w_a_hmg48h
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

    class 4thot_a_optre_hgun_sas10_F_lsr : optre_hgun_sas10_F
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

    class U_C_Uniform_Farmer_01_F_fmm : U_C_Uniform_Farmer_01_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_nmr_i_militia_mle";
        };
    }

    class U_C_ArtTShirt_01_v5_F_fmm : U_C_ArtTShirt_01_v5_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_nmr_i_militia_mle_a";
        };
    }

    class U_C_ArtTShirt_01_v6_F_fmm : U_C_ArtTShirt_01_v6_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_nmr_i_militia_mle_b";
        };
    }

    class U_I_C_Soldier_Bandit_3_F_fmm : U_I_C_Soldier_Bandit_3_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_nmr_i_militia_mle_c";
        };
    }

    class U_I_C_Soldier_Bandit_5_F_fmm : U_I_C_Soldier_Bandit_5_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_nmr_i_militia_mle_d";
        };
    }

    class U_I_G_resistanceLeader_F_fmm : U_I_G_resistanceLeader_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class ItemInfo : ItemInfo
        {
            uniformClass = "4thot_u_mrm_militia_s10";
        };
    }

    class 4thot_v_mrm_rebreather : V_RebreatherB
    {
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply100";
        };
    }