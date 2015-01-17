_helmet = (headgear player);
if (TEI_UNSC_ODST_HUD_Type == 1) then {
	playSound3D ["TEI_UNSC_Units\ODST\scripts\visor.ogg", player, true, getPosASL player, 1, 1, 5];
	removeHeadgear player;
	_DepHelmet = _helmet + "_dp";
	player addHeadgear _DepHelmet;
} else {
	playSound3D ["TEI_UNSC_Units\ODST\scripts\visor.ogg", player, true, getPosASL player, 1, 1, 5];
	removeHeadgear player;
	_PolHelmet = [_helmet, "_dp", ""] call CBA_fnc_replace;
	player addHeadgear _PolHelmet;
};