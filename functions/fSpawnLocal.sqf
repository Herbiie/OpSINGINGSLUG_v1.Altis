params ["_spawn","_target","_type"];
// Create the group
private _group = createGroup [east,true];

// Create the team leader
private _leader = _group createUnit ["O_Soldier_F",_spawn,[],0,"NONE"];
_leader setRank "Sergeant";
_leader setSkill ["aimingAccuracy",0.1];
_leader setSkill ["aimingSpeed",0.1];
_leader setSkill ["aimingShake",0.1];
_leader setSkill ["courage",0.1];
[_leader,"OPFOR","Leader"] call tb3_fnc_Loadout;

// Create two riflemen

private _rf1 = _group createUnit ["O_Soldier_F",_spawn,[],0,"NONE"];
_rf1 setRank "Private";
_rf1 setSkill ["aimingAccuracy",0.1];
_rf1 setSkill ["aimingSpeed",0.1];
_rf1 setSkill ["aimingShake",0.1];
_rf1 setSkill ["courage",0.1];
[_rf1,"OPFOR","RF"] call tb3_fnc_Loadout;

private _rf2 = _group createUnit ["O_Soldier_F",_spawn,[],0,"NONE"];
_rf2 setRank "Private";
_rf2 setSkill ["aimingAccuracy",0.1];
_rf2 setSkill ["aimingSpeed",0.1];
_rf2 setSkill ["aimingShake",0.1];
_rf2 setSkill ["courage",0.1];
[_rf2,"OPFOR","RF"] call tb3_fnc_Loadout;

// If an MG team, make an MG gunner, if an RPG team, an RPG gunner
private _gunner = _group createUnit ["O_Soldier_F",_spawn,[],0,"NONE"];
_gunner setRank "Private";
_gunner setSkill ["aimingAccuracy",0.1];
_gunner setSkill ["aimingSpeed",0.1];
_gunner setSkill ["aimingShake",0.1];
_gunner setSkill ["courage",0.1];
[_gunner,"OPFOR",_type] call tb3_fnc_Loadout;

// Now that they're called in - attack the target building!

private _wp1 = _group addWaypoint [_target,0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointCombatMode "RED";
_wp1 setWaypointSpeed "FULL";
_wp1 setWaypointBehaviour "AWARE";
private _wp2 = _group addWaypoint [_target,1];
_wp2 setWaypointType "SAD";
_group setCurrentWaypoint _wp1;
