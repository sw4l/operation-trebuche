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

	class OPTRE_M41_SSR : launch_RPG32_F
	{
		scope = 2;
		author = "Article 2 Studios";
		displayname = "M41 SSR MAV/AW";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";

		class Library
		{
			libtextdesc = "The M41 Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon formally known as the Medium Anti-Vehicle / Assault Weapon, Bore 102mm, M41 Surface-to-Surface Rocket Launcher, is a heavy ordnance weapon of the UNSC arsenal";
		};
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAP"};
		picture = "\OPTRE_weapons\rockets\icons\launcher.paa";
		model = "\OPTRE_Weapons\Rockets\M41_launcher.p3d";
		handAnim[]={"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"};
		drysound[] = {"A3\sounds_f\weapons\other\dry6", 0.0316228, 1, 10};
		soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.316228, 1.5, 700};
		//minRange = 10;
		//midRange = 250;
		//maxRange = 500;
		modelOptics = "\A3\Weapons_F\acc\reticle_NLAW.p3d";
		recoil = "recoil_single_law";
		aiRateOfFire = 5.0;	// delay between shots at given distance
		aiRateOfFireDistance = 250;
		//opticsZoomMin = 0.0625;
		//opticsZoomMax = 0.0625;
		//distanceZoomMin = 100;
		//distanceZoomMax = 100;
		reloadaction = "ReloadRPG";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 0.562341, 1, 50};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
		};
	};
	class OPTRE_M41_SSR_G: OPTRE_M41_SSR
	{
		author = "Article 2 Studios";
		displayname = "M41 SSR MAV/AW (Guided)";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon (Guided)";
		magazines[] = {"OPTRE_M41_Twin_HEAT_G"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.9;
		lockAcquire = 0;
		cursor = "missile";
		muzzlePos = "usti hlavne";
        muzzleEnd = "konec hlavne";
		
		reloadaction = "ReloadRPG";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 0.562341, 1, 50};
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 2500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 210;
		};
	};
	/*class OPTRE_M41_SSR_G: launch_Titan_base 
	{
		scope = 2;
		author = "Article 2 Studios";
		displayname = "M41 SSR MAV/AW (Guided)";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon (Guided)";
		class Library
		{
			libtextdesc = "The M41 Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon formally known as the Medium Anti-Vehicle / Assault Weapon, Bore 102mm, M41 Surface-to-Surface Rocket Launcher, is a heavy ordnance weapon of the UNSC arsenal";
		};
		magazines[] = {"OPTRE_M41_Twin_HEAT_G"};
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		picture = "\OPTRE_weapons\rockets\icons\launcher.paa";
		model = "\OPTRE_Weapons\Rockets\M41_launcher.p3d";
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		handAnim[]={"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"};
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.9;
		lockAcquire = 0;
		
		muzzlePos = "usti hlavne";
        muzzleEnd = "konec hlavne";
		
		reloadaction = "ReloadRPG";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 0.562341, 1, 50};
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 2500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 210;
		};
	};*/
};