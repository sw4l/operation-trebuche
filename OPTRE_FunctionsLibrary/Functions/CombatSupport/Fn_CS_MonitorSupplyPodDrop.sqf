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
//_pelican = attachedTo _pod;
//_vel = [velocity _pelican, direction _pelican, 1] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown;	

sleep _sleepTime;

detach _pod; 
_pod setVelocity [0, 0, -1];
		
_timeEnd = time + 30; 	
waitUntil { (getPos _pod select 2 < 1) OR (time > _timeEnd) }; 	

_pod setVelocity [0,0,0];
//playSound 'vehicle_collision';	
[_pod, "vehicle_collision",250] call CBA_fnc_globalSay3d;
[_pod, 0, 0] call BIS_fnc_setPitchBank;
{_x addCuratorEditableObjects [[_pod], true];} forEach allCurators;