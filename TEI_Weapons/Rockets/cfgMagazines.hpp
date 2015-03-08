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
	class NLAW_F;
	class Titan_AA;
	
	class TEI_M41_HEAT: RPG32_F
	{
		descriptionshort="Type: Surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		ammo="TEI_M41_Rocket_HEAT";
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		displayname="M19 HEAT Rocket";
		displaynameshort="HEAT";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=1;
		mass = 40;
		initSpeed = 140;
	};
	class TEI_M41_HEAT_G: NLAW_F
	{
		ammo="TEI_M41_Rocket_HEAT_Guided";
		displayname="M19 HEAT Guided Rocket";
		displaynameshort="HEAT(G)";
		descriptionshort="Type: Guided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		model="\TEI_Weapons\Rockets\M41_Case";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";		
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count=1;
		scope=1;
		mass = 40;
	};
	class TEI_M41_HEAP: RPG32_HE_F
	{
		ammo="TEI_M41_Rocket_HEAP";
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort="Type: Surface-to-surface HEAP (High Explosive Anti Personnel)<br/>Used in: M41 SSR MAV/AW";
		displayname="M19 HEAP Rocket";
		displaynameshort="HEDP";
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=1;
		mass = 40;
		initSpeed=255;
	};
	class TEI_M41_HEAA: Titan_AA
	{
		displayname="M19 HEAA Rockets";
		displaynameshort="HEAA";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort="Type: Guided surface-to-air HEAA (High Explosive Anti Air)<br/>Used in: M41 SSR MAV/AW";
		ammo="TEI_M41_Rocket_HEAA";
		model="\TEI_Weapons\Rockets\M41_Case";	
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=1;
		mass = 40;
	};
	
	
	
	
	class TEI_M41_Twin_HEAT: RPG32_HE_F
	{
		displayname="M19 HEAT Twin Rockets";
		displaynameshort="HEAT Twin";
		descriptionshort="Type: Guided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		ammo="TEI_M41_Rocket_HEAT";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		model="\TEI_Weapons\Rockets\M41_Case";	
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count=2;
		//picture = "";
		scope=2;
		mass = 80;
	};
	class TEI_M41_Twin_HEAT_G: NLAW_F
	{
		ammo="TEI_M41_Rocket_HEAT_Guided";
		displayname="M19 HEAT Guided Twin Rockets";
		displaynameshort="HEAT(G) Twin";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort="Type: Guided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		model="\TEI_Weapons\Rockets\M41_Case";	
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count=2;
		//picture = "";
		scope=2;
		mass = 80;
	};
	class TEI_M41_Twin_HEAP: RPG32_HE_F
	{
		ammo="TEI_M41_Rocket_HEAP";
		model="\TEI_Weapons\Rockets\M41_Case";	
		descriptionshort="Type: Surface-to-surface HEAP (High Explosive Anti Personnel)<br/>Used in: M41 SSR MAV/AW";
		displayname="M19 HEAP Twin Rockets";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		displaynameshort="HEDP Twin";
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope=2;
		//picture = "";
		mass = 80;
		count = 2;
		initSpeed=255;
	};
	class TEI_M41_Twin_HEAA: RPG32_HE_F
	{
		displayname="M19 HEAA Twin Rockets";
		displaynameshort="HEAA Twin";
		picture = "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort="Type: Guided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		ammo="TEI_M41_Rocket_HEAA";
		model="\TEI_Weapons\Rockets\M41_Case";	
		modelSpecial="\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count=2;
		//picture = "";
		scope=2;
		mass = 80;
	};
};