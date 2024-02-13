class OPTRE_Ammo_Rack_Weapons;
class OPTRE_Ammo_SupplyPod_Empty: OPTRE_Ammo_Rack_Weapons
{
    class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
	class TransportItems
	{
	};
};
class OPTRE_Ammo_SupplyPod_Test: OPTRE_Ammo_SupplyPod_Empty
{
	dlc="ARMCO";
	displayName="[UNSC] Supply Pod (Test)";
	author="Belhun";
	hiddenselectionstextures[]=
	{
		"optre_misc\crates\data\OPTRE_SRSC_Pod.paa"
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
	class TransportItems
	{
        class xx_ItemcTab
		{
			name="ItemcTab";
			count=1;
		};
        class xx_kat_IV_16
		{
			name="kat_IV_16";
			count=40;
		};
        class xx_kat_aatKit
		{
			name="kat_aatKit";
			count=10;
		};
        class xx_ACE_fieldDressing
		{
			name="ACE_fieldDressing";
			count=40;
		};
        class xx_ACE_elasticBandage
		{
			name="ACE_elasticBandage";
			count=40;
		};
        class xx_ACE_packingBandage
		{
			name="ACE_packingBandage";
			count=40;
		};
        class xx_ACE_quikclot
		{
			name="ACE_quikclot";
			count=40;
		};
        class xx_ACE_bloodIV
		{
			name="ACE_bloodIV";
			count=20;
		};
	};
};
class Module_F;
class Module_OPTRE_PelicanSupplyDrop: Module_F
{
    class Arguments
    {
        class box1
        {
            defaultValue = "OPTRE_Ammo_SupplyPod_NEW";
            class values
            {
                class n1
                {
                    name = "none";
                    value = "none";
                };
                class n2
                {
                    name = "Random Supply Pod";
                };
                class n3
                {
                    name = "Testing Supply Pod";
                    value = "OPTRE_Ammo_SupplyPod_Test";
                };
            };
        };
    };
};