if (TEI_UNSC_ODST_HUD_NVOn == 1) then {
	playSound3D ["TEI_UNSC_Units\ODST\scripts\visor.ogg", player, true, getPosATL player, 1, 1, 5];
	setAperture -1;
	TEI_UNSC_ODST_HUD_NVOn = 0;
} else {
	playSound3D ["TEI_UNSC_Units\ODST\scripts\visor.ogg", player, true, getPosATL player, 1, 1, 5];
	setAperture 1;
	TEI_UNSC_ODST_HUD_NVOn = 1;
};