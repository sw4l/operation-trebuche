/*
This scirpt is a crap temp solution and should be changed in the future. 
*/
private ["_primeWeaponPic","_seconWeaponPic","_throwWeaponPic","_AT___WeaponPic","_1","_2","_3","_4","_5","_compText"];

disableSerialization;
_display = _this select 0; 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////// List of All Controls /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Picture Controls
_primeWeaponPic = _display displayCtrl 120;
_seconWeaponPic = _display displayCtrl 121;
_throwWeaponPic = _display displayCtrl 122;
_AT___WeaponPic = _display displayCtrl 123;

// Text Controls 
_text_100 = _display displayCtrl 300; // Fire Mode + Zeroing
_text_101 = _display displayCtrl 301; // Grenade Type 
_text_102 = _display displayCtrl 302; // Genral Info
_text_103 = _display displayCtrl 303; // DirReadOut

// Pic Number Controls 
// Prime Mag Count
_1 = _display displayCtrl 101;
_2 = _display displayCtrl 102;
_3 = _display displayCtrl 103;
// Cur Throw Count
_4 = _display displayCtrl 104;
_5 = _display displayCtrl 105;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////// Set Initial Colours And Animations ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Set Picture Controls Colour
_prittyColours = profileNamespace getVariable [ "OPTRE_GLASS_HUDColourPictNEW", [0,0,0,0.5] ];

{
	_x ctrlSetTextColor _prittyColours;
} forEach [_AT___WeaponPic,_throwWeaponPic,_seconWeaponPic,_primeWeaponPic];

// Text + Number Pic Color's
{
	_x ctrlSetTextColor _prittyColours;
} forEach [_text_100,_text_101,_text_102,_text_103,_1,_2,_3,_4,_5,(_display displayCtrl 200)];

_text_103 ctrlSetTextColor [
	(_prittyColours select 0),
	(_prittyColours select 1),
	(_prittyColours select 2),
	((profileNamespace getVariable ["OPTRE_GLASS_CompassAlpha",[0,0,0,0.5]]) select 3)
];

// If hud on first time and not refresh from menu do animations: 
if !OPTRE_Hud_On then {

	showHUD [true, false, true, false, true, true, false, true]; 

	[player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d;
	
	sleep 3; 
	
	//if !OPTRE_Hud_On exitWith {};
	
	{
		_x ctrlSetFade 1; 
		_x ctrlCommit 0; 
		_x ctrlSetFade 0; 
		_x ctrlCommit 1; 		
	} forEach [_text_100,_text_101,_text_102,_text_103,_1,_2,_3,_4,_5,(_display displayCtrl 200),_AT___WeaponPic,_throwWeaponPic,_seconWeaponPic,_primeWeaponPic];
		
	OPTRE_Hud_On = true;
	
	301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",0, false]; 
	//302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",0, false];
	0 = [true] call OPTRE_Fnc_SetAmmoCounterState;
	303 cutRsc [OPTRE_Hud_LHDCurrent,"PLAIN",0, false];
	
};

//if !OPTRE_Hud_On exitWith {};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////// Set Initial HUD Conditions ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if OPTRE_HUD_CompassWanted then {
	_compText = format ["\n\n\nSUBJECT: %1. %2",([player, "displayNameShort"] call BIS_fnc_rankParams), (name player)];
} else {
	ctrlDelete _text_103;
};

OPTRE_HUD_CurrentThrowCheck = "";
OPTRE_HUD_stringNumbs = ""; 
OPTRE_HUD_WepCurrent = ""; 

OPTRE_HUD_UPDATEALL_Throw = true; 
OPTRE_HUD_UPDATEALL_Main = true;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////// Main Monitor /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

While {OPTRE_Hud_On AND cameraView != "EXTERNAL"} do {

	// Compass 
	if OPTRE_HUD_CompassWanted then {
		private ["_dir","_dest"];
		
		_dirPlayer = getDir player; 
		
		_task = [player] call BIS_fnc_taskCurrent;
		if (_task != "") then {
			_taskDest = [_task] call BIS_fnc_taskDestination;
			if (typeName _taskDest == "ARRAY") then {
				_dest = mapGridPosition _taskDest;
				_dir = str round ([player, _taskDest] call BIS_fnc_dirTo)
			} else {
				_dir = "N/A";
				_dest = "N/A"; 
			};
		} else {
			_dir = "N/A";
			_dest = "N/A"; 
		};
		
		_text_103 ctrlSetText format [
			
			"%1
			\nCUR DIR: %2°
			\nOBJ DIR: %3°
			\nOBJ LOC: %6
			\nTIME REC: %4
			\nTime LOC: %5", 
			
			_compText, 
			round _dirPlayer, 
			_dir,
			([(time / 60) / 60] call BIS_fnc_timeToString),
			([daytime] call BIS_fnc_timeToString),
			_dest

		];
		
	};
	
	// Weapons Functions 
	_text_100 ctrlSetText (format ["%1  %2m",(currentWeaponMode player),(currentZeroing  player)]);  // ,(getText (configFile >> "CfgMagazines" >> _curMag >> "displayName"))

	// Monitor Weapons
	_magazinesPlayer = magazines player;
	_stringNumbs = str ({_x == (currentMagazine player)} count _magazinesPlayer) splitString '';		
	_currentWeapon = currentWeapon player; 
	if (OPTRE_HUD_UPDATEALL_Main OR OPTRE_HUD_stringNumbs != str _stringNumbs OR OPTRE_HUD_WepCurrent != _currentWeapon) then {
	
		_secondaryWeapon = secondaryWeapon player; 
		
		OPTRE_HUD_stringNumbs = str _stringNumbs;
		
		_primeWeaponPic ctrlSetText (getText (configFile >> 'CfgWeapons' >> _currentWeapon >> 'pictureWire'));
		if (_currentWeapon != "" AND ctrlText _primeWeaponPic == "") then {_primeWeaponPic ctrlSetText "\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa";};
		
		0 = switch ((count _stringNumbs)) do {
			case 1: { _1 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 0]);_2 ctrlSetText ""; _3 ctrlSetText "";};
			case 2: { _1 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 1]);_2 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 0]);_3 ctrlSetText ""; };
			case 3: { _1 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 2]);_2 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 1]);_3 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 0]);};
			default { _1 ctrlSetText "OPTRE_Hud\Data\Numbers\0.paa"; _2 ctrlSetText ""; _3 ctrlSetText ""; };
		};
		_seconWeaponPic ctrlSetText (if (_currentWeapon == primaryWeapon player) then { (getText (configFile >> 'CfgWeapons' >> (handgunWeapon player) >> 'pictureWire')) } else { (getText (configFile >> 'CfgWeapons' >> (primaryWeapon player) >> 'pictureWire')) });
		//if (primaryWeapon player != "" AND ctrlText _seconWeaponPic == "" AND (_currentWeapon != primaryWeapon player)) then {_seconWeaponPic ctrlSetText "\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa";};
		if (( (handgunWeapon player != "") AND (_currentWeapon != handgunWeapon player) AND (ctrlText _seconWeaponPic == "") ) OR ( (primaryWeapon player != "") AND (_currentWeapon != primaryWeapon player) AND (ctrlText _seconWeaponPic == "") )) then {_seconWeaponPic ctrlSetText "\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa";};
		
		if (_currentWeapon != _secondaryWeapon) then { _AT___WeaponPic ctrlSetText (getText (configFile >> 'CfgWeapons' >> _secondaryWeapon >> 'pictureWire')); if (_secondaryWeapon != "" AND ctrlText _AT___WeaponPic == "") then {_AT___WeaponPic ctrlSetText "\OPTRE_Hud\data\UknownWireWeapons\UnknownWeapon.paa";};} else { _AT___WeaponPic ctrlSetText ""; };
		
		if OPTRE_HUD_UPDATEALL_Main then {OPTRE_HUD_UPDATEALL_Main = false;}; 
		//302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",-1, false];
		0 = [true] call OPTRE_Fnc_SetAmmoCounterState;
	};
	
	// Monitor Throw
	_grenDetail = currentThrowable player;
	 if (count _grenDetail > 0) then { 
		_gren = _grenDetail select 0;
		if (OPTRE_HUD_CurrentThrowCheck != _gren OR OPTRE_HUD_UPDATEALL_Throw) then { // Only Update if Needed. 
			_throwWeaponPic ctrlSetText (getText (configFile >> 'CfgMagazines' >> _gren >> 'pictureWire')); 
			if (_gren != "" AND ctrlText _throwWeaponPic == "") then {_throwWeaponPic ctrlSetText "\OPTRE_Hud\data\UknownWireWeapons\UnknownThrow.paa";};
			_text_101 ctrlSetText ( format ["%1",(getText (configFile >> "CfgMagazines" >> _gren >> "displayName"))] );
			_stringNumbs = ( format ["%1 |", ({_x == _gren} count _magazinesPlayer) ] ) splitString '';	
			_4 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 0]);
			_5 ctrlSetText (format ["OPTRE_Hud\Data\Numbers\%1.paa",_stringNumbs select 1]);
			OPTRE_HUD_CurrentThrowCheck = _gren;
			if OPTRE_HUD_UPDATEALL_Throw then {OPTRE_HUD_UPDATEALL_Throw = false;}; 
		};
	} else { { _x ctrlSetText ""; } forEach [_text_101,_4,_5,_throwWeaponPic]; };
	
	OPTRE_HUD_WepCurrent = _currentWeapon;
	 
	// Pause Time 
	sleep 0.06; 

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

	{_x cutFadeOut 0.2;} forEach [301,302,303]; 
	[player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d;
	
	{
		_x ctrlSetFade 1; 
		_x ctrlCommit 0.2; 		
	} forEach [_text_100,_text_101,_text_102,_text_103,_1,_2,_3,_4,_5,(_display displayCtrl 200),_AT___WeaponPic,_throwWeaponPic,_seconWeaponPic,_primeWeaponPic];
	
	if ( cameraView != "EXTERNAL") then {
		
		{
			_ctrl = _x; 
			_pos = ctrlPosition _ctrl; 
				
			_ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; 
			_ctrl ctrlCommit 1; 

		} forEach [(_display displayCtrl 1),(_display displayCtrl 2)];
		
		sleep 1; 
		
	};
	
	if !OPTRE_Hud_On then {
		300 cutFadeOut 1;
		showHUD [true, true, true, true, true, true, true, true]; 
	};
		
};

OPTRE_Hud_UnFullyLoaded = true;