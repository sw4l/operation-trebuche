/*
	Card Assess Key: 
	0: No Security Required  
	1: Frigate Area 1
	2: Frigate Area 2
	3: Frigate Area 3
	4: Frigate Area 4
	5: Frigate Combat Stations
	6: Frigate Vehicle Spawn
	7: Frigate Ship Control 
*/
	
_console 			= _this select 0; // Object - the object which the action is assigned to
_caller 			= _this select 1; // Object - the unit that activated the action
_Identifications 	= _this select 2; // ID of the activated action (same as ID returned by addAction)
_arguments 			= _this select 3; // Anything - arguments given to the script if you are using the extended syntax

_cardValues = [];
_highestCard = "No Security Card";
{
	_keyCard = _x select 0; 
	if (true /*(format ["OPTRE_UNSC_SecurityCard_%1",_x]) in (magazines player)*/) then { 
		_highestCard = (format ["Security Access Level: %1",_keyCard]);
		_cardValues = _cardValues + (_x select 1);
	};
} forEach [
	["Blue",[0,1,2,6]],
	["Yellow",[0,1,2,3,6]],
	["Red",[0,1,2,4,5,7]],
	["Green",[0,1,2]],
	["White",[0,1,2,6]],
	["Grey",[0,1,2,3,4,5,6,7]],
	["Black",[0,1,2,3,4,5,6,7]]
];
	
OPTRE_UNSC_Console_MenusAllowed = [];
{
	_value = getNumber (configfile >> "cfgOptreUNSCmenus" >> _x >> "Security");
	if (_value in _cardValues) then {					
		OPTRE_UNSC_Console_MenusAllowed pushBack _x; 
	};
} forEach _arguments;
	
_openThis = OPTRE_UNSC_Console_MenusAllowed select 0;
_function = getText	(configfile >> "cfgOptreUNSCmenus" >> _openThis >> "Function");

OPTRE_CurrentConsole = _console;
OPTRE_CurrentConsoleString = _highestCard;

closeDialog 0;

if (_function != "") then {
	0 = [_console,_highestCard] call (missionNamespace getVariable _function);
} else {
	createDialog (getText (configfile >> "cfgOptreUNSCmenus" >> _openThis >> "Dialog"));
};