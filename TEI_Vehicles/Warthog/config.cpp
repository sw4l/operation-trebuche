class CfgPatches
{
	class TEI_Vehicles_Warthog
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class CfgWeapons
{
	class HMG_127;
	class MGun;
	class TEI_M41_LAAG: HMG_127
	{
		displayName = "M41 Light Anti-Aircraft Gun";
		class manual: MGun
		{
			displayName = "M41 Light Anti-Aircraft Gun";
			reloadTime = 0.0667;
			dispersion = 0.00087;
			sounds[] = {"StandardSound"};
		};
	};
};

class CfgVehicles
{	
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
	};
	
	class TEI_M12_base: Car_F
	{
		mapSize										= 9.2;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]					= {"veh_vehicle_MRAP_s"};
				speechPlural[]						= {"veh_vehicle_MRAP_p"};
			};
		};
		nameSound									= "veh_vehicle_MRAP_s";
		author										= "Eridanus Insurrection Team";
		displayName 								= ""; /// displayed in Editor
		class Library
		{
			libTextDesc								= "The M12 FAV Warthog is the UNSC's primary ground vehicle, used for its scouting and reconnaissance capacity, or as an integral part of a mechanized infantry unit; the M12 has been a part of the UNSC's armored vehicle fleet for fifty years, and is the most recognizable vehicle in their arsenal. It is a highly mobile, all-wheel-drive, all-wheel-steering, ICE-powered (Internal combustion engine) vehicle equipped with a contuously-variable transmission.";
		};
		model 										= "TEI_Vehicles\Warthog\Warthog.p3d";  /// simple path to model
		picture										= "TEI_Vehicles\Warthog\Data\picture.paa"; /// just some icon in command bar
		Icon										= "TEI_Vehicles\Warthog\Data\icon.paa"; /// icon in map
		transportMaxBackpacks								= 5;
       		slingLoadCargoMemoryPoints[]							= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		vehicleClass									= "Car";
		transportSoldier								= 0;
		crewVulnerable									= 1;
		crewCrashProtection								= 0.015;
		armor										= 120;
		cost										= 500000;
		canFloat 									= 0;
		threat[]									= {0.8,0.6,0.3};
		camouflage 									= 4;
		destrType 									= "DestructBuilding";
		ejectDeadGunner 								= "true";
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 							= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]							= {5, 5, 5};				/// nearly a white one
				position 							= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 							= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 							= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 							= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 								= 1;						/// size of the light point seen from distance
				innerAngle 							= 100;						/// angle of full light
				outerAngle 							= 179;						/// angle of some light
				coneFadeCoef 						= 10;						/// attenuation of light between the above angles
				intensity 							= 1;						/// strength of the light
				useFlare 							= true;						/// does the light use flare?
				dayLight 							= false;					/// switching light off during day saves CPU a lot
				flareSize 							= 1.0;						/// how big is the flare
				class Attenuation
				{
					start 							= 1.0;
					constant 						= 0; 
					linear 							= 0; 
					quadratic 						= 0.25; 
					hardLimitStart 					= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 					= 60;		/// this allows adding more lights into scene
				};
			};		
			class LightCarHeadL02:LightCarHeadL01
			{
				position 							= "LightCarHeadL02";
				direction 							= "LightCarHeadL02_end";
				FlareSize 							= 0.5;						/// side bulbs aren't that strong
			};
			class LightCarHeadL03:LightCarHeadL01
			{
				position 							= "LightCarHeadL03";
				direction 							= "LightCarHeadL03_end";
			};
			class LightCarHeadR01:LightCarHeadL01
			{
				position 							= "LightCarHeadR01";
				direction 							= "LightCarHeadR01_end";
				hitpoint 							= "Light_R";
				selection 							= "Light_R";
			};
			class LightCarHeadR02:LightCarHeadR01
			{
				position 							= "LightCarHeadR02";
				direction 							= "LightCarHeadR02_end";
				FlareSize 							= 0.5;
			};
			class LightCarHeadR03:LightCarHeadR01
			{
				position 							= "LightCarHeadR03";
				direction 							= "LightCarHeadR03_end";
			};
		};
		aggregateReflectors[] 						= {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 							= "exhaust";  		/// name of initial memory point
				direction 							= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 								= "ExhaustsEffect";	/// what particle effect is it going to use
			};
			class Exhaust2
			{
				position 							= "exhaust2_pos";
				direction 							= "exhaust2_dir";
				effect 								= "ExhaustsEffect";
			};				
		};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source 								= "revolving";			/// returns bullets left in magazine of said weapon
				weapon 								= "TEI_M41_LAAG";	/// this is the said weapon
				animPeriod = 0.01;
			};
			class Gatling_flash
			{
				source 								= "ammorandom";		/// this source returns some random value changine each time ammo is spent from this weapon - used for muzzle flashes
				weapon 								= "TEI_M41_LAAG";	/// this is the said weapon
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor 								= 300;
				explosionShielding 					= 0.8;
				radius 								= 0.25;
				passThrough 						= 0;
			};
			class HitLBWheel: HitLBWheel
			{
				armor 								= 300;
				explosionShielding 					= 0.8;
				radius 								= 0.25;
				passThrough 						= 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor 								= 300;
				explosionShielding 					= 0.8;
				radius 								= 0.25;
				passThrough 						= 0;
			};
			class HitRBWheel: HitRBWheel
			{
				armor 								= 300;
				explosionShielding 					= 0.8;
				radius 								= 0.25;
				passThrough 						= 0;
			};
			class HitFuel: HitFuel
			{
				armor 								= 0.75;
				name 								= "palivo";
				material							= -1;
				visual 								= "";
				passThrough 						= 1;
				minimalHit 							= 0.2;
				explosionShielding					= 0.2;
				radius 								= 0.25;
			};
			class HitEngine: HitEngine
			{
				armor	 							= 0.75;
				name  								= "motor";
				material 							= -1;
				visual  							= "";
				passThrough  						= 0.75;
				minimalHit  						= 0.2;
				explosionShielding  				= 0.2;
				radius  							= 0.45;
			};
			class HitBody: HitBody
			{
				name  								= "karoserie";
				visual  							= "body";
				passThrough  						= 0.95;
				minimalHit  						= 0.2;
				explosionShielding  				= 0.2;
				radius  							= 0.33;
			};
			class HitGlass1: HitGlass1
			{
				armor  								= 2.5;
				explosionShielding 					= 0.25;
				visual  							= "glass1";
				radius  							= 0.25;
				name 								= "glass1";
				passThrough  						= 0;
			};
		};
		class Damage
		{
			tex[] 									= {
			"TEI_Core\data\base\glass_ca.paa",
			"TEI_Core\data\base\transparent.paa",
			"TEI_Core\data\base\transparent.paa"};
			mat[] 									= {
			"TEI_Vehicles\Warthog\data\warthog.rvmat",
			"TEI_Vehicles\Warthog\data\warthog_damage.rvmat",
			"TEI_Vehicles\Warthog\data\warthog_destruct.rvmat",
			
			"TEI_Vehicles\Warthog\data\warthog_addons.rvmat",
			"TEI_Vehicles\Warthog\data\warthog_addons_damage.rvmat",
			"TEI_Vehicles\Warthog\data\warthog_addons_destruct.rvmat",
			
			"TEI_Core\data\base\reflective_glass.rvmat",
			"TEI_Core\data\base\null.rvmat",
			"TEI_Core\data\base\null.rvmat"};
		};
		wheelDamageThreshold						= 0.9;
		wheelDestroyThreshold						= 0.99;
		wheelDamageRadiusCoef						= 0.95;
		wheelDestroyRadiusCoef						= 0.45;	
		driverLeftHandAnimName 						= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName 					= "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driverAction 								= "Driver_low01"; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 								= 	{
														};
		hiddenSelections[] 							= {"camo1"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget						= "rendertarget0";
				class CameraView1
				{
					pointPosition					= "PIP0_pos";
					pointDirection					= "PIP0_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            class RearView
			{
				renderTarget						= "rendertarget1";
				class CameraView1
				{
					pointPosition					= "PIP1_pos";
					pointDirection					= "PIP1_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            class leftMirror
			{
				renderTarget						= "rendertarget2";
				class CameraView1
				{
					pointPosition					= "PIP2_pos";
					pointDirection					= "PIP2_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            class rightMirror
			{
				renderTarget						= "rendertarget3";
				class CameraView1
				{
					pointPosition					= "PIP3_pos";
					pointDirection					= "PIP3_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
		};
		showNVGCargo[]									= {0,1};
		soundAttenuationCargo[]							= {1,0};
		getInAction								= "GetInMRAP_01";
		getOutAction								= "GetOutMRAP_01";
		cargoGetInAction[]							= {"GetInMRAP_01_cargo"};
		cargoGetOutAction[]							= {"GetOutMRAP_01"};
		commanderCanSee								= 31;
		hideWeaponsDriver							= 1;
		hideWeaponsCargo							= 0;
		driverDoor									= "";
		cargoDoors[]								= {};
		terrainCoef									= 1.5;
		turnCoef									= 2.5;
		precision									= 15;
		weapons[]									= {"TruckHorn2"};
		magazines[]									= {};
		
		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple
		
		supplyRadius								= 5;
		transportMaxMagazines						= 90;
		class TransportMagazines
		{
		};
		class TransportItems 
		{
			class _xx_FirstAidKit
			{
				name								= "FirstAidKit";
				count								= 4;
			};
		};
		class TransportWeapons
		{
		};		
	};


	class TEI_M12_FAV: TEI_M12_base
	{
		displayName									= "M12 FAV Warthog (Unarmed)"; /// displayed in Editor
		scope										= 2;
		author										= "Eridanus Insurrection Team";
		faction										= "TEI_UNSC";
		side										= 1;
		transportSoldier								= 0;
		crew										= "TEI_UNSC_Army_Rifleman_H_WDL";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_co.paa"};
		vehicleClass									= "TEI_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction							= "passenger_inside_2";
				gunnerCompartments						= "Compartment1";
				memoryPointsGetInGunner						= "pos pas";
				memoryPointsGetInGunnerDir					= "pos pas dir";
				memoryPointGunnerOptics= "";
				gunnerName							= "Front Passenger";
				proxyIndex							= 1;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret							= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]					= {-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction							= "passenger_flatground_2";
				gunnerName							= "Rear R Passenger";
				memoryPointsGetInGunner						= "pos cargo";
				memoryPointsGetInGunnerDir					= "pos cargo dir";
				proxyIndex							= 3;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
				};
			};
           		 class CargoTurret_03:CargoTurret_02
			{
				gunnerAction							= "passenger_flatground_1";
				gunnerName							= "Rear L Passenger";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 2;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
		};
    };
	class TEI_M12_FAV_black: TEI_M12_FAV
	{
		displayName									= "M12 FAV Warthog (Unarmed) [Black]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_black_co.paa"};
	};
	class TEI_M12_FAV_tan: TEI_M12_FAV
	{
		displayName									= "M12 FAV Warthog (Unarmed) [Tan]"; /// displayed in Editor
		crew										= "TEI_UNSC_Army_Rifleman_H_DES";
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_tan_co.paa"};
	};
	class TEI_M12_FAV_snow: TEI_M12_FAV
	{
		displayName									= "M12 FAV Warthog (Unarmed) [Snow]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_snow_co.paa"};
	};
	class TEI_M12_FAV_ins: TEI_M12_FAV
	{
		displayName									= "M12 FAV Warthog (Unarmed) [Innie]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_ins_co.paa"};
		vehicleClass								= "TEI_Ins_Vehicle_class";
		side										= 0;
		crew										= "TEI_Ins_ER_Rebel_green";
		faction										= "TEI_Ins";
	};
	
	class TEI_M813_TT: TEI_M12_base
	{
		displayName									= "M831 TT Warthog (Transport)"; /// displayed in Editor
		scope										= 2;
		author										= "Eridanus Insurrection Team";
		faction										= "TEI_UNSC";
		side										= 1;
		transportSoldier							= 0;
		crew										= "TEI_UNSC_Army_Rifleman_H_WDL";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_mg"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_co.paa"};
		vehicleClass								= "TEI_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction							= "passenger_inside_2";
				gunnerCompartments						= "Compartment1";
				memoryPointsGetInGunner						= "pos pas";
				memoryPointsGetInGunnerDir					= "pos pas dir";
				memoryPointGunnerOptics= "";
				gunnerName							= "Front Passenger";
				proxyIndex							= 1;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret							= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]					= {-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction							= "passenger_bench_1";
				gunnerName							= "Rear R Passenger";
				memoryPointsGetInGunner						= "pos cargo";
				memoryPointsGetInGunnerDir					= "pos cargo dir";
				proxyIndex							= 4;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
				};
			};
           		 class CargoTurret_03:CargoTurret_02
			{
				gunnerAction							= "passenger_bench_1";
				gunnerName							= "Rear L Passenger";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 5;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
           		 class CargoTurret_04:CargoTurret_02
			{
				gunnerAction							= "passenger_inside_2";
				gunnerName							= "Left Passenger 2";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 6;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
           		 class CargoTurret_05:CargoTurret_02
			{
				gunnerAction							= "passenger_inside_2";
				gunnerName							= "Right Passenger 2";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 7;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
           		 class CargoTurret_06:CargoTurret_02
			{
				gunnerAction							= "passenger_inside_2";
				gunnerName							= "Left Passenger 1";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 8;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
           		 class CargoTurret_07:CargoTurret_02
			{
				gunnerAction							= "passenger_inside_2";
				gunnerName							= "Right Passenger 1";
				memoryPointsGetInGunner						= "pos gunner";
				memoryPointsGetInGunnerDir					= "pos gunner dir";
				proxyIndex							= 9;
				gunnerCompartments						= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]					= {-95,65};
					CargoTurret_02[]					= {-65,95};
				};
			};
		};
    	};
	class TEI_M813_TT_black: TEI_M813_TT
	{
		displayName									= "M831 TT Warthog (Transport) [Black]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_mg"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_black_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class TEI_M813_TT_tan: TEI_M813_TT
	{
		displayName									= "M831 TT Warthog (Transport) [Tan]"; /// displayed in Editor
		crew										= "TEI_UNSC_Army_Rifleman_H_DES";
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_tan_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class TEI_M813_TT_snow: TEI_M813_TT
	{
		displayName									= "M831 TT Warthog (Transport) [Snow]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 								= {"camo1","camo2","attach_apc","attach_mg"};
		hiddenSelectionsTextures[] 							= {"TEI_Vehicles\Warthog\data\warthog_snow_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};


	class TEI_M12_LRV: TEI_M12_FAV
	{
		displayName 								= "M12 LRV Warthog (MG)";
		author										= "Eridanus Insurrection Team";
		faction										= "TEI_UNSC";
		transportSoldier							= 0;
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget						= "rendertarget0";
				class CameraView1
				{
					pointPosition					= "PIP0_pos";
					pointDirection					= "PIP0_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class RearView
			{
				renderTarget						= "rendertarget1";
				class CameraView1
				{
					pointPosition					= "PIP1_pos";
					pointDirection					= "PIP1_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class leftMirror
			{
				renderTarget						= "rendertarget2";
				class CameraView1
				{
					pointPosition					= "PIP2_pos";
					pointDirection					= "PIP2_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class rightMirror
			{
				renderTarget						= "rendertarget3";
				class CameraView1
				{
					pointPosition					= "PIP3_pos";
					pointDirection					= "PIP3_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class GunScreen
			{
				renderTarget						= "rendertarget4";
				class CameraView1
				{
					pointPosition					= "PIP3_pos";
					pointDirection					= "PIP3_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov						= 0.5;
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction						= "passenger_inside_2";
				gunnerCompartments					= "Compartment1";
				memoryPointsGetInGunner				= "pos cargo";
				memoryPointsGetInGunnerDir			= "pos cargo dir";
				memoryPointGunnerOptics				= "";
				gunnerName							= "Front Passenger";
				proxyIndex							= 1;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret						= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]				= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body 								= "mainturret";
				gun 								= "maingun";
				animationsourcebody					= "mainturret";
				animationSourceGun 					= "maingun";
				gunAxis								= "Osa Hlavne";
				gunBeg 								= "Usti hlavne";
				gunEnd 								= "konec hlavne";
				minElev 							= -8;
				maxElev 							= 16;
				minTurn 							= -360;
				maxTurn 							= 360;
				initTurn							= 0;
				turretAxis 							= "OsaVeze";
				maxHorizontalRotSpeed				= 1.2;
				maxVerticalRotSpeed					= 1.2;
				gunnerAction						= "driver_boat01";
				gunnerInAction						= "driver_boat01";
				gunnerGetInAction					= "GetInMRAP_01";
				gunnerGetOutAction					= "GetOutMRAP_01"; 
				gunnerName							= "Gunner"; 
				hideWeaponsGunner					= false;
				soundServo[]						= {"",0.01,1};
				outGunnerMayFire					= 1;
				inGunnerMayFire 					= 1;
				commanding							= 1;
				primaryGunner						= 1;
				memoryPointsGetInGunner				= "Pos Gunner";
				memoryPointsGetInGunnerDir			= "Pos Gunner dir";
				gunnerLeftHandAnimName				= "trigger";
				gunnerRightHandAnimName				= "trigger";
				memoryPointGun						= "machinegun";
				weapons[] 							= {"TEI_M41_LAAG"};
				magazines[] 						= {"500Rnd_127x99_mag_Tracer_Yellow"};
				memoryPointGunnerOptics 			= "gunnerview";
				gunnerOpticsShowCursor 				= true;
				castGunnerShadow 					= true;
				startEngine							= false;
				enableManualFire 					= false;
				gunnerOpticsModel 					= "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics 					= 0;
				class ViewGunner: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
	};
	class TEI_M12_LRV_black: TEI_M12_LRV
	{
		displayName									= "M12 LRV Warthog (MG) [Black]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_black_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class TEI_M12_LRV_tan: TEI_M12_LRV
	{
		displayName									= "M12 LRV Warthog (MG) [Tan]"; /// displayed in Editor
		crew										= "TEI_UNSC_Army_Rifleman_H_DES";
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_tan_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class TEI_M12_LRV_snow: TEI_M12_LRV
	{
		displayName									= "M12 LRV Warthog (MG) [Snow]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_snow_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class TEI_M12_LRV_ins: TEI_M12_LRV
	{
		displayName									= "M12 LRV Warthog (MG) [Innie]"; /// displayed in Editor
		author										= "Eridanus Insurrection Team";
		hiddenSelections[] 							= {"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_ins_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
		vehicleClass								= "TEI_Ins_Vehicle_class";
		side										= 0;
		crew										= "TEI_Ins_ER_Rebel_tan";
		faction										= "TEI_Ins";
	};
	
	class TEI_M12G1_LRV: TEI_M12_LRV
	{
		model 										= "TEI_Vehicles\Warthog\Warthog_G.p3d";
		displayName 								= "M12G1 LRV Warthog (Gauss)";
		hiddenSelections[] 							= {"camo1","camo2"};
		hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget						= "rendertarget0";
				class CameraView1
				{
					pointPosition					= "PIP0_pos";
					pointDirection					= "PIP0_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class RearView
			{
				renderTarget						= "rendertarget1";
				class CameraView1
				{
					pointPosition					= "PIP1_pos";
					pointDirection					= "PIP1_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class leftMirror
			{
				renderTarget						= "rendertarget2";
				class CameraView1
				{
					pointPosition					= "PIP2_pos";
					pointDirection					= "PIP2_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class rightMirror
			{
				renderTarget						= "rendertarget3";
				class CameraView1
				{
					pointPosition					= "PIP3_pos";
					pointDirection					= "PIP3_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov								= 0.7;
				};
			};
            		class GunScreen
			{
				renderTarget						= "rendertarget4";
				class CameraView1
				{
					pointPosition					= "PIP3_pos";
					pointDirection					= "PIP3_dir";
					renderQuality					= 2;
					renderVisionMode				= 0;
					fov						= 0.5;
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction						= "passenger_inside_2";
				gunnerCompartments					= "Compartment1";
				memoryPointsGetInGunner				= "pos cargo";
				memoryPointsGetInGunnerDir			= "pos cargo dir";
				memoryPointGunnerOptics				= "";
				gunnerName							= "Front Passenger";
				proxyIndex							= 1;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret						= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]				= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body 								= "mainturret";
				gun 								= "maingun";
				animationsourcebody					= "mainturret";
				animationSourceGun 					= "maingun";
				gunAxis								= "Osa Hlavne";
				gunBeg 								= "Usti hlavne";
				gunEnd 								= "konec hlavne";
				minElev 							= -8;
				maxElev 							= 16;
				minTurn 							= -360;
				maxTurn 							= 360;
				initTurn							= 0;
				turretAxis 							= "OsaVeze";
				maxHorizontalRotSpeed				= 1.2;
				maxVerticalRotSpeed					= 1.2;
				gunnerAction						= "driver_boat01";
				gunnerInAction						= "driver_boat01";
				gunnerGetInAction					= "GetInMRAP_01";
				gunnerGetOutAction					= "GetOutMRAP_01"; 
				gunnerName							= "Gunner"; 
				hideWeaponsGunner					= false;
				soundServo[]						= {"",0.01,1};
				outGunnerMayFire					= 1;
				inGunnerMayFire 					= 1;
				commanding							= 1;
				primaryGunner						= 1;
				memoryPointsGetInGunner				= "Pos Gunner";
				memoryPointsGetInGunnerDir			= "Pos Gunner dir";
				gunnerLeftHandAnimName				= "trigger";
				gunnerRightHandAnimName				= "trigger";
				memoryPointGun						= "machinegun";
				weapons[] 							= {"cannon_125mm"};
				magazines[] 						= {"12Rnd_125mm_HE"};
				memoryPointGunnerOptics 			= "gunnerview";
				gunnerOpticsShowCursor 				= true;
				castGunnerShadow 					= true;
				startEngine							= false;
				enableManualFire 					= false;
				gunnerOpticsModel 					= "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics 					= 0;
				class ViewGunner: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
	};
	class TEI_M12_FAV_APC: TEI_M12_FAV
		{
			displayName									= "M12 FAV Warthog (APC)"; /// displayed in Editor
			author										= "Eridanus Insurrection Team";
			hiddenSelections[] 							= {"camo1","camo2","attach_mg","attach_troop"};
			hiddenSelectionsTextures[] 					= {"TEI_Vehicles\Warthog\data\warthog_ins_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
			vehicleClass								= "TEI_Ins_Vehicle_class";
			side										= 0;
			crew										= "TEI_Ins_ER_Rebel_tan";
			faction										= "TEI_Ins";
			class Turrets: Turrets
			{
				class CargoTurret_01:CargoTurret
				{
				gunnerAction						= "vehicle_turnout_1";
				gunnerCompartments					= "Compartment1";
				memoryPointsGetInGunner				= "pos cargo";
				memoryPointsGetInGunnerDir			= "pos cargo dir";
				memoryPointGunnerOptics				= "";
				gunnerName							= "Hatch Gunner";
				proxyIndex							= 10;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret						= 1;
				};
				class CargoTurret_02:CargoTurret
				{
				gunnerAction						= "passenger_inside_2";
				gunnerCompartments					= "Compartment1";
				memoryPointsGetInGunner				= "pos cargo";
				memoryPointsGetInGunnerDir			= "pos cargo dir";
				memoryPointGunnerOptics				= "";
				gunnerName							= "Front Passenger";
				proxyIndex							= 11;
				maxElev								= 10;
				minElev								= -40;
				maxTurn								= 95;
				minTurn								= -95;
				isPersonTurret						= 1;
				};
			};
		};
	
	/*class TEI_M12R_LRV: TEI_M12_LRV
	{
	model 											= "TEI_Vehicles\Warthog\Warthog_AA.p3d";
	displayName 									= "M12R LRV Warthog (AA)";
	class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
			missileBeg								= "spice rakety";
			missileEnd								= "konec rakety";
			weapons[] 								= {"missiles_titan_static"};
			magazines[] 							= {"1Rnd_GAA_missiles","1Rnd_GAA_missiles","1Rnd_GAA_missiles","1Rnd_GAA_missiles","1Rnd_GAA_missiles","1Rnd_GAA_missiles"};
			memoryPointLMissile 					= "missile_1";
			memoryPointRMissile 					= "missile_2";
			};
		};
	};
	
	class TEI_M12A1_LRV: TEI_M12_LRV
	{
	model 											= "TEI_Vehicles\Warthog\Warthog_AT.p3d";
	displayName 									= "M12A1 LRV Warthog (AT)";
	class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
			weapons[] 								= {"missiles_titan_static"};
			magazines[] 							= {"1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
			};
		};
	};*/
};
	