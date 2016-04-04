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

_dilverToString = _this select 0;
_frigate = _this select 1;
_liftArm =  _this select 2;
_onLift = _this select 3;
_vehClassName = _this select 4;

_StartPos = getPosASL _liftArm;
_zStart = _StartPos select 2; 
_zEndWanted = (_zStart - (switch _deckTo do {
    case "HANGER": { 46 };
    case "CAR": { 20 };
}));

While {_zStart > _zEndWanted} do {
	//hint str _zStart; 
	_liftArm setPosASL [(_StartPos select 0), (_StartPos select 1), _zStart]; 
	sleep 0.001;
	_zStart = _zStart - 0.01; 
};


/*
_frigate = _this select 0;
_className = _this select 1;
_deckTo = _this select 2;

_liftArm = (_frigate getVariable "OPTRE_Frigate_LiftArm");
_spawnRoomDoors = (_frigate getVariable "OPTRE_Frigate_SpawnRoomDoor");
_lift = _frigate getVariable ["OPTRE_Frigate_Lift", true];
_liftGate = (_frigate getVariable "OPTRE_Frigate_LiftGate");
_liftGateUP = (_frigate getVariable "OPTRE_Frigate_LiftGate_Up");

if !((_lift animationPhase "door_1_rot") == 1 OR (_lift animationPhase "door_1_rot") == 0) exitWith { _soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\lifinuse.wav"; playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50]; };
if (_liftArm getVariable ["OPTRE_Frigate_LiftArm_InUse",false]) exitWith {_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\lifinuse.wav";  playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];};
if ((count (([false,_frigate] call OPTRE_fnc_FrigateOnLiftDeal) select 0)) > 0) exitWith {_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\vehicleOnLift.wav";  playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];};
if ((count (([false,_frigate] call OPTRE_fnc_FrigateOnLiftDeal) select 1)) > 0 AND ) exitWith {_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString; _soundToPlay = _soundPath + "Data\Sounds\vehicleOnLift.wav";  playSound3D [_soundToPlay, player, false, getPos player, 10, 1, 50];};

_liftArm setVariable ["OPTRE_Frigate_LiftArm_InUse",true,true];
//_liftArm attachTo [_frigate,[0,325,-13]]; 

_veh = _className createVehicle [0,0,0];
_veh attachTo [_liftArm, [0,0,-23]]; 

0 = [_frigate, _className, 1] call OPTRE_fnc_FrigateRemoveVirtualStock;

//_liftGate animate ["part_1_rot",0];
_liftGate animate ["part_2_rot",0];
_liftGateUP animate ["part_1_rot",0]; 
_liftGateUP animate ["part_2_rot",0];

sleep 2; 
{_spawnRoomDoors animate [_x,1];} forEach ["Door_2_rot","Door_1_rot"];
sleep 4;

switch _deckTo do {
    case "HANGER": { [[_frigate,'HangerDeck',false],'OPTRE_fnc_UpDownLift',false,false] call BIS_fnc_MP; };
    case "CAR": { [[_frigate,'CarDeck',false],'OPTRE_fnc_UpDownLift',false,false] call BIS_fnc_MP; };
};

_StartPos = getPosASL _liftArm;
_zStart = _StartPos select 2; 
_zEndWanted = (_zStart - (switch _deckTo do {
    case "HANGER": { 46 };
    case "CAR": { 20 };
}));

While {_zStart > _zEndWanted} do {
	//hint str _zStart; 
	_liftArm setPosASL [(_StartPos select 0), (_StartPos select 1), _zStart]; 
	sleep 0.001;
	_zStart = _zStart - 0.01; 
};

sleep .5;

detach _veh;

if ( (_lift animationPhase "door_1_rot") == 0 ) then {
	_liftGate animate ["part_1_rot",1];
	_liftGate animate ["part_2_rot",1];
} else {
	_liftGateUP animate ["part_1_rot",1]; 
	_liftGateUP animate ["part_2_rot",1];
};

sleep .5; 

_zEndWanted = _StartPos select 2;
While {_zStart < _zEndWanted} do {
	//hint str _zStart; 
	_liftArm setPosASL [(_StartPos select 0), (_StartPos select 1), _zStart]; 
	sleep 0.001;
	_zStart = _zStart + 0.01; 
};

_liftArm setVariable ["OPTRE_Frigate_LiftArm_InUse",false,true];
{_spawnRoomDoors animate [_x,0];} forEach ["Door_2_rot","Door_1_rot"];

/*
 

_zStart = _zEndWanted;
While {_zStart < -13} do {
	_liftArm attachTo [_frigate,[0,264,_zStart]]; 
	sleep 0.001;
	_zStart = _zStart + 0.05;
};


/*
_yStart = 325;
While {_yStart > 264} do {
	_liftArm attachTo [_frigate,[0,_yStart,-13]]; 
	sleep 0.001;
	_yStart = _yStart - 0.05;
};

_zStart = -13;
While {_zStart > _zEndWanted} do {
	_liftArm attachTo [_frigate,[0,264,_zStart]]; 
	sleep 0.001;
	_zStart = _zStart - 0.05; 
};



_zStart = _zEndWanted;
While {_zStart < -13} do {
	_liftArm attachTo [_frigate,[0,264,_zStart]]; 
	sleep 0.001;
	_zStart = _zStart + 0.05;
};

_yStart = 264;
While {_yStart < 325} do {
	_liftArm attachTo [_frigate,[0,_yStart,-13]]; 
	sleep 0.001;
	_yStart = _yStart + 0.05;
};

{_spawnRoomDoors animate [_x,0];} forEach ["Door_2_rot","Door_1_rot"];
_liftArm setVariable ["OPTRE_Frigate_LiftArm_InUse",false,true];