class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_120mm_APFSDS_shells;
	class 30Rnd_120mm_HE_shells;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	class 12Rnd_missiles;
	class 12Rnd_PG_missiles;
	class 4Rnd_Missile_AGM_01_F;
	class 2Rnd_LG_Scalpel;
	class 2Rnd_Bomb_03_F;
	class 2Rnd_GBU12_LGB;
	class HandGrenade;
	class SmokeShell;
	class RPG32_HE_F;
	class RPG32_F;
	class NLAW_F;
	class Titan_AA;
	class Titan_AT;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	
	//7.62x51mm (AR, M247)
	class OPTRE_60Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\AR\MA5_Magazine.p3d";
		displayname							= "60Rnd 7.62x51mm Magazine";
		displaynameshort					= "7.62x51mm";
		ammo								= "OPTRE_B_762x51_Ball";
		count								= 60;
		initspeed							= 700;
		picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "60 Round Magazine<br>7.62x51mm";
		mass								= 18;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class OPTRE_60Rnd_762x51_Mag_Tracer: OPTRE_60Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		displayname							= "60Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort					= "7.62x51mm Tracer";
		ammo								= "OPTRE_B_762x51_Tracer";
		descriptionshort					= "60 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 60;
	};
	class OPTRE_32Rnd_762x51_Mag: OPTRE_60Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		displayname							= "32Rnd 762x51mm Magazine";
		count								= 32;
		initspeed							= 800;
		descriptionshort					= "32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)";
		mass								= 10;
	};
	class OPTRE_32Rnd_762x51_Mag_Tracer: OPTRE_60Rnd_762x51_Mag_Tracer
	{
		dlc = "OPTRE";
		displayname							= "32Rnd 762x51mm Magazine";
		count								= 32;
		descriptionshort					= "32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)<br>Tracer";
		mass								= 10;
	};
	class OPTRE_100Rnd_762x51_Box: OPTRE_60Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname							= "100Rnd 7.62x51mm Box Magazine";
		displaynameshort					= "7.62x51mm";
		ammo								= "OPTRE_B_762x51_Ball";
		count								= 100;
		initspeed							= 850;
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "100 Round Box Magazine<br>7.62x51mm";
		mass								= 40;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 10;
	};
	class OPTRE_100Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
		displayname							= "100Rnd 7.62x51mm Box Magazine (Tracers)";
		displaynameshort					= "7.62x51mm Tracer";
		ammo								= "OPTRE_B_762x51_Tracer";
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "100 Round Box Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 100;
	};
	class OPTRE_15Rnd_762x51_Mag: OPTRE_60Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\AR\MA5_Magazine.p3d";
		displayname							= "15Rnd 7.62x51mm Magazine";
		displaynameshort					= "7.62x51mm";
		ammo								= "OPTRE_B_762x51_Ball";
		count								= 15;
		initspeed							= 900;
		picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "15 Round Magazine<br>7.62x51mm";
		mass								= 10;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 3;
	};
	class OPTRE_15Rnd_762x51_Mag_Tracer: OPTRE_15Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		displayname							= "15Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort					= "7.62x51mm Tracer";
		ammo								= "OPTRE_B_762x51_Tracer";
		descriptionshort					= "15 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 15;
	};
	
	//9.5x40mm (BR, M73)
	class OPTRE_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\BR\BR_Magazine.p3d";
		displayname							= "36Rnd 9.5x40mm Magazine";
		displaynameshort					= "9.5x40mm";
		ammo								= "OPTRE_B_95x40_Ball";
		count								= 36;
		initspeed							= 800;
		picture 							= "\OPTRE_weapons\br\icons\magazine.paa";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm";
		mass								= 8;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 6;
	};
	class OPTRE_36Rnd_95x40_Mag_Tracer: OPTRE_36Rnd_95x40_Mag
	{
		dlc = "OPTRE";
		displayname							= "36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "OPTRE_B_95x40_Tracer";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 36;
	};
	class OPTRE_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname							= "100Rnd 9.5x40mm Box Magazine";
		displaynameshort					= "9.5x40mm";
		ammo								= "OPTRE_B_95x40_Ball";
		count								= 100;
		initspeed							= 900;
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "100 Round Box Magazine<br>9.5x40mm";
		mass								= 35;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 10;
	};
	class OPTRE_100Rnd_95x40_Box_Tracer: OPTRE_100Rnd_95x40_Box
	{
		dlc = "OPTRE";
		displayname							= "100Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "OPTRE_B_95x40_Tracer";
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "100 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 100;
	};
	class OPTRE_200Rnd_95x40_Box: OPTRE_100Rnd_95x40_Box
	{
		dlc = "OPTRE";
		displayname							= "200Rnd 9.5x40mm Box Magazine";
		count								= 200;
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "200 Round Box Magazine<br>9.5x40mm";
		mass								= 70;
	};
	class OPTRE_200Rnd_95x40_Box_Tracer: OPTRE_200Rnd_95x40_Box
	{
		dlc = "OPTRE";
		displayname							= "200Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "OPTRE_B_95x40_Tracer";
		picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort					= "200 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 200;
	};
	
	//12.7x40mm (Pistol)
	class OPTRE_8Rnd_127x40_Mag : 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model							= "\OPTRE_Weapons\pistol\m6_Magazine.p3d";
		displayname						= "8Rnd 12.7x40mm Magazine";
		displaynameshort				= "12.7x40mm";
		ammo							= "OPTRE_B_127x40_Ball";
		count							= 8;
		initspeed						= 400;
		picture 						= "\OPTRE_weapons\pistol\icons\magazine.paa";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 8;
		tracersEvery 					= 0;
		lastRoundsTracer 				= 2;
	};
	class OPTRE_8Rnd_127x40_AP_Mag : OPTRE_8Rnd_127x40_Mag
	{
		dlc = "OPTRE";
		displayname						= "8Rnd 12.7x40mm AP Magazine";
		displaynameshort				= "12.7x40mm AP";
		ammo							= "OPTRE_B_127x40_AP";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Armor Piercing";
		tracersEvery 					= 0;
		lastRoundsTracer 				= 0;
	};
	class OPTRE_8Rnd_127x40_Mag_Tracer : OPTRE_8Rnd_127x40_Mag
	{
		dlc = "OPTRE";
		displayname						= "8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort				= "12.7x40mm Tracer";
		picture 						= "\OPTRE_weapons\pistol\icons\magazine.paa";
		ammo							= "OPTRE_B_127x40_Tracer";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery 					= 1;
		lastRoundsTracer 				= 8;
	};
	class OPTRE_12Rnd_127x40_Mag : OPTRE_8Rnd_127x40_Mag
	{
		dlc = "OPTRE";
		displayname						= "12Rnd 12.7x40mm Magazine";
		count							= 12;
		initspeed						= 300;
		descriptionshort				= "12 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 8;
		tracersEvery 					= 0;
		lastRoundsTracer 				= 2;
	};
	class OPTRE_16Rnd_127x40_Mag : OPTRE_12Rnd_127x40_Mag
	{
		dlc = "OPTRE";
		displayname						= "16Rnd 12.7x40mm Magazine";
		count							= 16;
		descriptionshort				= "16 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 9;
		tracersEvery 					= 0;
		lastRoundsTracer 				= 2;
	};
	
	//8 Gauge (Shotgun)
	class OPTRE_6Rnd_8Gauge_Pellets : 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope 								= 2;
		displayname							= "6Rnd 8 Gauge Pellets";
		displaynameshort					= "8 Gauge Pellets";
		ammo								= "OPTRE_8Gauge_Pellets";
		count								= 6;
		initspeed							= 400;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort					= "6 Rounds of 8 Gauge Pellets";
		mass								= 10;
	};
	class OPTRE_6Rnd_8Gauge_Slugs : OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
		displayname							= "6Rnd 8 Gauge Slugs";
		displaynameshort					= "8 Gauge Slugs";
		ammo								= "OPTRE_8Gauge_Slugs";
		initspeed							= 600;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		descriptionshort					= "6 Rounds of 8 Gauge Slugs";
		mass								= 10;
	};
	class OPTRE_12Rnd_8Gauge_Pellets : OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc = "OPTRE";
		displayname							= "12Rnd 8 Gauge Pellets";
		count								= 12;
		descriptionshort					= "12 Rounds of 8 Gauge Pellets";
		mass								= 16;
	};
	class OPTRE_12Rnd_8Gauge_Slugs : OPTRE_6Rnd_8Gauge_Slugs
	{
		dlc = "OPTRE";
		displayname							= "12Rnd 8 Gauge Slugs";
		count								= 12;
		descriptionshort					= "12 Rounds of 8 Gauge Slugs";
		mass								= 16;
	};
	
	//5x23mm (SMG)
	class OPTRE_60Rnd_5x23mm_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\smg\m7_Magazine.p3d";
		displayname							= "60Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		ammo								= "OPTRE_B_5x23_Caseless";
		count								= 60;
		initspeed							= 500;
		picture 							= "\OPTRE_weapons\smg\icons\magazine.paa";
		descriptionshort					= "60 Round Magazine<br>5x23mm";
		mass								= 8;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class OPTRE_60Rnd_5x23mm_Mag_tracer: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "OPTRE";
		displayname							= "60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		ammo								= "OPTRE_B_5x23_Caseless_Tracer";
		descriptionshort					= "60 Round Magazine<br>5x23mm<br>Tracer";
		lastRoundsTracer 					= 60;
	};
	class OPTRE_48Rnd_5x23mm_Mag: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "OPTRE";
		displayname							= "48Rnd 5x23mm Magazine";
		count								= 48;
		descriptionshort					= "48 Round Magazine<br>5x23mm";
		mass								= 6;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class OPTRE_48Rnd_5x23mm_JHP_Mag: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc = "OPTRE";
		displayname							= "48Rnd 5x23mm (JHP) Magazine";
		displaynameshort					= "5x23mm JHP";
		ammo								= "OPTRE_B_5x23_Caseless_JHP";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class OPTRE_48Rnd_5x23mm_FMJ_Mag: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc = "OPTRE";
		displayname							= "48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort					= "5x23mm FMJ";
		initspeed							= 600;
		ammo								= "OPTRE_B_5x23_Caseless_FMJ";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
	};
	class OPTRE_48Rnd_5x23mm_Mag_tracer: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc = "OPTRE";
		displayname							= "48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		ammo								= "OPTRE_B_5x23_Caseless_Tracer";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Tracer";
		lastRoundsTracer 					= 48;
	};
	
	//14.5x114mm (Sniper)
	class OPTRE_4Rnd_145x114_APFSDS_Mag: 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model								= "\OPTRE_Weapons\AR\MA5_Magazine.p3d";
		displayname							= "4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort					= "APFSDS";
		ammo								= "OPTRE_B_145x114_APFSDS";
		count								= 4;
		initspeed							= 2000;
		picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "4 Round Magazine<br>14.5x114mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass								= 15;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 4;
	};
	class OPTRE_4Rnd_145x114_HVAP_Mag: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc = "OPTRE";
		displayname							= "4Rnd 14.5x114mm HVAP Magazine";
		displaynameshort					= "HVAP";
		ammo								= "OPTRE_B_145x114_HVAP";
		initspeed							= 1750;
		descriptionshort					= "4 Round Magazine<br>14.5x114mm<br>High Velocity Armor Piercing";
		mass								= 15;
	};
	class OPTRE_4Rnd_145x114_HEDP_Mag: OPTRE_4Rnd_145x114_HVAP_Mag
	{
		dlc = "OPTRE";
		displayname							= "4Rnd 14.5x114mm HEDP Magazine";
		displaynameshort					= "HEDP";
		ammo								= "OPTRE_B_145x114_HEDP";
		initspeed							= 1500;
		descriptionshort					= "4 Round Magazine<br>14.5x114mm<br>High Explosive Dual Purpose";
		mass								= 25;
	};
	
	//Vehicles
	class OPTRE_3Rnd_ALIM_Gauss_Slugs: 30Rnd_120mm_APFSDS_shells
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName							= "20Rnd ALIM Gauss Slugs";
		displayNameShort					= "25x130mm Slug";
		ammo								= "OPTRE_25x130mm_Slug";
		initSpeed 							= 13680;
		count								= 3;
	};
	class OPTRE_1Rnd_MAC_Rounds: OPTRE_3Rnd_ALIM_Gauss_Slugs
	{
		dlc = "OPTRE";
		displayName							= "MAC Round";
		displayNameShort					= "MAC Round";
		ammo								= "OPTRE_MAC_Round";
		initSpeed 							= 1000;
		count								= 1;
	};
	
	class OPTRE_3Rnd_102mm_rockets: 5Rnd_GAT_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "3Rnd 102mm Guided HEAT Rockets";
		displayNameShort 					= "102mm Guided HEAT";
		count 								= 3;
		ammo 								= "OPTRE_M41_Rocket_ATGM";
		initSpeed 							= 60;
		maxLeadSpeed 						= 60;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound 							= "missiles";
	};
	class OPTRE_16Rnd_Anvil1_missiles: 12Rnd_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "16Rnd 'ANVIL I' Rocket Pods";
		displayNameShort 					= "16Rnd HE Rockets";
		count 								= 16;
		ammo 								= "OPTRE_M_ANVIL_1_Rocket";
		initSpeed 							= 55; //40
		maxLeadSpeed 						= 800;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "rockets";
	};
	class OPTRE_32Rnd_Anvil1_missiles: OPTRE_16Rnd_Anvil1_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "32Rnd 'ANVIL I' Rocket Pods";
		displayNameShort 					= "32Rnd HE Rockets";
		count 								= 32;
		ammo 								= "OPTRE_M_ANVIL_1_Rocket";
	};
	class OPTRE_12Rnd_Anvil2_missiles: 12Rnd_PG_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd 'ANVIL II' Missile Pods";
		displayNameShort 					= "12Rnd IR Missiles";
		count 								= 12;
		ammo 								= "OPTRE_M_ANVIL_2_IR";
		initSpeed 							= 40; //40
		maxLeadSpeed 						= 800;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_24Rnd_Anvil2_missiles: OPTRE_12Rnd_Anvil2_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "24Rnd 'ANVIL II' Missile Pods";
		displayNameShort 					= "24Rnd IR Missiles";
		count 								= 24;
		ammo 								= "OPTRE_M_ANVIL_2_IR";
	};
	class OPTRE_12Rnd_Anvil3_missiles: 12Rnd_PG_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd 'ANVIL III' Laser Guided Missile Pods";
		displayNameShort 					= "12Rnd LG Missiles";
		count 								= 12;
		ammo 								= "OPTRE_M_ANVIL_3_LGM";
		initSpeed 							= 60; //40
		maxLeadSpeed 						= 1000;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_24Rnd_Anvil3_missiles: OPTRE_12Rnd_Anvil3_missiles
	{
		dlc 								= "OPTRE";
		scope 								= 2;
		displayName 						= "24Rnd 'ANVIL III' Laser Guided Missile Pods";
		displayNameShort 					= "24Rnd LG Missiles";
		count 								= 24;
		ammo 								= "OPTRE_M_ANVIL_3_LGM";
	};
	class OPTRE_6Rnd_ASGM2_rockets: 4Rnd_GAA_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "6Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort 					= "6Rnd Guided AA";
		count 								= 6;
		ammo 								= "OPTRE_M_ASGM2_AA";
		initSpeed 							= 80; //40
		maxLeadSpeed 						= 320;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_12Rnd_ASGM2_rockets: OPTRE_6Rnd_ASGM2_rockets
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort 					= "12Rnd Guided AA";
		count 								= 12;
	};
	class OPTRE_48Rnd_ASGM2_rockets: OPTRE_6Rnd_ASGM2_rockets
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "48Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort 					= "48Rnd Guided AA";
		count 								= 48;
	};
	class OPTRE_4Rnd_ASGM10_missiles: 4Rnd_GAA_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "4Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort 					= "6Rnd Guided AA";
		count 								= 6;
		ammo 								= "OPTRE_M_ASGM10_AA";
		initSpeed 							= 80; //40
		maxLeadSpeed 						= 900;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_8Rnd_ASGM10_missiles: OPTRE_4Rnd_ASGM10_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "8Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort 					= "8Rnd Guided AA";
		count 								= 8;
	};
	class OPTRE_12Rnd_ASGM10_missiles: OPTRE_4Rnd_ASGM10_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort 					= "12Rnd Guided AA";
		count 								= 12;
	};
	class OPTRE_12Rnd_C2GMLS_missiles: OPTRE_6Rnd_ASGM2_rockets
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd Class-2 Self-Guided Missiles";
		displayNameShort 					= "12Rnd Class-2 GMLS";
		count 								= 12;
	};
	class OPTRE_4Rnd_Scorpion_missiles: 4Rnd_Missile_AGM_01_F
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "4Rnd AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort 					= "4Rnd Guided AT";
		count 								= 4;
		ammo 								= "OPTRE_M_Scorpion_AT";
		initSpeed 							= 40; //40
		maxLeadSpeed 						= 400;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_8Rnd_Scorpion_missiles: OPTRE_4Rnd_Scorpion_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "8Rnd AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort 					= "8Rnd Guided AT";
		count 								= 8;
	};
	class OPTRE_12Rnd_Scorpion_missiles: OPTRE_4Rnd_Scorpion_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort 					= "12Rnd Guided AT";
		count 								= 12;
	};
	class OPTRE_16Rnd_Scorpion_missiles: OPTRE_4Rnd_Scorpion_missiles
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "16Rnd AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort 					= "16Rnd Guided AT";
		count 								= 16;
	};
	class OPTRE_1Rnd_Jackknife_missile: 2Rnd_LG_Scalpel
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "1Rnd AGM-502 'Jack Knife' Laser Guided Missile";
		displayNameShort 					= "1Rnd Laser Guided";
		count 								= 1;
		ammo 								= "OPTRE_M_Jackknife_LGM";
		initSpeed 							= 60; //40
		maxLeadSpeed 						= 350;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	class OPTRE_2Rnd_Jackknife_missile: OPTRE_1Rnd_Jackknife_missile
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "2Rnd AGM-502 'Jack Knife' Laser Guided Missile";
		displayNameShort 					= "2Rnd Laser Guided";
		count 								= 2;
	};
	class OPTRE_3Rnd_Jackknife_missile: OPTRE_1Rnd_Jackknife_missile
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "3Rnd AGM-502 'Jack Knife' Laser Guided Missile";
		displayNameShort 					= "3Rnd Laser Guided";
		count 								= 3;
	};
	class OPTRE_12Rnd_500lb_bomb: 2Rnd_Bomb_03_F
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd Mk208A 500lb Bomb";
		displayNameShort 					= "12Rnd 500lb Bomb";
		count 								= 12;
		ammo 								= "OPTRE_Bo_500lb";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_24Rnd_500lb_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "24Rnd Mk208A 500lb Bomb";
		displayNameShort 					= "24Rnd 500lb Bomb";
		count 								= 24;
	};
	class OPTRE_36Rnd_500lb_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "36Rnd Mk208A 500lb Bomb";
		displayNameShort 					= "36Rnd 500lb Bomb";
		count 								= 36;
	};
	class OPTRE_48Rnd_500lb_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "48Rnd Mk208A 500lb Bomb";
		displayNameShort 					= "48Rnd 500lb Bomb";
		count 								= 48;
	};
	class OPTRE_12Rnd_1000lb_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd Mk208B 1000lb Bomb";
		displayNameShort 					= "12Rnd 1000lb Bomb";
		count 								= 12;
		ammo 								= "OPTRE_Bo_1000lb";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_24Rnd_1000lb_bomb: OPTRE_12Rnd_1000lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "24Rnd Mk208B 1000lb Bomb";
		displayNameShort 					= "24Rnd 1000lb Bomb";
		count 								= 24;
	};
	class OPTRE_36Rnd_1000lb_bomb: OPTRE_12Rnd_1000lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "36Rnd Mk208B 1000lb Bomb";
		displayNameShort 					= "36Rnd 1000lb Bomb";
		count 								= 36;
	};
	class OPTRE_8Rnd_2000lb_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "8Rnd Mk208C 2000lb Bomb";
		displayNameShort 					= "8Rnd 2000lb Bomb";
		count 								= 8;
		ammo 								= "OPTRE_Bo_2000lb";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_16Rnd_2000lb_bomb: OPTRE_8Rnd_2000lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "16Rnd Mk208C 2000lb Bomb";
		displayNameShort 					= "16Rnd 2000lb Bomb";
		count 								= 16;
	};
	class OPTRE_4Rnd_GBU_bomb: 2Rnd_GBU12_LGB
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "4Rnd GBU-1071 Laser Guided Bomb";
		displayNameShort 					= "4Rnd LG Bomb";
		count 								= 4;
		ammo 								= "OPTRE_Bo_GBU1071_LGB";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_8Rnd_GBU_bomb: OPTRE_4Rnd_GBU_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "8Rnd GBU-1071 Laser Guided Bomb";
		displayNameShort 					= "8Rnd LG Bomb";
		count 								= 8;
	};
	class OPTRE_12Rnd_Cluster_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd CBU-901 Cluster Bomb";
		displayNameShort 					= "12Rnd Cluster Bomb";
		count 								= 12;
		ammo 								= "OPTRE_Bo_cluster_AP";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_12Rnd_scattermine_bomb: OPTRE_12Rnd_500lb_bomb
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "12Rnd CBU-870 Mine Dispersal Bomb";
		displayNameShort 					= "12Rnd Minelayer Bomb";
		count 								= 12;
		ammo 								= "OPTRE_Bo_scattermine_AP";
		initSpeed 							= 0;
		maxLeadSpeed 						= 1000;
	};
	class OPTRE_2000Rnd_20mm_HEIAP: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author = "Article 2 Studios";
		displayNameShort = "20mm HEIAP";
		ammo = "OPTRE_B_20mm_HEIAP";
		count = 2000;
	};
	class OPTRE_2500Rnd_50mm_HE: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author = "Article 2 Studios";
		displayNameShort = "50mm HE";
		ammo = "OPTRE_B_50mm_HE";
		count = 2500;
	};
	class OPTRE_600Rnd_110mm: OPTRE_2500Rnd_50mm_HE
	{
		author = "Article 2 Studios";
		displayNameShort = "110mm HEAT";
		ammo = "OPTRE_Sh_110mm_HEAT";
		count = 600;
	};
	class OPTRE_120Rnd_120mm: 30Rnd_120mm_HE_shells
	{
		author = "Article 2 Studios";
		displayNameShort = "120mm SAPHE";
		ammo = "OPTRE_Sh_120mm_SAPHE";
		count = 120;
	};
	class OPTRE_2Rnd_Shiva_nuke_missile: 2Rnd_LG_Scalpel
	{
		dlc = "OPTRE";
		scope 								= 2;
		displayName 						= "2Rnd 'SHIVA' TACTICAL NUCLEAR MISSILE";
		displayNameShort 					= "2Rnd NUCLEAR MISSILE";
		count 								= 1;
		ammo 								= "OPTRE_M_Shiva_Nuke";
		initSpeed 							= 0; //40
		maxLeadSpeed 						= 800;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	
	
	//Rockets
	class OPTRE_M41_Twin_HEAT: RPG32_HE_F
	{
		dlc = "OPTRE";
		displayname						= "M19 HEAT Twin Rockets";
		displaynameshort				= "HEAT";
		descriptionshort				= "High Explosive Anti Tank<br/>Un-guided";
		ammo							= "OPTRE_M41_Rocket_HEAT";
		picture 						= "\OPTRE_weapons\rockets\icons\rocket.paa";
		model							= "\OPTRE_Weapons\Rockets\M41_tube.p3d";	
		modelSpecial 					= "\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		count							= 2;
		mass 							= 80;
		initSpeed 						= 150;
	};
	class OPTRE_M41_Twin_HEAT_G: OPTRE_M41_Twin_HEAT
	{
		dlc = "OPTRE";
		displayname						= "M19 HEAT Guided Twin Rockets";
		displaynameshort				= "HEAT (Guided)";
		picture 						= "\OPTRE_weapons\rockets\icons\rocket.paa";
		descriptionshort				= "High Explosive Anti Tank<br/>Guided";
		model							= "\OPTRE_Weapons\Rockets\M41_tube.p3d";	
		count							= 2;
		mass 							= 90;
		ammo 							= "OPTRE_M41_Rocket_ATGM";
		initSpeed 						= 60;
		maxLeadSpeed 					= 60;
		sound[] 						= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 				= "DefaultRifle";
		soundFly[] 						= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 						= {"",1.25893,1,1};
		reloadSound[] 					= {"",0.000316228,1,20};
		nameSound 						= "missiles";
	};
	class OPTRE_M41_Twin_HEAP: RPG32_HE_F
	{
		dlc = "OPTRE";
		ammo							= "OPTRE_M41_Rocket_HEAP";
		model							= "\OPTRE_Weapons\Rockets\M41_case.p3d";	
		descriptionshort				= "High Explosive Anti Personnel<br/>Un-guided";
		displayname						= "M19 HEAP Twin Rockets";
		picture 						= "\OPTRE_weapons\rockets\icons\rocket.paa";
		modelSpecial 					= "\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		displaynameshort				= "HEAP";
		mass 							= 80;
		count 							= 2;
		initSpeed						= 150;
	};
	
	//Grenades
	class OPTRE_M9_Frag: HandGrenade
	{
		dlc = "OPTRE";
		ammo = "OPTRE_G_M9_Frag";
		mass = 8;
		displayName = "M9 HE-DP Grenade";
		descriptionShort = "Hand Grenade";
		displayNameShort = "M9 Frag";
		model = "\OPTRE_Weapons\explosives\m9_grenade.p3d";
		picture = "\OPTRE_Weapons\explosives\icons\m9.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\FRAG.paa";
		count = 1;
		nameSound = "handgrenade";
		initSpeed = 20;
	};
	class OPTRE_M2_Smoke: SmokeShell
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (White)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_Smoke";
		descriptionShort = "Smoke Grenade<br>White";
		displayNameShort = "White Smoke";
		mass = 4;
	};
	class OPTRE_M2_Smoke_Blue: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Blue)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_BSmoke";
		descriptionShort = "Smoke Grenade<br>Blue";
		displayNameShort = "Blue Smoke";
	};
	class OPTRE_M2_Smoke_Yellow: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Yellow)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_YSmoke";
		descriptionShort = "Smoke Grenade<br>Yellow";
		displayNameShort = "Yellow Smoke";
	};
	class OPTRE_M2_Smoke_Red: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Red)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_RSmoke";
		descriptionShort = "Smoke Grenade<br>Red";
		displayNameShort = "Red Smoke";
	};
	class OPTRE_M2_Smoke_Green: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Green)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_GSmoke";
		descriptionShort = "Smoke Grenade<br>Green";
		displayNameShort = "Green Smoke";
	};
	class OPTRE_M2_Smoke_Orange: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Orange)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_OSmoke";
		descriptionShort = "Smoke Grenade<br>Orange";
		displayNameShort = "Orange Smoke";
	};
	class OPTRE_M2_Smoke_Purple: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Purple)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_PSmoke";
		descriptionShort = "Smoke Grenade<br>Purple";
		displayNameShort = "Purple Smoke";
	};
	class OPTRE_M8_Flare: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "M8 Flare";
		model = "\OPTRE_Weapons\explosives\m8_flare.p3d";
		ammo = "OPTRE_G_M8_Flare";
		descriptionShort = "Emergency Flare";
		displayNameShort = "Flare";
	};
	class OPTRE_ELB47_Strobe: OPTRE_M2_Smoke
	{
		dlc = "OPTRE";
		displayName = "ELB-47 Strobe";
		model = "\OPTRE_Weapons\items\beacon.p3d";
		ammo = "OPTRE_G_ELB47_Strobe";
		descriptionShort = "Emergency Beacon";
		displayNameShort = "Beacon";
	};
};