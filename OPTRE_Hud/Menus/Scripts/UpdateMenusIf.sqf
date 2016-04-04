if OPTRE_Hud_On then {
	0 = [] spawn {
		_future = time + 5; 
		OPTRE_Hud_On = false; 
		waitUntil {OPTRE_Hud_UnFullyLoaded or time >= _future}; 
		if !OPTRE_Hud_On then {0 = true spawn OPTRE_fnc_ToggleVisor;
	};
};}
;