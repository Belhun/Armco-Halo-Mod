

class OPTRE_MA37GL;
class OPTRE_M6G;
class OPTRE_MA37;
class OPTRE_M41_SSR;
class OPTRE_M392_DMR;
class OPTRE_SRS99C;
class OPTRE_M73;

class ARMCO_OPTRE_MA37GL : OPTRE_MA37GL {
  displayName = "MA37 + M301 GL Assault Rifle";
  scope = 1;
  class LinkedItems {};
};

class ARMCO_OPTRE_M6G : OPTRE_M6G {
  displayName = "M6G Magnum";
  scope = 1;
  class LinkedItems {};
};

class ARMCO_OPTRE_MA37_OPTRE_MA37_Smartlink_Scope : OPTRE_MA37 {
  displayName = "MA37 ICWS Assault Rifle";
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      slot = "CowsSlot";
      item = "OPTRE_MA37_Smartlink_Scope";
    };
  };
};

class ARMCO_OPTRE_M41_SSR : OPTRE_M41_SSR {
  displayName = "M41 SSR MAV/AW";
  scope = 1;
  class LinkedItems {};
};

class ARMCO_OPTRE_M6G_OPTRE_M6G_Scope : OPTRE_M6G {
  displayName = "M6G Magnum";
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      slot = "CowsSlot";
      item = "OPTRE_M6G_Scope";
    };
  };
};

class ARMCO_OPTRE_M392_DMR_OPTRE_M393_ACOG : OPTRE_M392_DMR {
  displayName = "M392 DMR";
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      slot = "CowsSlot";
      item = "OPTRE_M393_ACOG";
    };
  };
};

class ARMCO_OPTRE_MA37 : OPTRE_MA37 {
  displayName = "MA37 ICWS Assault Rifle";
  scope = 1;
  class LinkedItems {};
};

class ARMCO_OPTRE_SRS99C_OPTRE_SRS99C_Scope : OPTRE_SRS99C {
  displayName = "SRS99C-S2 AM Sniper Rifle";
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      slot = "CowsSlot";
      item = "OPTRE_SRS99C_Scope";
    };
  };
};

class ARMCO_OPTRE_M73 : OPTRE_M73 {
  displayName = "M73 Light Machine Gun";
  scope = 1;
  class LinkedItems {};
};
