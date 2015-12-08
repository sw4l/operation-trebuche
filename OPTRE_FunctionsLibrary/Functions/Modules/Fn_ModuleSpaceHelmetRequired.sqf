/*
OPTRE_fnc_

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

OPTRE_fnc_CheckSpaceHelmet = {
	!( str (getText (configfile >> "CfgWeapons" >> (headGear player) >> "OPTRE_IsSpaceWorthy")) == "" )
};

_hasSpaceHelmet = [] call OPTRE_fnc_CheckSpaceHelmet; 
if !_hasSpaceHelmet then {player addHeadgear "OPTRE_UNSC_Marine_Helmet_Vacuum";};

{
	player addEventHandler [_x,{
		_hasSpaceHelmet = [] call OPTRE_fnc_CheckSpaceHelmet; 
		if _hasSpaceHelmet then {player setDamage 1;};
	}];
} forEach ["put","take","InventoryClosed"];

player addEventHandler ["Respawn",{
	_hasSpaceHelmet = [] call OPTRE_fnc_CheckSpaceHelmet; 
	if !_hasSpaceHelmet then {player addHeadgear "OPTRE_UNSC_Marine_Helmet_Vacuum";};
}];