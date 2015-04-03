class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_120mm_APFSDS_shells;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	class HandGrenade;
	class SmokeShell;
	class RPG32_HE_F;
	class RPG32_F;
	class NLAW_F;
	class Titan_AA;
	class Titan_AT;
	
	//7.62x51mm (AR, M247)
	class TEI_60Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "60Rnd 7.62x51mm Magazine";
		displaynameshort					= "7.62x51mm";
		ammo								= "TEI_B_762x51_Ball";
		count								= 60;
		initspeed							= 720;
		picture 							= "\TEI_weapons\ar\icons\magazine.paa";
		descriptionshort					= "60 Round Magazine<br>7.62x51mm";
		mass								= 18;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_60Rnd_762x51_Mag_Tracer: TEI_60Rnd_762x51_Mag
	{
		displayname							= "60Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort					= "7.62x51mm Tracer";
		ammo								= "TEI_B_762x51_Tracer";
		descriptionshort					= "60 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 						= 18;
		lastRoundsTracer 					= 60;
	};
	class TEI_32Rnd_762x51_Mag: TEI_60Rnd_762x51_Mag
	{
		displayname							= "32Rnd 762x51mm Magazine";
		count								= 32;
		descriptionshort					= "32 Round Magazine<br>7.62x51mm";
		mass								= 10;
	};
	class TEI_32Rnd_762x51_Mag_Tracer: TEI_60Rnd_762x51_Mag_Tracer
	{
		displayname							= "32Rnd 762x51mm Magazine";
		count								= 32;
		descriptionshort					= "32 Round Magazine<br>7.62x51mm<br>Tracer";
		mass								= 10;
	};
	class TEI_100Rnd_762x51_Box: TEI_60Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\MG\M73_100rd_mag.p3d";
		displayname							= "100Rnd 7.62x51mm Box Magazine";
		displaynameshort					= "7.62x51mm";
		ammo								= "TEI_B_762x51_Ball";
		count								= 100;
		initspeed							= 860;
		picture 							= "";
		descriptionshort					= "100 Round Box Magazine<br>7.62x51mm";
		mass								= 40;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 10;
	};
	class TEI_100Rnd_762x51_Box_Tracer: TEI_100Rnd_762x51_Box
	{
		displayname							= "100Rnd 7.62x51mm Box Magazine (Tracers)";
		displaynameshort					= "7.62x51mm Tracer";
		ammo								= "TEI_B_762x51_Tracer";
		picture					 			= "";
		descriptionshort					= "100 Round Box Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 100;
	};
	
	//9.5x40mm (BR, M73)
	class TEI_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\BR\BR_Magazine.p3d";
		displayname							= "36Rnd 9.5x40mm Magazine";
		displaynameshort					= "9.5x40mm";
		ammo								= "TEI_B_95x40_Ball";
		count								= 36;
		initspeed							= 840;
		picture 							= "\TEI_weapons\br\icons\magazine.paa";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm";
		mass								= 8;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 6;
	};
	class TEI_36Rnd_95x40_Mag_Tracer: TEI_36Rnd_95x40_Mag
	{
		displayname							= "36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "TEI_B_95x40_Tracer";
		descriptionshort					= "36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 36;
	};
	class TEI_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		model								= "\TEI_Weapons\MG\M73_100rd_mag.p3d";
		displayname							= "100Rnd 9.5x40mm Box Magazine";
		displaynameshort					= "9.5x40mm";
		ammo								= "TEI_B_95x40_Ball";
		count								= 100;
		initspeed							= 800;
		picture 							= "";
		descriptionshort					= "100 Round Box Magazine<br>9.5x40mm";
		mass								= 35;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 10;
	};
	class TEI_100Rnd_95x40_Box_Tracer: TEI_100Rnd_95x40_Box
	{
		displayname							= "100Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "TEI_B_95x40_Tracer";
		picture 							= "";
		descriptionshort					= "100 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 100;
	};
	class TEI_200Rnd_95x40_Box: TEI_100Rnd_95x40_Box
	{
		displayname							= "200Rnd 9.5x40mm Box Magazine";
		count								= 200;
		picture 							= "";
		descriptionshort					= "200 Round Box Magazine<br>9.5x40mm";
		mass								= 70;
	};
	class TEI_200Rnd_95x40_Box_Tracer: TEI_200Rnd_95x40_Box
	{
		displayname							= "200Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort					= "9.5x40mm Tracer";
		ammo								= "TEI_B_95x40_Tracer";
		picture 							= "";
		descriptionshort					= "200 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 200;
	};
	
	//12.7x40mm (Pistol)
	class TEI_8Rnd_127x40_Mag : 20Rnd_762x51_Mag
	{
		model							= "\TEI_Weapons\pistol\m6_Magazine.p3d";
		displayname						= "8Rnd 12.7x40mm Magazine";
		displaynameshort				= "12.7x40mm";
		ammo							= "TEI_B_127x40_Ball";
		count							= 8;
		initspeed						= 400;
		picture 						= "\TEI_weapons\pistol\icons\magazine.paa";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass							= 8;
		tracersEvery 					= 0;
		lastRoundsTracer 				= 2;
	};
	class TEI_8Rnd_127x40_AP_Mag : TEI_8Rnd_127x40_Mag
	{
		displayname						= "8Rnd 12.7x40mm AP Magazine";
		displaynameshort				= "12.7x40mm AP";
		ammo							= "TEI_B_127x40_AP";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Armor Piercing";
		tracersEvery 					= 0;
		lastRoundsTracer 				= 0;
	};
	class TEI_8Rnd_127x40_Mag_Tracer : TEI_8Rnd_127x40_Mag
	{
		displayname						= "8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort				= "12.7x40mm Tracer";
		picture 						= "\TEI_weapons\pistol\icons\magazine.paa";
		ammo							= "TEI_B_127x40_Tracer";
		descriptionshort				= "8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery 					= 1;
		lastRoundsTracer 				= 8;
	};
	
	//8 Gauge (Shotgun)
	class TEI_6Rnd_8Gauge_Pellets : 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\Shotgun\Shell_mag_S.p3d";
		scope 								= 2;
		displayname							= "6Rnd 8 Gauge Pellets";
		displaynameshort					= "8 Gauge Pellets";
		ammo								= "TEI_8Gauge_Pellets";
		count								= 6;
		initspeed							= 396;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort					= "6 Rounds of 8 Gauge Pellets";
		mass								= 8;
	};
	class TEI_6Rnd_8Gauge_Slugs : TEI_6Rnd_8Gauge_Pellets
	{
		model								= "\TEI_Weapons\Shotgun\Shell_mag_P.p3d";
		displayname							= "6Rnd 8 Gauge Slugs";
		displaynameshort					= "8 Gauge Slugs";
		ammo								= "TEI_8Gauge_Slugs";
		initspeed							= 468;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		descriptionshort					= "6 Rounds of 8 Gauge Slugs";
		mass								= 9;
	};
	
	//5x23mm (SMG)
	class TEI_60Rnd_5x23mm_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		model								= "\TEI_Weapons\smg\m7_Magazine.p3d";
		displayname							= "60Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		ammo								= "TEI_B_5x23_Caseless";
		count								= 60;
		initspeed							= 500;
		picture 							= "\TEI_weapons\smg\icons\magazine.paa";
		descriptionshort					= "60 Round Magazine<br>5x23mm";
		mass								= 8;
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
		displayname							= "48Rnd 5x23mm Magazine";
		count								= 48;
		descriptionshort					= "48 Round Magazine<br>5x23mm";
		mass								= 6;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_48Rnd_5x23mm_JHP_Mag: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm (JHP) Magazine";
		displaynameshort					= "5x23mm JHP";
		ammo								= "TEI_B_5x23_Caseless_JHP";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class TEI_48Rnd_5x23mm_FMJ_Mag: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort					= "5x23mm FMJ";
		initspeed							= 600;
		ammo								= "TEI_B_5x23_Caseless_FMJ";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
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
	
	//14.5x114mm (Sniper)
	class TEI_4Rnd_145x114_APFSDS_Mag: 20Rnd_762x51_Mag
	{
		model								= "\TEI_Weapons\AR\AR_Magazine.p3d";
		displayname							= "4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort					= "14.5x114mm APFSDS";
		ammo								= "TEI_B_145x114_APFSDS";
		count								= 4;
		initspeed							= 1250;
		picture 							= "\TEI_weapons\ar\icons\magazine.paa";
		descriptionshort					= "4 Round Magazine<br>14.5x114mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass								= 20;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 4;
	};
	class TEI_4Rnd_145x114_HVAP_Mag: TEI_4Rnd_145x114_APFSDS_Mag
	{
		displayname							= "4Rnd 14.5x114mm HVAP Magazine";
		displaynameshort					= "14.5x114mm HVAP";
		ammo								= "TEI_B_145x114_HVAP";
		initspeed							= 1500;
		descriptionshort					= "4 Round Magazine<br>14.5x114mm<br>High Velocity Armor Piercing";
		mass								= 24;
	};
	
	//Vehicles
	class TEI_20Rnd_ALIM_Gauss_Slugs: 30Rnd_120mm_APFSDS_shells
	{
		scope 								= 2;
		displayName							= "20Rnd ALIM Gauss Slugs";
		displayNameShort					= "25x130mm Slug";
		ammo								= "TEI_25x130mm_Slug";
		initSpeed 							= 13680;
		count								= 20;
	};
	class TEI_3Rnd_102mm_rockets: 5Rnd_GAT_missiles
	{
		scope 								= 2;
		displayName 						= "3Rnd 102mm Guided HEAT Rockets";
		displayNameShort 					= "102mm Guided HEAT";
		count 								= 3;
		ammo 								= "M_Titan_AT";
		initSpeed 							= 40;
		maxLeadSpeed 						= 40;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound 							= "missiles";
	};
	class TEI_6Rnd_65mm_rockets: 4Rnd_GAA_missiles
	{
		scope 								= 2;
		displayName 						= "6Rnd 65mm Guided AA Rockets";
		displayNameShort 					= "65mm Guided AA";
		count 								= 6;
		ammo 								= "M_Zephyr";
		initSpeed 							= 40;
		maxLeadSpeed 						= 320;
		sound[] 							= {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect 					= "DefaultRifle";
		soundFly[] 							= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] 							= {"",1.25893,1,1};
		reloadSound[] 						= {"",0.000316228,1,20};
		nameSound		 					= "missiles";
	};
	
	
	//Rockets
	class TEI_M41_Twin_HEAT: RPG32_HE_F
	{
		displayname						= "M19 HEAT Twin Rockets";
		displaynameshort				= "HEAT";
		descriptionshort				= "Type: Unguided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		ammo							= "TEI_M41_Rocket_HEAT";
		picture 						= "\TEI_weapons\rockets\icons\rocket.paa";
		model							= "\TEI_Weapons\Rockets\M41_case.p3d";	
		modelSpecial					= "\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count							= 2;
		scope							= 2;
		mass 							= 80;
		initSpeed 						= 255;
	};
	class TEI_M41_Twin_HEAT_G: Titan_AT
	{
		ammo							= "TEI_M41_Rocket_HEAT_Guided";
		displayname						= "M19 HEAT Guided Twin Rockets";
		displaynameshort				= "HEAT (Guided)";
		picture 						= "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort				= "Type: Guided surface-to-surface HEAT (High Explosive Anti Tank)<br/>Used in: M41 SSR MAV/AW";
		model							= "\TEI_Weapons\Rockets\M41_case.p3d";	
		modelSpecial					= "\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		count							= 2;
		scope 							= 2;
		mass 							= 85;
		initSpeed 						= 255;
	};
	class TEI_M41_Twin_HEAP: RPG32_HE_F
	{
		ammo							= "TEI_M41_Rocket_HEAP";
		model							= "\TEI_Weapons\Rockets\M41_case.p3d";	
		descriptionshort				= "Type: Surface-to-surface HEAP (High Explosive Anti Personnel)<br/>Used in: M41 SSR MAV/AW";
		displayname						= "M19 HEAP Twin Rockets";
		picture 						= "\TEI_weapons\rockets\icons\rocket.paa";
		displaynameshort				= "HEAP";
		modelSpecial					= "\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		scope							= 2;
		mass 							= 80;
		count 							= 2;
		initSpeed						= 255;
	};
	class TEI_M41_Twin_HEAA: Titan_AA
	{
		scope 							= 2;
		count							= 2;
		displayname						= "M19 HEAA Twin Rockets";
		displaynameshort				= "HEAA Twin";
		picture 						= "\TEI_weapons\rockets\icons\rocket.paa";
		descriptionshort				= "Type: Guided surface-to-air HEAA (High Explosive Anti Air)<br/>Used in: M41 SSR MAV/AW";
		ammo							= "TEI_M41_Rocket_HEAA";
		model							= "\TEI_Weapons\Rockets\M41_Case";	
		modelSpecial					= "\TEI_Weapons\Rockets\M41_launcher_loaded.p3d";
		mass 							= 80;
	};
	
	//Grenades
	class TEI_M9_Frag: HandGrenade
	{
		ammo = "TEI_G_M9_Frag";
		mass = 10;
		value = 1;
		displayName = "M9 HE-DP Grenade";
		descriptionShort = "Type: Defensive Grenade<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "M9 Frag";
		model = "\TEI_Weapons\explosives\m9_grenade.p3d";
		picture = "\TEI_Weapons\explosives\icons\m9.paa";
		type = 256;
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
	};
	class TEI_M2_Smoke: SmokeShell
	{
		displayName = "M2 Smoke Grenade (White)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade.p3d";
		value = 2;
		ammo = "TEI_G_M2_Smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "White Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Blue: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Blue)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_blue.p3d";
		ammo = "TEI_G_M2_BSmoke";
		descriptionShort = "Type: Smoke Grenade - Blue<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Blue Smoke";
	};
	class TEI_M2_Smoke_Yellow: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Yellow)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_yellow.p3d";
		ammo = "TEI_G_M2_YSmoke";
		descriptionShort = "Type: Smoke Grenade - Yellow<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Yellow Smoke";
	};
	class TEI_M2_Smoke_Red: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Red)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_red.p3d";
		ammo = "TEI_G_M2_RSmoke";
		descriptionShort = "Type: Smoke Grenade - Red<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Red Smoke";
	};
	class TEI_M2_Smoke_Green: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Green)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_green.p3d";
		ammo = "TEI_G_M2_GSmoke";
		descriptionShort = "Type: Smoke Grenade - Green<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Green Smoke";
	};
	class TEI_M2_Smoke_Orange: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Orange)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_orange.p3d";
		ammo = "TEI_G_M2_OSmoke";
		descriptionShort = "Type: Smoke Grenade - Orange<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Orange Smoke";
	};
	class TEI_M2_Smoke_Purple: TEI_M2_Smoke
	{
		displayName = "M2 Smoke Grenade (Purple)";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_purple.p3d";
		ammo = "TEI_G_M2_PSmoke";
		descriptionShort = "Type: Smoke Grenade - Purple<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Purple Smoke";
	};
};