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

class CfgMagazines
{
	class RPG32_HE_F;
	class RPG32_F;
	class TEI_M41_HEAT: RPG32_F
	{
		descriptionshort="Range: 1100 m<br/>Type: ground-air HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		ammo="TEI_M41_Rocket";
		displayname="M41 HEAT rocket";
		displaynameshort="M41 HEAT";
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=2;
		initSpeed=255;
	};
	class TEI_M41_HEDP: RPG32_HE_F
	{
		ammo="TEI_M41_Rocket_HEDP";
		descriptionshort="Range: 1100 m<br/>Type: ground-air HEDP (High Explosive Dual Purpose)<br/>Used in: M41 SSR MAV/AW";
		displayname="M41 HEDP rocket";
		displaynameshort="HEDP";
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=2;
		initSpeed=255;
	};
};