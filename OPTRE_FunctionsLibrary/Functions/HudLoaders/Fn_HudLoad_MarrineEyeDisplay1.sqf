disableSerialization;
_dialog = _this select 0; 

_picPrimeWeapon = _dialog displayCtrl 120;
_picSecondWeapon = _dialog displayCtrl 121;
_picThrowWeapon = _dialog displayCtrl 122;
_picThirdWeapon = _dialog displayCtrl 123;

_text_1000 = _dialog displayCtrl 1000;
_text_1001 = _dialog displayCtrl 1001;
_text_1002 = _dialog displayCtrl 1002; // Fire Mode & Zeroing 
_text_1003 = _dialog displayCtrl 1003; 
_text_1004 = _dialog displayCtrl 1004;
_text_1005 = _dialog displayCtrl 1005; // number of grenade 
_text_1006 = _dialog displayCtrl 1006; // name of grenade 

OPTRE_HUD_CurrentThrowCheck = "";
OPTRE_HUD_WepCurrent = ""; 

OPTRE_HUD_UPDATEALL_Throw = true; 
OPTRE_HUD_UPDATEALL_Main = true;

OPTRE_Hud_On = true; 

301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",-1, false]; 
showHUD [true, false, true, false, true, true, false, true]; 

While {OPTRE_Hud_On AND cameraView != "EXTERNAL"} do {

	_grpPlayer = group player;
	_dirPlayer = getDir player; 
	
	_primearyWeapon = primaryWeapon player;
	_currentWeapon = currentWeapon player; 
	_secondaryWeapon = secondaryWeapon player; 
	_grenDetail = currentThrowable player;
	_magazinesPlayer = magazines player;
	
	//_picPrimeWeapon ctrlSetText (getText (configFile >> 'CfgWeapons' >> _currentWeapon >> 'pictureWire'));
	//_picSecondWeapon ctrlSetText (getText (configFile >> 'CfgWeapons' >> _secondaryWeapon >> 'pictureWire'));
	//_picThirdWeapon ctrlSetText (getText (configFile >> 'CfgWeapons' >> _currentWeapon >> 'pictureWire'));	
	
	if (count _grenDetail > 0) then {
		_gren = _grenDetail select 0;
		if (OPTRE_HUD_CurrentThrowCheck != _gren OR OPTRE_HUD_UPDATEALL_Throw) then { // Only Update if Needed. 
			_picThrowWeapon ctrlSetText ([(configFile >> 'CfgMagazines' >> _gren),'pictureWire',"\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa"] call BIS_fnc_returnConfigEntry);
			_text_1005 ctrlSetText (getText (configFile >> "CfgMagazines" >> _gren >> "displayName"));
			_text_1006 ctrlSetText str ({_x == _gren} count _magazinesPlayer);
			OPTRE_HUD_CurrentThrowCheck = _gren;
			if OPTRE_HUD_UPDATEALL_Throw then {OPTRE_HUD_UPDATEALL_Throw = false;}; 	
		};	
	} else { { _x ctrlSetText ""; } forEach [_text_1006,_text_1005,_picThrowWeapon]; };	
	
	if OPTRE_HUD_CompassWanted then {
		_text_1000 ctrlSetText (format ["DIR: %1",round getDir player]);
		_task = [player] call BIS_fnc_taskCurrent;
		if (_task != "") then {
			_taskDest = [_task] call BIS_fnc_taskDestination;
			if (typeName _taskDest == "ARRAY") then {_text_1001 ctrlSetText (format ["OBJ: %1",round ([player, _taskDest] call BIS_fnc_dirTo)]);};
		} else {_text_1001 ctrlSetText "OBJ: N/A";};
	};
	
	_text_1002 ctrlSetText (format ["%1  %2",(currentWeaponMode player),(currentZeroing  player)]);
	_text_1004 ctrlSetText str ({_x == (currentMagazine player)} count _magazinesPlayer);

	if (OPTRE_HUD_UPDATEALL_Main OR OPTRE_HUD_WepCurrent != _currentWeapon) then {
		_picPrimeWeapon ctrlSetText ([(configFile >> 'CfgWeapons' >> _currentWeapon),'pictureWire',"\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa"] call BIS_fnc_returnConfigEntry);
		_picSecondWeapon ctrlSetText (
			if (_currentWeapon == _primearyWeapon) then { 
				([(configFile >> 'CfgWeapons' >> (handgunWeapon player)),'pictureWire',"\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa"] call BIS_fnc_returnConfigEntry) 
			} else { 
				([(configFile >> 'CfgWeapons' >> _primearyWeapon),'pictureWire',"\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa"] call BIS_fnc_returnConfigEntry)
			}
		);
		if (_currentWeapon != _secondaryWeapon) then {
			_picThirdWeapon ctrlSetText ([(configFile >> 'CfgWeapons' >> _secondaryWeapon),'pictureWire',"\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa"] call BIS_fnc_returnConfigEntry);
		} else {
			_picThirdWeapon ctrlSetText ""; 
		};
		if OPTRE_HUD_UPDATEALL_Main then {OPTRE_HUD_UPDATEALL_Main = false;}; 
		//302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",-1, false];
		0 = [true] call OPTRE_Fnc_SetAmmoCounterState;
		OPTRE_HUD_WepCurrent = _currentWeapon;
	};
	
	sleep .1;
	
};

// External Mode: 
if OPTRE_Hud_On then {

	{_x cutFadeOut 0;} forEach [300,301,302];  
	showHUD [true, true, true, true, true, true, true, true]; 
	
	waitUntil {cameraView != "EXTERNAL" OR !OPTRE_Hud_On};
	
	if OPTRE_Hud_On then {
		
		300 cutRsc [OPTRE_Hud_MainCurrent,"PLAIN",-1, false];
		301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",-1, false]; 
		//302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",-1, false];
		0 = [true] call OPTRE_Fnc_SetAmmoCounterState;
		
		showHUD [true, false, true, false, true, true, false, true]; 

	};
	
};

// Hud has been turned off by user:
if !OPTRE_Hud_On then {

	{_x cutFadeOut 1;} forEach [300,301,302,303];  
	showHUD [true, true, true, true, true, true, true, true]; 
	[player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d;
	
	if ( cameraView != "EXTERNAL" OR (str (findDisplay 11000) != "No display") ) then {

		titleCut ["", "BLACK FADED", 999];
				
		"dynamicBlur" ppEffectEnable true;   
		"dynamicBlur" ppEffectAdjust [6];   
		"dynamicBlur" ppEffectCommit 0;     
		"dynamicBlur" ppEffectAdjust [0.0];  
		"dynamicBlur" ppEffectCommit 1;  

		titleCut ["", "BLACK IN", .5];
	
	};
	
};

OPTRE_Hud_UnFullyLoaded = true; 