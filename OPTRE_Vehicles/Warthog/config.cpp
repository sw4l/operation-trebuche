class CfgPatches
{
	class OPTRE_Vehicles_Warthog
	{
		units[]={"OPTRE_M12_FAV","OPTRE_M12_FAV_black","OPTRE_M12_FAV_tan","OPTRE_M12_FAV_snow","OPTRE_M12_FAV_ins","OPTRE_M813_TT","OPTRE_M813_TT_black","OPTRE_M813_TT_tan","OPTRE_M813_TT_snow","OPTRE_M12_LRV","OPTRE_M12_LRV_black","OPTRE_M12_LRV_tan","OPTRE_M12_LRV_snow","OPTRE_M12_LRV_ins","OPTRE_M12G1_LRV","OPTRE_M12_FAV_APC"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car:LandVehicle
	{
		class NewTurret;
	};
	class Car_F:Car
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
			class MainTurret:NewTurret
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
			class HitLF2Wheel;
			class HitRF2Wheel;
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
	class OPTRE_M12_base: Car_F
	{
		author							= "Article 2 Studios";
		displayName						= "";
		class Library
		{
			libTextDesc					= "The M12 FAV Warthog is the UNSC's primary ground vehicle, used for its scouting and reconnaissance capacity, or as an integral part of a mechanized infantry unit; the M12 has been a part of the UNSC's armored vehicle fleet for fifty years, and is the most recognizable vehicle in their arsenal. It is a highly mobile, all-wheel-drive, all-wheel-steering, ICE-powered (Internal combustion engine) vehicle equipped with a contuously-variable transmission.";
		};
		model							= "OPTRE_Vehicles\Warthog\Warthog.p3d";
		picture							= "OPTRE_Vehicles\Warthog\Data\picture.paa";
		Icon							= "OPTRE_Vehicles\Warthog\Data\icon.paa";
		mapSize 						= 4;
		transportMaxBackpacks 			= 5;
		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		vehicleClass					= "OPTRE_UNSC_Vehicle_class";
		transportSoldier				= 0;
		crewVulnerable 					= 1;
		crewCrashProtection				= 0;
		crewExplosionProtection 		= 0.5;
		fuelExplosionPower 				= 2;
		epeImpulseDamageCoef 			= 25;
		armor							= 100;
		cost							= 500000;
		canFloat						= 0;
		threat[]						= {0.8,0.6,0.3};
		camouflage						= 4;
		destrType						= "DestructBuilding";
		ejectDeadGunner					= 1;
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]					= {1900,1800,1700};
				ambient[]				= {5,5,5};
				position				= "LightCarHeadL01";
				direction				= "LightCarHeadL01_end";
				hitpoint				= "Light_L";
				selection				= "Light_L";
				size					= 1;
				innerAngle				= 100;
				outerAngle				= 179;
				coneFadeCoef			= 10;
				intensity				= 1;
				useFlare				= 1;
				dayLight				= 0;
				flareSize				= 1;
				class Attenuation
				{
					start				= 1;
					constant			= 0;
					linear				= 0;
					quadratic			= 0.25;
					hardLimitStart		= 30;
					hardLimitEnd		= 60;
				};
			};
			class LightCarHeadL02:LightCarHeadL01
			{
				position				= "LightCarHeadL02";
				direction				= "LightCarHeadL02_end";
				FlareSize				= 0.5;
			};
			class LightCarHeadL03:LightCarHeadL01
			{
				position				= "LightCarHeadL03";
				direction 				= "LightCarHeadL03_end";
				innerAngle				= 50;
				outerAngle				= 80;
			};
			class LightCarHeadR01:LightCarHeadL01
			{
				position				= "LightCarHeadR01";
				direction				= "LightCarHeadR01_end";
				hitpoint				= "Light_R";
				selection				= "Light_R";
			};
			class LightCarHeadR02:LightCarHeadR01
			{
				position				= "LightCarHeadR02";
				direction 				= "LightCarHeadR02_end";
				FlareSize				= 0.5;
			};
			class LightCarHeadR03:LightCarHeadR01
			{
				position				= "LightCarHeadR03";
				direction				= "LightCarHeadR03_end";
				innerAngle				= 50;
				outerAngle				= 80;
			};
		};
		aggregateReflectors[]			= {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		class Exhausts
		{
			class Exhaust1
			{
				position				= "exhaust";
				direction				= "exhaust_dir";
				effect					= "ExhaustsEffect";
			};
			class Exhaust2
			{
				position				= "exhaust2_pos";
				direction				= "exhaust2_dir";
				effect					= "ExhaustsEffect";
			};
		};
		class AnimationSources:AnimationSources
		{
			class Gatling
			{
				source					= "revolving";
				weapon					= "OPTRE_M41_LAAG";
			};
			class Gatling_flash
			{
				source					= "reload";
				weapon					= "OPTRE_M41_LAAG";
			};
		};
		class HitPoints:HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitLF2Wheel:HitLF2Wheel
			{
				armor 					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRFWheel:HitRFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRF2Wheel:HitRF2Wheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitFuel:HitFuel
			{
				armor					= 0.5;
				name					= "palivo";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitEngine:HitEngine
			{
				armor					= 0.5;
				name					= "motor";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitBody:HitBody
			{
				armor					= 2;
				name					= "karoserie";
				visual					= "body";
				passThrough				= 1;
				explosionShielding		= 0.5;
			};
			class HitGlass1:HitGlass1
			{
				armor					= 0.5;
				explosionShielding		= 2;
				visual					= "glass1";
				name					= "glass1";
				passThrough				= 0;
			};
		};
		class Damage
		{
			tex[]						= {"OPTRE_Core\data\base\glass_ca.paa","OPTRE_Core\data\base\transparent.paa","OPTRE_Core\data\base\transparent.paa"};
			mat[]						= {"OPTRE_Vehicles\Warthog\data\warthog.rvmat","OPTRE_Vehicles\Warthog\data\warthog_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_destruct.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_destruct.rvmat","OPTRE_Core\data\base\reflective_glass.rvmat","OPTRE_Core\data\base\null.rvmat","OPTRE_Core\data\base\null.rvmat"};
		};
		wheelDamageThreshold			= 1;
		wheelDestroyThreshold			= 1;
		wheelDamageRadiusCoef			= 1;
		wheelDestroyRadiusCoef			= 1;
		driverLeftHandAnimName			= "drivewheel";
		driverRightHandAnimName			= "drivewheel";
		driverAction					= "Driver_low01";
		cargoAction[]					= {};
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget			= "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class RearView
			{
				renderTarget			= "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class leftMirror
			{
				renderTarget			= "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class rightMirror
			{
				renderTarget			= "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
		};
		showNVGCargo[]					= {0,1};
		maxFordingDepth 				= 0.95;
		getInAction						= "GetInMRAP_01";
		getOutAction					= "GetOutMRAP_01";
		cargoGetInAction[]				= {"GetInMRAP_01_cargo"};
		cargoGetOutAction[]				= {"GetOutMRAP_01"};
		commanderCanSee					= 31;
		hideWeaponsDriver				= 0;
		hideWeaponsCargo				= 0;
		driverDoor						= "";
		cargoDoors[]					= {};
		precision						= 15;
		weapons[]						= {"TruckHorn2"};
		magazines[]						= {};

		#include "sounds.hpp"
		#include "physx.hpp"
		
		supplyRadius					= 5;
		transportMaxMagazines			= 120;
		class TransportMagazines
		{};
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name					= "OPTRE_Biofoam";
				count					= 4;
			};
		};
		class TransportWeapons
		{};
		class UserActions
		{
			class Flip
			{
				displayNameDefault 		= "Press SPACEBAR to Flip Warthog";
				displayName 			= "Press SPACEBAR to Flip Warthog";
				position 				= "";
				radius 					= 4;
				onlyForPlayer 			= 1;
				condition 				= "(alive this) AND !(canmove this)";
				statement 				= "this setVectorUp surfaceNormal getposATL this";
			};
		};
	};
	class OPTRE_M12_FAV: OPTRE_M12_base
	{
		scope 							= 2;
		displayName						= "M12 FAV Warthog (Unarmed)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa"};
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments  	= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev					= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction			= "passenger_flatground_2";
				gunnerName				= "Rear R Passenger";
				memoryPointsGetInGunner	= "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex				= 3;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
				};
			};
			class CargoTurret_03:CargoTurret_02
			{
				gunnerAction			= "passenger_flatground_1";
				gunnerName				= "Rear L Passenger";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 2;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
		};
	};
	class OPTRE_M12_FAV_black: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (Unarmed) [Black]";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa"};
	};
	class OPTRE_M12_FAV_tan: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (Unarmed) [Tan]";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa"};
	};
	class OPTRE_M12_FAV_snow: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (Unarmed) [Snow]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa"};
	};
	class OPTRE_M12_FAV_Marine: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (Unarmed) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	class OPTRE_M12_FAV_ins: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (Unarmed) [Ins]";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa"};
		vehicleClass					= "OPTRE_Ins_Vehicle_class";
		side							= 0;
		crew							= "OPTRE_Ins_URF_Rifleman_AR";
		faction							= "OPTRE_Ins";
	};
	
	///troop hog
	
	class OPTRE_M813_TT: OPTRE_M12_base
	{
		displayName						= "M831 TT Warthog (Transport)";
		scope							= 2;
		model							= "OPTRE_Vehicles\Warthog\Warthog_TT.p3d";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		transportSoldier				= 0;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa"};
		vehicleClass					= "OPTRE_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments		= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev					= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction			= "passenger_bench_1";
				gunnerName				= "Rear R Passenger";
				memoryPointsGetInGunner	= "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex				= 4;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
				};
			};
			class CargoTurret_03:CargoTurret_02
			{
				gunnerAction			= "passenger_bench_1";
				gunnerName				= "Rear L Passenger";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 5;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_04:CargoTurret_02
			{
				gunnerAction			= "passenger_inside_2";
				gunnerName				= "Left Passenger 2";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 6;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_05:CargoTurret_02
			{
				gunnerAction			= "passenger_inside_2";
				gunnerName				= "Right Passenger 2";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 7;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_06:CargoTurret_02
			{
				gunnerAction			= "passenger_inside_2";
				gunnerName				= "Left Passenger 1";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 8;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_07:CargoTurret_02
			{
				gunnerAction			= "passenger_inside_2";
				gunnerName				= "Right Passenger 1";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex				= 9;
				gunnerCompartments		= "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]	= {-95,65};
					CargoTurret_02[]	= {-65,95};
				};
			};
		};
	};
	class OPTRE_M813_TT_black: OPTRE_M813_TT
	{
		displayName						= "M831 TT Warthog (Transport) [Black]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class OPTRE_M813_TT_tan: OPTRE_M813_TT
	{
		displayName						= "M831 TT Warthog (Transport) [Tan]";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class OPTRE_M813_TT_snow:OPTRE_M813_TT
	{
		displayName						= "M831 TT Warthog (Transport) [Snow]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class OPTRE_M813_TT_Marine:OPTRE_M813_TT
	{
		displayName						= "M831 TT Warthog (Transport) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	
	/// MG hog
	
	class OPTRE_M12_LRV: OPTRE_M12_FAV
	{
		displayName						= "M12 LRV Warthog (MG)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		model							= "OPTRE_Vehicles\Warthog\Warthog_MG.p3d";
		transportSoldier				= 0;
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget			= "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class RearView
			{
				renderTarget			= "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class leftMirror
			{
				renderTarget			= "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class rightMirror
			{
				renderTarget			= "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class GunScreen
			{
				renderTarget			= "rendertarget4";
				class CameraView1
				{
					pointPosition		= "PIP4_pos";
					pointDirection		= "PIP4_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments		= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev 				= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				gunAxis					= "Osa Hlavne";
				gunBeg					= "Usti hlavne";
				gunEnd					= "konec hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.2;
				maxVerticalRotSpeed		= 1.2;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				soundServo[]			= {"",0.01,1};
				stabilizedInAxes 		= 3;
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				turretInfoType			= "RscWeaponZeroing";
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				memoryPointGun			= "machinegun";
				weapons[]				= {"OPTRE_M41_LAAG"};
				magazines[]				= {"500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow"};
				memoryPointGunnerOptics	= "gunnerview";
				gunnerOpticsShowCursor	= 1;
				castGunnerShadow		= 1;
				startEngine 			= 0;
				enableManualFire		= 0;
				gunnerOpticsModel		= "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics		= 0;
				class ViewGunner:ViewOptics
				{
					initAngleX			= -15;
					minAngleX			= -45;
					maxAngleX			= 45;
					initFov				= 0.9;
					minFov				= 0.42;
					maxFov				= 0.9;
					visionMode[]		= {};
				};
			};
		};
	};
	class OPTRE_M12_LRV_black: OPTRE_M12_LRV
	{
		displayName						= "M12 LRV Warthog (MG) [Black]";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class OPTRE_M12_LRV_tan: OPTRE_M12_LRV
	{
		displayName						= "M12 LRV Warthog (MG) [Tan]";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class OPTRE_M12_LRV_snow: OPTRE_M12_LRV
	{
		displayName						= "M12 LRV Warthog (MG) [Snow]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class OPTRE_M12_LRV_Marine: OPTRE_M12_LRV
	{
		displayName						= "M12 LRV Warthog (MG) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	class OPTRE_M12_LRV_ins:OPTRE_M12_LRV
	{
		displayName						= "M12 LRV Warthog (MG) [Ins]";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
		vehicleClass					= "OPTRE_Ins_Vehicle_class";
		side							= 0;
		crew							= "OPTRE_Ins_URF_Rifleman_BR";
		faction							= "OPTRE_Ins";
	};
	
	/// gauss hog
	
	class OPTRE_M12G1_LRV: OPTRE_M12_LRV
	{
		model							= "OPTRE_Vehicles\Warthog\Warthog_g.p3d";
		displayName						= "M12G1 Warthog (Gauss)";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget			= "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class RearView
			{
				renderTarget			= "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov 				= 0.7;
				};
			};
			class leftMirror
			{
				renderTarget			= "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class rightMirror
			{
				renderTarget			= "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget			= "rendertarget4";
				class CameraView1
				{
					pointPosition		= "PIP4_pos";
					pointDirection		= "PIP4_dir";
					renderQuality		= 2;
					renderVisionMode	= 2;
					fov					= 0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments		= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev					= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				gunAxis					= "Osa Hlavne";
				gunBeg					= "Usti hlavne";
				gunEnd					= "konec hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn 				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.2;
				maxVerticalRotSpeed		= 1.2;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				stabilizedInAxes 		= 3;
				soundServo[]			= {"",0.01,1};
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				memoryPointGun			= "machinegun";
				weapons[]				= {"OPTRE_M68_GAUSS"};
				magazines[] 			= {"OPTRE_20Rnd_ALIM_GAUSS_slugs","OPTRE_20Rnd_ALIM_GAUSS_slugs"};
				memoryPointGunnerOptics	= "gunnerview";
				gunnerOpticsModel 		= "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor	= 1;
				turretInfoType			= "RscWeaponZeroing";
				class Viewoptics: ViewOptics
				{
					/*initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;*/
                    opticsZoomMin 		= 0.25;
                    opticsZoomMax 		= 0.75;
                    opticsZoomInit 		= 0.75;
					visionMode[] 		= {"Normal","NVG","Ti"};
					thermalMode[] 		= {5,6};
				};
				castGunnerShadow		= 1;
				startEngine				= 0;
				enableManualFire		= 0;
				gunnerForceOptics		= 0;
				class ViewGunner:ViewOptics
				{
					initFov 			= 0.75;
					minFov 				= 0.375;
					maxFov 				= 1.1;
				};
			};
		};
	};
	class OPTRE_M12G1_LRV_black: OPTRE_M12G1_LRV
	{
		displayName						= "M12G1 Warthog (Gauss) [Black]";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class OPTRE_M12G1_LRV_tan: OPTRE_M12G1_LRV
	{
		displayName						= "M12G1 Warthog (Gauss) [Tan]";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class OPTRE_M12G1_LRV_snow: OPTRE_M12G1_LRV
	{
		displayName						= "M12G1 Warthog (Gauss) [Snow]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class OPTRE_M12G1_LRV_Marine: OPTRE_M12G1_LRV
	{
		displayName						= "M12G1 Warthog (Gauss) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	
	/// rocket hog
	
	class OPTRE_M12A1_LRV: OPTRE_M12_LRV
	{
		model							= "OPTRE_Vehicles\Warthog\warthog_AT.p3d";
		displayName						= "M12A1 Warthog (Rocket)";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget			= "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class RearView
			{
				renderTarget			= "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality		= 2;
					renderVisionMode 	= 0;
					fov					= 0.7;
				};
			};
			class leftMirror
			{
				renderTarget			= "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class rightMirror
			{
				renderTarget			= "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget			= "rendertarget4";
				class CameraView1
				{
					pointPosition		= "PIP4_pos";
					pointDirection		= "PIP4_dir";
					renderQuality		= 2;
					renderVisionMode	= 2;
					fov					= 0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments 		= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev					= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				gunAxis					= "Osa Hlavne";
				gunBeg					= "Usti hlavne";
				gunEnd					= "konec hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.2;
				maxVerticalRotSpeed		= 1.2;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				stabilizedInAxes 		= 3;
				soundServo[]			= {"",0.01,1};
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				memoryPointGun			= "machinegun";
				weapons[]				= {"OPTRE_102R_Turret"};
				magazines[] 			= {"OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets"};
				memoryPointGunnerOptics	= "gunnerview";
				gunnerOpticsModel 		= "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor	= 1;
				turretInfoType			= "RscWeaponZeroing";
				visionMode[] 			= {"Normal","NVG","Ti"};
				thermalMode[] 			= {0,1};
				castGunnerShadow		= 1;
				startEngine				= 0;
				enableManualFire		= 0;
				gunnerForceOptics		= 0;
				class ViewGunner:ViewOptics
				{
					initFov 			= 0.75;
					minFov 				= 0.375;
					maxFov 				= 1.1;
				};
			};
		};
	};
	class OPTRE_M12A1_LRV_black:OPTRE_M12A1_LRV
	{
		displayName						= "M12A1 Warthog (Rocket) [Black]";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		author 							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class OPTRE_M12A1_LRV_tan:OPTRE_M12A1_LRV
	{
		displayName						= "M12A1 Warthog (Rocket) [Tan]";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author							= "Article 2 Studios";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class OPTRE_M12A1_LRV_snow:OPTRE_M12A1_LRV
	{
		displayName						= "M12A1 Warthog (Rocket) [Snow]";
		author							= "Article 2 Studios";
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class OPTRE_M12A1_LRV_Marine:OPTRE_M12A1_LRV
	{
		displayName						= "M12A1 Warthog (Rocket) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	class OPTRE_M12A1_LRV_ins:OPTRE_M12A1_LRV
	{

		displayName						= "M12A1 Warthog (Rocket) [Ins]";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_co.paa"};
		vehicleClass					= "OPTRE_Ins_Vehicle_class";
		side							= 0;
		crew							= "OPTRE_Ins_URF_Rifleman_AR";
		faction							= "OPTRE_Ins";
	};
	
	/// AA hog
	
	class OPTRE_M12R_AA:OPTRE_M12_LRV
	{
		model							= "OPTRE_Vehicles\Warthog\warthog_AA.p3d";
		displayName 					= "M12R Warthog (AA)";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_ca.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget			= "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class RearView
			{
				renderTarget			= "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class leftMirror
			{
				renderTarget			= "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class rightMirror
			{
				renderTarget			= "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality		= 2;
					renderVisionMode	= 0;
					fov					= 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget			= "rendertarget4";
				class CameraView1
				{
					pointPosition		= "PIP4_pos";
					pointDirection		= "PIP4_dir";
					renderQuality		= 2;
					renderVisionMode	= 2;
					fov					= 0.5;
				};
			};
		};
		memoryPointLMissile 			= "Rocket_1";
		memoryPointRMissile 			= "Rocket_2";
		class Turrets:Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments		= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 1;
				maxElev					= 10;
				minElev					= -40;
				maxTurn					= 95;
				minTurn					= -95;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				//missileBeg			= "spicerakety"
				//missileEnd			= "konec rakety";
				gunAxis					= "Osa Hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.5;
				maxVerticalRotSpeed		= 1.5;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				soundServo[]			= {"",0.01,1};
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				turretInfoType			= "RscWeaponZeroing";
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				stabilizedInAxes 		= 3;
				weapons[]				= {"OPTRE_M79_MLRS"};
				magazines[] 			= {"OPTRE_6Rnd_65mm_rockets","OPTRE_6Rnd_65mm_rockets","OPTRE_6Rnd_65mm_rockets","OPTRE_6Rnd_65mm_rockets"};
				memoryPointGunnerOptics	= "gunnerview";
				memoryPointGunneroutOptics = "gunneroutview";
				memoryPointGun			= "machinegun";
				memoryPointLMissile 	= "Rocket_1";
				memoryPointRMissile 	= "Rocket_2";
				gunnerOpticsModel 		= "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor	= 1;
				castGunnerShadow		= 1;
				class Viewoptics: ViewOptics
				{
					/*initAngleX 		= 0;
					minAngleX 			= 0;
					maxAngleX 			= 0;
					initAngleY 			= 0;
					minAngleY 			= 0;
					maxAngleY 			= 0;
					initFov 			= 1;
					minFov 				= 0.3;
					maxFov 				= 1.2;*/
                    opticsZoomMin 		= 0.25;
                    opticsZoomMax 		= 0.75;
                    opticsZoomInit 		= 0.75;
					visionMode[] 		= {"Normal","NVG","Ti"};
					thermalMode[] 		= {5,6};
				};
				startEngine				= 0;
				enableManualFire		= 0;
				gunnerForceOptics		= 0;
				class ViewGunner:ViewOptics
				{
					initFov 			= 0.75;
					minFov 				= 0.375;
					maxFov 				= 1.1;
				};
			};
		};
	};
	class OPTRE_M12R_AA_black: OPTRE_M12R_AA
	{
		author							= "Article 2 Studios";
		displayName						= "M12R Warthog (AA) [Black]";
		crew							= "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_black_ca.paa"};
	};
	class OPTRE_M12R_AA_tan: OPTRE_M12R_AA
	{
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		displayName						= "M12R Warthog (AA) [Tan]";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_tan_ca.paa"};
	};
	class OPTRE_M12R_AA_snow: OPTRE_M12R_AA
	{
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		displayName						= "M12R Warthog (AA) [Snow]";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_snow_ca.paa"};
	};
	class OPTRE_M12R_AA_Marine: OPTRE_M12R_AA
	{
		displayName						= "M12R Warthog (AA) [Marine]";
		crew							= "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author							= "Article 2 Studios";
	};
	class OPTRE_M12R_AA_ins: OPTRE_M12R_AA
	{

		displayName						= "M12R Warthog (AA) [Ins]";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_ins_ca.paa"};
		vehicleClass					= "OPTRE_Ins_Vehicle_class";
		side							= 0;
		crew							= "OPTRE_Ins_URF_Rifleman_AR";
		faction							= "OPTRE_Ins";
	};
	
	/// apc hog
	
	class OPTRE_M12_FAV_APC: OPTRE_M12_FAV
	{
		displayName						= "M12 FAV Warthog (APC) [Ins]";
		author							= "Article 2 Studios";
		model							= "OPTRE_Vehicles\Warthog\Warthog_APC.p3d";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
		vehicleClass					= "OPTRE_Ins_Vehicle_class";
		side							= 0;
		crew							= "OPTRE_Ins_URF_Rifleman_AR";
		faction							= "OPTRE_Ins";
		transportSoldier				= 4;
		cargoAction[]					= {"passenger_apc_narrow_generic01","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_generic01_leanright"};
		cargoIsCoDriver[]				= {0,0};
		memoryPointsGetInCargo			= "pos cargo";
		memoryPointsGetInCargoDir		= "pos cargo dir";
		hideWeaponsCargo				= 1;
		cargoProxyIndexes[]				= {6,7,8,9};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction			= "vehicle_turnout_1";
				gunnerCompartments		= "Compartment2";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName				= "Hatch Gunner";
				proxyIndex				= 10;
				maxElev					= 25;
				minElev					= -20;
				maxTurn					= 65;
				minTurn					= -65;
				isPersonTurret			= 1;
			};
			class CargoTurret_02:CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments		= "Compartment3";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 11;
				maxElev					= 10;
				minElev					= -5;
				maxTurn					= -15;
				minTurn					= -55;
				isPersonTurret			= 1;
			};
		};
	};
	
	/// civ hog
	
	class OPTRE_M12_CIV: OPTRE_M12_FAV
	{
		displayName						= "AMG Hog (Gold)";
		author							= "Article 2 Studios";
		faction							= "CIV_F";
		side							= 3;
		crew 	= "C_man_1";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_gold_CO.paa",""};
		vehicleClass					= "Car";
	};
	class OPTRE_M12_CIV2:OPTRE_M12_CIV
	{
		displayName						= "AMG Hog (Striped)";
		hiddenSelections[]				= {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\Warthog\data\warthog_stripe_CO.paa",""};
	};
};