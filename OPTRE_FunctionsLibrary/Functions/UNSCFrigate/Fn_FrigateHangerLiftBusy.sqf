/*

OPTRE_fnc_FrigateHangerLiftBusy

Author: Big_Wilk

Description: Returns and array of bool to see if the lift meets an "in use" condition given via the check parameter.
Type: Call 
Return: Array of Bool:
	[ 
		LIFT IN USE, 
		LIFT ARM IN USE, 
		ARE VEHICLES ON LIFT, 
		ARE PLAYERS ON LIFT
	]

Params: 
	object: (frigate)
	bool: (do sound if busy)
	array (of numbers): 
		[
			0: check if lift is in use, 
			1: check if lift arm in use, 
			2: check if vehicles are on lift, 
			3: check if players are on lift
		]
MP: any

Example 1:
	_return = [_frigate, true, [0,1,2,3]] call OPTRE_fnc_FrigateHangerLiftBusy;
Result: checks if condtions 0,1,2,3 are meet 

Example 2:
	_return = [_frigate, false, [0,2,3]] call OPTRE_fnc_FrigateHangerLiftBusy;
Result: 

*/

_frigate = _this select 0; // object name
_doSound = _this select 1; // true / false
_check = _this select 2; // [0,1,2,3]

// Frigate Parts
_liftArm = _frigate getVariable "OPTRE_Frigate_LiftArm";
_spawnRoomDoors = _frigate getVariable "OPTRE_Frigate_SpawnRoomDoor";
_lift = _frigate getVariable "OPTRE_Frigate_Lift";

// Sound Sources
_liftGate = (_frigate getVariable "OPTRE_Frigate_LiftGate");
_liftGateUP = (_frigate getVariable "OPTRE_Frigate_LiftGate_Up");

// Returned Values 
_liftInUse = false;
_liftArmInUse = false;
_vehiclesOnLift = false;
_playersOnLift = false;

// Variables 
_OnLiftBreakDown = [false,_frigate] call OPTRE_fnc_FrigateOnLiftDeal;

// 0
if ( ( _lift getVariable ["OPTRE_BUSY",false] ) AND (0 in _check) ) then 
{ 	
	if _doSound then {
		{
			_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; 
			_soundToPlay = _soundPath + "Data\Sounds\lifinuse.wav"; 
			playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50]; 
		} forEach [_liftGate, _liftGateUP]; 
		_doSound = false;
	};
	_liftInUse = true;
};

// 1
if ( (_liftArm getVariable ["OPTRE_Frigate_LiftArm_InUse",false]) AND (1 in _check) ) then 
{
	if _doSound then {
		{
			_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; 
			_soundToPlay = _soundPath + "Data\Sounds\lifinuse.wav";  
			playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];
		} forEach [_liftGate, _liftGateUP]; 
		_doSound = false;
	};		
	_liftArmInUse = true;
};

// 2
if ( ((count (_OnLiftBreakDown select 0)) > 0) AND (2 in _check) ) then 
{
	if _doSound then {
		{
			_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; 
			_soundToPlay = _soundPath + "Data\Sounds\vehicleOnLift.wav";  
			playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];
		} forEach [_liftGate, _liftGateUP]; 
		_doSound = false;
	};
	_vehiclesOnLift = true;
};

// 3
if (({isPlayer _x;} count (_OnLiftBreakDown select 1)) > 0 AND (3 in _check)) then 
{
	if _doSound then {
		{
			_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; 
			_soundToPlay = _soundPath + "Data\Sounds\humanblockslift.wav";  
			playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];
		} forEach [_liftGate, _liftGateUP]; 
		_doSound = false;
	};
	_playersOnLift = true;
};

[_liftInUse,_liftArmInUse,_vehiclesOnLift,_playersOnLift]