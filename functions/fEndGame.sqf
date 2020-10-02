private _aliveEPs = {alive _x} count units eps;
private _handled = false;

if (_aliveEPs == 54 && !_handled) then {
	"endWin1" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 45 && !_handled) then {
	"endWin2" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 35 && !_handled) then {
	"endWin3" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 25 && !_handled) then {
	"endWin4" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 15 && !_handled) then {
	"endWin5" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 5 && !_handled) then {
	"endWin6" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs > 0 && !_handled) then {
	"endWin7" call BIS_fnc_endMissionServer;
	_handled = true;
};

if (_aliveEPs == 0 && !_handled) then {
	"endLose" call BIS_fnc_endMissionServer;
	_handled = true;
};