if OPTRE_Hud_On then {

	_scale = [] call OPTRE_Fnc_MapScale;

	switch OPTRE_LHD_Function do {
		case 0: { 
			
		}; // No display 
		case 1: {
				if _this then {
						if ( (OPTRE_Hud_RadarScale + _scale) < 1 AND ((OPTRE_Hud_RadarScale + _scale) < (11 * _scale)) ) then {OPTRE_Hud_RadarScale = OPTRE_Hud_RadarScale + _scale;} else {OPTRE_Hud_RadarScale = _scale;};
					} else {
						if ((OPTRE_Hud_RadarScale - _scale) > 0) then {OPTRE_Hud_RadarScale = OPTRE_Hud_RadarScale - _scale;} else {
							OPTRE_Hud_RadarScale = if ( ((round (1 / _scale)) * _scale) > (10 * _scale) ) then {
								10 * _scale 
							} else {
								((round (1 / _scale)) * _scale)
							}; 
						};
					};
				}; // "OPTRE_LHD_LeftBottom_Radar" 0.01, 0.1
		case 2: { 
				_grpArray = units group player;
				_countGrpArray = count _grpArray - 2;
				if _this then {
					if (OPTRE_LHD_PIPSel < _countGrpArray) then {OPTRE_LHD_PIPSel = OPTRE_LHD_PIPSel + 1;} else {OPTRE_LHD_PIPSel = 0;};
				} else {
					if (OPTRE_LHD_PIPSel > 0) then {OPTRE_LHD_PIPSel = OPTRE_LHD_PIPSel - 1;} else {OPTRE_LHD_PIPSel = _countGrpArray;};
				};		
		}; //"OPTRE_LHD_LeftBottom_PIP"	
		case 3: {
				if _this then {
					if (OPTRE_Hud_MapScale < 1) then {OPTRE_Hud_MapScale = OPTRE_Hud_MapScale + (2 * _scale);} else {OPTRE_Hud_MapScale = (2 * _scale);};
				} else {
					if (OPTRE_Hud_MapScale > (4 * _scale)) then {OPTRE_Hud_MapScale = OPTRE_Hud_MapScale - (2 * _scale);} else {OPTRE_Hud_MapScale = 1;};
				};		
		};
		case 4: {
		
		};
		case 5: {
		
		}; 
	};

	303 cutRsc [OPTRE_Hud_LHDCurrent,"PLAIN",-1, false];

};

if (str (findDisplay 5602) != "No display") then {
	_d = (findDisplay 5602); 
	(_d displayCtrl 2100) lbSetCurSel ( if !(isNil "OPTRE_Hud_MapScale") then { (((OPTRE_Hud_MapScale / (2 * _scale))) - 1) } else { 0 } );
	(_d displayCtrl 2101) lbSetCurSel ( if !(isNil "OPTRE_Hud_RadarScale") then { (OPTRE_Hud_RadarScale / _scale) - 1 } else { 0 } );
	(_d displayCtrl 2103) lbSetCurSel OPTRE_LHD_PIPSel;
};

true; 