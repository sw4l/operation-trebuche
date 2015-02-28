class CfgMagazines
{
	class 30Rnd_45ACP_Mag_SMG_01;
	class TEI_60Rnd_5x23mm_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		model								= "\TEI_Weapons\smg\m7_Magazine.p3d";
		displayname							= "60Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		ammo								= "TEI_B_5x23_Caseless";
		count								= 60;
		initspeed							= 427;
		//picture							= "\TEI_Weapons\AR\data\MA5CMAGAZINE.paa";
		picture 							= "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		descriptionshort					= "60 Round Magazine<br>5x23mm";
		mass								= 15;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_60Rnd_5x23mm_Mag_tracer: TEI_60Rnd_5x23mm_Mag
	{
		displayname							= "60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		ammo								= "TEI_B_5x23_Caseless_Tracer";
		descriptionshort					= "60 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 60;
	};
	class TEI_48Rnd_5x23mm_Mag: TEI_60Rnd_5x23mm_Mag
	{
		model								= "\TEI_Weapons\smg\m7_Magazine.p3d";
		displayname							= "48Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		ammo								= "TEI_B_5x23_Caseless";
		count								= 48;
		initspeed							= 427;
		descriptionshort					= "48 Round Magazine<br>5x23mm";
		mass								= 10;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_48Rnd_5x23mm_Mag_tracer: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		ammo								= "TEI_B_5x23_Caseless_Tracer";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 48;
	};
};