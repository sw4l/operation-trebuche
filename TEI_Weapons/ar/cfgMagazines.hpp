class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class TEI_60Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "60Rnd 7.62x51mm Magazine";
		displaynameshort						= "7.62mm Rounds";
		ammo								= "TEI_B_762x51_Ball";
		count								= 60;
		initspeed							= 900;
		//picture								= "\TEI_Weapons\AR\data\MA5CMAGAZINE.paa";
		picture 							= "\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
		descriptionshort						= "60 Round Magazine<br>7.62x51mm";
		mass								= 20;
		tracersEvery 							= 0;
		lastRoundsTracer 						= 5;
	};
	class TEI_60Rnd_762x51_Mag_Tracer: TEI_60Rnd_762x51_Mag
	{
		displayname							= "60Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort						= "7.62x51mm Tracer Rounds";
		ammo								= "TEI_B_762x51_Tracer";
		descriptionshort						= "60 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 							= 1;
		lastRoundsTracer 						= 60;
	};
	class TEI_32Rnd_762x51_Mag: TEI_60Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "32Rnd 762x51mm Magazine";
		displaynameshort						= "7.62mm Rounds";
		ammo								= "TEI_B_762x51_Ball";
		count								= 32;
		initspeed							= 900;
		descriptionshort						= "32 Round Magazine<br>7.62x51mm";
		mass								= 10;
		tracersEvery 							= 0;
		lastRoundsTracer 						= 5;
	};
	class TEI_32Rnd_762x51_Mag_Tracer: TEI_32Rnd_762x51_Mag
	{
		displayname							= "32Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort						= "7.62x51mm Tracer Rounds";
		ammo								= "TEI_B_762x51_Tracer";
		descriptionshort						= "32 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 							= 1;
		lastRoundsTracer 						= 32;
	};
};