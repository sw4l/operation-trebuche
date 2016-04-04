/*

OPTRE_fnc_CS_ODSTHEV

Author: Big_Wilk

Description: Creates coustom group of units and places them in HEV over a location. 

Command: Spawn
Return: 
Syntax: -

Parameters: 
0: Array or Number (Units to be droped in): 1. Array of classnames of units to be spawned: ["class","class"] 2. Number of units to be randomly spawned: 6 [Default: [] ]
1: Position (Over which HEVs will be created): 1. position: [0,0,0] [Default: [0,0,0] ]
2: Array of string (String should be map marker names): 1. ["MarkerOne","MarkerTwo","Wp3"] [Default: [] ]
3: String (What is to be done on end waypoint): Options: "cycle" (group goes back to first waypoint), "garrison" (group garrisons nearest buildings), "patrol" (creates random patrols for groups around last waypoint), "" (group does nothing at last waypoint) [Default: "garrison" ]
4: Side (side of units created): Options: West, East, Independent, Civillain [Default: WEST ]
5. /// Join Group System Here 

Demo Mission: None
Media: None
Notes: The return of group can be used to add additional waypoints. 

Example 1: 0 = [["OPTRE_UNSC_ODST_Soldier_Scout","OPTRE_UNSC_ODST_Soldier_Scout_AT"],["MarkerOne","MarkerTwo","Wp3"],"",west] spawn OPTRE_fnc_CS_ODSTHEV
Result: Drops two 

*/

if !isServer exitWith {};

_units = switch (typeName (_this select 0)) do {
	case "ARRAY": {(_this select 0)};
	case "SCALAR": {
		_result = [];		
		for "_i" from 1 to (_this select 0) do {
			_result pushBack (
				[
					"OPTRE_UNSC_ODST_Soldier_Scout",
					"OPTRE_UNSC_ODST_Soldier_Scout_AT",
					"OPTRE_UNSC_ODST_Soldier_Rifleman_AR",
					"OPTRE_UNSC_ODST_Soldier_Rifleman_BR",
					"OPTRE_UNSC_ODST_Soldier_Rifleman_AT",
					"OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman",
					"OPTRE_UNSC_ODST_Soldier_Marksman",
					"OPTRE_UNSC_ODST_Soldier_Scout_Sniper",
					"OPTRE_UNSC_ODST_Soldier_TeamLeader",
					"OPTRE_UNSC_ODST_Soldier_Paramedic",
					"OPTRE_UNSC_ODST_Soldier_DemolitionsExpert"
				] call BIS_fnc_selectRandom
			);
		};
		_result
	};
	default { ["OPTRE_UNSC_ODST_Soldier_Scout_AT","OPTRE_UNSC_ODST_Soldier_TeamLeader","OPTRE_UNSC_ODST_Soldier_Scout","OPTRE_UNSC_ODST_Soldier_Paramedic"] };
};
_pos = [_this,1,[0,0,0]] call BIS_fnc_param;
_wayPoints = [_this,2,[]] call BIS_fnc_param;
_endWaypoint = [_this,3,"garrison"] call BIS_fnc_param;
_side = [_this,4,WEST] call BIS_fnc_param;

_hevs = [];
_fires = [];
_chutes = [];

if (str _pos == "[0,0,0]") exitWith {};

_group = [[0,0,0], _side, _units,[],[],[],[],[],0] call BIS_fnc_spawnGroup;		
_wp =_group addWaypoint [_pos, 0];
{
	_wpPos = getMarkerPos _x; 
	if (str _wpPos != "[0,0,0]") then {
		_wpX =_group addWaypoint [_wpPos, 0];
	};
} forEach _wayPoints;

if (count _wayPoints > 0 AND _endWaypoint != "") then {
	switch (_endWaypoint) do {
		case "cycle": {
			_wpX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wpX setWaypointType "CYCLE";
		};
		case "garrison": {
			_wpX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wpX setWaypointType "MOVE";	
			_wpX setWaypointStatements ["true", "0 = [(group this), (getPos this), 100, 2, true] call CBA_fnc_taskDefend"];
		}; 
		case "patrol": {
			_wpX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wpX setWaypointType "MOVE";	
			_wpX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3,6,9]] call CBA_fnc_taskPatrol;"];
		};
	};
};

{	
	
	_randomisedPos =  [_pos, 200] call CBA_fnc_randPos;
	_spawnPos = _randomisedPos findEmptyPosition [0,100,"OPTRE_HEV"];
	_hev = createVehicle ["OPTRE_HEV", [_spawnPos select 0, _spawnPos select 1, 3000], [], 0, "FLY"];
	_hev setVehicleLock "LOCKED";
	_x assignAsDriver _hev;
	_x moveInDriver _hev;
	_x allowDamage false;
	_hev setVelocity [0,0,-1];
	
	_fire = createVehicle ["IncinerateShell", [0,0,0], [], 15, "NONE"];
	_fire attachTo [_hev,[0,0.4,-0.4]];

	_fires pushBack _fire;
	_hevs pushBack _hev;
	
	sleep 0.2;
	
} forEach units _group;

waitUntil {(getPos (_hevs select 0)) select 2 < 400};

{
	deleteVehicle _x;
} forEach _fires; 

waitUntil {(getPos (_hevs select 0)) select 2 < 200};

for "_i" from 0 to (count _hevs - 1) do {

	_hev = _hevs select _i;
	
	_chute = "OPTRE_HEV_Chute" createVehicle [0,0,0];
	_chute attachTo [_hev, [0, 0, 5] ]; 
	_chutes pushBack _chute;
	
	_hev setVelocity [0,0,-50];
	
	playSound3d ["OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Chute.ogg",_hev,false,getPos _hev, 20,1,500]; 
	
	sleep 0.2;
	
};

waitUntil {(getPos (_hevs select 0)) select 2 < 150};

{
	detach _x;
	_p = getPos _x; 
	playSound3d ["OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Chute.ogg",_x,false,getPos _x, 5,1,100];
	sleep .05;
} forEach _chutes;
	
{
	0 = [_x] spawn {
		_hev = _this select 0; 
		_unit = driver _hev;
		
		waitUntil {getPos _hev select 2 < 1};
		_hev setVelocity [0,0,0];
		playSound3d ["A3\Sounds_F\sfx\missions\vehicle_collision.wss",_hev,false,getPos _hev, 15,1,2000]; 
		
		if ((random 1) < 0.25) then {
			_hev animate ["main_door_rotation",1];
		} else {
			for "_x" from 0 to 3 do {_hev setobjecttextureglobal [_x,""];};
			_door = createVehicle ["OPTRE_HEV_Door", [0,0,10000], [], 0, ""];
			{_x disableCollisionWith _door} forEach [_hev,_unit];
			_door attachto [_hev,[0,3,0.5]];
			detach _door;
			playSound3d ["OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Pop.ogg", _hev, false, getPos _hev, 10,1,500];
			_dir = getdir _hev;
			_door setdir (_dir - 180);
			_vel = velocity _door;
			_dir = direction _door;
			_speed = 20;
			_door setVelocity [
				(_vel select 0) - (sin _dir * _speed), 
				(_vel select 1) - (cos _dir * _speed), 
				((_vel select 2) + 3)
			];		
			{_x addCuratorEditableObjects [[_door], true];} forEach allCurators;				
		};

		_unit leaveVehicle _hev;
		_unit allowDamage true;
		unassignVehicle _unit;
	};
} forEach _hevs;

{
	deleteVehicle _x;
} forEach _chutes;

{_x addCuratorEditableObjects [( (units _group) + (_hevs) ), true];} forEach allCurators;	

/* Find ODST Classes
{
	_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'name'))); 
	(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'value'))]; 
} forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values') call BIS_fnc_getCfgSubClasses); 

(configfile >> "CfgVehicles" >> "OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman" >> "vehicleClass" >> "vehicleClass")

vehicleClass = "OPTRE_UNSC_Man_ODST_class";


		private ["_unitClassArray","_result"];
		
		_unitClassArray = [];
		
		
		{
			_unitClass = _x;
			if ( (getText (configfile >> "CfgVehicles" >> _unitClass >> "vehicleClass")) == "OPTRE_UNSC_Man_ODST_class" ) then {_unitClassArray pushBack _unitClass;};
		} forEach ( (configfile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses);
*/		