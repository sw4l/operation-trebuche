_helmet = (headgear player);
 _getHelmet_fnc = OPTRE_HUD_fnc_getHelmet;
if (OPTRE_HUD_Type == 1) then {
	removeHeadgear player;
	_DepHelmet = _helmet + "_dp";
	player addHeadgear _DepHelmet;
} else {
	removeHeadgear player;
	_PolHelmet = [_helmet, "_dp", ""] call CBA_fnc_replace;
	player addHeadgear _PolHelmet;
};