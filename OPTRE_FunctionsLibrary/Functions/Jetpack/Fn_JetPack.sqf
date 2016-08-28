private ["_backpack"];

_backpack = backpack player; 
if ((_backpack != "OPTRE_S12_SOLA_Jetpack_ON"  AND _backpack != "OPTRE_S12_SOLA_Jetpack") OR OPTRE_JetPackOn OR  !(isNil "OPTRE_JetPack_DEH" AND isNil "OPTRE_JetPack_EHHD")) exitWith {};
player playMove "";


// Control Variables 
disableSerialization;
_dialog = _this select 0;
uiNamespace setVariable ["OPTRE_JetPack_airTimeProgress",(_dialog displayCtrl 1200)];
uiNamespace setVariable ["OPTRE_JetPack_airTimeProgress_2",(_dialog displayCtrl 1202)];
uiNamespace setVariable ["OPTRE_JetPack_TotalFuel",(_dialog displayCtrl 1201)];

// Fuel Variables 
_a = (backpackContainer player) getVariable ["OPTRE_JetPackOverHeat",0];
_b = if ((backpackContainer player) getVariable ["OPTRE_JetPackOverFuelTotal",-2] == -2) then {
	(backpackContainer player) getVariable ["OPTRE_JetPackOverFuelTotal",1];
} else {
	(backpackContainer player) getVariable ["OPTRE_JetPackOverFuelTotal",0];
};

(uiNamespace getVariable "OPTRE_JetPack_airTimeProgress") progressSetPosition _a;
(uiNamespace getVariable "OPTRE_JetPack_airTimeProgress_2") progressSetPosition _a;
(uiNamespace getVariable "OPTRE_JetPack_TotalFuel")  progressSetPosition _b;	
	
player setVariable ["OPTRE_JetPackOverHeat",_a,false];
player setVariable ["OPTRE_JetPackOverFuelTotal",_b,false];	

OPTRE_JetPackOn = true;

removeBackpack player; 
player addBackpack "OPTRE_S12_SOLA_Jetpack_on";	
playSound "OPTRE_Sounds_Jetpack_StartUp";

// Effects 
/*_fireSmoke1 = "#particlesource" createVehicleLocal [0,0,0];  
_fireSmoke1 setParticleClass "Flare1";  
_fireSmoke1 attachto [vehicle player,[0.225,-0.1,1.5]]; 
_fireSmoke2 = "#particlesource" createVehicleLocal [0,0,0];  
_fireSmoke2 setParticleClass "Flare1";  
_fireSmoke2 attachto [vehicle player,[-0.225,-0.1,1.5]];*/

_fireSparks1 = "#particlesource" createVehicleLocal [0,0,0];  
_fireSparks1 setParticleClass "LaptopSparks";  
_fireSparks1 attachto [vehicle player,[0.225,-0.1,1.5]];
_fireSparks2 = "#particlesource" createVehicleLocal [0,0,0];  
_fireSparks2 setParticleClass "LaptopSparks";  
_fireSparks2 attachto [vehicle player,[-0.225,-0.1,1.5]];

OPTRE_Jetpack_EffectsObject = [/*_fireSmoke1,_fireSmoke2,*/_fireSparks1,_fireSparks2];

//if (_b == 0) exitWith {OPTRE_JetPackOn = false; {deleteVehicle _x;} forEach OPTRE_Jetpack_EffectsObject; playSound "OPTRE_Sounds_Jetpack_End";};

// Event Handlers.

if (_b > 0) then { // _newHeat = _heat + 0.005

	OPTRE_JetPack_EHHD = player addEventHandler ["HandleDamage",{
		_unit = _this select 0;
		_damagedPart = _this select 1; 
		_damageAmount = _this select 2; 
		_soruce = _this select 3;
		(if (_soruce == player AND _damageAmount < 1) then {0} else {_damageAmount});
	}];

	OPTRE_JetPack_DEH = (findDisplay 46) displayAddEventHandler ["KeyDown", "

		disableSerialization;
		
		_heat = player  getVariable [""OPTRE_JetPackOverHeat"",0];
		_fuelT = player  getVariable [""OPTRE_JetPackOverFuelTotal"",0];
		
		_newHeat = _heat + 0.005;     
		_newFuel = _fuelT - 0.0005;

		player setVariable [""OPTRE_JetPackOverHeat"",_newHeat,false];
		player setVariable [""OPTRE_JetPackOverFuelTotal"",_newFuel,false];
		
		(uiNamespace getVariable ""OPTRE_JetPack_airTimeProgress"") progressSetPosition _newHeat;
		(uiNamespace getVariable ""OPTRE_JetPack_airTimeProgress_2"") progressSetPosition _newHeat;
		(uiNamespace getVariable ""OPTRE_JetPack_TotalFuel"") progressSetPosition _newFuel;	
				
		switch (_this select 1) do {
		
			case 17: {

				_pos = getPosATL player;
				_height = _pos select 2;
							
				if (_height < 90) then {

					_vel = velocity player; 
							
					player setVelocity (
						[
							_vel, 
							getDir player, 
							(if ( _height < 10 ) then {.4} else {0.05}), 
							(if ( _height < 10 OR (_vel select 2) < 1) then {((_vel select 2) +0.75)} else {((_vel select 2)  +0.5)})
						] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown
					);
					
				} else {
					
					_vel = velocity player; 
							
					player setVelocity (
						[
							_vel, 
							getDir player, 
							(if ( _height < 10 ) then {.2} else {0.05}), 
							-0.25
						] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown
					);
						
				};	
						
			};
					
			case 31: {
				
				if (getPosATL player select 2 < 90) then {
					
					_HEV = vehicle player; 
					_vel = velocity _HEV; 
							
					_velX = _vel select 0;
					_velY = _vel select 1;
							
					_slowByX = (if (_velX < 0) then {0.25} else {-0.25});
					_slowByY = (if (_velY < 0) then {0.25} else {-0.25});
							
					_HEV setVelocity [
						((_vel select 0) + _slowByX),
						((_vel select 1) + _slowByY),
						(if ((_vel select 2) < -3) then {((_vel select 2)+0.6)} else {((_vel select 2)+0.4)})
					];
											
				};
			
			};
					
		};

		false;
			
	"];
	
	(backpackContainer player) setobjecttextureglobal [0,"optre_vehicles\pelican\data\bolt_blue_ca.paa"];

};

sleep .25;

While {!(isTouchingGround player) AND ((player getVariable ["OPTRE_JetPackOverHeat",0]) < 1) AND ((player getVariable ["OPTRE_JetPackOverFuelTotal",0]) > 0) AND OPTRE_JetPackOn AND alive player} do {
	sleep .1;
	playSound "OPTRE_Sounds_Jetpack_LoopShort";
};

playSound "OPTRE_Sounds_Jetpack_End";

sleep .1;

if (!isNil "OPTRE_JetPack_DEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",OPTRE_JetPack_DEH];};
if (!isNil "OPTRE_JetPack_EHHD") then {player removeEventHandler ["HandleDamage",OPTRE_JetPack_EHHD];};

OPTRE_JetPack_DEH = nil;
OPTRE_JetPack_EHHD = nil;
OPTRE_JetPackOn = false;

if ((player  getVariable ["OPTRE_JetPackOverFuelTotal",0]) > 0) then {
	removeBackpack player; 
	player addBackpack "OPTRE_S12_SOLA_Jetpack";	
} else {
	(backpackContainer player) setobjecttextureglobal [0,""];
};
{deleteVehicle _x;} forEach OPTRE_Jetpack_EffectsObject; 

(backpackContainer player) setVariable ["OPTRE_JetPackOverHeat",(player getVariable ["OPTRE_JetPackOverHeat",0]),true];
(backpackContainer player) setVariable ["OPTRE_JetPackOverFuelTotal",(player  getVariable ["OPTRE_JetPackOverFuelTotal",0]),true];	
	
while {!OPTRE_JetPackOn AND ((player getVariable ["OPTRE_JetPackOverHeat",0]) > 0) /*AND ((player getVariable ["OPTRE_JetPackOverFuelTotal",0]) > 0)*/ AND alive player} do {

	sleep .00001;
	
	_heat = player getVariable ["OPTRE_JetPackOverHeat",0];
	_newHeat = _heat - 0.0001;
	
	player setVariable ["OPTRE_JetPackOverHeat",_newHeat,false];	
	(uiNamespace getVariable "OPTRE_JetPack_airTimeProgress") progressSetPosition _newHeat;
	(uiNamespace getVariable "OPTRE_JetPack_airTimeProgress_2") progressSetPosition _newHeat;
	
	(backpackContainer player) setVariable ["OPTRE_JetPackOverHeat",_heat,true];
		
};

if !OPTRE_JetPackOn then {
	77 cutText ["", "PLAIN",0];
};