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
			_wpX setWaypointStatements ["true", "0 = [(group this), (getPos this), 25, 2, false] call CBA_fnc_taskDefend"];
		}; 
		case "patrol": {
			_wpX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wpX setWaypointType "MOVE";	
			_wpX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3,6,9]] call CBA_fnc_taskPatrol;"];
		};
	};
};

_unitsInGroup = units _group; 
{
	_spawnPos =  [_pos, 50] call CBA_fnc_randPos;
	//_spawnPos = _randomisedPos findEmptyPosition [0,25,"OPTRE_HEV"];
	_x setPos [(_spawnPos select 0), (_spawnPos select 1), 10000];
} forEach _unitsInGroup;

0 = [[0,0,0],_unitsInGroup,"No Frigate",5,0,-250,0,2500,1500,1200,1000,500,10,true,false] spawn OPTRE_Fnc_HEV; 

{_x addCuratorEditableObjects [_unitsInGroup, true];} forEach allCurators;	

true