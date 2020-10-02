class OPFOR {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_akm",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_akmn",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_akms",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_pm63",
          {"rhs_30Rnd_762x39mm_bakelite"}
        }
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhs_ssh68",
      "rhs_ssh68",
      "rhs_ssh68",
	  "rhsgref_ssh68_emr",
	  "rhsgref_ssh68_emr",
	  "H_HeadBandage_bloody_F",
	  "H_HeadBandage_stained_F",
	  "H_Cap_blk_Raven",
	  "H_Booniehat_dgtl"
    };
	
    uniform[] = {"U_I_CombatUniform","U_I_CombatUniform_shortsleeve"};
      uniformContents[] = {
        {"ACE_fieldDressing",5},
		{"ACE_packingBandage",5},
		{"ACE_quikclot",5},
		{"ACE_Tourniquet",2},
		{"ACE_splint",1},
		{"ACE_morphine",1},
        {"ACE_epinephrine",1},
        {"ACE_adenosine",1},
		{"ACE_salineIV_500",1},
        {"ACE_Flashlight_MX991",1}
      };

    vest[] = {"V_TacVest_oli","V_TacVest_khk","V_TacVest_camo"};

      vestContents[] = {
        {"rhs_30Rnd_762x39mm_bakelite",6},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_MapTools",1}
      };

    backpack[] = {};
      backpackContents[] = {
      };

    magazines[] = {}; items[] = {};
  };
  class Leader: BaseUnit {
    headgear[] = {
      "H_MilCap_dgtl"
    };
  };
  class RF: BaseUnit {
  };
  class RPG: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_akm",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_akmn",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_akms",
          {"rhs_30Rnd_762x39mm_bakelite"}
        },
        {"rhs_weap_pm63",
          {"rhs_30Rnd_762x39mm_bakelite"}
        }
      },{"rhs_weap_rpg7","rhs_rpg7_OG7V_mag"}
    };
	  
    backpack[] = {"rhs_rpg_empty"};
      backpackContents[] = {
        {"rhs_rpg7_OG7V_mag",4}
      };
  };
  class MG: BaseUnit {
    weapons[] = {
        {"rhs_weap_pkm",
          {"rhs_100Rnd_762x54mmR_green"}
        }
    };
      vestContents[] = {
        {"rhs_100Rnd_762x54mmR_green",1},
        {"HandGrenade",2}
      };
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"rhs_100Rnd_762x54mmR_green",4}
      };
  };  
  class CREW: BaseUnit {
    headgear[] = {
      "H_HelmetCrew_I",
      "rhs_gssh18",
      "rhs_tsh4",
	  "rhs_tsh4_bala",
	  "rhs_tsh4_ess",
	  "rhs_tsh4_ess_bala"
    };
  };
};
