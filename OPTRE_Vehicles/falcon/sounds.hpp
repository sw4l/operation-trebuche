		attenuationEffectType = "HeliAttenuation"; // Progressive attenuation of the sound (reference available in Attenuation.hpp, directory SOUNDS_F)

		emptySound[]={"",0,1};

		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",db0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",db0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",db0,1,100};
		soundCrashes[] = {soundGeneralCollision1,0.33, soundGeneralCollision2,0.33, soundGeneralCollision3,0.33};
		soundLandCrashes[] = {emptySound, 0};
		soundBuildingCrash[] = {soundGeneralCollision1,1, soundGeneralCollision2,1, soundGeneralCollision3,1};
		soundArmorCrash[] = {soundGeneralCollision1,1, soundGeneralCollision2,1, soundGeneralCollision3,1};
		soundWoodCrash[] = {soundGeneralCollision1,1, soundGeneralCollision2,1, soundGeneralCollision3,1};

		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",db0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",db0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",db0,1,100};
		soundBushCrash[] = {soundBushCollision1,0.33, soundBushCollision2,0.33, soundBushCollision3,0.33};

		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",db0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",db0,1,100};
		soundWaterCrashes[] = {soundWaterCollision1,0.5,soundWaterCollision2,0.5};

		soundDammage[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1", db20, 1};

		soundGetIn[]={"A3\Sounds_F\vehicles\air\Heli_Light_02\open",db-5,1};
		soundGetOut[]={"A3\Sounds_F\vehicles\air\Heli_Light_02\close",db0,1, 50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_start_v2", db-8, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_start_v2", db-2, 1.0, 600};
		soundEngineOffInt[] =  {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_stop_v2", db-8, 1.0};
		soundEngineOffExt[] =  {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_stop_v2", db-2, 1.0, 600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", db0, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", db0, 1};

		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1", db0, 1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1", db8, 1.0, 300};
		rotorDamage[] = { rotorDamageInt, rotorDamageOut };
			
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", db0, 1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", db0, 1.0, 300};
		tailDamage[] = { tailDamageInt, tailDamageOut };
		
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1", db0, 1.0, 100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2", db0, 1.0, 100};
		landingSoundInt[] = { landingSoundInt0, 0.5, landingSoundInt1, 0.5 };
		
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1", db5, 1.0, 100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2", db5, 1.0, 100};
		landingSoundOut[] = { landingSoundOut0, 0.5, landingSoundOut1, 0.5 };

		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT", db0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", db0, 1.0, 80};
		slingCargoAttach[] = { slingCargoAttach0, slingCargoAttach1 };

		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", db0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", db0, 1.0, 80};
		slingCargoDetach[] = { slingCargoDetach0, slingCargoDetach1 };

		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", db0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", db0, 1.0, 80};
		slingCargoDetachAir[] = { slingCargoDetach0, slingCargoDetach1 };

		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", db0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", db0, 1.0, 80};
		slingCargoRopeBreak[] = { slingCargoDetach0, slingCargoDetach1 };

		class Sounds
		{
			// ----------------------------------------------------------------------------------------------------
			// BASIC EXTERNAL SAMPLES
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_engine_v2", db5, 1.0, 700};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal", db3, 1.0, 1500};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist", db0, 1, 400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {0.7, 1.3, 1.0, 0}; //directional sound cone - a=angle direction of the sound b=angle fade (border of the external fade) x=volume in the inner cone  y=volume on the other hand, the direction of sound
			};

			// ----------------------------------------------------------------------------------------------------
			// BASIC INTERNAL SAMPLES
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2", db0, 1.0};
				frequency = "rotorSpeed";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				//volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal", db-3, 1.0};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};

			// ----------------------------------------------------------------------------------------------------
			// SHARED SAMPLES

			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", db0, 1.0, 150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])" ;
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", db0, 1.0, 150};
				frequency = 0.66 + rotorSpeed / 3;
				//volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (transmissionDamage factor [0.7, 0.65]) * (rotorSpeed factor [0.2, 0.3])" ;
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", db0, 1.0, 150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])" ;
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", db0, 1.0, 150};
				frequency = 0.66 + rotorSpeed / 3;
				//volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (transmissionDamage factor [0.7, 0.65]) * (rotorSpeed factor [0.2, 0.3])" ;
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};

			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", db-10, 1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};

			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", db-13, 1.0, 20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};

			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", db-10, 1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};

			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", db-13, 1.0, 20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};

			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound", db0, 1.0, 100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound", db0, 1.0, 100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", db0, 1.0, 100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", db0, 1.0, 100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};

			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", db0, 1.0, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2" ;
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", db0, 1.0, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2" ;
			};

			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", db0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", db0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", db0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", db0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};

			// ----------------------------------------------------------------------------------------------------
			// SHARED SAMPLES - INTERNAL ONLY
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", db-7, 1.0, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])" ;
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", db-8, 1.0, 50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
/*
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3", db0, 1.0, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,60])" ;
			};
*/
		};

		class SoundsExt // for RTD, will be deleted
		{
			class SoundEvents {};
			class Sounds
			{
				// ----------------------------------------------------------------------------------------------------
				// BASIC EXTERNAL SAMPLES
				
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_engine_v2", db5, 1.0, 700};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal", db3, 1.0, 1500};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = {1.6,3.14, 1.6, 0.95};
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist", db0, 1, 400};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = {0.7, 1.3, 1.0, 0}; //directional sound cone - a=angle direction of the sound b=angle fade (border of the external fade) x=volume in the inner cone  y=volume on the other hand, the direction of sound
				};

				// ----------------------------------------------------------------------------------------------------
				// BASIC INTERNAL SAMPLES

				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2", db0, 1.0};
					frequency = "rotorSpeed";
					volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
					//volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal", db-3, 1.0};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};

				// ----------------------------------------------------------------------------------------------------
				// SHARED SAMPLES

				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", db0, 1.0, 150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])" ;
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", db0, 1.0, 150};
					frequency = 0.66 + rotorSpeed / 3;
					//volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (transmissionDamage factor [0.7, 0.65]) * (rotorSpeed factor [0.2, 0.3])" ;
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", db0, 1.0, 150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])" ;
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", db0, 1.0, 150};
					frequency = 0.66 + rotorSpeed / 3;
					//volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (transmissionDamage factor [0.7, 0.65]) * (rotorSpeed factor [0.2, 0.3])" ;
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};

				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", db-10, 1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};

				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", db-13, 1.0, 20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};

				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", db-10, 1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};

				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", db-13, 1.0, 20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};

				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound", db0, 1.0, 100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound", db0, 1.0, 100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", db0, 1.0, 100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", db0, 1.0, 100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};

				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", db0, 1.0, 100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2" ;
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", db0, 1.0, 100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2" ;
				};

				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", db0, 1.0, 500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", db0, 1.0, 500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", db0, 1.0, 500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", db0, 1.0, 500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};

				// ----------------------------------------------------------------------------------------------------
				// SHARED SAMPLES - INTERNAL ONLY
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", db-7, 1.0, 50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])" ;
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", db-8, 1.0, 50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
/*
				class SpeedStress // (stress and tension on metal parts)
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3", db0, 1.0, 50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,60])" ;
				};
*/
			};
		};