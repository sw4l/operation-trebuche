if OPTRE_Hud_On then {

	switch OPTRE_LHD_Function do {
		case 0: { 
			
		}; // No display 
		case 1: {
				if _this then {
						if (OPTRE_Hud_RadarScale < 0.09) then {OPTRE_Hud_RadarScale = OPTRE_Hud_RadarScale + 0.01;} else {OPTRE_Hud_RadarScale = 0.01;};
					} else {
						if (OPTRE_Hud_RadarScale > 0.02) then {OPTRE_Hud_RadarScale = OPTRE_Hud_RadarScale - 0.01;} else {OPTRE_Hud_RadarScale = 0.1;};
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
		
		};
		case 4: {
		
		};
		case 5: {
		
		}; 
	};

	303 cutRsc [OPTRE_Hud_LHDCurrent,"PLAIN",-1, false];

};

true; 