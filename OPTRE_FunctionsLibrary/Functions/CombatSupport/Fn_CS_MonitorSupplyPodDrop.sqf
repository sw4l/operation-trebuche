/*
OPTRE_fnc_CS_MonitorSupplyPodDrop

Author: Big_Wilk

Description: 

Command: Module Spawned 
Return: bool   
Syntax: 
Parameters: 

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
	_n = 10; /*switch (typeName _pod) do {
		case "OPTRE_m1087_stallion_unsc": 	 { 8 };
		case "OPTRE_m1015_mule_unsc": 	 	 { 8 };
		case "OPTRE_UNSC_falcon_black": 	 { 0.1 };
		case "OPTRE_UNSC_falcon_green":		 { 0.1 };
		case "OPTRE_UNSC_falcon_snow": 		 { 0.1 };
		case "OPTRE_UNSC_falcon_tan": 		 { 1 };		
		default 							 { 8 };
	};*/
	
	waitUntil {getPos _pelican select 2 < _n OR !alive _pelican OR !(alive driver vehicle player)};
	detach _pod;
	_pod setVelocity [0,0,-1];
	
	//_timeEnd = time + 6; 	
	waitUntil { (getPos _pod select 2 < 1) /*OR (time > _timeEnd)*/}; 	
	0 = [_pod, "vehicle_collision",250] call CBA_fnc_globalSay3d;
	0 = {_x addCuratorEditableObjects [[_pod], true];} forEach allCurators;	
	
	sleep 1.2;
	
	_pelican land "none";
	//deleteVehicle (_pelican getVariable ["OPTRE_LANDPAD",objNull]);
	
} else {

	sleep _sleepTime;
	detach _pod;
	
	_pod setVelocity [0, 0, -1];
		
	_timeEnd = time + 30; 	
	waitUntil { (getPos _pod select 2 < 1) OR (time > _timeEnd) }; 	
	_pod setVelocity [0,0,-1];
	
	0 = [_pod, "vehicle_collision",250] call CBA_fnc_globalSay3d;
	0 = {_x addCuratorEditableObjects [[_pod], true];} forEach allCurators;
	
};

true;