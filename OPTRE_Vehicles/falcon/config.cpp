#include "basicdefines_A3.hpp"
#include "CfgPatches.hpp"

class WeaponCloudsMGun;

class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};

	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};

	class OPTRE_falcon_base: Helicopter_Base_H
	{
		armor = 30;				/// just some protection against missiles, collisions and explosions
		altFullForce = 4000;	/// in what height do the engines still have full thrust
		altNoForce = 6000;		/// thrust of the engines interpolates to zero between altFullForce and altNoForce
		maxSpeed = 300;			/// what is the maximum speed of the vehicle
		maxFordingDepth = 0.55;	/// how deep could the vehicle be in water without getting some damage
		mainBladeRadius = 6.0;	/// describes the radius of main rotor - used for collision detection
		//multiplier of lift force
		liftForceCoef = 1.1;	
		//multiplier of body friction
		bodyFrictionCoef = 0.7;	
		//multiplier of bank force
		cyclicAsideForceCoef = 1.0;
		//multiplier of dive force
		cyclicForwardForceCoef = 1.0;
		//multiplier of back rotor force
		backRotorForceCoef = 1.0;	
		
		accuracy = 0.5;											/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		displayName = "Falcon Test"; 								/// how is the heli displayed in editor
		model = "\OPTRE_vehicles\falcon\falcon.p3d"; 	/// path to model of the heli
		driveOnComponent[] = {"Wheels"};

		icon = "OPTRE_Vehicles\Falcon\Data\icon.paa";	/// icon in map/editor
		picture = "OPTRE_Vehicles\Falcon\Data\icon2.paa";	/// small picture in command menu

		driverAction = Plane_Fighter_03_pilot;				/// what is the standard pose for the pilot, defined as animation state
		driverInAction = Plane_Fighter_03_pilot;			/// what is the standard pose for the pilot, defined as animation state
		precisegetinout = 1;							/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		GetInAction = pilot_Heli_Light_02_Enter;		/// what action uses the pilot to get in the heli, it uses "switchAction" script command on the proxy
		GetOutAction = pilot_Heli_Light_02_Exit;		/// what action uses the pilot to get out of heli
		cargoGetInAction[] = {"GetInHelicopterCargo"};	/// actions for the cargo, the last one in array is used for the rest
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};/// that means every cargo position could use different action to get in
		transportSoldier = 3;							/// how many cargo positions are available
		cargoAction[] = { 								/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
			passenger_apc_narrow_generic03,
			passenger_apc_generic02,
			passenger_apc_narrow_generic01,
			passenger_apc_generic04,
			passenger_apc_narrow_generic02
		};

		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir = "pos cargo dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 0;						/// this makes the poses easier and adds some performance gain because the proxies don't need to be drawn
		cargoProxyIndexes[] = {2,3,5};		/// what indexes does regular cargo sit on
		
		class TransportBackpacks	/// adds various backpacks to cargo hold of the heli
		{
			bag_xx(B_Parachute,8);	/// this utilizes a macro from basicdefines_A3.hpp to create a class with backpack inside
		};
		class TransportItems		/// adds various items to cargo hold of the heli
		{
			item_xx(FirstAidKit,10);/// this utilizes a macro from basicdefines_A3.hpp to create a class with FAK inside
		};		
		maximumLoad = 2000;			/// capacity of cargo inventory for backpacks and various other items
		cargoCanEject = 1;			/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;			/// pilot shouldn't be able to do so as he doesn't have eject seat

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
		};

		memoryPointLMissile = "Rocket_1";	/// from what memory point should the even missiles start
		memoryPointRMissile = "Rocket_1";	/// from what memory point should the odd missiles start
		memoryPointGun = "machinegun_end";	/// from what memory point should the bullets start
		
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;	/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot

		visionMode[]={"Normal","NVG","Ti"};
		weapons[] = {"gatling_30mm",  "CMFlareLauncher","Laserdesignator_mounted"};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"}; /// array of corresponding magazines
				
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
                    visionMode[] 		= {"Normal","NVG"};	/// what vision modes are available
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
		slingLoadMaxCargoMass 	= 500;				/// maximum weight of cargo for this chopper
		slingLoadMemoryPoint 	= "slingLoad0";		/// memory point for sling load to attach ropes to
		
		class Turrets: Turrets										/// just a copilot seat as a turret to enable taking the controls
		{
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_r";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_r_dir";	/// direction of get in action
				gunnerName 					= "Passenger Gunner R";	/// name of the position in the Action menu
				proxyIndex 					= 4;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 1;					/// what is the left-most possible turn of the turret
				minTurn 					= -50;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret_01						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_2";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment2";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos_cargo_l";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos_cargo_l_dir";	/// direction of get in action
				gunnerName 					= "Passenger Gunner L";	/// name of the position in the Action menu
				proxyIndex 					= 1;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 50;					/// what is the left-most possible turn of the turret
				minTurn 					= -1;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
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
			class cockpit /// class name is later used in model.cfg
			{
				source = "user";	/// door source means it is used by animateDoor script command
				animPeriod = 4;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
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
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1"
		};
		
		class UserActions /// actions available for player to interact with vehicle via action menu running scripts
		{
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
	};

	class OPTRE_falcon_unarmed: OPTRE_falcon_base
	{
		scope = 2;				/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator = 2;		// 2 means available from Zeus, whereas 0 means hidden
		side = 1;					/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";			/// defines the faction inside of the side
		crew = "OPTRE_UNSC_Marine_Pilot";	/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 			/// harder to distinguish side than vehicle type
		displayName = "UH-144 Falcon";
		
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
		};
		availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 2000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
	};
};