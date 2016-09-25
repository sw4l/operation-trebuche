/*

	OPTRE_Fnc_ExportClassnames
	
	Author: Big_Wilk
	
	Description: Sorts all classnames containing the string "OPTRE" into relevant arrays and then copy's them to your clipboard.
	
	Return: None
	
	Example: 
	0 = [] call OPTRE_Fnc_ExportClassnames; 
	Result: All classnames containing "OPTRE" are now on your clipboard. 
	
	MP: This function is disabled in MP and will return exit with an error message telling you to it is disabled in MP games.
	
*/

if isMultiplayer exitWith {hint "THIS FUNCTION IS DISABLED IN MULTILAYER GAMES AS CopyToClipboard IS DISABLED IN MP GAMES";};

//_formatBool = true;

private ["_googles","_magazines","_weapon","_misc"]; 

_googles = [];
_magazines = [];
_weapons = [];
_pistol = [];
_riffle = [];
_at = [];
_weaponAttachmetns = [];
_misc = []; 
_frigate = [];

_tanks = [];
_cars = [];
_man = [];
_module = [];
_aircraft = [];
_ammoBox = [];
_building = [];

_bag = [];
_uniform = [];
_vest = [];
_helmet = [];

{
	private ["_index","_configPath"];
	
	_index = _x select 0;
	_configPath = _x select 1;
	
	{
		if (["OPTRE", _x, false] call BIS_fnc_inString) then {
			switch _index do {
				case 0: {_googles pushBack _x;};
				case 1: {
					_found = false;
					if ((["bag", _x, false] call BIS_fnc_inString) AND !_found) then {_bag pushBack _x; _found = true; };				
					if ((["uniform", _x, false] call BIS_fnc_inString) AND !_found) then {_uniform pushBack _x; _found = true; };		
					if ((["vest", _x, false] call BIS_fnc_inString) AND !_found) then {_vest pushBack _x; _found = true; };		
					if ( ((["helmet", _x, false] call BIS_fnc_inString) or (["hat", _x, false] call BIS_fnc_inString) or (["cap", _x, false] call BIS_fnc_inString)) AND !_found) then {_helmet pushBack _x; _found = true; };		
					if ("Pistol_Base_F" in ([(configfile >> "CfgWeapons" >> _x), true] call BIS_fnc_returnParents) AND !_found) then {_pistol pushBack _x; _found = true; };
					if ("Rifle_Base_F" in ([(configfile >> "CfgWeapons" >> _x), true] call BIS_fnc_returnParents) AND !_found) then {_riffle pushBack _x; _found = true; };
					if ("Launcher_Base_F" in ([(configfile >> "CfgWeapons" >> _x), true] call BIS_fnc_returnParents) AND !_found) then {_at pushBack _x; _found = true; };
					if ("ItemCore" in ([(configfile >> "CfgWeapons" >> _x), true] call BIS_fnc_returnParents) AND !_found) then {_weaponAttachmetns pushBack _x; _found = true; };
					if !_found then {_weapons pushBack _x;};
				};
				case 2: {_magazines pushBack _x;};
				default {	
					_found = false;
					if ((["Frigate", _x, false] call BIS_fnc_inString) AND !_found) then {_frigate pushBack _x; _found = true; };	
					if (_x isKindOf "Tank" AND !_found) then {_tanks pushBack _x; _found = true; }; 
					if (_x isKindOf "car" AND !_found) then {_cars pushBack _x; _found = true; };
					if (_x isKindOf "man" AND !_found) then {_man pushBack _x; _found = true; };	
					if (_x isKindOf "Module_F" AND !_found) then {_module pushBack _x; _found = true; };
					if (_x isKindOf "Air" AND !_found) then {_aircraft pushBack _x; _found = true; };
					if (_x isKindOf "Bag_Base" AND !_found) then {_bag pushBack _x; _found = true; };	
					if (_x isKindOf "ReammoBox_F" AND !_found) then {_ammoBox pushBack _x; _found = true; };
					if (_x isKindOf "Building" AND !_found) then {_building pushBack _x; _found = true; };					
					if !_found then {_misc pushBack _x; };
					
				};
			};
		};
	} forEach ((configfile >> _configPath) call BIS_fnc_getCfgSubClasses);
	
} forEach [
	[0, "CfgGlasses"],
	[1, "CfgWeapons"],
	[2, "CfgMagazines"],
	[-1, "CfgVehicles"]
];

_count = 0;  
{ 
  if (["OPTRE", _x, false] call BIS_fnc_inString) then {_count = _count + 1;}; 
} forEach (
	((configfile >> "CfgGlasses") call BIS_fnc_getCfgSubClasses) + 
	((configfile >> "CfgWeapons") call BIS_fnc_getCfgSubClasses) + 
	((configfile >> "CfgMagazines") call BIS_fnc_getCfgSubClasses) + 
	((configfile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses)
);  
 

_br = toString [13,10];
_string = 
	"OPTRE Config exporter by Big_Wilk. If you wish to suggest a new export category PM me." + _br +
	"Example 1: 0 = [] call OPTRE_Fnc_ExportClassnames; (This will export all classnames into an array format, more format options comeing in future)" + _br + 
	(format ["TOTAL NUMBER OF IN GAME ITEMS FOUND: %1! NOTE: A small number of OPTRE items are not tagged with OPTRE and will not show up in this export (typically bases).",_count]) + _br + _br +
	//"// Example 2: 0 = [True] call OPTRE_Fnc_ExportClassnames; (This will export all classnames onto individual lines next to their display names)" + _br + _br +
	
	"// Goggles (CfgGlasses)" + (format [" Total: %1", count _googles]) + _br + (str _googles) + _br +
	"// Magazines (CfgWeapons)" + (format [" Total: %1", count _magazines]) + _br + (str _magazines) + _br +
	"// Weapons Misc (CfgWeapons)" + (format [" Total: %1", count _weapons]) + _br + (str _weapons) + _br +	
	"// Weapons Pistol (CfgWeapons)" + (format [" Total: %1", count _pistol]) + _br + (str _pistol) + _br +	
	"// Weapons Rifle (CfgWeapons)" + (format [" Total: %1", count _riffle]) + _br + (str _riffle) + _br +	
	"// Weapons AT (CfgWeapons)" + (format [" Total: %1", count _at]) + _br + (str _at) + _br +	
	"// Weapons Attachments (CfgWeapons)" + (format [" Total: %1", count _weaponAttachmetns]) + _br + (str _weaponAttachmetns) + _br +
	"// Uniforms (CfgWeapons)" + (format [" Total: %1", count _uniform]) + _br + (str _uniform) + _br +
	"// Vests (CfgWeapons)" + (format [" Total: %1", count _vest]) + _br + (str _vest) + _br +
	"// Helmets (CfgWeapons)" + (format [" Total: %1", count _helmet]) + _br + (str _helmet) + _br +
	"// Bags (cfgVehicles)" + (format [" Total: %1", count _bag]) + _br + (str _bag) + _br +_br +
	
	"// Tanks (cfgVehicles)" + (format [" Total: %1", count _tanks]) + _br + (str _tanks) + _br + 
	"// Cars (cfgVehicles)" + (format [" Total: %1", count _cars]) + _br + (str _cars) + _br +
	"// Men (cfgVehicles)" + (format [" Total: %1", count _man]) + _br + (str _man) + _br +
	"// Aircraft (cfgVehicles)" + (format [" Total: %1", count _aircraft]) + _br + (str _aircraft) + _br +
	"// Ammoboxs (cfgVehicles)" + (format [" Total: %1", count _ammoBox]) + _br + (str _ammoBox) + _br + _br +
	
	"// Frigate Objects (cfgVehicles)" + (format [" Total: %1", count _frigate]) + _br + (str _frigate) + _br +
	"// Buildings (cfgVehicles)" + (format [" Total: %1", count _building]) + _br + (str _building) + _br +	
	"// Modules (cfgVehicles)" + (format [" Total: %1", count _module]) + _br + (str _module) + _br +
	"// Unknown (cfgVehicles)" + (format [" Total: %1", count _misc]) + _br + (str _misc) + _br
;

copyToClipboard _string;
hint "OPTRE Classname Found! Data Has Been Copied To Your Clipboard.";