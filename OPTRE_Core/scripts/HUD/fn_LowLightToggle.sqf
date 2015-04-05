if (OPTRE_HUD_NVOn == 1) then {
	[player, "OPTRE_HUD_Helmet_Visor", 50] call CBA_fnc_globalSay3d;
	setAperture -1;
	OPTRE_HUD_NVOn = 0;
} else {
	[player, "OPTRE_HUD_Helmet_Visor", 50] call CBA_fnc_globalSay3d;
	setAperture 1;
	OPTRE_HUD_NVOn = 1;
};