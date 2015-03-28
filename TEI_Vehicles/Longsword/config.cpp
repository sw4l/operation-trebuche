#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Test_plane_F
	{
		units[]				 = {"Test_Plane_01"};
		weapons[]			 = {};
		requiredVersion		 = 0.1;
		requiredAddons[]	 = {"A3_Air_F_Beta"};
	};
};


class CfgVehicles
{
	class Air;
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
	};

	class Test_Plane_01_base_F: Plane_Base_F
	{
		displayName = "Test plane";								/// how is the plane displayed in editor
		model = "\Samples_F\Test_Plane_01\Test_Plane_01.p3d";	/// path to model of the plane
		accuracy = 0.2;											/// how hard it is to distinguish the type of the vehicle (bigger number means harder)

		icon = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa"; 	/// icon in map/editor
		picture = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";	/// small picture in command menu

		driverAction = Plane_Fighter_03_pilot;	/// what is the standard pose for the pilot, defined as animation state

		LockDetectionSystem = CM_Lock_Radar;			/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;	/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		class Turrets {};	/// single seat planes don't have any kind of turret, we need to void it

		class TransportItems{};	/// planes are usually not used to transport items, there could possibly be a few FAKs	

		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";// name of the effect
				position = "body_vapour_L_E"; // name of the memory point in model
			};

			class WingTipRight
			{
				effectName = "WingVortices"; // name of the effect
				position = "body_vapour_R_E";// name of the memory point in model
			};
			class BodyLeft
			{
				effectName = "BodyVortices";// name of the effect
				position = "body_vapour_L_S"; // name of the memory point in model
			};

			class BodyRight
			{
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_R_S";// name of the memory point in model
			};
		};

		#include "sounds.hpp" 	/// sounds are included in separate file to prevent cluttering

		landingSpeed = 185;		/// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 300; 	/// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		maxSpeed = 890;			/// maximal speed of the plane, affects even thrust and is base for both envelope and thrustCoef
		
		driveOnComponent[] = {"wheel_1","wheel_2","wheel_3"};  /// array of components to be assigned special low-friction material (usually wheels) 
		
		rudderInfluence = 0.5;		/// coefficient of rudder affecting steering of the plane
		aileronSensitivity = 1;		/// coefficient of ailerons affecting twisting the plane
		elevatorSensitivity = 0.8;	/// coefficient of elevators affecting changing of plane horizontal heading

		irScanRangeMin = 500;		/// defines the range of IR sight of the vehicle
		irScanRangeMax = 5000;		/// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 2;		/// defines the effectivity of IR sight of the vehicle

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		
		/// angle of incidence - difference between forward and airfold chord line - def. val is 3*PI/180 (meaning three degrees)
		angleOfIndicence = 0.05235987;

		/// forces keeping plane aligned with its speed direction - the bigger force the better it changes the direction of flight
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used 
		// effectiveness according to current speed and maxSpeed ratio
		// last value goes for 150% of max speed
		thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.7, 0.5, 0.3, 0.1, 0.0, 0.0, 0.0, 0.0};
		elevatorCoef[]= {}; //default value is 1
		aileronCoef[]= {};  //default value is 1
		rudderCoef[]= {};   //default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));

		//! coefficient of player's controller sensitivity (does not affect AI)
		elevatorControlsSensitivityCoef = 4; 
		aileronControlsSensitivityCoef = 4;
		rudderControlsSensitivityCoef = 4;		

		landingAoa = "rad 10"; 	/// what AoA is going the IA use to land the plane

		laserScanner = 1;		/// if the vehicle is able to see targets marked by laser marker 
		gunAimDown = 0.029000;	/// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	/// adjusts the view of pilot to have crosshair centred

		memoryPointLRocket = "Rocket_1"; /// use this for simulating different rocked pods in case you don't want to mess with "maverick weapon" simulation
		memoryPointRRocket = "Rocket_2"; /// it is used to alternate two points/pods of fire the missiles

		flapsFrictionCoef = 0.32;	/// sets the effectivity of using flaps to increase drag/lift
		
		minFireTime = 30;			/// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		/// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		class Reflectors			/// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	/// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		/// the same definition format for colouring the environment around
				position = "Light_L";				/// name of memory point in model to take the origin of the light
				direction = "Light_L_end";			/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_L";				/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_L";				/// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 20;					/// angle from light direction vector where the light is at full strength
				outerAngle = 60;					/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					/// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					/// boolean switch if the light produces flare or not
				dayLight = false;					/// boolean switch if the light is used during day or not
				FlareSize = 4;						/// how big is the flare, using the same metrics as intensity
				size = 1;							/// defines the visible size of light, has not much of an effect now
				class Attenuation					/// describes how fast does the light dim
				{
					start = 1;						/// offset of start of the attenuation
					constant = 0;					/// constant attenuation of the light in any distance from source
					linear = 0;						/// coefficient for linear attenuation
					quadratic = 4;					/// coefficient for attenuation with square of distance from source
					
					hardLimitStart = 150;			/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				/// distance from source where the light is not displayed (shorter distances increase performance)				
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};		

		armor = 60;					/// just some protection against missiles, collisions and explosions	
		damageResistance = 0.004;	/// for AI if it is worth to be shoot at
		destrType = DestructWreck;	/// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model

		class Damage 	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1.rvmat",			/// material mapped in model
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"	/// changes to this one once damage of the part reaches 1
			};
		};
		hiddenSelections[] =	/// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1",
			"camo2"
		};
		class MFD				/// class for helmet mounted displays, is going to be documented separately
		{
			class AirplaneHUD
			{
				#include "cfgHUD.hpp"
			};
		};

		class AnimationSources: AnimationSources	/// custom made animation sources to show/hide all the different parts for different loadout
		{
			class AddScalpel {source = user; animPeriod = 0.000001; initPhase = 0;};	/// corresponds with source used in model.cfg, hidden by default
			class AddAsraam_out {source = user; animPeriod = 0.000001; initPhase = 0;};
			class AddAsraam_mid {source = user; animPeriod = 0.000001; initPhase = 0;};
			class AddMk82 {source = user; animPeriod = 0.000001; initPhase = 0;};
			class AddGbu12 {source = user; animPeriod = 0.000001; initPhase = 0;};
			class AddZephyr {source = user; animPeriod = 0.000001; initPhase = 0;};
			class AddDar {source = user; animPeriod = 0.000001; initPhase = 0;};
			class Muzzle_flash {source = "ammorandom"; weapon = "gatling_20mm";};	/// used to rotate the muzzle flash, dependent on the weapon selected
		};
	};

	class I_Test_Plane_01_CAS_F: Test_Plane_01_base_F /// CAS version of the plane
	{
		scope = public;	/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		displayName = "Test plane in CAS version"; /// how does the vehicle show itself in editor

		side			 = 3;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			 = CIV_F;					/// defines the faction inside of the side
		crew			 = "Test_Soldier_F";		/// lets use the sample soldier we have as default captain of the boat

		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_INDP_co.paa",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_INDP_co.paa"
		};

		weapons[] =	/// lets use the weapons from Buzzard
		{
			gatling_20mm,
			missiles_SCALPEL,
			missiles_ASRAAM,
			GBU12BombLauncher,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			300Rnd_20mm_shells,
			2Rnd_LG_scalpel,
			2Rnd_AAA_missiles,
			2Rnd_GBU12_LGB_MI10,
			120Rnd_CMFlare_Chaff_Magazine
		};

		class AnimationSources: AnimationSources 		/// proxies with correct weapons are shown, the rest remains hidden
		{
			class AddScalpel: AddScalpel {initPhase = 1;};
			class AddAsraam_mid: AddAsraam_mid {initPhase = 1;};
			class AddGbu12: AddGbu12 {initPhase = 1;};
		};

		availableForSupportTypes[] = {"CAS_Bombing"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 3000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
	};
	class I_Test_Plane_01_AA_F: I_Test_Plane_01_CAS_F	/// the other version is pretty much obvious, just showing the possibilities
	{
		displayName = "Test plane in CAS version";
		hiddenSelectionsTextures[] =
		{
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_INDP_co.paa",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_INDP_co.paa"
		};

		weapons[] =
		{
			gatling_20mm,
			missiles_Zephyr,
			missiles_ASRAAM,
			CMFlareLauncher
		};
		magazines[] =
		{
			300Rnd_20mm_shells,
			2Rnd_AAA_missiles,
			4Rnd_GAA_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};

		class AnimationSources: AnimationSources
		{
			class AddScalpel: AddScalpel {initPhase = 0;};
			class AddMk82: AddMk82 {initPhase = 0;};
			class AddGbu12: AddGbu12 {initPhase = 0;};
			class AddZephyr: AddZephyr {initPhase = 1;};
			class AddAsraam_out: AddAsraam_out {initPhase = 1;};
			class AddAsraam_mid: AddAsraam_mid {initPhase = 1;};			
		};
	};

	class PlaneWreck;

	class Test_Plane_01_wreck_F: PlaneWreck
	{
		scope = 1;
		model = "A3\Air_F_Gamma\Test_Plane_01\Test_Plane_01_wreck_F.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
};