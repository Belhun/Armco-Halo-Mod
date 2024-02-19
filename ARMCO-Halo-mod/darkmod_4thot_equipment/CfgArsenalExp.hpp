class XtdGearInfos
{
    class CfgWeapons
	{
    //Squad
        class 4thot_h_ech252_oli_alpha_dp
        {
            Model="4thot_h_ech252";
            Squads="Alpha";
            polar="polar0";
        };
        class 4thot_h_ech252_oli_sabre_dp
        {
            Model="4thot_h_ech252";
            Squads="Sabre";
            polar="polar0";
        };
        class 4thot_h_ech252_oli_zulu_dp
        {
            Model="4thot_h_ech252";
            Squads="Zulu";
            polar="polar0";
        };
        class 4thot_h_ech252_oli_phnix_dp
        {
            Model="4thot_h_ech252";
            Squads="Phoenix";
            polar="polar0";
        };

        class 4thot_h_ech252_oli_alpha
        {
            Model="4thot_h_ech252";
            Squads="Alpha";
            polar="polar1";
        };
        class 4thot_h_ech252_oli_sabre
        {
            Model="4thot_h_ech252";
            Squads="Sabre";
            polar="polar1";
        };
        class 4thot_h_ech252_oli_zulu
        {
            Model="4thot_h_ech252";
            Squads="Zulu";
            polar="polar1";
        };
        class 4thot_h_ech252_oli_phnix
        {
            Model="4thot_h_ech252";
            Squads="Phoenix";
            polar="polar1";
        };
    //Custom
    //ODST
    };
};

class XtdGearModels
{
    class CfgWeapons
	{
        class 4thot_h_ech252
		{
			options[]=
			{
				"Squads",
                "polar"
			};
			label="[ARMCO] Squad ECH252";
			class Squads
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Squads";
				values[]=
				{
					"Alpha",
					"Sabre",
					"Phoenix",
					"Zulu"
				};
				class Alpha
				{
					label="Alpha";
				};
				class Sabre
				{
					label="Sabre";
				};
				class Phoenix
				{
					label="Phoenix";
				};
				class Zulu
				{
					label="Zulu";
				};
			};

            class polar
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Polarization";
				values[]=
				{
					"polar0",
					"polar1"
				};
                class polar0
				{
					label="OFF";
				};
                class polar1
				{
					label="ON";
				};
			};
		};

     /*
        class 4thot_h_ech252
		{
			options[]=
			{
                "color",
				"squad",
                "role",
                "polar"
			};
			label="[ARMCO] ECH252";

            class color
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Squad";
				values[]=
				{
					"tan",
					"oli",
                    "wht",
                    "gry",
				};
				class tan
				{
					label="Tan";
				};
				class oli
				{
					label="Olive";
				};
				class wht
				{
					label="White";
				};
                class gry
				{
					label="Grey";
				};
			};

			class squad
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Squad";
				values[]=
				{
					"Alpha",
					"Sabre",
					"Phoenix",
					"Zulu"
				};
				class alpha
				{
					label="Alpha";
				};
				class sabre
				{
					label="Sabre";
				};
				class phnix
				{
					label="Phoenix";
				};
				class zulu
				{
					label="Zulu";
				};
			};

            class role
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Role";
				values[]=
				{
					"medic",
					"doctor",
					"eod",
					"engie",
                    "tmlead",
                    "sqlead",
                    "standr",
                    "trainr"
				};
                class medic
				{
					label="Corpsman";
				};
                class doctor
				{
					label="Squad Medic";
				};
                class eod
				{
					label="EOD";
				};
                class engie
                {
                    label="Engineer";
                };
                class tmlead
				{
					label="Team Lead";
				};
                class sqlead
				{
					label="Squad Lead";
				};
                class standr
				{
					label="Standard";
				};
                class trainr
				{
					label="Training Officer";
				};
			};

            class polar
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Polarization";
				values[]=
				{
					"polar0",
					"polar1"
				};
                class polar0
				{
					label="ON";
				};
                class polar1
				{
					label="OFF";
				};
			};
		};
    */
    };
};