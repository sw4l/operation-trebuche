if ((OPTRE_Hud_On AND OPTRE_Hud_LowLight_On) OR OPTRE_Hud_LowLight_On) then {
	OPTRE_Hud_LowLight_On = false;
	[player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d;
	setAperture -1;
} else {
	if ( OPTRE_Hud_On AND ( (getText (configfile >> "CfgWeapons" >> (headgear player) >> "optreHUDStyle") ) == "ODST_1" ) ) then {
		OPTRE_Hud_LowLight_On = true;
		[player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d;
		setAperture 1;
	};/* else {
		if () then {
			// switch hud on. 
		}; 
	};*/
};