#include "../script_component.hpp"
class CfgPatches
{
	class 4thot_opfor_fmm
	{
		addonRootClass="4thot_opfor";
		weapons[] = {};
		units[] =
		{
			"4thot_b_e_cb1_eb_fmm_gue",
			"4thot_b_e_cb1_sr_fmm_gue",
			"4thot_b_e_cb1_ev_fmm_gue",
			"4thot_b_e_tp_blk_fmm_gue",
			"4thot_b_e_fp_blk_fmm_gue",
			"4thot_b_e_mes_oli_fmm_gue",
			"4thot_b_e_mes_blk_fmm_gue",
			"4thot_b_e_mes_gry_fmm_gue",
			"B_Messenger_Gray_F_e_fmm_medic",
			"B_Messenger_Coyote_F_e_fmm_gradr",
			"B_LegStrapBag_coyote_F_e_fmm_engie",
			"4thot_u_fmm_rifle",
			"4thot_u_fmm_rifle_at",
			"4thot_u_fmm_rifle_br",
			"4thot_u_fmm_gradr",
			"4thot_u_fmm_mmgun",
			"4thot_u_fmm_marks",
			"4thot_u_fmm_medic",
			"4thot_u_fmm_engie",
			"4thot_u_fmm_guer",
			"4thot_u_fmm_rebel",
			"4thot_u_fmm_rifle"
		};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"4thot_opfor"
		};
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class CfgWeapons
{};

class CfgVehicles
{
// Equipment
	class B_CivilianBackpack_01_Everyday_Black_F;
	class B_CivilianBackpack_01_Sport_Red_F;
	class B_CivilianBackpack_01_Everyday_Vrana_F;
	class B_TacticalPack_blk;
	class B_FieldPack_blk;
	class B_FieldPack_green_F;
	class B_Messenger_Olive_F;
	class B_Messenger_Black_F;
	class B_Messenger_Gray_F;
	class B_Messenger_Coyote_F;
	class B_LegStrapBag_coyote_F;

	class 4thot_b_e_cb1_eb_fmm_gue : B_CivilianBackpack_01_Everyday_Black_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_cb1_sr_fmm_gue : B_CivilianBackpack_01_Sport_Red_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_cb1_ev_fmm_gue : B_CivilianBackpack_01_Everyday_Vrana_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_tp_blk_fmm_gue : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_fp_blk_fmm_gue : B_FieldPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class B_FieldPack_green_F_e_fmm_mmgun : B_FieldPack_green_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(OPTRE_100Rnd_762x51_Box_Tracer, 5);
		};
	};

	class B_FieldPack_green_F_e_fmm_u_rifle : B_FieldPack_green_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_mes_oli_fmm_gue : B_Messenger_Olive_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_mes_blk_fmm_gue : B_Messenger_Black_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class 4thot_b_e_mes_gry_fmm_gue : B_Messenger_Gray_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_fieldDressing, 4);
			MACRO_ADDITEM(ACE_elasticBandage, 4);
			MACRO_ADDITEM(ACE_quikclot, 4);
			MACRO_ADDITEM(ACE_epinephrine, 2);
			MACRO_ADDITEM(ACE_tourniquet, 1);
			MACRO_ADDITEM(ACE_splint, 1);
			MACRO_ADDITEM(kat_IV_16, 1);
			MACRO_ADDITEM(ACE_morphine, 1);
			MACRO_ADDITEM(ACE_salineIV_250, 1);
			MACRO_ADDITEM(ACE_EarPlugs, 1);
			MACRO_ADDITEM(ACE_CableTie, 1);
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 1);
		};
	};

	class B_Messenger_Gray_F_e_fmm_medic : B_Messenger_Gray_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ACE_elasticBandage, 10);
			MACRO_ADDITEM(ACE_morphine, 4);
			MACRO_ADDITEM(kat_IO_FAST, 2);
			MACRO_ADDITEM(ACE_epinephrine, 4);
			MACRO_ADDITEM(ACE_tourniquet, 3);
			MACRO_ADDITEM(kat_IV_16, 4);
			MACRO_ADDITEM(ACE_salineIV_250, 2);
			MACRO_ADDITEM(kat_bloodIV_O_N_250, 1);
			MACRO_ADDITEM(kat_chestSeal, 2);
			MACRO_ADDITEM(kat_aatKit, 1);
			MACRO_ADDITEM(kat_naloxone, 1);
			MACRO_ADDITEM(kat_Pulseoximeter, 1);
			MACRO_ADDITEM(kat_crossPanel, 1);
			MACRO_ADDITEM(kat_etomidate, 3);
			MACRO_ADDITEM(kat_scalpel, 2);
			MACRO_ADDITEM(kat_plate, 2);
		};

		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(kat_Painkiller, 3);
		};
	};

	class B_Messenger_Coyote_F_e_fmm_gradr : B_Messenger_Coyote_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(4thot_u_40x57_1_ap, 8);
			MACRO_ADDMAGAZINE(4thot_u_40x57_1_smk_urf_w, 3);
			MACRO_ADDMAGAZINE(ACE_40mm_Flare_white, 3);
			MACRO_ADDMAGAZINE(4thot_g_heat, 2);
		};
	};

	class B_LegStrapBag_coyote_F_e_fmm_engie : B_LegStrapBag_coyote_F
	{
		scope = 1;
		scopeCurator = 1;
		ScopeArsenal = 1;

		class TransportItems
		{
			MACRO_ADDITEM(ToolKit, 1);
		};
	};

// Insurgents
	class 4thot_u_opfor;

	class 4thot_u_fmm_rifle : 4thot_u_opfor
	{
		scope = 2;

		displayName = "Insurgent (AR)";
		faction = "4thot_nmr_fmm";
		editorSubcategory = "EdSubcat_Personnel";

		uniformClass = "OPTRE_Ins_ER_uniform_GGgrey";
		linkedItems[] = {
			"V_TacChestrig_oli_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_TacChestrig_oli_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "";
		weapons[] = {
			"OPTRE_MA5A", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5A", "Throw", "Put"
		};
		items[] = {
			stditem
		};
		RespawnItems[] = {
			stditem
		};
		magazines[] = {
			"kat_Painkiller", "4thot_g_hef_h", tx_5("OPTRE_32Rnd_762x51_Mag_Tracer")
		};
		respawnMagazines[] = {
			"kat_Painkiller", "4thot_g_hef_h", tx_5("OPTRE_32Rnd_762x51_Mag_Tracer")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;removeGoggles _unit;
				_head = [['H_Booniehat_oli', '1'], ['H_Booniehat_khk', '1'], ['H_Cap_oli', '1'], ['H_Bandanna_khk', '1'], ['H_Cap_grn', '1'], ['H_Bandanna_sgg', '1'], ['H_Cap_blk', '1'], ['H_Bandanna_cbr', '1'], ['OPTRE_UNSC_Watchcap', '1'], ['G_Balaclava_blk', '0'], ['H_Shemag_olive', '2'], ['G_Balaclava_oli', '0'], ['H_ShemagOpen_tan', '2']];_face = ['G_Bandanna_khk', 'G_Squares', 'G_Aviator', 'G_Bandanna_aviator', 'G_Bandanna_blk', 'G_Bandanna_oli', 'G_Lowprofile', '', ''];_headrnd = _head call BIS_fnc_selectRandom;switch (_headrnd select 1) do{
					case '1':{
						_unit addHeadgear (_headrnd select 0);
						_facernd = _face call BIS_fnc_selectRandom;_unit addGoggles _facernd;
					};
					case '0':{
						_unit addGoggles (_headrnd select 0);
					};
					case '2':{
						_unit addHeadgear (_headrnd select 0);
					};
				};
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco', 'optic_Aco', 'optic_Aco', 'optic_MRCO', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_rifle_at : 4thot_u_fmm_rifle
	{
		displayName = "Insurgent (AT)";
		icon = "iconManAT";

		uniformClass = "U_I_C_Soldier_Bandit_3_F_nmr";
		linkedItems[] = {
			"V_BandollierB_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_MA5A", "4thot_w_ld_m24_loaded", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5A", "4thot_w_ld_m24_loaded", "Throw", "Put"
		};
	};

	class 4thot_u_fmm_rifle_br : 4thot_u_fmm_rifle
	{
		displayName = "Insurgent (BR)";

		uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
		linkedItems[] = {
			"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_BR45_Black", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_BR45_Black", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", "4thot_g_he_l", tx_4("OPTRE_36Rnd_95x40_Mag_Tracer")
		};
		respawnMagazines[] = {
			"kat_Painkiller", "4thot_g_he_l", tx_4("OPTRE_36Rnd_95x40_Mag_Tracer")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;removeGoggles _unit;
				_head = [['H_Shemag_olive_hs', '2'], ['H_Bandanna_khk_hs', '1'], ['H_Booniehat_khk_hs', '1'], ['H_Watchcap_camo', '1'], ['H_Watchcap_khk', '1'], ['H_Watchcap_cbr', '1']];_headrnd = _head call BIS_fnc_selectRandom;switch (_headrnd select 1) do{
					case '1':{
						_unit addHeadgear (_headrnd select 0);
						_facernd = _face call BIS_fnc_selectRandom;_unit addGoggles _facernd;
					};
					case '0':{
						_unit addGoggles (_headrnd select 0);
					};
					case '2':{
						_unit addHeadgear (_headrnd select 0);
					};
				};
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco', 'optic_MRCO', 'optic_MRCO', 'OPTRE_M393_ACOG', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_gradr : 4thot_u_fmm_rifle
	{
		displayName = "Grunt (GL)";

		backpack = "B_Messenger_Coyote_F_e_fmm_gradr";
		uniformClass = "OPTRE_Ins_ER_uniform_GGod";
		linkedItems[] = {
			"V_HarnessOGL_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_HarnessOGL_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_MA5AGL", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5AGL", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", tx_4("OPTRE_32Rnd_762x51_Mag_Tracer"), "4thot_u_40x57_1_ap"
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_4("OPTRE_32Rnd_762x51_Mag_Tracer"), "4thot_u_40x57_1_ap"
		};

		class EventHandlers : EventHandlers
		{
			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco', 'optic_MRCO', '', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_mmgun : 4thot_u_fmm_rifle
	{
		displayName = "Gunner (MG)";
		icon = "iconManMG";

		backpack = "B_FieldPack_green_F_e_fmm_mmgun";
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
		linkedItems[] = {
			"V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_M247", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_M247", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", tx_3("OPTRE_100Rnd_762x51_Box_Tracer")
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_3("OPTRE_100Rnd_762x51_Box_Tracer")
		};

		class EventHandlers : EventHandlers
		{
			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco', 'optic_MRCO', 'optic_MRCO', 'OPTRE_M393_ACOG', 'OPTRE_M393_ACOG', 'optic_Aco'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;_unit addPrimaryWeaponItem 'bipod_01_F_blk';";
			};
		};
	};

	class 4thot_u_fmm_marks : 4thot_u_fmm_rifle
	{
		displayName = "Hunter (MR)";

		backpack = "";
		uniformClass = "U_I_L_Uniform_01_tshirt_olive_F_nmr";
		linkedItems[] = {
			"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "ACE_Yardage450"
		};
		respawnLinkedItems[] = {
			"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "ACE_Yardage450"
		};
		weapons[] = {
			"OPTRE_M295_BMR", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_M295_BMR", "Throw", "Put"
		};
		items[] = {
			stditem, "ACE_RangeCard"
		};
		RespawnItems[] = {
			stditem, "ACE_RangeCard"
		};
		magazines[] = {
			"kat_Painkiller", tx_5("OPTRE_25Rnd_762x51_Mag")
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_5("OPTRE_25Rnd_762x51_Mag")
		};

		class EventHandlers : EventHandlers
		{
			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_SOS', 'optic_SOS', 'OPTRE_BMR_Scope', 'OPTRE_BR55HB_Scope_Grey', 'OPTRE_BR55HB_Scope_Grey', 'optic_MRCO'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;_unit addPrimaryWeaponItem 'bipod_01_F_blk';";
			};
		};
	};

	class 4thot_u_fmm_medic : 4thot_u_fmm_rifle
	{
		displayName = "Surgeon";
		icon = "iconManMedic";
		attendant = 1;

		uniformClass = "OPTRE_Ins_ER_jacket_surgeon2";
		linkedItems[] = {
			"V_LegStrapBag_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_LegStrapBag_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "B_Messenger_Gray_F_e_fmm_medic";
		weapons[] = {
			"optre_hgun_sas10_F_a_lsr", "Throw", "Put"
		};
		respawnWeapons[] = {
			"optre_hgun_sas10_F_a_lsr", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", tx_5("16Rnd_10mm_Ball"), tx_2("4thot_g_smk_urf_b")
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_5("16Rnd_10mm_Ball"), tx_2("4thot_g_smk_urf_b")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;removeGoggles _unit;
				_head = ['H_Booniehat_oli','H_Booniehat_khk','H_Cap_oli','H_Bandanna_khk','H_Cap_grn','H_Bandanna_sgg','H_Cap_blk','H_Bandanna_cbr','OPTRE_UNSC_Watchcap'];_headrnd = _head call BIS_fnc_selectRandom;
						_unit addHeadgear _headrnd;
						_unit addGoggles G_Respirator_white_F;
				";
			};

			class fmm_4medic
			{
				init ="_unit = _this select 0;
					   _bl250 = ['kat_bloodIV_O_250','kat_bloodIV_O_N_250','kat_bloodIV_A_250','kat_bloodIV_A_N_250','kat_bloodIV_AB_250','kat_bloodIV_AB_N_250','kat_bloodIV_B_250','kat_bloodIV_B_N_250'];
					   _bl500 = ['kat_bloodIV_O_500','kat_bloodIV_O_N_500','kat_bloodIV_A_500','kat_bloodIV_A_N_500','kat_bloodIV_AB_500','kat_bloodIV_AB_N_500','kat_bloodIV_B_500','kat_bloodIV_B_N_500'];
					   _bl1 = _bl250 call BIS_fnc_selectRandom;_bl2 = _bl250 call BIS_fnc_selectRandom;_bl3 = _bl250 call BIS_fnc_selectRandom;_bl4 = _bl500 call BIS_fnc_selectRandom;_bl5 = _bl500 call BIS_fnc_selectRandom;
					   _unit addItemToBackpack _bl1;_unit addItemToBackpack _bl2;_unit addItemToBackpack _bl3;_unit addItemToBackpack _bl4;_unit addItemToBackpack _bl5;
					   ";
			};
		};
	};

	class 4thot_u_fmm_engie : 4thot_u_fmm_rifle
	{
		displayName = "Mechanic";
		icon = "iconManEngineer";
		engineer = 1;

		uniformClass = "U_C_Mechanic_01_F_nmr";
		linkedItems[] = {
			"V_TacChestrig_cbr_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_TacChestrig_cbr_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "B_LegStrapBag_coyote_F_e_fmm_engie";
		weapons[] = {
			"OPTRE_M45TAC", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_M45TAC", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller",tx_7("OPTRE_6Rnd_8Gauge_Pellets"),tx_3("OPTRE_6Rnd_8Gauge_Slugs"),tx_2("4thot_g_he_l"),tx_2("OPTRE_c7_remote_throwable_sticky_mag")
		};
		respawnMagazines[] = {
			"kat_Painkiller",tx_7("OPTRE_6Rnd_8Gauge_Pellets"),tx_3("OPTRE_6Rnd_8Gauge_Slugs"),tx_2("4thot_g_he_l"),tx_2("OPTRE_c7_remote_throwable_sticky_mag")
		};

		class EventHandlers : EventHandlers
		{
			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco_smg', 'optic_Aco_smg', 'OPTRE_M12_Laser', 'OPTRE_M12_Laser', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_guer : 4thot_u_fmm_rifle
	{
		displayName = "Guerilla";
		faction = "4thot_nmr_fmm";
		editorSubcategory = "EdSubcat_Personnel";
		icon = "iconManVirtual";

		uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
		linkedItems[] = {
			"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "";
		weapons[] = {
			"Throw", "Put"
		};
		respawnWeapons[] = {
			"Throw", "Put"
		};
		items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;
				_unif = ['OPTRE_Ins_ER_jacket_surplus_brown', 'OPTRE_Ins_ER_jacket_surplus_OD', 'OPTRE_Ins_ER_jacket_surplus_redshirt', 'OPTRE_Ins_ER_jacket_od_surplus', 'U_C_E_LooterJacket_01_F', 'U_BG_Guerilla3_1'];_unifrnd = _unif call BIS_fnc_selectRandom;_unit forceAddUniform _unifrnd;removeGoggles _unit;_head = [['H_Booniehat_oli', '1'], ['H_Booniehat_khk', '1'], ['H_Cap_oli', '1'], ['H_Bandanna_khk', '1'], ['H_Cap_grn', '1'], ['H_Bandanna_sgg', '1'], ['H_Cap_blk', '1'], ['H_Bandanna_cbr', '1'], ['OPTRE_UNSC_Watchcap', '1'], ['G_Balaclava_blk', '0'], ['H_Shemag_olive', '2'], ['G_Balaclava_oli', '0'], ['H_ShemagOpen_tan', '2']];_face = ['G_Bandanna_khk', 'G_Squares', 'G_Aviator', 'G_Bandanna_aviator', 'G_Bandanna_blk', 'G_Bandanna_oli', 'G_Lowprofile', '', ''];_headrnd = _head call BIS_fnc_selectRandom;switch (_headrnd select 1) do{
					case '1':{
						_unit addHeadgear (_headrnd select 0);
						_facernd = _face call BIS_fnc_selectRandom;_unit addGoggles _facernd;
					};
					case '0':{
						_unit addGoggles (_headrnd select 0);
					};
					case '2':{
						_unit addHeadgear (_headrnd select 0);
					};
				};
				";
			};

			class fmm_2equip
			{
				init ="_unit = _this select 0;
				_vest = ['V_BandollierB_oli', 'V_BandollierB_oli', 'V_LegStrapBag_olive_F', 'V_BandollierB_rgr', 'V_BandollierB_rgr', 'V_LegStrapBag_coyote_F', 'V_LegStrapBag_black_F'];_vestrnd = _vest call BIS_fnc_selectRandom;_unit addVest _vestrnd;_pack = ['4thot_b_e_cb1_eb_gue', '4thot_b_e_mes_gry_fmm_gue', '4thot_b_e_cb1_sr_fmm_gue', '4thot_b_e_mes_blk_fmm_gue', '4thot_b_e_cb1_ev_fmm_gue', '4thot_b_e_mes_oli_fmm_gue', '4thot_b_e_tp_blk_fmm_gue', '4thot_b_e_fp_blk_fmm_gue'];_packrnd = _pack call BIS_fnc_selectRandom;_unit addBackpackGlobal _packrnd;_grd1 = ['4thot_g_hef_h', '4thot_g_he_l', '4thot_g_he_l', '4thot_g_he_l', '4thot_g_heat', '4thot_g_smk_urf_w', '4thot_g_smk_urf_w', '4thot_g_smk_urf_r', '4thot_g_smk_urf_g', '4thot_g_smk_urf_o'];_grd2 = ['4thot_g_smk_urf_w', '4thot_g_smk_urf_r', '4thot_g_smk_urf_g', '4thot_g_smk_urf_o'];_grd1rnd = _grd1 call BIS_fnc_selectRandom;_grd2rnd = _grd2 call BIS_fnc_selectRandom;_unit addItemToVest _grd1rnd;_unit addItemToVest _grd2rnd;";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_weap = ['0', '0', '0', '1', '2', '2', '3', '4'];_weaprnd = _weap call BIS_fnc_selectRandom;switch _weaprnd do{
					case '0':{
						_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';
						_unit addWeaponGlobal 'OPTRE_MA5A';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_optc = ['OPTRE_MA5_BUIS', 'optic_Aco', 'optic_Aco', 'optic_MRCO', '', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '1':{
						_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';
						_unit addWeaponGlobal 'OPTRE_BR45_Black';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_optc = ['OPTRE_MA5_BUIS', 'optic_Aco', 'optic_SOS', 'optic_MRCO', '', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '2':{
						_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';
						_unit addWeaponGlobal 'OPTRE_MA5K';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_optc = ['OPTRE_MA5_BUIS', 'optic_Aco', 'optic_Aco', 'optic_MRCO', '', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '3':{
						_unit addMagazineGlobal '2Rnd_12Gauge_Slug';
						_unit addWeaponGlobal 'sgun_HunterShotgun_01_F';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal '2Rnd_12Gauge_Slug';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';_unit addMagazineGlobal 'ACE_2Rnd_12Gauge_Pellets_No0_Buck';
					};
					case '4':{
						_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';
						_unit addWeaponGlobal 'srifle_DMR_06_hunter_F';_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';_unit addMagazineGlobal '10Rnd_Mk14_762x51_Mag';_unit addPrimaryWeaponItem 'optic_KHS_old';
					};
				};
				";
			};
		};
	};

	class 4thot_u_fmm_rebel : 4thot_u_fmm_guer
	{
		displayName = "Rebel";

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;
				_unif = ['OPTRE_Ins_ER_rolled_OD_crimson', 'OPTRE_Ins_ER_rolled_surplus_black', 'OPTRE_Ins_ER_rolled_surplus_crimson', 'OPTRE_Ins_ER_uniform_GGgrey', 'OPTRE_Ins_ER_uniform_GGod', 'U_C_Uniform_Farmer_01_F_nmr', 'U_I_L_Uniform_01_tshirt_olive_F_nmr', 'U_I_C_Soldier_Bandit_3_F_nmr', 'U_C_Mechanic_01_F_nmr'];_unifrnd = _unif call BIS_fnc_selectRandom;_unit forceAddUniform _unifrnd;removeGoggles _unit;_head = [['H_Booniehat_oli', '1'], ['H_Booniehat_khk', '1'], ['H_Cap_oli', '1'], ['H_Bandanna_khk', '1'], ['H_Cap_grn', '1'], ['H_Bandanna_sgg', '1'], ['H_Cap_blk', '1'], ['H_Bandanna_cbr', '1'], ['OPTRE_UNSC_Watchcap', '1'], ['G_Balaclava_blk', '0'], ['H_Shemag_olive', '2'], ['G_Balaclava_oli', '0'], ['H_ShemagOpen_tan', '2']];_face = ['G_Bandanna_khk', 'G_Squares', 'G_Aviator', 'G_Bandanna_aviator', 'G_Bandanna_blk', 'G_Bandanna_oli', 'G_Lowprofile', '', ''];_headrnd = _head call BIS_fnc_selectRandom;switch (_headrnd select 1) do{
					case '1':{
						_unit addHeadgear (_headrnd select 0);
						_facernd = _face call BIS_fnc_selectRandom;_unit addGoggles _facernd;
					};
					case '0':{
						_unit addGoggles (_headrnd select 0);
					};
					case '2':{
						_unit addHeadgear (_headrnd select 0);
					};
				};
				";
			};

			class fmm_2equip
			{
				init ="_unit = _this select 0;
				_vest = ['V_BandollierB_oli', 'V_TacVest_oli', 'V_TacVest_oli', 'V_TacChestrig_oli_F', 'V_TacChestrig_oli_F', 'V_TacVestIR_blk', 'V_Chestrig_oli', 'V_HarnessO_brn', 'V_HarnessO_gry'];_vestrnd = _vest call BIS_fnc_selectRandom;_unit addVest _vestrnd;_pack = ['4thot_b_e_cb1_eb_gue', '4thot_b_e_mes_gry_fmm_gue', '4thot_b_e_cb1_sr_fmm_gue', '4thot_b_e_mes_blk_fmm_gue', '4thot_b_e_cb1_ev_fmm_gue', '4thot_b_e_mes_oli_fmm_gue', '4thot_b_e_tp_blk_fmm_gue', '4thot_b_e_fp_blk_fmm_gue'];_packrnd = _pack call BIS_fnc_selectRandom;_unit addBackpackGlobal _packrnd;_grd1 = ['4thot_g_hef_h', '4thot_g_he_l', '4thot_g_he_l', '4thot_g_he_l', '4thot_g_heat', '4thot_g_smk_urf_w', '4thot_g_smk_urf_w', '4thot_g_smk_urf_r', '4thot_g_smk_urf_g', '4thot_g_smk_urf_o'];_grd2 = ['4thot_g_smk_urf_w', '4thot_g_smk_urf_r', '4thot_g_smk_urf_g', '4thot_g_smk_urf_o', '4thot_g_he_l'];_grd1rnd = _grd1 call BIS_fnc_selectRandom;_grd2rnd = _grd2 call BIS_fnc_selectRandom;_unit addItemToVest _grd1rnd;_unit addItemToVest _grd2rnd;";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_weap = ['0', '0', '0', '1', '1', '2', '2', '2', '3', '4'];_weaprnd = _weap call BIS_fnc_selectRandom;switch _weaprnd do{
					case '0':{
						_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';
						_unit addWeaponGlobal 'OPTRE_MA5A';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_optc = ['optic_Aco', 'optic_Aco', 'optic_MRCO', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '1':{
						_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';
						_unit addWeaponGlobal 'OPTRE_BR45_Black';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_optc = ['optic_Aco', 'optic_SOS', 'optic_MRCO', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '2':{
						_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';
						_unit addWeaponGlobal 'OPTRE_MA5K';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag';_optc = ['optic_Aco', 'optic_Aco', 'optic_MRCO', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '3':{
						_unit addMagazineGlobal 'OPTRE_12Rnd_12Gauge_Pellets';
						_unit addWeaponGlobal 'OPTRE_CQS48S_Chihuahua_Automatic_Innie';_unit addMagazineGlobal 'OPTRE_12Rnd_12Gauge_Pellets';_unit addMagazineGlobal 'OPTRE_12Rnd_12Gauge_Pellets';_unit addMagazineGlobal 'OPTRE_12Rnd_12Gauge_Pellets';_optc = ['optic_Aco', '', '', '', '', ''];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
					};
					case '4':{
						_unit addMagazineGlobal '4thot_m_858x70_20_apr_t3';
						_unit addWeaponGlobal '4thot_w_rm_cmdo2_blk';_unit addMagazineGlobal '4thot_m_858x70_20_apr_t3';_unit addMagazineGlobal '4thot_m_858x70_20_apr_t3';_unit addMagazineGlobal '4thot_m_858x70_20_apr_t3';_optc = ['optic_Aco', 'OPTRE_HMG38_CarryHandle', 'OPTRE_HMG38_CarryHandle'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;_unit addPrimaryWeaponItem 'bipod_01_F_blk';
					};
				};
				";
			};
		};
	};

//Uniformed
	class 4thot_u_fmm_u_rifle : 4thot_u_fmm_guer
	{
		displayName = "Rifleman (AR)";
		faction = "4thot_nmr_fmm";
		editorSubcategory = "4thot_men_mil";
		icon = "iconMan";

		uniformClass = "OPTRE_Ins_ER_uniform_GGgrey";
		backpack = "B_FieldPack_green_F_e_fmm_u_rifle";
		weapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		magazines[] = {
			"OPTRE_32Rnd_762x51_Mag_Tracer","16Rnd_10mm_Ball"
		};
		respawnMagazines[] = {
			"OPTRE_32Rnd_762x51_Mag_Tracer","16Rnd_10mm_Ball"
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;
				_unif = ['OPTRE_Ins_ER_uniform_GAgreen', 'U_BG_Guerrilla_6_1', 'OPTRE_Ins_ER_uniform_GAtan'];
				_unifrnd = _unif call BIS_fnc_selectRandom;_unit forceAddUniform _unifrnd;removeGoggles _unit;
				_head = ['H_Shemag_olive_hs','H_Bandanna_khk_hs','H_Booniehat_khk_hs','H_MilCap_grn','OPTRE_h_PatrolCap_Green','OPTRE_h_PatrolCap_Brown','H_Watchcap_camo','H_Watchcap_khk','H_Watchcap_cbr'];
				_headrnd = _head call BIS_fnc_selectRandom;
				_unit addHeadgear _headrnd;_unit addGoggles 'OPTRE_HUD_r_Glasses';
				";
			};

			class fmm_2equip
			{
				init ="_unit = _this select 0;
				_vest = ['V_CarrierRigKBT_01_light_Olive_F','V_SmershVest_01_F','V_HarnessO_brn','V_CarrierRigKBT_01_light_Olive_F','V_SmershVest_01_F'];
				_vestrnd = _vest call BIS_fnc_selectRandom;_unit addVest _vestrnd;
				_ogrd = ['4thot_g_hef_h', '4thot_g_he_l', '4thot_g_he_l', '4thot_g_he_l'];
				_dgrd = ['4thot_g_smk_urf_w', '4thot_g_smk_urf_r', '4thot_g_smk_urf_g', '4thot_g_smk_urf_o'];
				_og1 = _ogrd call BIS_fnc_selectRandom;_og2 = _ogrd call BIS_fnc_selectRandom;_dg1 = _dgrd call BIS_fnc_selectRandom;
				_unit addMagazineGlobal _og1;_unit addMagazineGlobal _og2;_unit addMagazineGlobal _dg1;_unit addMagazineGlobal '4thot_g_smk_urf_w';";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_Aco', 'optic_MRCO', 'OPTRE_M393_EOTECH', 'OPTRE_M393_EOTECH', 'OPTRE_M12_Optic_Red', 'OPTRE_M392_Scope'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
				_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_32Rnd_762x51_Mag_Tracer';_unit addMagazineGlobal '16Rnd_10mm_Ball';";
			};
		};
	};

	class 4thot_u_fmm_u_rifle_at : 4thot_u_fmm_u_rifle
	{
		displayName = "Rifleman (AT)";
		weapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "4thot_w_ld_m24", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "4thot_w_ld_m24", "Throw", "Put"
		};
	};

	class 4thot_u_fmm_u_rifle_br : 4thot_u_fmm_u_rifle
	{
		displayName = "Rifleman (BR)";

		weapons[] = {
			"OPTRE_BR45_Black", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_BR45_Black", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		magazines[] = {
			"OPTRE_36Rnd_95x40_Mag_Tracer","16Rnd_10mm_Ball"
		};
		respawnMagazines[] = {
			"OPTRE_36Rnd_95x40_Mag_Tracer","16Rnd_10mm_Ball"
		};

		class EventHandlers : EventHandlers
		{
			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['optic_MRCO', 'OPTRE_BR55HB_Scope', 'OPTRE_M393_EOTECH', 'OPTRE_M392_Scope', 'OPTRE_M12_Optic_Red', 'OPTRE_M392_Scope'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
				_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal 'OPTRE_36Rnd_95x40_Mag_Tracer';_unit addMagazineGlobal '16Rnd_10mm_Ball';";
			};
		};
	};

	class 4thot_u_fmm_u_gradr : 4thot_u_fmm_rifle	//WIP
	{
		scope = 2;

		displayName = "Grenadier";
		faction = "4thot_nmr_fmm";
		editorSubcategory = "4thot_men_mil";

		uniformClass = "OPTRE_Ins_ER_uniform_GAtan";
		linkedItems[] = {
			"V_HarnessOGL_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_HarnessOGL_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "";
		weapons[] = {
			"OPTRE_BR45GL_black", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_BR45GL_black", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", tx_5("OPTRE_36Rnd_95x40_Mag_Tracer"), tx_2("16Rnd_10mm_Ball"),"4thot_g_smk_urf_w"
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_5("OPTRE_36Rnd_95x40_Mag_Tracer"), tx_2("16Rnd_10mm_Ball"),"4thot_g_smk_urf_w"
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;
				_head = ['H_Shemag_olive_hs','H_Bandanna_khk_hs','H_Booniehat_khk_hs','H_MilCap_grn','OPTRE_h_PatrolCap_Green','OPTRE_h_PatrolCap_Brown','H_Watchcap_camo','H_Watchcap_khk','H_Watchcap_cbr'];
				_headrnd = _head call BIS_fnc_selectRandom;
				_unit addHeadgear _headrnd;_unit addGoggles 'OPTRE_HUD_r_Glasses';
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['Optre_Recon_Sight_Red', 'OPTRE_M7_Sight', 'OPTRE_M12_Optic_Red', 'OPTRE_M393_EOTECH', 'OPTRE_M12_Optic_Red', 'OPTRE_M392_Scope'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_u_tlead : 4thot_u_fmm_u_gradr
	{
		displayName = "Team Leader";
		faction = "4thot_nmr_fmm";
		icon = "iconManLeader";

		uniformClass = "OPTRE_Ins_ER_uniform_GAgreen";
		backpack = "OPTRE_ANPRC_521_URF";
		linkedItems[] = {
			"V_SmershVest_01_radio_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"V_SmershVest_01_radio_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		respawnWeapons[] = {
			"OPTRE_MA5A", "optre_hgun_sas10_F_a_sop", "Throw", "Put"
		};
		magazines[] = {
			"kat_Painkiller", tx_8("OPTRE_32Rnd_762x51_Mag_Tracer"), tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};
		respawnMagazines[] = {
			"kat_Painkiller", tx_8("OPTRE_32Rnd_762x51_Mag_Tracer"), tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;
				_head = ['H_Shemag_olive_hs','H_Bandanna_khk_hs','H_Booniehat_khk_hs','H_MilCap_grn','OPTRE_h_PatrolCap_Green','OPTRE_h_PatrolCap_Brown','H_Watchcap_camo','H_Watchcap_khk','H_Watchcap_cbr'];
				_headrnd = _head call BIS_fnc_selectRandom;
				_unit addHeadgear _headrnd;_unit addGoggles 'OPTRE_HUD_r_Glasses';
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['Optre_Recon_Sight_Red', 'OPTRE_M7_Sight', 'OPTRE_M12_Optic_Red', 'OPTRE_M393_EOTECH', 'OPTRE_M12_Optic_Red', 'OPTRE_M392_Scope'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;";
			};
		};
	};

	class 4thot_u_fmm_u_spotr : 4thot_u_fmm_u_gradr
	{
		displayName = "Spotter";

		uniformClass = "OPTRE_Ins_ER_uniform_GAgreen";
		linkedItems[] = {
			"H_Shemag_olive_hs","V_SmershVest_01_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"H_Shemag_olive_hs","V_SmershVest_01_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		backpack = "";
		weapons[] = {
			"OPTRE_BR45_Black_a_slsr", "optre_hgun_sas10_F_a_sop", "Throw", "Put","Binocular"
		};
		respawnWeapons[] = {
			"OPTRE_BR45_Black_a_slsr", "optre_hgun_sas10_F_a_sop", "Throw", "Put","Binocular"
		};
		items[] = {
			stditem,"ACE_RangeCard","ACE_SpottingScope"
		};
		RespawnItems[] = {
			stditem,"ACE_RangeCard","ACE_SpottingScope"
		};
		magazines[] = {
			"kat_Painkiller",tx_7("OPTRE_36Rnd_95x40_Mag"),tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};
		respawnMagazines[] = {
			"kat_Painkiller",tx_7("OPTRE_36Rnd_95x40_Mag"),tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;_unit addGoggles 'OPTRE_HUD_r_Glasses';
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['OPTRE_BR55HB_Scope', 'OPTRE_BR55HB_Scope', 'OPTRE_BMR_Scope', 'OPTRE_M392_Scope', 'OPTRE_BMR_Scope', 'OPTRE_M392_Scope'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
				";
			};
		};
	};

	class 4thot_u_fmm_u_snipr : 4thot_u_fmm_u_spotr
	{
		displayName = "Sniper";

		backpack = "";
		linkedItems[] = {
			"OPTRE_UNSC_CH252_Helmet3_TRO","V_SmershVest_01_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		respawnLinkedItems[] = {
			"OPTRE_UNSC_CH252_Helmet3_TRO","V_SmershVest_01_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG"
		};
		weapons[] = {
			"OPTRE_SRM77_S1_Green_a_bp", "optre_hgun_sas10_F_a_lsr", "Throw", "Put","Binocular"
		};
		respawnWeapons[] = {
			"OPTRE_SRM77_S1_Green_a_bp", "optre_hgun_sas10_F_a_lsr", "Throw", "Put","Binocular"
		};
		items[] = {
			stditem,"ACE_RangeCard","ACE_Kestrel4500","ACE_Tripod"
		};
		RespawnItems[] = {
			stditem,"ACE_RangeCard","ACE_Kestrel4500","ACE_Tripod"
		};
		magazines[] = {
			"kat_Painkiller",tx_12("OPTRE_5Rnd_127x99_noTracer"),tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};
		respawnMagazines[] = {
			"kat_Painkiller",tx_12("OPTRE_5Rnd_127x99_noTracer"),tx_2("16Rnd_10mm_Ball"),"4thot_g_hef_h",tx_2("4thot_g_smk_urf_w")
		};

		class EventHandlers
		{
			class fmm_1outfit
			{
				init ="_unit = _this select 0;_unit addGoggles 'G_Bandanna_oli';
				";
			};

			class fmm_3weapon
			{
				init ="_unit = _this select 0;
				_optc = ['OPTRE_SRM_Sight', 'optic_LRPS', 'optic_LRPS', 'optic_LRPS', 'optic_KHS_blk', 'optic_KHS_blk'];_optcrnd = _optc call BIS_fnc_selectRandom;_unit addPrimaryWeaponItem _optcrnd;
				";
			};
		};
	};
};
/*
class CfgGroups
{
	class east
	{
		class 4thot_men_mar
		{
			name = "Madrigal Republican Marines (Space)";
			class 4thot_men_mar_inf
			{
				name = "Infantry";
				class 4thot_men_mar_inf_ldr
				{
					side = 0;
					name = "Leader Team";
					faction = "4thot_nmr_mrm";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "4thot_u_mrm_sleader";
						rank = "LIEUTENANT";
						position[] = {
							2, 2, 0
						};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_u_mrm_marks";
						rank = "SERGEANT";
						position[] = {
							0, 0, 0
						};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_u_mrm_medic";
						rank = "CORPORAL";
						position[] = {
							-2, 0, 0
						};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-4, 0, 0
						};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-6, 0, 0
						};
					};
				};

				class 4thot_men_mar_inf_ast
				{
					side = 0;
					name = "Assault Team";
					faction = "4thot_nmr_mrm";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "4thot_u_mrm_tleader";
						rank = "SERGEANT";
						position[] = {
							2, 2, 0
						};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_u_mrm_lmg";
						rank = "CORPORAL";
						position[] = {
							0, 0, 0
						};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_u_mrm_sgr";
						rank = "CORPORAL";
						position[] = {
							-2, 0, 0
						};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-4, 0, 0
						};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-6, 0, 0
						};
					};
				};

				class 4thot_men_mar_inf_sup
				{
					side = 0;
					name = "Support Team";
					faction = "4thot_nmr_mrm";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "4thot_u_mrm_tleader";
						rank = "SERGEANT";
						position[] = {
							2, 2, 0
						};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_u_mrm_mmgun";
						rank = "CORPORAL";
						position[] = {
							0, 0, 0
						};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_u_mrm_ats";
						rank = "CORPORAL";
						position[] = {
							-2, 0, 0
						};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-4, 0, 0
						};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-6, 0, 0
						};
					};
				};

				class 4thot_men_mar_inf_sqd
				{
					side = 0;
					name = "Squad";
					faction = "4thot_nmr_mrm";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "4thot_u_mrm_sleader";
						rank = "LIEUTENANT";
						position[] = {
							2, 2, 0
						};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_u_mrm_medic";
						rank = "CORPORAL";
						position[] = {
							0, 0, 0
						};
					};
					class Unit2
					{
						side = 1;
						vehicle = "4thot_u_mrm_lmg";
						rank = "CORPORAL";
						position[] = {
							-2, 0, 0
						};
					};
					class Unit3
					{
						side = 1;
						vehicle = "4thot_u_mrm_ats";
						rank = "CORPORAL";
						position[] = {
							-4, 0, 0
						};
					};
					class Unit4
					{
						side = 1;
						vehicle = "4thot_u_mrm_sgr";
						rank = "SERGEANT";
						position[] = {
							-6, 0, 0
						};
					};
					class Unit5
					{
						side = 1;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-8, 0, 0
						};
					};
					class Unit6
					{
						side = 1;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-10, 0, 0
						};
					};
					class Unit7
					{
						side = 1;
						vehicle = "4thot_u_mrm_rifleman";
						rank = "PRIVATE";
						position[] = {
							-12, 0, 0
						};
					};
				};
			};
		};
	};
};
*/