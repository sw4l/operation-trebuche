/*
OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown

Author: Big_Wilk

Description:

Command: Call 
Return:  
Syntax: 
Parameters: 
Demo Mission: None 
Media: https://community.bistudio.com/wiki/setVelocity 

Example1:
	_vel = [velocity _vehicle, direction _vehicle, (speed _vehicle - 20)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown;
Result:

MP: 
*/

_vel = (_this select 0);
_dir = (_this select 1);
_speed = (_this select 2); 

[(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_this select 3) ];