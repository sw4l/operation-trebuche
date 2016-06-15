/*
OPTRE_fnc_CS_MonitorSupplyPodDrop

Author: Big_Wilk

Description: 

Command: Module Spawned 
Return: bool   
Syntax: 
Parameters: 
0: Object: Attached to pelican that will be droped;
1: Number: -1 for vehicle, > 0 for sup pods
Demo Mission:
Media:

Example1:

Result: 

Example2:

Result: 

MP: Server 
*/

_pod = _this select 0; 
_sleepTime = (_this select 1);

if ( isNull _pod) exitWith {};

if (_sleepTime == -1) then {

	_pelican = attachedTo _pod; 
	_n = 10;
	
	waitUntil {getPos _pelican select 2 < _n OR !alive _pelican OR !(alive driver vehicle _pelican)};
	detach _pod;
	//_pod enableSimulation true;
	_pod setVelocity [0,0,-1];
	
	waitUntil { (getPos _pod select 2 < 1) }; 	
	playSound3d ["A3\Sounds_F\sfx\missions\vehicle_collision.wss", _pod,false, getPos _pod, 0.5, 1, 300];
	0 = {_x addCuratorEditableObjects [[_pod], true];} forEach allCurators;	
	
	sleep 1.2;
	
	_pelican land "none";
	
} else {

	sleep _sleepTime;
	
	detach _pod;
	_pod setVelocity [0, 0, -1];
	_pod setCenterOfMass [[0,0,-2],10]; 
	
	_pod addEventHandler ["HandleDamage",{   
		(_this select 0) setVelocity [0,0,0];  
		[(_this select 0), 0, 0] call BIS_fnc_setPitchBank;
		playSound3d ["A3\Sounds_F\sfx\missions\vehicle_collision.wss", (_this select 0),false, getPos (_this select 0), 0.5, 1, 300];
		(_this select 0) removeAllEventHandlers "HandleDamage";
	}];
	
};

true;