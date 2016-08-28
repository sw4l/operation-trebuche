/* 
	OPTRE_Fnc_SpawnHEVsFrigate
	
	Description: -
	
	Author: Big_Wilk
	
	Return: 
	0: Array: HEVs created
	1: Array: HEVs Created For Players
	2: Array: HEVs Created For AIs
	3: Array: All Players
	4: Array: All Units 
	
	Prams:
	0: Object: Frigate units will be attached toArray
	1: Array: Array of units to be attached to frigates. 
*/

_frigate = _this select 0;
_units = _this select 1; 

// Create HEVs for all units and determine who's a player and whos and ai. 
_totalUnits = count _units; 
_totalUnitsDividedBy2 = (_totalUnits / 2) - 1;
	
_hevArray = [];			// All HEVs created
_hevArrayPlayer = [];	// All HEVs created	for players
_hevArrayAi = [];		// All HEVs created for ai
_listOfPlayers = [];	// All players units 
_listOfAi = []; 		// All ai units
_hevDropArms = [];

_countHEVposRight = 0; 	// used to calc arm pos
_countHEVposLeft = 0; 	// used to calc arm pos
	
for "_i" from 0 to (_totalUnits - 1) do {

	private ["_number"];
	
	_number = _i;
	
	if (_i > _totalUnitsDividedBy2) then {
	
		_unit = (_units select _number);
		
		if (vehicle _unit == _unit AND alive _unit) then {
		
			_countHEVposRight = _countHEVposRight + 1; 
			_podDir = (_DirOfShip + 96); 
			 
			_hev = "OPTRE_HEV" createVehicle [0,0,0];
			_hev attachTo [_frigate,[-25, (-55 + (_countHEVposRight * -4.5)), -39]]; 
			_hev setDir _podDir;
			_hev lock true; 
			
			_hevDropArm = "OPTRE_Frigate_LiftArm" createVehicle [0,0,0]; 
			_hevDropArm attachTo [_hev,[0,0,20.5]]; 
			detach _hevDropArm;
			_hevDropArm setDir _podDir;
			_hevDropArms pushBack _hevDropArm;
			
			//_hev disableCollisionWith _hevDropArm;
			
			_hevArray pushBack _hev;

			[_unit,_hev] remoteExec ["moveInDriver", _unit, false];
			[_unit,false] remoteExec ["allowDamage", _unit, false];
			
			if (isPlayer _unit) then {
				_listOfPlayers pushBack _unit; 
				_hevArrayPlayer pushBack _hev;
				_hev setVariable ["OPTRE_PlayerControled",true,true];
			} else {
				_listOfAi pushBack _unit; 
				_hevArrayAi pushBack _hev;
			};
		
		};
		
	} else {
		
		_unit = (_units select _number); 
		
		if (vehicle _unit == _unit AND alive _unit) then {
			
			_countHEVposLeft = _countHEVposLeft + 1;
			_podDir = (_DirOfShip - 96); 

			_hev = "OPTRE_HEV" createVehicle [0,0,0];
			_hev attachTo [_frigate,[25,(-55 + (_countHEVposLeft * -4.5)),-39]]; 
			_hev setDir _podDir;
			_hev lock true; 
			
			_hevDropArm = "OPTRE_Frigate_LiftArm" createVehicle [0,0,0]; 
			_hevDropArm attachTo [_hev,[0,0,20.5]]; 
			detach _hevDropArm;
			_hevDropArm setDir _podDir;
			_hevDropArms pushBack _hevDropArm;
			
			//_hev disableCollisionWith _hevDropArm;
			
			_hevArray pushBack _hev;
			
			[_unit,_hev] remoteExec ["moveInDriver", _unit, false];
			[_unit,false] remoteExec ["allowDamage", _unit, false];
		
			if (isPlayer _unit) then {
				_listOfPlayers pushBack _unit; 
				_hevArrayPlayer pushBack _hev;
				_hev setVariable ["OPTRE_PlayerControled",true,false];
			} else {
				_listOfAi pushBack _unit; 
				_hevArrayAi pushBack _hev;
			};
			
		};
	
	};
	
};

[_hevArray,_hevArrayPlayer,_hevArrayAi,_listOfPlayers,_listOfAi,_hevDropArms]