/*
OPTRE_fnc_CS_PelicanAirAssault

Author: Big_Wilk

Description: Creates a pelican that will drop supply pods or vehicles at the requested location. Our module: Module_OPTRE_PelicanSupplyDrop also uses this script. 

Command: call
Return: array (of (objects) supply pods dropped by pelicans.)   
Syntax: _spawnedPod = [Parameters] call OPTRE_fnc_CS_PelicanAirAssault;

Parameters: 
0: Position, STRING OR OBJECT: (Can be Object, World Position or Map Marker. Example, 1. Car1, 2. [0,0,0], 3. "MyMapMarker")
1: Array: of ground units that will be spawned:
	[
		"OPTRE_M12_LRV_black", // Classname of a vehicle 
		"ODST", // Unit Faction Options Are: "ODST", "Army Arid", "Army Desert", "Army Snow", "Army Tropic", "Army Woodland", "Marines", "Eridanus Rebels", "United Rebel Front"
		["marker1","marker2"] // waypoint to folow must be map markers. 
	]
	or 
	[
		OPTRE_M12_LRV_black, // Classname of a vehicle 
		["unit_className","unit_className","unit_className","unit_className","unit_className","unit_className"], // Do not add more than 6 units to this array or you will cause problems. 
		["marker1","marker2"] // waypoints to follow must be map markers. 
	]
2: Number: (The direction from the position defined in 0 that the pelican will spawn. Default is: random 360)
3: Number: (The distance in M that in the direction of 2 that the pelican will spawn. Default is: 3000m)
4: String: (How the pelican is painted options: "marine","tan","green","black","insurrection". Default is: "marine".)
5: Number: (The Height the Pelican flys at. Default is: 100) 
5: Side: (Side the pelican is on options: WEST, EAST, CIVILIAN, INDEPENDENT. Default is: west)
6: Number: (The Direction the pelican flys of to de-spawns after dropping its supplys. Default is: Default is Direciton of Aproach -180)
7: String: (This string will be turned into code and call on each "EMPTY" drop pod or any vehicle spawned. Inside the script _THIS refers to the vehicle / pod been spawned. Example: "_this addMagazineCargoGlobal ['Laserbatteries',2]; _this addWeaponCargoGlobal ['Laserdesignator',1];". Default is: "")

Demo Mission: None
Media: None
Notes: All parameters are optional apart from 0. Code entered into 7 will be run on server only, commands such as addMagazineCargoGlobal should be used (NOT addMagazineCargo) in 7. 

// Examples With Just Postions: 
Example 1A:
	_podsDroped = [player] call OPTRE_fnc_CS_PelicanAirAssault;
Result: Pods dropped close to players location

Example 1B:
	_podsDroped = ["NameOfMapMarker"] call OPTRE_fnc_CS_PelicanAirAssault;
Result: Pods dropped close to a map marker called "NameOfMapMarker" location	

Example 1C:
	_podsDroped = [[0,0,0]] call OPTRE_fnc_CS_PelicanAirAssault;
Result: Pods dropped close to position: [0,0,0]

// Examples with custom weapons pods
Example 2A:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]]] call OPTRE_fnc_CS_PelicanAirAssault;
Result: 

Example 2B:
	_podsDroped = [player,["OPTRE_M12_LRV_black",["unit_className","unit_className","unit_className","unit_className","unit_className","unit_className"],["a1","a2","a3"]]] call OPTRE_fnc_CS_PelicanAirAssault;
Result: 

// More Examples
Example3:
	_podsDroped = [MyCar,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],180] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican will spawn to the south the of MyCar. 

Example4:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican will spawn 1000m to the north the of MyCar.

Example5:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican will spawn 1000m to the north the of MyCar.

Example6:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000,"black"] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican spawned will be have a "black" paint job.
	
Example7:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000,"black",125] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican flying height will 125m
	
Example8:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000,"black",125,west] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican spawned is on side west.

Example9:
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000,"black",125,west,45] call OPTRE_fnc_CS_PelicanAirAssault;
Result: The pelican fly's out to east to despawn after droping its boxes.

Example10: 
	_podsDroped = [player,["OPTRE_M12_LRV_black","ODST",["a1","a2","a3"]],0,1000,"black",125,west,45,"_this addMagazineCargoGlobal ['Laserbatteries',2]; _this addWeaponCargoGlobal ['Laserdesignator',1];"] call OPTRE_fnc_CS_PelicanAirAssault;
Result: the "empty" box(s) spawned has custom code executed on it. In this example 2 Laserbatteries and one 1 Laserdesignator ().

MP: Server 
*/

//if !isServer exitWith {};

private ["_pos","_crew","_crewGroup","_group1","_group2"];

// Variables 
_pos = switch (typeName (_this select 0)) do { case "ARRAY": { (_this select 0) }; case "STRING": { (getMarkerPos (_this select 0)) }; case "OBJECT": { getPos (_this select 0) }; default {[0,0,0]}; }; _posFinal = _pos;
_AssaultTroopsArray = [_this,1,["OPTRE_M12_LRV_black","ODST",[]]] call BIS_fnc_param;

_vehicleMagLiftedClassname = [_AssaultTroopsArray, 0, ""] call BIS_fnc_param;//_podArrayString select 0;
_squadsFactions =  [_AssaultTroopsArray, 1, "Marines"] call BIS_fnc_param;//_podArrayString select 1;
_waypointsMapMarkers = [_AssaultTroopsArray, 2, []] call BIS_fnc_param;// _podArrayString select 2;
/*if (_groupOneNumberOf > 6) then {_groupOneNumberOf = 6;};
_groupSpeciality =  [_AssaultTroopsArray, 2, "AT"] call BIS_fnc_param;//_groupSpeciality = _podArrayString select 3;*/

_dir = [_this,2,(random 360)] call BIS_fnc_param;
_dis = [_this,3,3000] call BIS_fnc_param;
_style = [_this,4,"marine"] call BIS_fnc_param;
_flyInHeight = [_this,5,100] call BIS_fnc_param;
_side = [_this,6,WEST] call BIS_fnc_param;
_exitDir = [_this,7,(_dir - 180)] call BIS_fnc_param;
_code = compile ([_this,8,""] call BIS_fnc_param);
_endWaypoint = compile ([_this,9,"patrol"] call BIS_fnc_param);

_VehWPPosArray = [];

// Spawn Pelican. 
_className = switch _style do {
	case "marine": 		 { "OPTRE_Pelican_armed_marine" };
	case "tan": 		 { "OPTRE_Pelican_armed_tan" };
	case "green": 		 { "OPTRE_Pelican_armed_green" };
	case "black": 		 { "OPTRE_Pelican_armed_black" };
	case "insurrection": { "OPTRE_Pelican_unarmed_ins" };
	default	 			 { "OPTRE_Pelican_armed_marine" };
};

_pelicanArray = [([[(_pos select 0), (_pos select 1), _flyInHeight], _dis, _dir] call OPTRE_fnc_MathsTriangulatePos), (_dir - 180), _className, _side] call bis_fnc_spawnvehicle;
_pelican = _pelicanArray select 0;
//_pelicanCrewArray = _pelicanArray select 1;
_pelicanGroup = _pelicanArray select 2;
//_everyThingSpawned = units _pelicanGroup + [_pelican]; 
{_x setVariable ["OPTRE_AllSpawned",(units _pelicanGroup + [_pelican]),false]} forEach [_pelican, driver _pelican];
_pelican flyInHeight _flyInHeight;
_pelican setVehicleLock "LOCKEDPLAYER";


// End If Event Handlers Pelican. 
{
	_x addEventHandler ["killed",{
		if isServer then { 
			_veh = ( (_this select 0) getVariable ["OPTRE_CS_SupPods", objNull] );
			(_this select 0) setVariable ["OPTRE_CS_SupPods", objNull];
			if (!isNull _veh) then {detach _veh;}; 
			{ (_this select 0) removeAllEventHandlers _x; } forEach ["GetOut","HandleDamage","killed"];
			{_x addCuratorEditableObjects [( ( (_this select 0) getVariable ["OPTRE_AllSpawned",[]] ) + [_veh]), true];} forEach allCurators;	
		};
	}];
} forEach [_pelican, driver _pelican];
_pelican addEventHandler ["GetOut",{
	if isServer then {
		if ( (_this select 1) == "driver" ) then {
			if isServer then {
				_veh = ( (_this select 0) getVariable ["OPTRE_CS_SupPods", objNull] );
				(_this select 0) setVariable ["OPTRE_CS_SupPods", objNull];
				if (!isNull _veh) then {detach _veh;};
				{ (_this select 0) removeAllEventHandlers _x; } forEach ["GetOut","HandleDamage","killed"];
				{_x addCuratorEditableObjects [( ( (_this select 0) getVariable ["OPTRE_AllSpawned",[]] ) + [_veh]), true];} forEach allCurators;	
			};
		};	
	};
}];


// Spawn Group and Vehicle in / attachTo Pelican 
_squad = if (typeName _squadsFactions == "ARRAY") then {
	_squadsFactions
} else {
	(switch _squadsFactions do {
		case "ODST": 				 { ["OPTRE_UNSC_ODST_Soldier_TeamLeader","OPTRE_UNSC_ODST_Soldier_Paramedic","OPTRE_UNSC_ODST_Soldier_Rifleman_AT","OPTRE_UNSC_ODST_Soldier_Rifleman_BR","OPTRE_UNSC_ODST_Soldier_DemolitionsExpert","OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman"] };
		case "Army Arid": 			 { ["OPTRE_UNSC_Army_Soldier_SquadLead_ARI","OPTRE_UNSC_Army_Soldier_Medic","OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI","OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI","OPTRE_UNSC_Army_Soldier_Rifleman_BR_ARI","OPTRE_UNSC_Army_Soldier_Autorifleman_ARI"] };
		case "Army Desert": 		 { ["OPTRE_UNSC_Army_Soldier_SquadLead_DES","OPTRE_UNSC_Army_Soldier_Demolitions_DES","OPTRE_UNSC_Army_Soldier_AT_Specialist_DES","OPTRE_UNSC_Army_Soldier_AT_Specialist_DES","OPTRE_UNSC_Army_Soldier_Rifleman_BR_DES","OPTRE_UNSC_Army_Soldier_Autorifleman_DES"] };
		case "Army Snow": 			 { ["OPTRE_UNSC_Army_Soldier_SquadLead_SNO","OPTRE_UNSC_Army_Soldier_Demolitions_SNO","OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO","OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO","OPTRE_UNSC_Army_Soldier_Rifleman_BR_SNO","OPTRE_UNSC_Army_Soldier_Autorifleman_SNO"] };	
		case "Army Tropic": 		 { ["OPTRE_UNSC_Army_Soldier_SquadLead_TRO","OPTRE_UNSC_Army_Soldier_Demolitions_TRO","OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO","OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO","OPTRE_UNSC_Army_Soldier_Rifleman_BR_TRO","OPTRE_UNSC_Army_Soldier_Autorifleman_TRO"] };
		case "Army Woodland": 		 { ["OPTRE_UNSC_Army_Soldier_SquadLead_WDL","OPTRE_UNSC_Army_Soldier_Demolitions_WDL","OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL","OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL","OPTRE_UNSC_Army_Soldier_Rifleman_BR_WDL","OPTRE_UNSC_Army_Soldier_Autorifleman_WDL"] };	
		case "Marines":				 { ["OPTRE_UNSC_Marine_Soldier_SquadLead","OPTRE_UNSC_Marine_Soldier_Corpsman","OPTRE_UNSC_Marine_Soldier_AT_Specialist","OPTRE_UNSC_Marine_Soldier_AT_Specialist","OPTRE_UNSC_Marine_Soldier_Rifleman_BR","OPTRE_UNSC_Marine_Soldier_Autorifleman"] };		
		case "Eridanus Rebels":		 { ["OPTRE_Ins_ER_MAdvisor","OPTRE_Ins_ER_Guerilla_AR","OPTRE_Ins_ER_Militia_MG","OPTRE_Ins_ER_Deserter_GL","OPTRE_Ins_ER_Terrorist","OPTRE_Ins_ER_Rebel_AT"] };	
		case "United Rebel Front":	 { ["OPTRE_Ins_URF_SquadLead","OPTRE_Ins_URF_Marksman","OPTRE_Ins_URF_Rifleman_BR","OPTRE_Ins_URF_Rifleman_AR","OPTRE_Ins_URF_Rifleman_AT","OPTRE_Ins_URF_Autorifleman"] };	
	})
};

_isVehicleDrop = (_vehicleMagLiftedClassname != ""); 
if _isVehicleDrop then {
	_veh = createVehicle [_vehicleMagLiftedClassname, [(_pos select 0), (_pos select 1), 10000], [], 0, "FLY"];
	_pelican setVariable ["OPTRE_CS_SupPods",_veh,false];
	_crewGroup = [[0,0,0], _side, [(_squad call BIS_fnc_selectRandom),(_squad call BIS_fnc_selectRandom)]] call BIS_fnc_spawnGroup;
	_crew = units _crewGroup;
	(_crew select 0) assignAsDriver _veh; 
	(_crew select 0) moveInDriver _veh;
	(_crew select 1) assignAsGunner _veh; 
	(_crew select 1) moveInGunner _veh;
	if (vehicle (_crew select 1) == (_crew select 1)) then {deleteVehicle (_crew select 1);};
	0 = _veh call _code;
	_veh disableCollisionWith _pelican;
	//_veh enableSimulation false;
	_veh attachTo [_pelican, ([_vehicleMagLiftedClassname] call OPTRE_fnc_PelicanAttachToPoints)]; 	
	_VehWPPosArray pushBack ([_pos, 70, 180] call OPTRE_fnc_MathsTriangulatePos);
	/*_exitRearWP = _crewGroup addWaypoint [([_pos, 70, 180] call OPTRE_fnc_MathsTriangulatePos) , 0];
	_exitRearWP setWaypointType "MOVE";
	_exitRearWP setWaypointCompletionRadius 200;*/
} else {
	_pelican setVariable ["OPTRE_CS_SupPods",objNull,false];
};

_group1 = [[0,0,0], _side, _squad] call BIS_fnc_spawnGroup;
{_x assignAsCargo _pelican; _x moveInCargo _pelican;} forEach units _group1;

_exitLeftWP = _group1 addWaypoint [([_pos, 75, 270] call OPTRE_fnc_MathsTriangulatePos) , 0];
_exitLeftWP setWaypointFormation "LINE";
//_exitLeftWP setWaypointCompletionRadius 0;
_exitLeftWP setWaypointTimeout [20, 20, 20];
_exitLeftWP setWaypointType "MOVE";
_exitLeftWP setWaypointBehaviour "COMBAT";
_exitLeftWP setWaypointCombatMode "RED";
_exitLeftWP setWaypointSpeed "FULL";

/*_exitLeftWP1 = _group1 addWaypoint [([_pos, 75, 270] call OPTRE_fnc_MathsTriangulatePos) , 0];
_exitLeftWP1 setWaypointBehaviour "AWARE";
_exitLeftWP1 setWaypointTimeout [0, 0, 0];*/

_group2 = [[0,0,0], _side, _squad] call BIS_fnc_spawnGroup;
{_x assignAsCargo _pelican; _x moveInCargo _pelican;} forEach units _group2;

_exitRightWP = _group2 addWaypoint [([_pos, 75, 90] call OPTRE_fnc_MathsTriangulatePos) , 0];
_exitRightWP setWaypointFormation "LINE";
//_exitRightWP setWaypointCompletionRadius 0;
_exitRightWP setWaypointTimeout [20, 20, 20];
_exitRightWP setWaypointType "MOVE";
_exitRightWP setWaypointBehaviour "COMBAT";
_exitRightWP setWaypointCombatMode "RED";
_exitRightWP setWaypointSpeed "FULL";

/*_exitRightWP1 = _group2 addWaypoint [([_pos, 75, 90] call OPTRE_fnc_MathsTriangulatePos), 0];
_exitRightWP1 setWaypointBehaviour "AWARE";
_exitRightWP1 setWaypointTimeout [0, 0, 0];*/

{_x setUnitAbility (0.5 + (random 0.5));} forEach (units _group2 + units _group1);

{
	private ["_MarkerPos"];
	_MarkerPos = getMarkerPos _x;
	if (str _MarkerPos != "[0,0,0]") then {
		_x1 = _group1 addWaypoint [([_MarkerPos, 50, 90 ] call OPTRE_fnc_MathsTriangulatePos), 0];
		_x1 setWaypointBehaviour "COMBAT";
		_x1 setWaypointCombatMode "RED";
		_x2 = _group2 addWaypoint [([_MarkerPos, 50, 270] call OPTRE_fnc_MathsTriangulatePos), 0];
		_x2 setWaypointBehaviour "COMBAT";
		_x2 setWaypointCombatMode "RED";
		if _isVehicleDrop then {_VehWPPosArray pushBack ([_MarkerPos, 100, 270] call OPTRE_fnc_MathsTriangulatePos);};	
	};
} forEach _waypointsMapMarkers;

	switch (_endWaypoint) do {
		case "cycle": {
			{
				_wpX = _x addWaypoint [_pos, 0];
				_wpX setWaypointType "CYCLE";
			} forEach [_group1,_group2];
		};
		case "garrison": {
			{
				_wpX = _x addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
				_wpX setWaypointType "MOVE";	
				_wpX setWaypointStatements ["true", "0 = [(group this), (getPos this), 100, 2, true] call CBA_fnc_taskDefend"];
			} forEach [_group1,_group2];
		}; 
		case "patrol": {
			{
				_wpX = _x addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
				_wpX setWaypointType "MOVE";	
				_wpX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3,6,9]] call CBA_fnc_taskPatrol;"];
			} forEach [_group1,_group2];
		};
	};

// Add all groups to curator 
_allUnits = if _isVehicleDrop then {[_veh] + _crew + units _group1 + units _group2} else {units _group1 + units _group2};
if _isVehicleDrop then {
	_pelican setVariable ["OPTRE_CS_VehWP",_VehWPPosArray,false];
	_pelican setVariable ["OPTRE_CS_VehGrp",_crewGroup,false];
};
0 = {_x addCuratorEditableObjects [_allUnits, true];} forEach allCurators;

// Give Pelican waypoints
_wpDropAproach = _pelicanGroup addWaypoint [([_pos, 1000, _dir] call OPTRE_fnc_MathsTriangulatePos), 0];
_wpDropAproach setWaypointStatements ["true", "if isServer then { _pelican = vehicle this; _pelican flyInHeight 12; _pelican animate ['cargodoor_1',1]; _pelican animate ['cargodoor_2',1]; };"];
_wpDropAproach setWaypointType "MOVE";
_wpDropAproach setWaypointBehaviour "CARELESS";
_wpDropAproach setWaypointCombatMode "RED";

_wpUnLoad = _pelicanGroup addWaypoint [_posFinal , 1];
_wpUnLoad setWaypointStatements ["vehicle this land 'GET OUT'; true", 
	" 
		if isServer then {
			_pelican = vehicle this; 
			detach (_pelican getVariable [""OPTRE_CS_SupPods"",objNull]);
			_pelican setVariable [""OPTRE_CS_SupPods"",objNull,false]; 
			_pelican animate ['cargodoor_1',0]; 
			_pelican animate ['cargodoor_2',0]; 
			_pelican land 'none';
			{
				_wp = (_pelican getVariable [""OPTRE_CS_VehGrp"", grpNull]) addWaypoint [_x, 0];
				_wp setWaypointType 'MOVE';
				_wp setWaypointFormation 'COLUMN';
				_wp setWaypointBehaviour 'COMBAT';
				_wp setWaypointCombatMode 'RED';
			} forEach (_pelican getVariable [""OPTRE_CS_VehWP"", [] ]);
		};
	"
];
_wpUnLoad setWaypointType "TR UNLOAD";
_wpUnLoad setWaypointBehaviour "CARELESS";
_wpUnLoad setWaypointCombatMode "RED";
_wpUnLoad setWaypointSpeed "LIMITED";
//_wpUnLoad waypointAttachVehicle _pad;
_wpUnLoad setWaypointTimeout [10, 10, 10];

_wpFinal = _pelicanGroup addWaypoint [([_pos, _dis, _exitDir] call OPTRE_fnc_MathsTriangulatePos), 2];
_wpFinal setWaypointStatements ["true", "if isServer then {_veh = vehicle this; {deleteVehicle _x;} forEach [_veh] + thisList;};"];
_wpFinal setWaypointType "MOVE"; 
_wpFinal setWaypointBehaviour "CARELESS";
_wpFinal setWaypointCombatMode "RED";
_wpFinal setWaypointSpeed "FULL";

// Return
_return = if _isVehicleDrop then { [_crewGroup,_group1,_group2] } else { [_group1,_group2] };
_return