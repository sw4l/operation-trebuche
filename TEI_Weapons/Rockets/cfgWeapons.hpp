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

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F;
	class launch_Titan_base;    // External class reference
	class launch_RPG32_F;	// External class reference
	class WeaponSlotsInfo;	// External class reference

	class TEI_M41_SSR : launch_RPG32_F
	{
		scope = 2;
		author = "The Eridanus Insurrection Team";
		displayname = "M41 SSR MAV/AW";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";

		class Library
		{
			libtextdesc = "The M41 Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon formally known as the Medium Anti-Vehicle / Assault Weapon, Bore 102mm, M41 Surface-to-Surface Rocket Launcher, is a heavy ordnance weapon of the UNSC arsenal";
		};
		magazines[] = {"TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAP","TEI_M41_Twin_HEAA"};
				//magazines[] = {"TEI_M41_HEAT","TEI_M41_HEAT_G","TEI_M41_HEAP","TEI_M41_HEAA","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAP","TEI_M41_Twin_HEAA"};
		picture = "\TEI_weapons\rockets\icons\launcher.paa";
		model = "\TEI_Weapons\Rockets\M41_launcher.p3d";
		handAnim[]={"OFP2_ManSkeleton","\TEI_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"};
		drysound[] = {"A3\sounds_f\weapons\other\dry6", 0.0316228, 1, 10};
		soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.316228, 1.5, 700};
		minRange = 10;
		midRange = 250;
		maxRange = 500;
		recoil = "recoil_single_law";
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 250;
		opticsZoomMin = 0.0625;
		opticsZoomMax = 0.0625;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		reloadaction = "ReloadRPG";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 0.562341, 1, 50};
	};
};

/*class no_magazine //use for empty rocket tube
			{
				type = "hide";
				source = "hasMagazine";
				selection = "missile";
				minValue = 0;
				maxValue = 1;
				hideValue = 0.5;
				unhideValue = -1;
			};*/