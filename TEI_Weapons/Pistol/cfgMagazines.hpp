class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class TEI_8Rnd_127x40_Mag : 20Rnd_762x51_Mag
	{
		displayname						= "8Rnd 12.7x40mm Magazine";
		displaynameshort					= "12.7x40mm Rounds";
		ammo							= "TEI_B_127x40_Ball";
		count							= 8;
		initspeed						= 750;
		picture							= "\a3\weapons_F\data\ui\m_7rnd_127x33_ca.paa";
		descriptionshort					= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 8;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 2;
	};
	class TEI_8Rnd_127x40_Mag_Tracer : 20Rnd_762x51_Mag
	{
		displayname						= "8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort					= "12.7x40mm Tracer Rounds";
		ammo							= "TEI_B_127x40_Tracer";
		picture							= "\a3\weapons_F\data\ui\m_7rnd_127x33_ca.paa";
		descriptionshort					= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 8;
	};
};