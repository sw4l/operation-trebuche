/* 
	OPTRE_fnc_PlayerHEVEffectsUpdate_BoasterDown
	
	Description: Function is designed to be executed only from inside of the HEV scripts, do not execute it directly.
	
	Author: Big_Wilk
	
	Return: none
	
	Type: spawn
*/

if (isDedicated OR (typeOf vehicle player != "OPTRE_HEV")) exitWith {};

private ["_hev"];

_hev = vehicle player; 
_arm = attachedTo _hev;
_arm enableSimulation false;
_arm disableCollisionWith _hev;
deleteVehicle _arm;
detach _hev;

_hev setVelocity [(_this select 0),(_this select 1), (_this select 2)];

//playSound "OPTRE_Sounds_Detach";
playSound "OPTRE_Sounds_DetachOLD";

resetCamShake;
addCamShake [21, 6, 31];
addCamShake [11, 16, 32];

playSound ["OPTRE_Sounds_Engine",true];
sleep 20;

addCamShake [1, 999, 11];

_manualControlState = (_this select 3); 
if (_manualControlState > 0) then {0 = [_manualControlState] call OPTRE_fnc_HEVControls;};

_count = 0;
playSound "OPTRE_Sounds_WindLoopNewLong";
while {!(isTouchingGround _hev) AND (getPosASLW _hev select 2) > 1} do {
	sleep 0.5;
	playSound "OPTRE_Sounds_WindLoopNewLong";
	_count = _count + 1; 
};

if (surfaceIsWater getPos _hev) then {
	_hev removeAllEventHandlers "GetOut";
	_hev removeAllEventHandlers "HandleDamage";
	_hev = vehicle player; 
	_driver = driver _hev;
	_hev removeAllEventHandlers "HandleDamage";
	playSound3d ["A3\Missions_F_EPA\data\sounds\fall_into_water.wss", _hev, false, getPos _hev, 0.5, 1, 2000];
	if !(isPlayer _driver) then {
		_hev lock false; 
		0 = [_hev, round (random 1), true] spawn OPTRE_fnc_HEVDoor;		
	} else {
		resetCamShake;
		addCamShake [40, 1.2, 50];
		//vehicle player addAction ["Open Door",{_HEV = _this select 0; 0 = [_hev, 1, true] spawn OPTRE_Fnc_HEVDoor; removeAllActions _hev;}];
		vehicle player addAction ["Eject Door",{_HEV = _this select 0; 0 = [_hev, 0, true] spawn OPTRE_Fnc_HEVDoor; removeAllActions _hev;}];
		if (!isNil "OPTRE_HEV_CONTROL_KDEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown", OPTRE_HEV_CONTROL_KDEH]; player removeEventHandler ["killed", OPTRE_HEV_CONTROL_KEH];};
	};
	
}; 

_time = time + 7; 
while {(_time > time)} do {
	_sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
	deleteVehicle _sound;
};