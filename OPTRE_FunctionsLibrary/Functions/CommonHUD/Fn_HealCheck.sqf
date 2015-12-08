_damage = damage player;

waitUntil {(damage player) < _damage};

if OPTRE_Hud_On then {

	301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",0];
	
};