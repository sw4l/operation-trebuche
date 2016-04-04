/*

OPTRE_fnc_

Author: Big_Wilk

Description:
Type: Call 
Return: bool (true once done)

Params: 

MP: 

Example 1:

Result: 

Example 2:

Result: 

*/

_frigate = _this select 0;
_goTo = _this select 1; 
_doPublicAnoucementSystem = if (count _this > 2) then { (_this select 2) } else { true };

_lift = _frigate getVariable "OPTRE_Frigate_Lift";
_liftArm = (_frigate getVariable "OPTRE_Frigate_LiftArm");
_liftGate = (_frigate getVariable "OPTRE_Frigate_LiftGate");
_liftGateUP = (_frigate getVariable "OPTRE_Frigate_LiftGate_Up");
_spawnRoomDoors = (_frigate getVariable "OPTRE_Frigate_SpawnRoomDoor");
_curLiftPos = (_lift animationPhase "door_1_rot"); 
_vehClassName = ((findDisplay 25000) displayCtrl 1500) lbData (lbCurSel 1500);
if (_vehClassName == "" AND (_goTo == "DeliverHanger" OR _goTo == "DeliverCarDeck")) exitWith {};

// Check Request is valid. 
_goToDetail = switch _goTo do {
	case "HangerDeck": 		{ [0, [0,1] ] };
    case "CarDeck": 		{ [1, [0,1] ] };
	case "SpawnDeck":	 	{ [1, [0,1,3] ] };
	case "DeliverHanger": 	{ [0, [0,1,2] ] };
	case "DeliverCarDeck": 	{ [1, [0,1,2] ] };
};
_liftGoTooAnimPos = _goToDetail select 0;
_checkValues = _goToDetail select 1;
_return = [_frigate, _doPublicAnoucementSystem, _checkValues] call OPTRE_fnc_FrigateHangerLiftBusy;
if ( { _x; } count _return > 0 ) exitWith {};
if ( _curLiftPos == _liftGoTooAnimPos AND {_goTo == _x;} count ["SpawnDeck","DeliverHanger","DeliverCarDeck"] < 1 ) exitWith {{_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\canceled.wav";  playSound3D [_soundToPlay, _x, false, getPos _x, 10, 1, 50];} forEach [_liftGate,_liftGateUP];};
  
// Set Lift Busy
_lift setVariable ["OPTRE_BUSY",true,true];

// Start Doing Shit...............
// Stand Clear Sound....... idiot.
{if _doPublicAnoucementSystem then {_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\standClear.wav";  playSound3D [_soundToPlay, _x, false, getPos _x, 10, 1, 50];};} forEach [_liftGate,_liftGateUP];

sleep 6; 
	
//_liftGate animate ["part_1_rot",1]; 
_liftGate animate ["part_2_rot",0];

_liftGateUP animate ["part_1_rot",0]; 
_liftGateUP animate ["part_2_rot",0];

waitUntil {
  //((_liftGate 	animationPhase "door_1_rot") == 0) AND
	((_liftGate 	animationPhase "part_2_rot") == 0) AND
	((_liftGateUP 	animationPhase "door_1_rot") == 0) AND
	((_liftGateUP 	animationPhase "part_2_rot") == 0) 
};

_return = [_frigate, _doPublicAnoucementSystem, (_checkValues - [0])] call OPTRE_fnc_FrigateHangerLiftBusy;
if ( { _x; } count _return > 0 ) exitWith {

	if ( (_lift animationPhase "door_1_rot") == 0 ) then {
		_liftGate animate ["part_1_rot",1];
		_liftGate animate ["part_2_rot",1];
	} else {
		_liftGateUP animate ["part_1_rot",1]; 
		_liftGateUP animate ["part_2_rot",1];
	};	
	
	_lift setVariable ["OPTRE_BUSY",false,true];
	
};


switch _goTo do {
	case "DeliverHanger": 	
	{
		0 = ["DeliverHanger", _frigate, _liftArm, _onLift, _vehClassName] spawn OPTRE_fnc_FrigateSpawnRoomDeliver;
	};
	case "DeliverCarDeck": 
	{
		0 = ["DeliverCarDeck", _frigate, _liftArm, _onLift, _vehClassName] spawn OPTRE_fnc_FrigateSpawnRoomDeliver;
	};
	default {};
};	
_lift animate ["door_1_rot",_liftGoTooAnimPos];

sleep .1; 

_onLift = [false,_frigate] call OPTRE_fnc_FrigateOnLiftDeal;
_onliftTotal = (_onLift select 0) + (_onLift select 1);

if (_curLiftPos == 0) then {

	_doVelUp = .35;
	_doVelUpVehicle = 1.5;
	
	_units = (_onLift select 1);
	_vehicles = (_onLift select 0);
	
	While {!((_lift animationPhase "door_1_rot") == 1 OR (_lift animationPhase "door_1_rot") == 0)} do {
		
		sleep .05;
		
		{
			_v = velocity _x;
			//_x setVelocity [ (_v select 0), (_v select 1), _doVelUp];
			0 = [ [_x, [(_v select 0), (_v select 1), _doVelUp] ], "setVelocity", _x, false] call BIS_fnc_MP;
		} forEach _units; 

		sleep .05;
		
		{
			_v = velocity _x;
			//_x setVelocity [ (_v select 0), (_v select 1), _doVelUpVehicle];
			0 = [ [_x, [(_v select 0), (_v select 1), _doVelUpVehicle] ], "setVelocity", _x, false] call BIS_fnc_MP;
		} forEach _vehicles; 
		
	};

} else {

	_doVelUp = -4;
	
	While {!((_lift animationPhase "door_1_rot") == 1 OR (_lift animationPhase "door_1_rot") == 0)} do {
		
		sleep 0.05;
		{
			_v = velocity _x;
			//_x setVelocity [ (_v select 0), (_v select 1), _doVelUp];
			0 = [ [_x, [(_v select 0), (_v select 1), _doVelUp] ], "setVelocity", _x, false] call BIS_fnc_MP;
			sleep 0.05;
			//_x setVelocity [ (_v select 0), (_v select 1), _doVelUp];
			0 = [ [_x, [(_v select 0), (_v select 1), _doVelUp] ], "setVelocity", _x, false] call BIS_fnc_MP;
		} forEach _onliftTotal; 
		
	};
	
};

// Open Gates On Lifts Levels
if (_goTo != "SpawnDeck") then {

	if ( (_lift animationPhase "door_1_rot") == 0 ) then {
		_liftGate animate ["part_1_rot",1];
		_liftGate animate ["part_2_rot",1];
	} else {
		_liftGateUP animate ["part_1_rot",1]; 
		_liftGateUP animate ["part_2_rot",1];
	};
	
} else {

	_spawnRoomDoors animate ["Door_1_rot",1];
	_spawnRoomDoors animate ["Door_2_rot",1];
	
	sleep 3;
	
	_onLift = [false,_frigate] call OPTRE_fnc_FrigateOnLiftDeal;
	_vehicles = _onLift select 0;
	
	if (count _vehicles > 0) then {
	
	_vUpSpawn = 9; 
	
	for "_i" from 1 to 14 do {
	
			sleep 0.05;
			
			{
				_v = velocity _x;
				_x setVelocity [ (_v select 0), (_v select 1), _vUpSpawn];
				sleep .1; 
			} forEach _vehicles; 	
			
		};
	};

	{
		_x enableSimulation false;
	} forEach _vehicles;
	
	_spawnRoomDoors animate ["Door_1_rot",0];
	_spawnRoomDoors animate ["Door_2_rot",0];	
	
	sleep 6;
	
	_arrayOnLift = [];
	{
		_arrayOnLift pushBack [typeOf _x,1];
		deleteVehicle _x;
	} forEach _vehicles;
	
	0 = [_frigate,_arrayOnLift] call OPTRE_fnc_FrigateAddVirtualStock;
	//0 = [true,_frigate] call OPTRE_fnc_FrigateOnLiftDeal;
	
	_lift animate ["door_1_rot",_curLiftPos];
	
	sleep .1;
	
	waitUntil {((_lift animationPhase "door_1_rot") == 1 OR (_lift animationPhase "door_1_rot") == 0)};
	
	if ( (_lift animationPhase "door_1_rot") == 0 ) then {
		_liftGate animate ["part_1_rot",1];
		_liftGate animate ["part_2_rot",1];
	} else {
		_liftGateUP animate ["part_1_rot",1]; 
		_liftGateUP animate ["part_2_rot",1];
	};
	
};

_lift setVariable ["OPTRE_BUSY",false,true];