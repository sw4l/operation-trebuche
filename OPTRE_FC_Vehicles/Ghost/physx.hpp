		/// splendid tutorial by RedPhoenix could be found at 
		/// http://forums.bistudio.com/showthread.php?165390-Tutorial-Creating-Custom-Engine-Gearbox-and-Suspension-Vehicle-configuration
		
		terrainCoef									= 0;
		turnCoef 									= 5; //4
		thrustDelay									= 0.15; //0.25
		brakeIdleSpeed								= 2.5; //1.78
		maxSpeed									= 100;
		fuelCapacity								= 1000;
		wheelCircumference							= 3.924; //radius 1.962
		antiRollbarForceCoef						= 100;
		antiRollbarForceLimit 						= 100;
		antiRollbarSpeedMin							= 20;
		antiRollbarSpeedMax							= 80;
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
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/// PhysX parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		// <Description>: Defines simulation type of the vehicle. PhysX simulation ends with letter "x", "carx", "tankx" ...
		// <Type>: string
		// <Default>: (required)
		simulation 								= "carx";

		// <Description>: Defines how much dampers react to random little bumps on surface. It's only visual effect, doesn't influence drive simulation,
		// only taken into account when calculating damper animation.
		// <Type>: float
		// <Default>: 0.0
		dampersBumpCoef								= 10; //6

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Differential parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// <Description>: A number of differential types are supported: 4-wheel drive with open differential, 4-wheel drive with limited slip, front-wheel drive 
		// with open differential, front-wheel drive with limited slip, rear-wheel drive with open differential, rear-wheel drive with limited slip.
		// <Type>: string; acceptable values: "all_open", "all_limited", "front_open", "front_limited", "rear_open", "rear_limited"
		// <Default>: "all_limited"
		differentialType							= "all_open"; //all_limited
		
		// <Description>: Ratio of engine power that goes to front wheels out of total power for 4-wheel drive differentials. 
		// Choosing a value greater than 0.5 delivers more torque to the front wheels, while choosing a value less than 0.5 
		// delivers more torque to the rear wheels. This value is ignored for front-wheel drive and rear-wheel drive differentials.
		// <Type>: float
		// <Default>: 0.5
		frontRearSplit						 		= 0.5;
	
		// <Description>: This is the largest possible relative difference between speed of front wheels. It helps to have outside wheels a bit faster
		// during the turns, but it prevents the faster wheel to take all the power while sliding. The power is shifted to slower wheel once the value is reached.
		// Locked differential has value of 1, the softer is the lock the greater should the value be.
		// This value is ignored except for front-wheel drive or four wheel drive with limited slip.
		// A good starting value is around 1.3.
		// <Type>: 
		// <Default>: 
		frontBias 								= 1.3; //ignored with "all_open"
	
		// <Description>: This is similar to frontBias except that it refers to the rear wheels.
		// This value is ignored except for rear-wheel drive or four wheel drive with limited slip.
		// A good starting value is around 1.3.
		// <Type>: float
		// <Default>: 1.3
		rearBias 								= 1.3; //ignored with "all_open"
	
		// <Description>: This value is similar to the frontBias and rearBias, except that it refers to the sum of the front wheel rotation speeds and the sum 
		// of the rear wheel rotation speeds.
		// This value is ignored except for four wheel drive with limited slip.
		// A good starting value is around 1.3.
		// <Type>: float
		// <Default>: 1.3
		centreBias 								= 1.3; //ignored with "all_open"
	
		// <Description>: How fast is engine power distributed to the wheels. Stronger values mean more aggressive drive performance inclining to
		// slip a little while changing gears while weaker values are better for comfortable seamless ride.
		// <Type>: float
		// <Default>: 10.0
		clutchStrength 								= 10;
	
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Engine parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// <Description>: Power of the engine in kW.
		// <Type>: float
		// <Default>: (required)
		enginePower 								= 276; 


		// <Description>: This is the maximum rotational speed of the engine expressed in radians per second. It could be calculated from maximum 
		// engine RPM like this: 
		// maxOmega = (maxRpm*2*Pi)/60.
		// <Type>: float
		// <Default>: 600 which is cca 6000 rounds per minute.
		maxOmega 								= 471;

		// <Description>: This is the maximum torque that is ever available from the engine. This is expressed in Newton metres. 
		// <Type>: float
		// <Default>: value calculated from enginePower according to http://en.wikipedia.org/wiki/Horsepower#Relationship_with_torque
		peakTorque 								= 1253;
		
		// <Description>: These three values describe internal damping of the engine. Bigger values mean greater damping. Clutch disengaged value 
		// is used while shifting gears, engine interpolates between clutch engaged and full throttle values according to throttle input.
		// We tend to use slightly lower clutch engaged values because it allows cars to turn more smoothly.
		// Typical values in range (0.25,3). The simulation can become unstable with damping rates of 0.
		// <Type>: float, float, float
		// <Default>: 0.08, 2.0, 0.35
		dampingRateFullThrottle 								= 0.08;
		dampingRateZeroThrottleClutchEngaged 					= 2;
		dampingRateZeroThrottleClutchDisengaged 				= 0.35;		

		// <Description>: This is a graph of peak torque versus engine rotational speed.
		// The x-axis of the curve is the relative engine speed; that is, the engine speed divided by the maximum engine speed. The y-axis of the curve is a 
		// multiplier in range (0,1) that is used to scale the peak torque. It is good to keep the values in mind while setting changeGearMinEffectivity.
		// <Type>: Array[i][2] where i = number of samples, maximum 8;
		// <Default>: {{0.0, 0.8}, {0.33, 1.0}, {1.0, 0.8}}
		torqueCurve[]							= {{0,0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1},{0.725,0.95},{0.85,0.6},{1,0.3}};
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Gearbox parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		// <Description>: Value of minimal gear effectivity to hold current gear. If there is better gear and effectivity is below this value then change gear.
		// <Range>: (0,1)
		// <Type>: Array[i] where i = number of gears
		// <Default>: 0.95 for every value (Neutral = 0.15 Not sure how important this is but we want to kick out of neutral very quickly)
		changeGearMinEffectivity[]				= {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		
		// <Description>: The switch time describes how long it takes (in seconds) for a gear change to be completed. This needs to be set to aggresive shifting
		// or it would cause issues while trying to run aggressively (mainly during evading the enemies).
		// <Type>: float
		// <Default>: 0.01
		switchTime								= 0.25; //0.5
		
		// <Description>: Set the latency time of the gearbox, specified in s.
		// This is used to prevent instant shifting after changing gears - there is some power loss during gear change and it could seem that
		// previous gear is better for a brief time after shifting.
		// <Type>: float
		// <Default>: 2.0
		latency 								= 2; //3
	
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Wheels parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		class Wheels
		{
			class LF
			{
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// General parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				
				// <Description>: Name of the bone, used for wheel and suspension animations.
				// <Type>: string
				// <Default>: ""
				boneName 					= "wheel_1_1_damper";

				// <Description>: If true, wheel is steerable, false - wheel is fixed.
				// <Type>: bool
				// <Default>: (required)
				steering 					= 1;
			
				// <Description>: Defines if wheel is on the right or left side of the vehicle
				// <Type>: string
				// <Default>: "right"
				side 						= "left";
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Wheel PX parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
				// <Description>: Center of the wheel (axis)
				// <Type>: memory point
				// <Default>: (required)
				center   					= "wheel_1_1_axis";

				// <Description>: Point on the outside rim of the tire, used to calculate radius of the wheel (distance between center and boundary).
				// <Type>: memory point
				// <Default>: (required)
				boundary 					= "wheel_1_1_bound";

				// <Description>: This is the weight in kg of wheel including both rim and tyre.
				// <Type>: float
				// <Default>: 10.0
				mass 						= 29.521; //30

				// <Description>: This is the wheel's moment of inertia about the rolling axis. Smaller values result in more slips in aggresive driving
				// while larger hamper the gain of speed. Good base to start with is this formula:
				// MOI = 0.5 * Mass * Radius * Radius
				// Some tweaking is needed after the computation, but it is still better than nothing.
				// <Type>: float
				// <Default>: 0.5 * WheelMass * WheelRadius * WheelRadius
				MOI 						= 56.820; //5

				// <Description>:The damping rate describes the rate at which a freely spinning wheel loses rotational speed. 
				// Values in range (0.25, 2) seem like sensible values. Experimentation is always a good idea, even outside this range.
				// <Type>: float
				// <Default>: 0.1
				dampingRate 					= 3; //1
				
				// <Description>: This is the value of the torque applied to the wheel when the brakes are maximally applied. Higher torques will lock the wheel 
				// quicker when braking, while lower torques will take longer to lock the wheel.
				// A value of around 1500 is a good starting point for a vanilla wheel but a google search will reveal typical braking torques. One difficulty is 
				// that these are often expressed by manufacturers as braking horsepower or in "pounds inches". The values required here are in "Newton metres".
				// <Type>: float
				// <Default>: 2500
				maxBrakeTorque			 		= 2000;
				
				// <Description>: This is the same as the max brake torque except for the handbrake rather than the brake. Typically, for a 4-wheeled car, 
				// the handbrake is stronger than the brake and is only applied to the rear wheels. A value of 4000 for the rear wheels is a good starting point, 
				// while a value of 0 is necessary for the front wheels to make sure they do not react to the handbrake.
				// <Type>: float
				// <Default>: 2*maxBrakeTorque
				maxHandBrakeTorque 				= 6000; //0

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Wheel simulation parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
				// <Description>: This is the direction of the suspension in the downward direction in the rest configuration of the vehicle. A vector that 
				// points straight downwards is a good starting point.
				// <Type>: Array[3]
				// <Default>: {0, -1, 0}
				suspTravelDirection[] 					= {0, -1, 0};
				
				// <Description>: This is the application point of the suspension force.
				// <Type>: memory point
				// <Default>: center
				suspForceAppPointOffset 				= "wheel_1_1_axis";

				// <Description>: This is almost the same as the suspension force app point except for the lateral and longitudinal forces that develop on the tire.
				// A good starting point is to duplicate the suspension force application point.
				// <Type>: memory point
				// <Default>: suspForceAppPointOffset
				tireForceAppPointOffset	 				= "wheel_1_1_axis";
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Suspension parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: These values describe the maximum compression and elongation in metres that the spring can support.
				// <Type>: float
				// <Default>: 0.15
				maxCompression 						= 2.0; //5.0
				mMaxDroop 							= 2.0; //5.0
				
				// <Description>: This is the mass in kg that is supported by the suspension spring.
				// <Type>: float
				// <Default>: vehicleMass/numberOfWheels
				sprungMass 							= 750; //825
				
				// <Description>: This is the strength of the suspension spring in Newtons per metre.
				//   springStrength = naturalFrequency * naturalFrequency * sprungMass
				// <Type>: float
				// <Default>: sprungMass*5,0*5,0
				springStrength 							= 18750; //51625

				// <Description>: This describes the rate at which the spring dissipates the energy stored in the spring.
				// Basic equiation for this is
				//  springDamperRate = dampingRatio * 2 * sqrt(springStrength * sprungMass)
				// where dampingRatio = 1 mean critical damping (critically damped pendulum should get back to start point in every swing)
				// <Type>: float
				// <Default>: 0,4*2*sqrt(springStrength*sprungMass)
				springDamperRate 						= 30000; //8920
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Tire parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: Increasing this value will result in the tire attempting to generate more longitudinal force when the tire is slipping.  
				// Typically, increasing longitudinal stiffness will help the car accelerate and brake. The total tire force available is limited by the 
				// load on the tire so be aware that increases in this value might have no effect or even come at the expense of reduced lateral force.
				// <Type>: float 
				// <Default>: 10000
				longitudinalStiffnessPerUnitGravity 			= 5000; //10000

				// <Description>: These values together describe the lateral stiffness per unit lateral slip (in radians) of the tire.
				// <Type>: float, float
				// <Default>: 25, 180
				latStiffX 						= 10; //25
				latStiffY 						= 90; //180

				// <Description>: These six values describe a graph of friction as a function of longitudinal slip. 
				// A good starting point for this is a flat graph of friction vs slip with these values:
				// frictionVsSlipGraph[0][0]=0.0
				// frictionVsSlipGraph[0][1]=1.0
				// frictionVsSlipGraph[1][0]=0.5
				// frictionVsSlipGraph[1][1]=1.0
				// frictionVsSlipGraph[2][0]=1.0
				// frictionVsSlipGraph[2][1]=1.0
				// <Type>: Array[3][2]
				// <Default>: {{0, 1}, {0.5, 1}, {1,1}}
				frictionVsSlipGraph[] 				= {{0, 1}, {0.5, 1}, {1,1}};
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