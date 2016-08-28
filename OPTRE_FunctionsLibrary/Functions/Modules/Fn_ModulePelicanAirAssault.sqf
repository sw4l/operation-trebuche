/*
OPTRE_fnc_

Author: Big_Wilk

Description: 

Command: spawn
Return: true 
Syntax: 

Parameters: 

Demo Mission: none 
Media: none

Example 1:

Example 2:

MP: Server Only

*/

if !isServer exitWith {};

_logic = _this select 0;

waitUntil {!isNil {_logic getVariable "Pelican_Unarmed_Colour"} || isNull _logic}; // pelican colour set or module deleted 
if (isNull _logic) exitWith {}; // exit if module is deleted

_colour = _logic getVariable "Pelican_Unarmed_Colour";

_pos = getPos _logic;
_dir = _logic getVariable "spawnDir"; 
_exitDir = _logic getVariable "exitDir"; 
_distance = _logic getVariable "distance";
_flyInHeight = _logic getVariable "flyInHeight";

_side = switch (_logic getVariable "side") do {
	case "WEST": 			{WEST};
	case "EAST": 			{EAST};
	case "INDEPENDENT": 	{INDEPENDENT};
	case "CIVILIAN": 		{CIVILIAN};
};

_box1 = _logic getVariable "box1";
_box2 = _logic getVariable "box2";
_posMarkerArrays = ( _logic getVariable ["box3",""] ) call OPTRE_fnc_StringToArrayOfString;

_code = _logic getVariable "code";
_veh =  _logic getVariable "vehicle";

//_typeOfSpawn = ( if ( _veh == "none" ) then { _podArray } else { _veh } );
deleteVehicle _logic; 

0 = [
	_pos,
	[_veh,_box1,_posMarkerArrays,_box2],
	_dir,
	_distance,
	_colour,
	_flyInHeight,
	_side,
	_exitDir,
	_code
] call OPTRE_fnc_CS_PelicanAirAssault;

[];