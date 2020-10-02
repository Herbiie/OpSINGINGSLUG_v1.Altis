private _running = true;

while {_running} do {
	sleep 5;
	private _aliveEPs = {alive _x} count units eps;
	private _recoveredEPs = {alive _x && (_x distance getMarkerPos "marker_6") < 100} count units eps;
	private _allPlayers = {alive _x} count allPlayers;
	private _returnedPlayers = {alive _x && (_x distance getMarkerPos "marker_6") < 500} count allPlayers;
	if ((_aliveEPs == _recoveredEPs) && (_allPlayers == _returnedPlayers)) then {
		[format ["<t size='5'>You rescued %1 EPs.</t>",_recoveredEPs], "PLAIN", -1, true, true] remoteExec ["titleText",0];
		sleep 5;
		[] spawn H_fnc_endGame;
		_running = false;
	};
};