class BLUFOR {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_m4a1_carryhandle",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_carryhandle_mstock",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_d",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_tan"}
        },
        {"rhs_weap_m4a1_wd",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_wd","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","muzzle_snds_m_khk_f"}
        },
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    headgear[] = {
      "rhsusf_mich_bare",
	  "rhsusf_mich_bare_alt",
	  "rhsusf_mich_bare_norotos",
	  "rhsusf_mich_bare_norotos_alt",
	  "rhsusf_mich_bare_norotos_arc",
	  "rhsusf_mich_bare_norotos_arc_alt",
	  "rhsusf_mich_bare_semi",
	  "rhsusf_mich_bare_alt_semi",
	  "rhsusf_mich_bare_norotos_semi",
	  "rhsusf_mich_bare_norotos_alt_semi",
	  "rhsusf_mich_bare_norotos_arc_semi",
	  "rhsusf_mich_bare_norotos_arc_alt_semi",
	  "rhsusf_mich_bare_tan",
	  "rhsusf_mich_bare_alt_tan",
	  "rhsusf_mich_bare_norotos_tan",
	  "rhsusf_mich_bare_norotos_alt_tan"
    };
    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F"
    };

    uniform[] = {"rhs_uniform_g3_mc"};
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
        {"ACE_Flashlight_MX991",1},
        {"ACRE_PRC343",1}
      };

    vest[] = {"rhsusf_plateframe_rifleman"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",6},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"ACE_CTS9",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1},
        {"ACE_MapTools",1}
      };

    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",6},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"ACE_CTS9",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    vest[] = {"rhsusf_plateframe_teamleader"};
    weapons[] = {
      {
        {"rhs_weap_m4a1_carryhandle",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_carryhandle_mstock",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_d",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_acc_nt4_tan"}
        },
        {"rhs_weap_m4a1_wd",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_wd","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","muzzle_snds_m_khk_f"}
        },
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACE_microDAGR","rhsusf_ANPVS_15"};

    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
	  {"ACE_CTS9",2},
      {"SmokeShell",2},
      {"ACE_Chemlight_IR",2},
      {"B_IR_Grenade",1},
      {"ACE_IR_Strobe_Item",1},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1}
    };
  };
  class TL: PL {
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
	  {"ACE_CTS9",2},
      {"SmokeShell",2},
      {"ACE_Chemlight_IR",2},
      {"B_IR_Grenade",1},
      {"ACE_IR_Strobe_Item",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
  };
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_m4a1_carryhandle_m203S",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_m203s",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","rhsusf_acc_nt4_black"}
        },
        {"rhs_weap_m4a1_m203s_d",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","rhsusf_acc_nt4_tan"}
        },
        {"rhs_weap_m4a1_blockII_M203_wd",
          {"rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_wd","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","muzzle_snds_m_khk_f"}
        },
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_plateframe_grenadier"};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
	    {"ACE_CTS9",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_Smoke_Grenade_Shell",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1},
        {"1Rnd_HE_Grenade_shell",15},
        {"1Rnd_Smoke_Grenade_Shell",2}
      };
  };
  class UAV: BaseUnit {
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_Chemlight_IR",2},
      {"B_IR_Grenade",2},
      {"ACE_MapTools",1},
      {"itc_land_tablet_fdc",1}
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"ACE_Chemlight_IR",2},
        {"ACRE_PRC117f",1},
        {"B_IR_Grenade",1}
      };
  };
  class MED: BaseUnit {
    ace_medic = 2;
    vest[] = {"rhsusf_plateframe_medic"};
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",6},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_fieldDressing",15},
        {"ACE_packingBandage",15},
        {"ACE_quikclot",10},
        {"ACE_elasticBandage",10},
        {"ACE_morphine",10},
        {"ACE_epinephrine",10},
        {"ACE_adenosine",5},
        {"ACE_salineIV_250",8},
        {"ACE_salineIV_500",4},
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",5},
        {"ACE_tourniquet",5}
      };
  };

  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_m249_pip",
          {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15_bk_light","rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_acc_nt4_black"}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_plateframe_machinegunner"};
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACE_IR_Strobe_Item",1}
      };
  };
  
  class COMMS: BaseUnit {
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
	  {"ACE_CTS9",2},
      {"SmokeShell",2},
      {"ACE_Chemlight_IR",2},
      {"B_IR_Grenade",2},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",2},
        {"B_IR_Grenade",1},
        {"ACRE_PRC117f",1},
        {"ACRE_VHF30108SPIKE",1},
        {"ACRE_VHF30108MAST",1}
      };
  };
  class JTAC: PL {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_Chemlight_IR",5},
        {"B_IR_Grenade",5},
        {"ACRE_PRC117f",1},
        {"Laserdesignator_01_khk_F",1},
        {"Laserbatteries",1},
        {"ITC_Land_B_RemoteGLTD_Packed",1}
      };
  };

	class PILOT_HELI: baseUnit {
		weapons[] = {
      {"rhsusf_weap_MP7A2",{"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_eotech_552_d","rhsusf_acc_anpeq15side_bk"}},
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
		headgear[] = {
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_black",
      "rhsusf_hgu56p_mask_black",
      "rhsusf_hgu56p_visor_mask_Empire_black",
      "rhsusf_hgu56p_visor_black","rhsusf_hgu56p_green",
      "rhsusf_hgu56p_mask_green_mo",
      "rhsusf_hgu56p_visor_green",
      "rhsusf_hgu56p_visor_mask_green_mo",
      "rhsusf_hgu56p",
      "rhsusf_hgu56p_mask",
      "rhsusf_hgu56p_mask_mo",
      "rhsusf_hgu56p_mask_skull",
      "rhsusf_hgu56p_visor",
      "rhsusf_hgu56p_visor_mask",
      "rhsusf_hgu56p_visor_mask_mo",
      "rhsusf_hgu56p_visor_mask_skull",
      "rhsusf_hgu56p_mask_smiley",
      "rhsusf_hgu56p_visor_mask_smiley"
		};
    goggles[] = {
    };
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACE_microDAGR","rhsusf_ANPVS_15"};
		uniform[] = {
			"rhs_uniform_g3_tan",
		};
		vest[] = {
			"rhsusf_mbav_light",
		};
		vestContents[] = {
			{"rhsusf_mag_40Rnd_46x30_FMJ",6},
			{"SmokeShellRed",2},
			{"ACRE_PRC148",1},
			{"ACE_MapTools",1}
		};
		backpack[] = {
			"rhsusf_falconii_coy","rhsusf_falconii_mc"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
	class PILOT_JET: baseUnit {
		weapons[] = {
    };
		headgear[] = {
      "H_PilotHelmetFighter_B",
		};
    goggles[] = {
    };
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACE_microDAGR"};
		uniform[] = {
			"U_B_PilotCoveralls",
		};
		vest[] = {
		};
		vestContents[] = {
		};
		backpack[] = {
			"rhsusf_falconii_coy","rhsusf_falconii_mc"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
};
