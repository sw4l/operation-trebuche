if (TEI_HUD_NVOn == 1) then {
	[player, "TEI_HUD_Helmet_Visor", 50] call CBA_fnc_globalSay3d;
	setAperture -1;
	TEI_HUD_NVOn = 0;
} else {
	[player, "TEI_HUD_Helmet_Visor", 50] call CBA_fnc_globalSay3d;
	setAperture 1;
	TEI_HUD_NVOn = 1;
};