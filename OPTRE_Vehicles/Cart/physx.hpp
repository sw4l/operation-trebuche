		/// splendid tutorial by RedPhoenix could be found at 
		/// http://forums.bistudio.com/showthread.php?165390-Tutorial-Creating-Custom-Engine-Gearbox-and-Suspension-Vehicle-configuration
		
		terrainCoef									= 0.1;
		turnCoef 									= 3;
		thrustDelay									= 0.2;
		brakeIdleSpeed								= 1.78;
		maxSpeed									= 75;
		fuelCapacity								= 150;
		antiRollbarForceCoef						= 0.75;
		antiRollbarForceLimit 						= 0.75;
		antiRollbarSpeedMin							= 25;
		antiRollbarSpeedMax							= 100;
		idleRpm										= 800;
		redRpm										= 4500;
		slowSpeedForwardCoef						= 0.35;
		normalSpeedForwardCoef						= 0.65;
		class complexGearbox
		{
			GearboxRatios[]							= {"R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45};
			TransmissionRatios[]					= {"High",5.539};
			gearBoxMode 							= "auto";
			moveOffGear								= 1;
			driveString								= "D";
			neutralString							= "N";
			reverseString							= "R";
		};
		simulation 								= "carx";
		dampersBumpCoef							= 0.25;
		differentialType						= "all_open";
		frontRearSplit						 	= 0.5;
		frontBias 								= 1.3;
		rearBias 								= 1.3;
		centreBias 								= 1.3;
		clutchStrength 							= 10;
		enginePower 							= 276; 
		maxOmega 								= 471;
		peakTorque 								= 1253;
		dampingRateFullThrottle 				= 0.08;
		dampingRateZeroThrottleClutchEngaged 	= 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;		
		torqueCurve[]							= {{0,0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1},{0.725,0.95},{0.85,0.6},{1,0.3}};
		changeGearMinEffectivity[]				= {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime								= 0.25;
		latency 								= 1;
	
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Wheels parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		class Wheels
		{
			class LF
			{
				boneName 						= "wheel_1_1_damper";
				steering 						= 1;
				side 							= "left";
				center   						= "wheel_1_1_axis";
				boundary 						= "wheel_1_1_bound";
				mass 							= 20;
				MOI 							= 3.3;
				dampingRate 					= 0.5;
				maxBrakeTorque			 		= 2000;
				maxHandBrakeTorque 				= 6000;
				suspTravelDirection[] 			= {0, -1, 0};
				suspForceAppPointOffset 		= "wheel_1_1_axis";
				tireForceAppPointOffset	 		= "wheel_1_1_axis";
				maxCompression 					= 0.25;
				mMaxDroop 						= 0.25;
				sprungMass 						= 350;
				springStrength 					= 22600;
				springDamperRate 				= 8680;
				longitudinalStiffnessPerUnitGravity = 100000; 
				latStiffX 						= 25;
				latStiffY 						= 18000;
				frictionVsSlipGraph[] 			= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class LR : LF
			{
				boneName		 				= "wheel_1_2_damper";
				center   						= "wheel_1_2_axis";
				boundary 						= "wheel_1_2_bound";
				suspForceAppPointOffset 		= "wheel_1_2_axis";
				tireForceAppPointOffset 		= "wheel_1_2_axis";
				side 							= "left";
				steering 						= 0;
			};
			class RF : LF
			{
				boneName 						= "wheel_2_1_damper";
				center   						= "wheel_2_1_axis";
				boundary 						= "wheel_2_1_bound";
				suspForceAppPointOffset 		= "wheel_2_1_axis";
				tireForceAppPointOffset 		= "wheel_2_1_axis";
				side 							= "right";
			};
			class RR : RF
			{
				boneName 						= "wheel_2_2_damper";
				center   						= "wheel_2_2_axis";
				boundary						= "wheel_2_2_bound";
				suspForceAppPointOffset 		= "wheel_2_2_axis";
				tireForceAppPointOffset 		= "wheel_2_2_axis";
				side 							= "right";		
				steering 						= 0;	
			};
		};