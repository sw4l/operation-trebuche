class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class TEI_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\BR\BR_Magazine.p3d";
		displayname							= "36Rnd 9.5x40mm Magazine";
		displaynameshort					= "9.5x40mm Rounds";
		ammo								= "TEI_B_95x40_Ball";
		count								= 36;
		initspeed							= 900;
		picture								= "";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm";
		mass								= 10;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 6;
	};
	class TEI_36Rnd_95x40_Mag_Tracer: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\BR\BR_Magazine.p3d";
		displayname							= "36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer Rounds";
		ammo								= "TEI_B_95x40_Tracer";
		count								= 36;
		initspeed							= 900;
		picture								= "";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm<br>Tracer";
		mass								= 10;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 36;
	};
};