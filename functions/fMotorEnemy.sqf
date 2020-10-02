// Define Targets
private _allBuildings = ["marker_0","marker_1","marker_2","marker_3","marker_4","marker_5"];

// Wait for the battle to start...
waitUntil {({(_x distance getMarkerPos "marker_2") < 500} count allPlayers) > 0};

// Wait 5 minutes, with a 20 minute travel time that's 25 minutes from arrival to first BTRs arriving
sleep 300;

// Begin the reinforcements loop

while {true} do {
	// Make an empty array	
	private _activeBuildings = [];
	// Fill _activeBuildings with all the building markers that have players within 100m
	{
		private _pos = getMarkerPos _x;
		private _toofar = ({(_x distance _pos) < 200} count allPlayers) == 0;
		if (!_toofar) then {
			_activeBuildings pushback _x;
		};
	} forEach _allBuildings;
		
	// If there are active buildings and less than 140 units, run the loop	
	if (((count _activeBuildings) > 0) && ((count allUnits) < 170)) then {
		// Define the target building
		private _tgt = getMarkerPos (selectRandom _activeBuildings);
		
		// Create three BTRs and send them to the buildings!
		{
			// Create the group
			private _pos = getMarkerPos "btrSpawn";
			// Create the BTR
			private _btr = createVehicle ["rhs_btr70_msv",_pos,[],0,"NONE"];
			// Make it face down the road
			_btr setDir 223;
			// Create the crew
			private _group = createVehicleCrew _btr;
			// Give the crew AAF gear
			{
				[_x,"OPFOR","CREW"] call tb3_fnc_Loadout;
			} forEach units _group;
			// Send it on its merry way
			private _wp = _group addWaypoint [_tgt,0];
			_wp setWaypointType "MOVE";
			_wp setWaypointCombatMode "RED";
			_wp setWaypointSpeed "FULL";
			_wp setWaypointBehaviour "AWARE";
			// A slight pause before making the next BTR
			sleep 5;
		} forEach [1,2,3];
		// Wait 10 minutes before the next BTR platoon
		sleep 600;
	};
	
	sleep 5;
};