#include "basicdefines_A3.hpp"
class CfgPatches
{
	class OPTRE_Vehicles_Longsword
	{
		units[] = {"OPTRE_Longsword_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
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

	class OPTRE_Longsword_Base_F: Plane_Base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1 Base";
		class Library
		{
			libTextDesc					= "The GA-TL1/A is the atmospheric variant of the UNSC's mainstay starfighter. Whilst the aircraft's primary role is that of an interceptor, it is more than capable of serving in a ground support role.";
		};
		dlc = "OPTRE";
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		author="Article 2 Studios";
        armor = 150;
		accuracy = 0.2;
		destrType = DestructWreck;
		damageResistance = 0.004;
		gearRetracting=1;	
		model = "OPTRE_Vehicles\Longsword\Longsword.p3d";
		vtol = 3;
		extCameraPosition[] = {0, 10, -45}; 

		icon = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";

		driverAction = passenger_apc_narrow_generic01;
		cargoAction[] = {"passenger_apc_narrow_generic01"};

		LockDetectionSystem = CM_Lock_Radar;
		incomingMissileDetectionSystem = CM_Missile;
		
		transportSoldier = 1;					/// how many cargo positions are available
		cargoCanEject = 0;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = {1};		/// what indexes does regular cargo sit on
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";

		class Turrets {};

		class TransportItems{};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};

			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};

			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};

		#include "sounds.hpp"

		landingSpeed = 200;
		acceleration = 843;
		maxSpeed = 2500;

		driveOnComponent[] = {"wheel_1","wheel_2","wheel_3"};

		rudderInfluence = 10;
		aileronSensitivity = 5;
		elevatorSensitivity = 5;

		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;
		thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.7, 0.5, 0.3, 0.1, 0.0, 0.0, 0.0, 0.0};
		elevatorCoef[]= {};
		aileronCoef[]= {};
		rudderCoef[]= {};
		elevatorControlsSensitivityCoef = 4;
		aileronControlsSensitivityCoef = 4;
		rudderControlsSensitivityCoef = 4;
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.029000;
		headAimDown = 0.0000;
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		flapsFrictionCoef = 0.5;
		minFireTime = 30;
		threat[] = {1, 1, 1};
		class Reflectors
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

		/*class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1.rvmat",			/// material mapped in model
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"	/// changes to this one once damage of the part reaches 1
			};
		};*/
		/*class MFD
		{
			class AirplaneHUD
			{
				#include "cfgHUD.hpp"
			};
		};*/
		
		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class rampDoor				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};		
			class bayDoor				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
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
				position = pos driver;
				radius = 6;
				priority = 2;
				onlyForPlayer = 1;
				condition = "((this animationPhase ""ramp_anim"" < 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""ramp_anim"",1];";
				animPeriod = 5;
            };
            class RampClose: RampOpen
            {
				userActionID = 61;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 2;
				condition = "((this animationPhase ""ramp_anim"" > 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""ramp_anim"",0];";
            };
            /*class BayOpen: RampOpen
            {
				userActionID = 62;
				displayName = "Open Weapons Bay";
				displayNameDefault = "Open Weapons Bay";
				textToolTip = "Open Weapons Bay";
				priority = 2;
				condition = "((this animationPhase ""leftbay_anim"" > 0.5) AND (this animationPhase ""rightbay_anim"" > 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""leftbay_anim"",0]; this animate [""rightbay_anim"",0];";
            };
            class BayClose: RampOpen
            {
				userActionID = 63;
				displayName = "Close Weapons Bay";
				displayNameDefault = "Close Weapons Bay";
				textToolTip = "Close Weapons Bay";
				priority = 2;
				condition = "((this animationPhase ""leftbay_anim"" < 0.5) AND (this animationPhase ""rightbay_anim"" < 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""leftbay_anim"",1]; this animate [""rightbay_anim"",1];";
            };*/
		};
	};

	class OPTRE_Longsword_CAS_F: OPTRE_Longsword_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Strike Fighter";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M91909,
			missiles_SCALPEL,
			missiles_ASRAAM,
			missiles_DAR,
			GBU12BombLauncher,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_M91909_2500Rnd_50mm,
			24Rnd_missiles,
			24Rnd_missiles,
			24Rnd_missiles,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};

	class OPTRE_Longsword_BOMB_F: OPTRE_Longsword_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Bomber";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M91909,
			missiles_SCALPEL,
			missiles_ASRAAM,
			GBU12BombLauncher,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_M91909_2500Rnd_50mm,
			2Rnd_LG_scalpel,
			2Rnd_AAA_missiles,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	
	class OPTRE_Longsword_AA_F: OPTRE_Longsword_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Interceptor";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =
		{
			OPTRE_M91909,
			missiles_Zephyr,
			missiles_ASRAAM,
			CMFlareLauncher
		};
		magazines[] =
		{
			OPTRE_M91909_2500Rnd_50mm,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			4Rnd_GAA_missiles,
			4Rnd_GAA_missiles,
			4Rnd_GAA_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	
	class OPTRE_Longsword_CANNON_F: OPTRE_Longsword_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Fighter";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =
		{
			OPTRE_M919110,
			missiles_ASRAAM,
			missiles_SCALPEL,
			CMFlareLauncher
		};
		magazines[] =
		{
			OPTRE_M919110_1000Rnd_110mm,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
};