class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	/*
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_20Rnd_762x45_Mag0";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		count = 20;
		ammo = "B_762x51_Ball";
		mass = 12;
		initSpeed = 850;
		descriptionShort = "$STR_A3_CfgMagazines_20Rnd_762x45_Mag1";
	};
	*/
	class TEI_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\BR\BR_Magazine.p3d";
		displayname							= "36Rnd 9.5x40mm Magazine";
		displaynameshort					= "9.5x40mm Rounds";
		ammo								= "TEI_B_95x40_Ball";
		count								= 36;
		initspeed							= 620;
		picture 							= "\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm";
		mass								= 10;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 6;
	};
	class TEI_36Rnd_95x40_Mag_Tracer: TEI_36Rnd_95x40_Mag
	{
		displayname							= "36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer Rounds";
		ammo								= "TEI_B_95x40_Tracer";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 36;
	};
};