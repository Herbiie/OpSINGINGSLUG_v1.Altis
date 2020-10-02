private _lives = player getVariable ["player_lives",1];
player setVariable ["player_lives", _lives - 1,true];
private _newLives = player getVariable ["player_lives",1];
if (_newLives == 1) then {
	hint format ["You have %1 life remaining.", _newLives];
} else {
	hint format ["You have %1 lives remaining.", _newLives];
};

_EH = player addEventHandler ["killed", {
playerPosition = getPosASL (_this select 0);
}];
   
if (_newLives < 1) then {
	[0, objNull, 2, [playerPosition select 0, playerPosition select 1, 10]] call ace_spectator_fnc_setCameraAttributes;
	[true,true,true] call ace_spectator_fnc_setSpectator;
};