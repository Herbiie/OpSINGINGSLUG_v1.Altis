// Arsenals

private _boxes = [box1,box2,box3,box4,box5];
{
	[_x, [
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
	  "rhsusf_mich_bare_norotos_alt_tan",
      "G_Combat",
      "G_Combat_Goggles_tna_F",
	  "ACE_fieldDressing",
	  "ACE_packingBandage",
	  "ACE_quikclot",
	  "ACE_Tourniquet",
	  "ACE_splint",
	  "ACE_morphine",
      "ACE_epinephrine",
      "ACE_adenosine",
	  "ACE_salineIV_500",
      "ACE_Flashlight_MX991",
	  "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "HandGrenade",
      "ACE_CTS9",
      "SmokeShell",
      "ACE_Chemlight_IR",
      "B_IR_Grenade",
      "ACE_IR_Strobe_Item",
      "ACE_MapTools",
      "1Rnd_HE_Grenade_shell",
      "1Rnd_Smoke_Grenade_Shell",
	  "1Rnd_SmokeBlue_Grenade_shell",
	  "1Rnd_SmokeGreen_Grenade_shell",
	  "1Rnd_SmokeOrange_Grenade_shell",
	  "1Rnd_SmokePurple_Grenade_shell",
	  "1Rnd_SmokeRed_Grenade_shell",
	  "1Rnd_SmokeYellow_Grenade_shell",
	  "UGL_FlareGreen_F",
	  "UGL_FlareCIR_F",
	  "UGL_FlareRed_F",
	  "UGL_FlareWhite_F",
	  "UGL_FlareYellow_F",
	  "rhs_mag_m4009",
	  "ACE_40mm_Flare_white",
	  "ACE_40mm_Flare_green",
	  "ACE_40mm_Flare_red",
	  "ACE_40mm_Flare_ir",
	  "Chemlight_blue",
	  "Chemlight_Green",
	  "Chemlight_red",
	  "Chemlight_yellow",
	  "ACE_HandFlare_Green",
	  "ACE_HandFlare_Red",
	  "ACE_HandFlare_White",
	  "ACE_HandFlare_Yellow",
	  "SmokeShellBlue",
	  "SmokeShellGreen",
	  "SmokeShellOrange",
	  "SmokeShellPurple",
	  "SmokeShellRed",
	  "SmokeShellYellow",
	  "ACE_salineIV_250",
	  "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
	  "Laserbatteries",
	  "rhs_weap_m72a7",
	  "Binocular",
	  "ACE_MX2A",
	  "rhs_tr8_periscope",
	  "B_UavTerminal",
	  "itc_land_tablet_rover",
	  "ACE_Sandbag_empty",
	  "ToolKit",
	  "ItemMap",
	  "ItemCompass",
	  "ItemWatch",
	  "rhsusf_ANPVS_15"
	  ]] call ace_arsenal_fnc_initBox;
} forEach _boxes;

// Turn lights off
private _lights = nearestObjects [getMarkerPos "marker_0", ["Lamps_base_F", "PowerLines_base_F", "PowerLines_Small_base_F"], 1500];

{
	_x switchLight "OFF";
} forEach _lights;

// Respawns
[missionNamespace,respawn1,"USS Micdonals"] call BIS_fnc_addRespawnPosition;
[missionNamespace,respawn2,"USS Freedom"] call BIS_fnc_addRespawnPosition;
player setVariable ["player_lives", 3,true];

// Server Side

if (isServer) then {
	// Set Up FDC
	missionNameSpace setVariable ["bcs_bty_name","USS Micdonals",true];
	missionNameSpace setVariable ["bcs_bty_type",[2,""],true];
	private _ngsPos = getPosASL gun;
	private _ngsEl = round ((getPosASL gun) # 2);
	private _ngsDir = round getDir gun;
	private _ngsStr1 = str (round ((getPosASL gun) # 0));
	private _ngsStr2 = str (round ((getPosASL gun) # 1));
	private _ngsStr = [_ngsStr1,_ngsStr2] joinString "";	
	missionNameSpace setVariable ["bcs_bty_guns",[["1",_ngsStr,_ngsPos,_ngsEl,_ngsDir]],true];
	missionNameSpace setVariable ["bcs_locations",[["Building 1","03711339",[3710,13390,11],11,"yes"],["Building 2","03691315",[3690,13150,11],11,"yes"],["Building 3","03541300",[3540,13000,10],10,"yes"],["Building 4","04191282",[4190,12820,24],24,"yes"],["Building 5","03661282",[3660,12820,18],18,"yes"],["Building 6","04011253",[4010,12530,28],28,"yes"]],true];
	
	// Set up gun magazine
	{gun removeMagazine _x} forEach magazines gun;

	{ gun addMagazines _x} forEach [["itc_land_g127hex",70],["itc_land_g127pgm",30],["itc_land_g127lgm",50]];
	
	// Spawn the localised bad people
	[] spawn H_fnc_localEnemy;
	
	// Spawn the motorised bad people
	[] spawn H_fnc_motorEnemy;
	
	// Set up the end conditions
	[] spawn H_fnc_endConditions;
};