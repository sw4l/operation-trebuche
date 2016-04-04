/*
	OPTRE_Fnc_SetAmmoCounterState
	
	Author: Big_Wilk
	
	Type: Call
	Return: bool

	Description: Sets current state of the players HUD ammo counter. If no ammo counter can be found default string ammo counter will be used. Can also be used t start hud. 
	
	Parameters: 
	
	
	Example 1: 
	_hud = [true] call OPTRE_Fnc_SetAmmoCounterState;
	Result: Loads hud if OPTRE_Hud_On is ture and veiw is external. 
	
	Example 2: 
	_hud = [false] call OPTRE_Fnc_SetAmmoCounterState;
	Result: Updates HUD, for example function is called in this way when player fires weapon. 
	
*/

if (OPTRE_Hud_On AND cameraView != "EXTERNAL") then {
	
	private ["_rscDisplay"];
		
	OPTRE_HUD_UPDATEALL_Throw = true;
		
	_hudStyle = [] call OPTRE_Fnc_GetHudTypeString;
	_currentWeapon = currentWeapon player;
	_rscDisplay = (getText (configfile >> "CfgWeapons" >> _currentWeapon >> _hudStyle));
		
	if ((_this select 0) OR (_rscDisplay == "")) then {
		if (_rscDisplay == "") then { 
			_default = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "ammoCounter"));
			302 cutRsc [_default,"PLAIN",0, false];
		} else {
			302 cutRsc [_rscDisplay,"PLAIN",0, false];
			[false] call OPTRE_Fnc_SetAmmoCounterState;
		};
	} else {
		_rows = (getNumber (configfile >> "CfgWeapons" >> _currentWeapon >> "HUD_BulletInARows")); 
		_totalBullets = (getNumber (configfile >> "CfgWeapons" >> _currentWeapon >> "HUD_TotalPosibleBullet"));	
		_totalNumberOfBulletsInARows = _totalBullets / _rows;
		_progressPerBullet = 1 / _totalNumberOfBulletsInARows;
		_numberOfBulletsInMag = (parseNumber (str (player ammo _currentWeapon)));
		for "_i" from 1 to _rows do {
			( missionNamespace getVariable ( format ["OPTRE_HUD_AmmoCountCurrent_%1", _i] ) ) progressSetPosition ( (_numberOfBulletsInMag - ( (_rows - _i) * _totalNumberOfBulletsInARows) ) * _progressPerBullet );		
		};	
	};
};

true; 