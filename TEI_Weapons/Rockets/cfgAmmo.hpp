enum
{
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
}; 

class CfgAmmo
{
	class R_PG32V_F; //rpg32
	class R_TBG32V_F; //rpg 32 HE
	class M_Titan_AA; 
	class M_NLAW_AT_F;
	class ShotDeployBase;
	
	class TEI_M41_Rocket_HEAT: M_NLAW_AT_F
	{
		scope = 2;
		//model = "TEI_weapons\rockets\M41_rocket.p3d";
		sideairfriction=0.075;
		thrust=200;
		thrusttime=0.4;
		timetolive=10;
		maxspeed=200;
		canLock = 0;
		/*
		initSpeed=255;
		hit = 600;
		indirectHit = 8;
		indirectHitRange = 4;
		explosive = 0.8;
		cost = 500;
		airFriction = 0.075;
		initTime = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;*/
	};
	class TEI_M41_Rocket_HEAT_Guided: M_NLAW_AT_F
	{
		scope = 2;
		//model = "TEI_weapons\rockets\M41_rocket.p3d";
		canLock = 2;

	};
	class TEI_M41_Rocket_HEAP: R_TBG32V_F
	{
		scope = 2;
		//model = "TEI_weapons\rockets\M41_rocket.p3d";
		sideairfriction=0.075;
		thrust=255;
		thrusttime=0.4;
		canLock = 0;
		timetolive=10;
		maxspeed=255;
	};
	class TEI_M41_Rocket_HEAA: M_Titan_AA
	{
		scope = 2;
		//thrust = 255;
		//initSpeed = 350;
		//maxSpeed = 350;
		//model = "TEI_weapons\rockets\M41_rocket.p3d";
		//trackLead = 1;
		//airLock = 2;
		//irLock = 1;
		//canLock = 2;
		//trackOversteer = 1;
		//weaponLockSystem = "2 + 16";
	};
};