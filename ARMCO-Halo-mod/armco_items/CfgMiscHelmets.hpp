class U_B_CombatUniform_mcam;
  class HeadgearItem;
  class H_Beret_02;
  class V_PlateCarrierGL_rgr;
  class OPTRE_UNSC_Hat_Base;

  class OPTRE_UNSC_PatrolCap_Army : OPTRE_UNSC_Hat_Base {
    dlc = "ARMCO_PMC";
    scope = 2;
    author = "Belhun";
    displayName = "[A][ARMCO] Dress Uniform Cap";
    model = "\OPTRE_UNSC_Units\Army\officer_hat.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        "armco_items\data\hats\dress_hat_armco_CO.paa"};
    class ItemInfo : ItemInfo {
      uniformModel = "\OPTRE_UNSC_Units\Army\officer_hat.p3d";
      hiddenSelections[] = {"camo1"};
      hiddenSelectionsTextures[] = {
          "armco_items\data\hats\dress_hat_armco_CO.paa"};
    };
  };

  class ARMCO_Beret : H_Beret_02 {
    scope = 0;
    author = "Belhun";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\custom_dress_uniforms\data\hats\armco_beret_regular_co.paa"};

    class ItemInfo : HeadgearItem {

      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_Rifleman : ARMCO_Beret {
    author = "Belhun";
    displayName = "[A][ARMCO] Rifleman Beret";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\custom_dress_uniforms\data\hats\armco_beret_regular_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_Medical : ARMCO_Beret {
    author = "Belhun";
    displayName = "[A][ARMCO] Rifleman Beret";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\custom_dress_uniforms\data\hats\armco_beret_medical_co.paa"};
    class ItemInfo : HeadgearItem {
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_TL : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Dress Uniform Beret (Team Leader)";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\custom_dress_uniforms\data\hats\armco_beret_teamleader_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_Veteran : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Dress Uniform Beret (Distinguished Veteran)";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\custom_dress_uniforms\data\hats\armco_beret_special_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_Security : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Security Bureau Beret";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "custom_armours\data\security\helmet\h_beret_security_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_EOD : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Dress Uniform Beret (EOD)";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "custom_dress_uniforms\data\hats\armco_beret_eod_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_Beret_ODST : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Frosty & Mac";
    displayName = "[ARMCO] Dress Uniform Beret (ODST)";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "custom_dress_uniforms\data\hats\armco_beret_odst_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };
  class ARMCO_PatrolCap_Hat : H_Beret_02 {
    dlc = "ARMCO OPTRE Re-textures";
    scope = 2;
    weaponPoolAvailable = 1;
    author = "Viking";
    displayName = "[ARMCO] Patrol Cap";
    // picture = "\custom_dress_uniforms\data\hats\UNSC_Beret_armco_co.paa";
    model = "\A3\characters_f\common\cappatrol";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "custom_dress_uniforms\data\hats\cappatrol_Armco_co.paa"};

    class ItemInfo : HeadgearItem {
      mass = 6;
      allowedSlots[] = {801, 901, 701};
      uniformModel = "\A3\characters_f\common\cappatrol";
      modelSides[] = {3, 1};
      armor = 0;
      passThrough = 1;
      hiddenSelections[] = {"camo"};
    };
  };