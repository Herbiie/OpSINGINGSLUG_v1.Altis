// Define spawn and target building markers
private _allSpawns = ["spawn1","spawn2","spawn3","spawn4","spawn5","spawn6","spawn7","spawn8","spawn9","spawn10","spawn11","spawn12","spawn13","spawn14"];
private _allBuildings = ["marker_0","marker_1","marker_2","marker_3","marker_4","marker_5"];

// Loop
while {true} do {
	sleep 20;
	// Empty the active spawns & buildings array
	private _activeSpawns = [];
	private _activeBuildings = [];
	// Fill _activeSpawns with all the spawn markers that have no players within 100m
	{
		private _pos = getMarkerPos _x;
		private _tooclose = ({(_x distance _pos) < 100} count allPlayers) != 0;
		if (!_tooclose) then {
			_activeSpawns pushback _x;
		};
	} forEach _allSpawns;
	// Fill _activeBuildings with all the building markers that have players within 100m
	{
		private _pos = getMarkerPos _x;
		private _toofar = ({(_x distance _pos) < 200} count allPlayers) == 0;
		if (!_toofar) then {
			_activeBuildings pushback _x;
		};
	} forEach _allBuildings;
	// If there are active spawns, active buildings and less then 150 units, then spawn a group
	if (((count _activeSpawns) > 0) && ((count _activeBuildings) > 0) && ((count allUnits) < 166)) then {
		// Pick a random spawn point and random target building
		private _spawn = selectRandom _activeSpawns;
		private _target = selectRandom _activeBuildings;
		// 50/50 chance of spawning and MG team or an RPG team
		private _chance = random 100;
		if (_chance > 50) then {
			[getMarkerPos _spawn,getMarkerPos _target,"MG"] spawn H_fnc_spawnLocal;
		} else {
			[getMarkerPos _spawn,getMarkerPos _target,"RPG"] spawn H_fnc_spawnLocal;
		};
	};
};