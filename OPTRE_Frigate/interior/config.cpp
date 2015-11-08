class CfgPatches
{
	class OPTRE_Frigate
	{
		units[]										= {"OPTRE_Frigate_Final_Dawn","OPTRE_Frigate_Console","OPTRE_Frigate_M910_Turret"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_static_f"};
	};
};

class CfgVehicles
{
	class OPTRE_Objects_Base;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitGun;
					class HitTurret: HitGun
					{
						class DestructionEffects
						{
							class Smoke;
						};
					};
				};
			};
		};
		class Wounds;
		class HitPoints
		{
			class HitEngine;
			class HitHull;
			class HitTurret;
			class HitGun;
			class HitLTrack;
			class HitRTrack;
			class HitBody;
		};
		class ViewPilot;
		class CargoLight;
		class Reflectors;
		class UserActions;
	};
	
	class OPTRE_Cryo_tube: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Cryo Tube";
		model = "\OPTRE_frigate\interior\cryo_tube.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_Cryo_bay: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Cryo Bay";
		model = "\OPTRE_frigate\interior\cryo_bay.p3d";
		author = "Article 2 Studios";
	};
		class OPTRE_hallway_a: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway A";
		model = "\OPTRE_frigate\interior\hallway_a.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_hallway_b: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway B";
		model = "\OPTRE_frigate\interior\hallway_B.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_hallway_T_a: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway T intersection A";
		model = "\OPTRE_frigate\interior\hallway_T_a.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_hallway_Turn_45: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway Turn 45";
		model = "\OPTRE_frigate\interior\hallway_Turn_45.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_hallway_Turn_90: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway Turn 90";
		model = "\OPTRE_frigate\interior\hallway_Turn_90.p3d";
		author = "Article 2 Studios";
	};
		class OPTRE_hallway_door_a: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway Door A";
		model = "\OPTRE_frigate\interior\hallway_door_a.p3d";
		author = "Article 2 Studios";
	};
};