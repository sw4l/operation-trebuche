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
	class R_PG32V_F;
	class R_TBG32V_F;
	class ShotDeployBase;
	class TEI_M41_Rocket:R_PG32V_F
	{
		scope = 2;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		sideairfriction=0.075;
		thrust=255;
		thrusttime=0.4;
		timetolive=10;
		maxspeed=255;
	};
	class TEI_M41_Rocket_HEDP:R_TBG32V_F
	{
		scope = 2;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		sideairfriction=0.075;
		thrust=255;
		thrusttime=0.4;
		timetolive=10;
		maxspeed=255;
	};
};