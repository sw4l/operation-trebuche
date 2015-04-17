class CfgPatches
{
	class OPTRE_Vehicles_Pelican
	{
		units[] = {"OPTRE_Pelican_unarmed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
	};
};

class CfgVehicles
{
	/*class Helicopter;
	class Plane;
	
	class Plane_Base_F: Plane
	{
			class Turrets
			{
				class mainturret;
				class newTurret;
				class CopilotTurret;
				class CargoTurret;
			};
			class HitPoints
			{
				class HitHull;
				class HitFuel;
				class HitAvionics;
				class HitEngine;
				class HitHRotor;
				class HitVRotor;
			};
			class AnimationSources;
			class Eventhandlers;
			class Viewoptics;
			class ViewPilot;
			class RotorLibHelicopterProperties;
			class Reflectors
			{
				class Right;
			};
	};
	class Helicopter_Base_F: Helicopter
	{
		class CargoTurret;
		class Turrets
		{
			class mainturret;
		};
		class HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class Reflectors
		{
			class Right;
		};
	};*/
	
	/*class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};*/
	
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class ViewOptics;
		class RotorLibHelicopterProperties;
	};

	class OPTRE_Pelican_F: Helicopter_Base_H
	{		
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_W_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		scope 	= 0;
		author="Article 2 Studios";
        armor = 120;//60					        /// just some protection against missiles, collisions and explosions
		destrType = DestructWreck;
		gearRetracting=1;	
		accuracy = 0.5;							/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		displayName = "Pelican_base"; 					/// how is the heli displayed in editor
		model = "OPTRE_Vehicles\Pelican\Pelican_base.p3d"; 		/// path to model of the heli
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa";			/// icon in map/editor
		mapSize = 25; //size of icon in editor- square only in meters
		picture = "OPTRE_Vehicles\Pelican\Data\icon2.paa";		/// small picture in command menu
		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};
		//nameSound = "veh_air_gunship_s";
		nameSound = "veh_air_plane_s";
		damageResistance = 0.00555;
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.03845;
		insideSoundCoef = 0.0116228;
		noseDownCoef = 0; //?
		
	///AI HANDLING
	
		landingSpeed = 20;        /// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 150;     /// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		
	///HANDLING
		altFullForce = 50000;					 	/// in what height do the engines still have full thrust
		altNoForce = 12000;					 	/// thrust of the engines interpolates to zero between altFullForce and altNoForce
		maxSpeed = 500;//400						 	/// what is the maximum speed of the vehicle
		maxFordingDepth = 0.75;	//0.55	   			 	/// how deep could the vehicle be in water without getting some damage
		mainBladeRadius = 0.1;						/// describes the radius of main rotor - used for collision detection
		liftForceCoef = 2; //20				///multiplier of lift force	
		bodyFrictionCoef = 0.6777;				///multiplier of body friction
		cyclicAsideForceCoef = 3;	   			///multiplier of bank force
        cyclicForwardForceCoef = 1.2;  				///multiplier of dive force
		//simulation = helicopterX;
		//frontRotorForceCoef = 10000;  //30       				///front rotor(strenth of lift)
		backRotorForceCoef = 1.377;   //30       				///tailrotor(strength of horzontal movement=)
        ///HANDLING END

        ///ACTIONS AND CARGO
		driverAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		driverInAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		precisegetinout = 1;					/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		GetInAction = pilot_Heli_Light_02_Enter;		/// what action uses the pilot to get in the heli, it uses "switchAction" script command on the proxy
		GetOutAction = pilot_Heli_Light_02_Exit;		/// what action uses the pilot to get out of heli
		cargoGetInAction[] = {"GetInHelicopterCargo"};		/// actions for the cargo, the last one in array is used for the rest
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};	/// that means every cargo position could use different action to get in
		transportSoldier = 10;					/// how many cargo positions are available
		cargoCanEject = 1;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 1;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		cargoAction[] = 					/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
						{
							"passenger_apc_narrow_generic01",
							"passenger_apc_generic04",
							"passenger_apc_narrow_generic02",
							"passenger_generic01_leanright",
							"passenger_apc_narrow_generic02",
							"passenger_apc_narrow_generic03",
							"passenger_generic01_leanleft",
							"passenger_generic01_foldhands",
							"passenger_apc_generic04",
							"passenger_generic01_foldhands",
							"passenger_apc_generic02"
						};
		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir = "pos cargo dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 1;	//1
		ejectDeadGunner = "false";	
		cargoProxyIndexes[] = {3,4,5,6,7,8,9,10,11,12};		/// what indexes does regular cargo sit on

		
///hit points
		class HitPoints:HitPoints
		{
			class HitHull:HitHull
			{
				armor=0.1;
				visual="Hull";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel:HitFuel
			{
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics:HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.05;
				explosionShielding = 1.5;
			};
			class HitHRotor:HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
			};
			class HitVRotor:HitVRotor
			{
				armor = 1.3;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
			};
		};
/// hit points end
///transport items		
		class TransportBackpacks	/// adds various backpacks to cargo hold of the heli
		{};
		class TransportItems		/// adds various items to cargo hold of the heli
		{};		
		maximumLoad = 5000;			/// capacity of cargo inventory for backpacks and various other item
///transport items	 end  
		class Exhausts								/// describes the particle effects fro exhausts
		{
			class Exhaust1							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust1";				/// on what position should the particle effect start
				direction = "exhaust1_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust3							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust3";				/// on what position should the particle effect start
				direction = "exhaust3_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust4
			{
				position = "exhaust4";
				direction = "exhaust4_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust5							
			{
				position = "exhaust5";				
				direction = "exhaust5_dir";			
				effect = "ExhaustsEffectHeliMed";	
			};
			class Exhaust6
			{
				position = "exhaust6";
				direction = "exhaust6_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust7					
			{
				position = "exhaust7";				
				direction = "exhaust7_dir";			
				effect = "ExhaustsEffectHeliMed";	
			};
			class Exhaust8
			{
				position = "exhaust8";
				direction = "exhaust8_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;	/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot

		weapons[] = {CMFlareLauncher};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine}; /// array of corresponding magazines
		
		class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
		{
			initFov = 0.75; 		/// this is the standard field of view angle for soldier, bit more narrow than a real-life one
			minFov = 0.375; 		/// this is how much can people "zoom" their view via focusing on something
			maxFov = 1.1;			/// this is how wide can the field of view be
		};

		class Viewoptics: Viewoptics 	/// pilot doesn't use optics in this vehicle
		{
			initAngleX = 0; 			/// initial horizontal angle of the optics view relative to proxy position of pilot
			minAngleX = 0; 				/// maximum turn to the left relative to proxy position of pilot
			maxAngleX = 0;				/// maximum turn to the right relative to proxy position of pilot
			initAngleY = 0; 			/// initial vertical angle of the optics view relative to proxy position of pilot
			minAngleY = 0; 				/// maximum elevation down relative to proxy position of pilot
			maxAngleY = 0;				/// maximum elevation up relative to proxy position of pilot
			initFov = 0.1; 				/// the same functionality as in ViewPilot
			minFov = 0.1;  				/// the same functionality as in ViewPilot
			maxFov = 1.2; 				/// the same functionality as in ViewPilot
		};
		class pilotCamera				/// camera for pilot to observe sling loading
        {
            class OpticsIn				/// what is seen if player switches to optics
            {		
                class Wide
                {
                    opticsDisplayName 	= "W";	/// used in case the UI has place to display optics mode
                    initAngleX			= 0;	/// X-axis rotation and its limits
					minAngleX			= -0; 	/// X-axis rotation and its limits
					maxAngleX			= +0;	/// X-axis rotation and its limits
                    initAngleY			= 0; 	/// Y-axis rotation and its limits
					minAngleY			= -0;  	/// Y-axis rotation and its limits
					maxAngleY			= +0; 	/// Y-axis rotation and its limits
                    initFov				= 0.5;	/// Field of view size settings
					minFov				= 0.5;	/// Field of view size settings
					maxFov				= 0.5;	/// Field of view size settings
                    visionMode[] 		= {"Normal","NVG","Ti"};	/// what vision modes are available
                    thermalMode[] 		= {0,1};			/// not necessary as there is no TI mode defined, but just in case
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; /// some optics model
				};
				showMiniMapInOptics				= false;	/// allows showing GPS mini map in optics
				showUAVViewpInOptics			= false;	/// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics 	= true;		/// allows displaying of Sling Loading Assistant
            };
            minTurn                 = 0; 		//turn
            maxTurn                 = 0; 		//turn
            initTurn                = 0; 		//turn
            minElev                 = 80; 		//turn
            maxElev                 = 80; 		//turn
            initElev                = 80; 		//turn
            maxXRotSpeed            = 0.5; 		// movement speed
            maxYRotSpeed            = 0.5; 		// movement speed
            pilotOpticsShowCursor   = 1; 		//to show aimCursor (is useful to see plane direction)
            controllable            = false; 	// set false to have static camera, true to have moving like a turret
        };	
        memoryPointDriverOptics = "slingCamera";	/// what memory point is the origin of the camera
		slingLoadMaxCargoMass 	= 500000;				/// maximum weight of cargo for this chopper
		slingLoadMemoryPoint 	= "slingLoad0";		/// memory point for sling load to attach ropes to
		
		class Turrets: Turrets										/// just a copilot seat as a turret to enable taking the controls
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject = 1;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -90;
				maxElev = 38.2;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.25;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "S_start";
				gunEnd = "S_end";
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_l";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_l_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left door)";	/// name of the position in the Action menu
				proxyIndex 					= 1;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 10;					/// what is the left-most possible turn of the turret
				minTurn 					= -50;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret_01						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_r";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_r_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right door)";	/// name of the position in the Action menu
				proxyIndex 					= 2;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 50;					/// what is the left-most possible turn of the turret
				minTurn 					= -10;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
		};
		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",			/// material mapped in model
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",	/// changes to this one once damage of the part reaches 1

				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		
        #include "sounds.hpp" /// sounds are included in separate file
		
		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class cargoDoors				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class wingControl				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
			class gunVert
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class gunHorz
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 0.00001;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";			/// returns bullets left in magazine of said weapon
				weapon = "gatling_30mm";	/// this is the said weapon
			};
			class Gatling_flash
			{
				source = "ammorandom";			/// this source returns some random value changine each time ammo is spent from this weapon - used for muzzle flashes
				weapon = "gatling_30mm";	/// this is the said weapon
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Proxy
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};					
		};	
		class UserActions
		{
			class RampOpen
			{
			userActionID = 60;	
            displayName = "Open Ramp";
            displayNameDefault = "Open Ramp";
			textToolTip = "Open Ramp";
            position = cargo_door_handle;
            radius = 6;
			priority = 2;
            onlyForPlayer = 1;
			condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))"; /// only openable from inside and when closed
            statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
			animPeriod = 10;
            };
            class RampClose: RampOpen
            {
			userActionID = 61;
            displayName = "Close Ramp";
            displayNameDefault = "Close Ramp";
			textToolTip = "Close Ramp";
			priority = 2;
			condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))"; /// only openable from inside and when closed
            statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
			animPeriod = 10;
            };
			class LightOn
			{
			userActionID = 62;	
            displayName = "Light On";
            displayNameDefault = "Light On";
			textToolTip = "Light On";
            radius = 5;
			priority = 3;
            onlyForPlayer = 1;
			condition = "(!(this getvariable [""OPTRE_Pelican_isLightOn"",false]) AND (player == driver this) AND (alive this))";
            statement = "_light = ""#lightpoint"" createVehicle getpos this; _light setLightBrightness 1; _light setLightAmbient [1, 0, 0]; _light setLightColor [1, 0, 0]; _light lightAttachObject [this, [0,0,0]]; this setVariable [""OPTRE_Pelican_AttachedLight"",_light,true]; this setvariable [""OPTRE_Pelican_isLightOn"",true,true];";
            };
			class LightOff: LightOn
			{
			userActionID = 63;	
            displayName = "Light Off";
            displayNameDefault = "Light Off";
			textToolTip = "Light Off";
			condition = "((this getvariable [""OPTRE_Pelican_isLightOn"",false]) AND (player == driver this) AND (alive this))";
            statement = "_light = this getVariable [""OPTRE_Pelican_AttachedLight"",_light,true]; deletevehicle _light; this setvariable [""OPTRE_Pelican_isLightOn"",false,true];";
            };
		};
		hiddenSelections[] = {"attach_gun" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] = {"camo1"};
		class Reflectors: Reflectors			/// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 50;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 15;				/// angle from light direction vector where the light is at full strength
				outerAngle = 65;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles

				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off

				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 10;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 250;			/// maximum distance where the flare is drawn

				dayLight = false;				/// boolean switch if the light is used during day or not

				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source

					hardLimitStart = 100;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 200;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};			
		};	
		aggregateReflectors[] = {{"Left", "Right"}};	/// aggregates both sources into one to increase performance
		#include "rtd.hpp" /// Advanced FM characteristics in separate file to make the config cleaner
	};
	
	
	/*class OPTRE_Pelican_VTOL_base: Plane_Base_F
	{
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_W_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		scope 	= 0;
        armor = 300;						        /// just some protection against missiles, collisions and explosions
		destrType = DestructWreck;
		gearRetracting=1;	
		accuracy = 0.5;							/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		displayName = "Pelican VTOL base"; 					/// how is the heli displayed in editor
		model = "OPTRE_Vehicles\Pelican\pelican_base.p3d"; 		/// path to model of the heli
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa";			/// icon in map/editor
		mapSize = 25; //size of icon in editor- square only in meters
		picture = "OPTRE_Vehicles\Pelican\Data\icon2.paa";		/// small picture in command menu
		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};
		//nameSound = "veh_air_gunship_s";
		nameSound = "veh_air_plane_s";
		damageResistance = 0.00555;
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.03845;
		insideSoundCoef = 0.0116228;
		
	///AI HANDLING
	
		landingSpeed = 30;        /// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 250;     /// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		
	///HANDLING
		vtol = 10;
		
		class VTOLSettings
		{
			WeightRmpty = 5934;
			WeightMaxVTOL = 10408;
			WeightMaxFuel = 3540;
			Thrust = 10793;
			VTOLSpeed = 180;
		};
		
        simulation = airplaneX;
		
		rudderInfluence=0.25;
		//rudderInfluence = ;
		
		irScanRangeMin=500;
		irScanRangeMax=5000;
		irScanToEyeFactor=2;
		
		aileronSensitivity=0.20000001;
		//aileronSensitivity = 10;
		
		elevatorSensitivity=0.27000001;
		//elevatorSensitivity = 5;
		
		flapsFrictionCoef=0.31999999;
		//flapsFrictionCoef = 5;
	
	
		
		noseDownCoef = 0; 							//? same as cyclicForwardForceCoef ?
		altFullForce = 50000;					 	/// in what height do the engines still have full thrust
		altNoForce = 12000;					 	/// thrust of the engines interpolates to zero between altFullForce and altNoForce
		maxSpeed = 400;						 	/// what is the maximum speed of the vehicle
		maxFordingDepth = 0.75;	//0.55	   			 	/// how deep could the vehicle be in water without getting some damage
		mainBladeRadius = 0.1;						/// describes the radius of main rotor - used for collision detection
		liftForceCoef = 2; //20				///multiplier of lift force	
		bodyFrictionCoef = 0.6777;				///multiplier of body friction
		cyclicAsideForceCoef = 3;	   			///multiplier of bank force
        cyclicForwardForceCoef = 1.2;  				///multiplier of dive force
		frontRotorForceCoef = 10000;  //30       				///front rotor(strenth of lift)
		backRotorForceCoef = 1.377;   //30       				///tailrotor(strength of horzontal movement=)
		    
	  ///HANDLING END

        ///ACTIONS AND CARGO
		driverAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		driverInAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		precisegetinout = 1;					/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		GetInAction = pilot_Heli_Light_02_Enter;		/// what action uses the pilot to get in the heli, it uses "switchAction" script command on the proxy
		GetOutAction = pilot_Heli_Light_02_Exit;		/// what action uses the pilot to get out of heli
		cargoGetInAction[] = {"GetInHelicopterCargo"};		/// actions for the cargo, the last one in array is used for the rest
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};	/// that means every cargo position could use different action to get in
		transportSoldier = 10;					/// how many cargo positions are available
		cargoCanEject = 1;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 1;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		cargoAction[] = 					/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
						{
							"passenger_apc_narrow_generic01",
							"passenger_apc_generic04",
							"passenger_apc_narrow_generic02",
							"passenger_generic01_leanright",
							"passenger_apc_narrow_generic02",
							"passenger_apc_narrow_generic03",
							"passenger_generic01_leanleft",
							"passenger_generic01_foldhands",
							"passenger_apc_generic04",
							"passenger_generic01_foldhands",
							"passenger_apc_generic02"
						};
		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir = "pos cargo dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 0;	//1
		ejectDeadGunner = "false";	
		cargoProxyIndexes[] = {3,4,5,6,7,8,9,10,11,12};		/// what indexes does regular cargo sit on

		
///hit points
		class HitPoints:Hitpoints
		{
			class HitHull:HitHull
			{
				armor=1;
				visual="Hull";
				depends="Total";
				passThrough=1;
				radius=0.01;
			};
			class HitFuel:HitFuel
			{
				armor=1;
                 		name="fueltank";
				radius=0.25;
				minimalHit=0.05;
			};
			class HitAvionics:HitAvionics
			{
				armor=0.1;
				radius=1;
				minimalHit=0.05;
				passThrough=0;
				name="elektronika";
			};
			class HitEngine:HitEngine
			{
				armor=1.4;
				radius=0.4;
				minimalHit=0.05;
				explosionShielding=3;
			};
			class HitEngine1:HitEngine
			{
				armor=0.75;
				name="motor";
				material=-1;
				visual="";
				passThrough=0.75;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.45;
			};
			class HitEngine2:HitEngine
			{
				armor=0.75;
				name="motor";
				material=-1;
				visual="";
				passThrough=0.75;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.45;
			};
			class HitHRotor:HitHRotor
			{
				armor=4;
                  		name="mrotor";
				radius=0.4;
				minimalHit=0.09;
				explosionShielding=2.5;
			};
			class HitVRotor:HitVRotor
			{
				armor=3;
                 		name="trotor";
				radius=0.06;
				minimalHit=0.05;
				explosionShielding=6;
			};
		};
/// hit points end
///transport items		
		class TransportBackpacks	/// adds various backpacks to cargo hold of the heli
		{};
		class TransportItems		/// adds various items to cargo hold of the heli
		{};		
		maximumLoad = 2000;			/// capacity of cargo inventory for backpacks and various other item
///transport items	 end  
		class Exhausts								/// describes the particle effects fro exhausts
		{
			class Exhaust1							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust1";				/// on what position should the particle effect start
				direction = "exhaust1_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust3							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust3";				/// on what position should the particle effect start
				direction = "exhaust3_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust4
			{
				position = "exhaust4";
				direction = "exhaust4_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust5							
			{
				position = "exhaust5";				
				direction = "exhaust5_dir";			
				effect = "ExhaustsEffectHeliMed";	
			};
			class Exhaust6
			{
				position = "exhaust6";
				direction = "exhaust6_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust7					
			{
				position = "exhaust7";				
				direction = "exhaust7_dir";			
				effect = "ExhaustsEffectHeliMed";	
			};
			class Exhaust8
			{
				position = "exhaust8";
				direction = "exhaust8_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;	/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot

		weapons[] = {CMFlareLauncher};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine}; /// array of corresponding magazines
		
		class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
		{
			initFov = 0.75; 		/// this is the standard field of view angle for soldier, bit more narrow than a real-life one
			minFov = 0.375; 		/// this is how much can people "zoom" their view via focusing on something
			maxFov = 1.1;			/// this is how wide can the field of view be
		};

		class Viewoptics: Viewoptics 	/// pilot doesn't use optics in this vehicle
		{
			initAngleX = 0; 			/// initial horizontal angle of the optics view relative to proxy position of pilot
			minAngleX = 0; 				/// maximum turn to the left relative to proxy position of pilot
			maxAngleX = 0;				/// maximum turn to the right relative to proxy position of pilot
			initAngleY = 0; 			/// initial vertical angle of the optics view relative to proxy position of pilot
			minAngleY = 0; 				/// maximum elevation down relative to proxy position of pilot
			maxAngleY = 0;				/// maximum elevation up relative to proxy position of pilot
			initFov = 0.1; 				/// the same functionality as in ViewPilot
			minFov = 0.1;  				/// the same functionality as in ViewPilot
			maxFov = 1.2; 				/// the same functionality as in ViewPilot
		};
		class pilotCamera				/// camera for pilot to observe sling loading
        {
            class OpticsIn				/// what is seen if player switches to optics
            {		
                class Wide
                {
                    opticsDisplayName 	= "W";	/// used in case the UI has place to display optics mode
                    initAngleX			= 0;	/// X-axis rotation and its limits
					minAngleX			= -0; 	/// X-axis rotation and its limits
					maxAngleX			= +0;	/// X-axis rotation and its limits
                    initAngleY			= 0; 	/// Y-axis rotation and its limits
					minAngleY			= -0;  	/// Y-axis rotation and its limits
					maxAngleY			= +0; 	/// Y-axis rotation and its limits
                    initFov				= 0.5;	/// Field of view size settings
					minFov				= 0.5;	/// Field of view size settings
					maxFov				= 0.5;	/// Field of view size settings
                    visionMode[] 		= {"Normal","NVG","Ti"};	/// what vision modes are available
                    thermalMode[] 		= {0,1};			/// not necessary as there is no TI mode defined, but just in case
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; /// some optics model
				};
				showMiniMapInOptics				= false;	/// allows showing GPS mini map in optics
				showUAVViewpInOptics			= false;	/// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics 	= true;		/// allows displaying of Sling Loading Assistant
            };
            minTurn                 = 0; 		//turn
            maxTurn                 = 0; 		//turn
            initTurn                = 0; 		//turn
            minElev                 = 80; 		//turn
            maxElev                 = 80; 		//turn
            initElev                = 80; 		//turn
            maxXRotSpeed            = 0.5; 		// movement speed
            maxYRotSpeed            = 0.5; 		// movement speed
            pilotOpticsShowCursor   = 1; 		//to show aimCursor (is useful to see plane direction)
            controllable            = false; 	// set false to have static camera, true to have moving like a turret
        };	
        memoryPointDriverOptics = "slingCamera";	/// what memory point is the origin of the camera
		slingLoadMaxCargoMass 	= 500000;				/// maximum weight of cargo for this chopper
		slingLoadMemoryPoint 	= "slingLoad0";		/// memory point for sling load to attach ropes to
		
		class Turrets: Turrets										/// just a copilot seat as a turret to enable taking the controls
		{
			class CopilotTurret: NewTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject = 1;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -90;
				maxElev = 38.2;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.7;
                    minFov = 0.3;
                    maxFov = 1.2;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "S_start";
				gunEnd = "S_end";
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_l";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_l_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left door)";	/// name of the position in the Action menu
				proxyIndex 					= 1;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 10;					/// what is the left-most possible turn of the turret
				minTurn 					= -50;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret_01						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_r";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_r_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right door)";	/// name of the position in the Action menu
				proxyIndex 					= 2;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 50;					/// what is the left-most possible turn of the turret
				minTurn 					= -10;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
		};
		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",			/// material mapped in model
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",	/// changes to this one once damage of the part reaches 1

				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		
        #include "sounds.hpp" /// sounds are included in separate file
		
		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class cargoDoors				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class wingControl				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
			class gunVert
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class gunHorz
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 0.00001;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";			/// returns bullets left in magazine of said weapon
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Gatling_flash
			{
				source = "ammorandom";			/// this source returns some random value changine each time ammo is spent from this weapon - used for muzzle flashes
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Proxy
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};					
		};	
		class UserActions
		{
			class RampOpen
			{
			userActionID = 60;	
            displayName = "Open Ramp";
            displayNameDefault = "Open Ramp";
			textToolTip = "Open Ramp";
            position = cargo_door_handle;
            radius = 6;
			priority = 1.5;
            onlyForPlayer = 1;
			condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))"; /// only openable from inside and when closed
            statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
			animPeriod = 10;
            };
            class RampClose: RampOpen
            {
			userActionID = 61;
            displayName = "Close Ramp";
            displayNameDefault = "Close Ramp";
			textToolTip = "Close Ramp";
			priority = 1.5;
			condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))"; /// only openable from inside and when closed
            statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
			animPeriod = 10;
            };
		};
		hiddenSelections[] = //// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1"
		};
		class Reflectors: Reflectors			/// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 50;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 15;				/// angle from light direction vector where the light is at full strength
				outerAngle = 65;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles

				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off

				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 10;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 250;			/// maximum distance where the flare is drawn

				dayLight = false;				/// boolean switch if the light is used during day or not

				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source

					hardLimitStart = 100;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 200;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};			
		};	
		aggregateReflectors[] = {{"Left", "Right"}};	/// aggregates both sources into one to increase performance
		#include "rtd.hpp" /// Advanced FM characteristics in separate file to make the config cleaner
	};*/
	
	class OPTRE_Pelican_unarmed_green: OPTRE_Pelican_F
	{
		displayName = "D77-TC Pelican (Green)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_W_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"};
	};
		class OPTRE_Pelican_unarmed_tan: OPTRE_Pelican_unarmed_green
	{
		displayName = "D77-TC Pelican (Tan)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_D_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		vehicleClass = "OPTRE_UNSC_Air_class";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"};
	};
		class OPTRE_Pelican_unarmed_black: OPTRE_Pelican_unarmed_green
	{
		displayName = "D77-TC Pelican (Black)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_W_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		vehicleClass = "OPTRE_UNSC_Air_class";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};
	};
	class OPTRE_Pelican_unarmed_ins: OPTRE_Pelican_unarmed_green
	{
		displayName = "D77-TC Pelican (Insurrection)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 0;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "OPTRE_Ins";					/// defines the faction inside of the side
		crew = "OPTRE_Ins_ER_Rebel_tan";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		vehicleClass = "OPTRE_Ins_Air_class";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"};
	};
	/*class OPTRE_Pelican_VTOL: OPTRE_Pelican_VTOL_base
	{
		displayName = "D77-TC Pelican (VTOL)";
		scope 	= 0;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Army_W_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"};
	};*/
	class OPTRE_Pelican_unarmed_marine: OPTRE_Pelican_F
	{
		displayName = "D77-TC Pelican (Marine)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Marine_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		
		hiddenSelections[]= {"camo1","clan","clan_text","insignia","attach_gun"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa"};
	};
	class OPTRE_Pelican_armed_green: OPTRE_Pelican_F
	{
		displayName = "G77-TC Pelican (Green)";
			author="Article 2 Studios";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Marine_Pilot";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		weapons[] = {"CMFlareLauncher"};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"}; /// array of corresponding magazines
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		class Turrets: Turrets										/// just a copilot seat as a turret to enable taking the controls
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject = 1;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Gunner";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[] = {"OPTRE_M370","CMFlareLauncher","Laserdesignator_mounted"};	/// array of various vehicle weapons mounted on the heli
				magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"}; /// array of corresponding magazines
				minElev = -80;
				maxElev = 15;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -80;
                    maxAngleX = 80;
                    initAngleX = 0;
                    minAngleY = -80;
                    maxAngleY = 15;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.25;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "S_start";
				gunEnd = "S_end";
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_l";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_l_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left door)";	/// name of the position in the Action menu
				proxyIndex 					= 1;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 10;					/// what is the left-most possible turn of the turret
				minTurn 					= -50;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret_01						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_r";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_r_dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right door)";	/// name of the position in the Action menu
				proxyIndex 					= 2;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 50;					/// what is the left-most possible turn of the turret
				minTurn 					= -10;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargoDoors";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
		};
		hiddenSelections[]= {"camo1","clan","clan_text","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"};
	};
	class OPTRE_Pelican_armed_tan: OPTRE_Pelican_armed_green
	{
			author="Article 2 Studios";
		displayName = "G77-TC Pelican (Tan)";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_tan_CO.paa"};
	};
	class OPTRE_Pelican_armed_black: OPTRE_Pelican_armed_green
	{
			author="Article 2 Studios";
		displayName = "G77-TC Pelican (Black)";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};
	};
	class OPTRE_Pelican_armed_marine: OPTRE_Pelican_armed_green
	{
			author="Article 2 Studios";
		displayName = "G77-TC Pelican (Marine)";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa"};
	};
	class OPTRE_Pelican_armed_ins: OPTRE_Pelican_armed_green
	{
			author="Article 2 Studios";
		displayName = "G77-TC Pelican (Ins)";
		side = 0;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "OPTRE_Ins";					/// defines the faction inside of the side
		crew = "OPTRE_Ins_ER_Rebel_tan";					/// lets use the sample soldier we have as default captain of the boat
		vehicleClass = "OPTRE_Ins_Air_class";
		hiddenSelections[]= {"camo1","clan","clan_text","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"};
	};
};