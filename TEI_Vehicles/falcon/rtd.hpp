		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "Samples_F\Test_Heli_01\RTD_Test_Heli_01.xml";
			defaultCollective 				= 0.545;
			autoHoverCorrection[] 			= {4.8,-3.2,0};	// pitch, roll, no
			retreatBladeStallWarningSpeed 	= 83.333 ; 		// m/s

			maxTorque 			= 2700 ; 				// 90% of both engines torque in XML
			stressDamagePerSec	= 0.0033333332666667; 	// after 300 seconds the damage will be 1
						
			maxHorizontalStabilizerLeftStress	= 10000;
			maxHorizontalStabilizerRightStress	= 10000;
			maxVerticalStabilizerStress			= 10000;
			horizontalWingsAngleCollMin			= 0;
			horizontalWingsAngleCollMax			= 0;
			maxMainRotorStress 					= 130000;
			maxTailRotorStress 					= 10000;
		};