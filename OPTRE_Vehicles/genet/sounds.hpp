attenuationEffectType = "CarAttenuation"; //Attenuation in interior (Link to Attenuation.hpp in folder SOUNDS_F)

soundGetIn[]={"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",db-5,1};
soundGetOut[]={"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",db-5,1, 40};
soundDammage[]={"", db-5, 1};
soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start", db-8, 1.0};
soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start", db-7, 1.0, 200};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop", db-8, 1.0};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop", db-7, 1.0, 200};

/* ---- CRASHES START ---- */

buildCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
buildCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
buildCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
buildCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

WoodCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
WoodCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
WoodCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
WoodCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
soundWoodCrash[]={woodCrash0, 0.25, woodCrash1, 0.25, woodCrash2, 0.25, woodCrash3, 0.25};

armorCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
armorCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
armorCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
armorCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

/* ---- CRASHES  END ---- */

class Sounds
{
	
	// warp	factor
	#define	FACTOR(val,from,to)	(val factor[from,to])
	// RANGE(val,	begin, band, end,	band)
	#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
	// FACTOR2(val,	0, 400,	1200,	2000)
	#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))

	// redRpm
	#define	MAX_RPM	6900
	// scaled	rpm	to 0 - 1
	#define	RPM(rpm) (rpm/MAX_RPM)

	// specialized FACTOR for rpm
	#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
	// specialized peak	for	rpm
	#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
	// specialized peak, different definition, version for rpm
	#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))
	

	#define HZ_IDLE FACTOR_RPM(400,1150)
	#define HZ_RPM1 FACTOR_RPM(900,2100)
	#define HZ_RPM2	FACTOR_RPM(1300,3100)
	#define HZ_RPM3 FACTOR_RPM(2200,4100)
	#define HZ_RPM4 FACTOR_RPM(3300,4900)
	#define HZ_RPM5 FACTOR_RPM(4200,6200)
	#define HZ_RPM6 FACTOR_RPM(5100,6900)
	
	#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
	#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
	#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
	#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
	#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
	#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
	#define VOLUME_RPM6 FACTOR_RPM(5100,6100)
	
	/*		hatchback external sounds without gas 	 */

	class Idle_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle", db-13,	1, 150};
		frequency	=	0.9	+	HZ_IDLE*0.2;
		volume = engineOn*camPos*VOLUME_IDLE;
	};
	class Engine
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm",	db-11,1, 200};
		frequency	=	0.8	+	HZ_RPM1*0.2;
		volume = engineOn*camPos*VOLUME_RPM1;
	};
	class Engine1_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm",	db-9,1, 240};
		frequency	=	0.8	+	HZ_RPM2*0.2;
		volume = engineOn*camPos*VOLUME_RPM2;
	};
	class Engine2_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm",	db-8,1, 280};
		frequency	=	0.8	+	HZ_RPM3*0.2;
		volume = engineOn*camPos*VOLUME_RPM3;
	};
	class Engine3_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm",	db-7,1, 320};
		frequency	=	0.8	+	HZ_RPM4*0.2;
		volume = engineOn*camPos*VOLUME_RPM4;
	};
	class Engine4_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm",	db-6,1, 360};
		frequency	=	0.8	+	HZ_RPM5*0.2;
		volume = engineOn*camPos*VOLUME_RPM5;
	};
	class Engine5_ext
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm",	db-5,1, 420};
		frequency	=	0.95	+	HZ_RPM6*0.15;
		volume = engineOn*camPos*VOLUME_RPM6;
	};
	
		/*   hatchback external sounds with gas  */
		
	class IdleThrust
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust", db-6,1, 200};
		frequency	=	0.9	+	HZ_IDLE*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
	};
	class EngineThrust
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust", db-5,1, 250};
		frequency	=	0.8	+	HZ_RPM1*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
	};
	class Engine1_Thrust_ext
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust", db-4,1, 280};
		frequency	=	0.8	+	HZ_RPM2*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
	};
	class Engine2_Thrust_ext
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust", db-3,1, 320};
		frequency	=	0.8	+	HZ_RPM3*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
	};
	class Engine3_Thrust_ext
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust", db-2,1, 360};
		frequency	=	0.8	+	HZ_RPM4*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
	};
	class Engine4_Thrust_ext
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust", db0,1, 400};
		frequency	=	0.8	+	HZ_RPM5*0.3;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
	};
	class Engine5_Thrust_ext
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust", db2,1, 450};
		frequency	=	0.9	+	HZ_RPM6*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
	}; 

	/*  end external sounds with gas */

	/* hatchback internal sounds without gas */

	class Idle_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle", db-15,	1};
		frequency	=	0.9	+	HZ_IDLE*0.2;
		volume = engineOn*(1-camPos)*VOLUME_IDLE;
	};
	class Engine_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm",	db-14,1 };
		frequency	=	0.8	+	HZ_RPM1*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM1;
	};
	class Engine1_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm",	db-12,1 };
		frequency	=	0.8	+	HZ_RPM2*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM2;
	};
	class Engine2_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm",	db-11,1 };
		frequency	=	0.8	+	HZ_RPM3*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM3;
	};
	class Engine3_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm",	db-10,1 };
		frequency	=	0.8	+	HZ_RPM4*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM4;
	};
	class Engine4_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm",	db-9,1 };
		frequency	=	0.8	+	HZ_RPM5*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM5;
	};
	class Engine5_int
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm",	db-6,1 };
		frequency	=	0.95	+	HZ_RPM6*0.15;
		volume = engineOn*(1-camPos)*VOLUME_RPM6;
	};

		/* hatchback internal sounds with gas */
		
	class IdleThrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust", db-10,1 };
		frequency	=	0.9	+	HZ_IDLE*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
	};
	class EngineThrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust", db-9,1 };
		frequency	=	0.8	+	HZ_RPM1*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
	};
	class Engine1_Thrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust", db-8,1 };
		frequency	=	0.8	+	HZ_RPM2*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
	};
	class Engine2_Thrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust", db-7,1 };
		frequency	=	0.8	+	HZ_RPM3*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
	};
	class Engine3_Thrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust", db-6,1 };
		frequency	=	0.8	+	HZ_RPM4*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
	};
	class Engine4_Thrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust", db-5,1 };
		frequency	=	0.8	+	HZ_RPM5*0.3;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
	};
	class Engine5_Thrust_int
	{
	sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust", db-4,1 };
		frequency	=	0.9	+	HZ_RPM6*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
	};
	class Movement
	{
		sound	=	"soundEnviron";
		frequency	=	"1";
		volume = "0";
	};
		/*  end internal sounds with gas */


	/*----------------------------------*/		
	/*-----------  TIRES EXT ---------*/
	/*----------------------------------*/ 
	
	class TiresRockOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*rock*(speed factor[2, 20])";
	};
	class TiresSandOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*sand*(speed factor[2, 20])";
	};
	class TiresGrassOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*grass*(speed factor[2, 20])";
	};
	class TiresMudOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*mud*(speed factor[2, 20])";
	};
	class TiresGravelOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1.0, 60};
		frequency = "1";
		volume = "camPos*asphalt*(speed factor[2, 20])";
	};
	class NoiseOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db-8, 1.0, 90};
		frequency = "1";
		volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
	};
			
	/*----------------------------------*/
	/*-----------  TIRES INT ---------*/
	/*----------------------------------*/

	class TiresRockIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*rock*(speed factor[2, 20])";
	};
	class TiresSandIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
	};
	class TiresGrassIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
	};
	class TiresMudIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
	};
	class TiresGravelIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1.0};
		frequency = "1";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	};
	class NoiseIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1.0};
		frequency = "1";
		volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //Definition of inside sounds
	};

	/*------------------------------------------------------------------*/	
	/*-------------- external sounds for screeching tires on the road -------------*/
	/*------------------------------------------------------------------*/	
		
	/* sounds on the road */

	class breaking_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
		frequency	=	1;
		volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	};
	
	class acceleration_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		frequency	=	1;
		volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	};
	class turn_left_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		frequency	=	1;
		volume = engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	};

	class turn_right_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		frequency	=	1;
		volume = engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	};

	/*-----------------------------------------------------------------*/
	/* external sounds for screeching tires on other surfaces  */
	/*-----------------------------------------------------------------*/
		
	class breaking_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
		frequency	=	1;
		volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	};
	class acceleration_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3,	1, 60};
		frequency	=	1;
		volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1]);
	};
	class turn_left_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		frequency	=	1;
		volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15]);
	};
	class turn_right_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		frequency	=	1;
		volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	};

	
	/*---------------------------------------------------------------------------*/	
	/*-------------- internal sounds for screeching tires on the road --------------*/
	/*---------------------------------------------------------------------------*/	

	class breaking_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	};
	class acceleration_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	};
	class turn_left_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	};
	class turn_right_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	};

	/*--------------------------------------------------------------------------------------------*/	
	/*-------------- internal sounds for screeching tires on other surfaces -------------*/
	/*--------------------------------------------------------------------------------------------*/	
	class breaking_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15]);
	};
	class acceleration_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
		frequency	=	1;
		volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	};
	class turn_left_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		frequency	=	1;
		volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	};
	class turn_right_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		frequency	=	1;
		volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	};
};
