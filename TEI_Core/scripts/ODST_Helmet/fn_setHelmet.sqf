_helmet = (headgear player);
call TEI_fnc_ODST_Helmet_getHelmet;
if (TEI_UNSC_ODST_HUD_Type == 1) then {
	removeHeadgear player;
	_DepHelmet = _helmet + "_dp";
	player addHeadgear _DepHelmet;
} else {
	removeHeadgear player;
	_PolHelmet = [_helmet, "_dp", ""] call CBA_fnc_replace;
	player addHeadgear _PolHelmet;
};