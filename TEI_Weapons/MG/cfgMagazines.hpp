class CfgMagazines
{
	class 150Rnd_762x51_Box;
	class TEI_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "100Rnd 9.5x40mm Box Magazine";
		displaynameshort						= "9.5x40mm";
		ammo								= "TEI_B_95x40_Ball";
		count								= 100;
		initspeed							= 620;
		picture = "";
		descriptionshort						= "100 Round Box Magazine<br>9.5x40mm";
		mass								= 35;
		tracersEvery 							= 0;
		lastRoundsTracer 						= 10;
	};
	class TEI_100Rnd_95x40_Box_Tracer: TEI_100Rnd_95x40_Box
	{
		displayname							= "100Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort						= "9.5x40mm Tracer";
		ammo								= "TEI_B_95x40_Tracer";
		picture = "";
		descriptionshort						= "100 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 							= 1;
		lastRoundsTracer 						= 100;
	};
	class TEI_200Rnd_95x40_Box: TEI_100Rnd_95x40_Box
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "200Rnd 9.5x40mm Box Magazine";
		displaynameshort						= "9.5x40mm";
		ammo								= "TEI_B_95x40_Ball";
		count								= 200;
		initspeed							= 620;
		picture = "";
		descriptionshort						= "200 Round Box Magazine<br>9.5x40mm";
		mass								= 70;
		tracersEvery 							= 0;
		lastRoundsTracer 						= 10;
	};
	class TEI_200Rnd_95x40_Box_Tracer: TEI_100Rnd_95x40_Box
	{
		displayname							= "200Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort						= "9.5x40mm Tracer";
		ammo								= "TEI_B_95x40_Tracer";
		picture = "";
		descriptionshort						= "200 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 							= 1;
		lastRoundsTracer 						= 200;
	};
};