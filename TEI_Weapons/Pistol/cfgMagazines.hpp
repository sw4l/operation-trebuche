class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class TEI_8Rnd_127x40_Mag : 20Rnd_762x51_Mag
	{
		model							= "\TEI_Weapons\pistol\m6_Magazine.p3d";
		displayname						= "8Rnd 12.7x40mm Magazine";
		displaynameshort				= "12.7x40mm";
		ammo							= "TEI_B_127x40_Ball";
		count							= 8;
		initspeed						= 450;
		picture = "\TEI_weapons\pistol\icons\magazine.paa";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 8;
		tracersEvery 					= 0;
		lastRoundsTracer 				= 2;
	};
	class TEI_8Rnd_127x40_Mag_Tracer : TEI_8Rnd_127x40_Mag
	{
		displayname						= "8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort				= "12.7x40mm Tracer";
		picture = "\TEI_weapons\pistol\icons\magazine.paa";
		ammo							= "TEI_B_127x40_Tracer";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery 					= 1;
		lastRoundsTracer 				= 8;
	};
};