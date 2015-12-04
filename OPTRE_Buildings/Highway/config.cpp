enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches
{
	class OPTRE_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	
	class OPTRE_Highway_Straight: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Straight";
		model = "\OPTRE_buildings\Highway\Highway_straight.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_bridge: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Bridge";
		model = "\OPTRE_buildings\Highway\Highway_bridge.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_ramp_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Ramp A";
		model = "\OPTRE_buildings\Highway\Highway_ramp_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turnlane_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turnlane A";
		model = "\OPTRE_buildings\Highway\Highway_turnlane_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_Highway_ramp_b: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Ramp B";
		model = "\OPTRE_buildings\Highway\Highway_ramp_b.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turnlane_b: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turnlane B";
		model = "\OPTRE_buildings\Highway\Highway_turnlane_b.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turn_left: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turn Left";
		model = "\OPTRE_buildings\Highway\Highway_turn_left.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_Highway_turn_right: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turn Right";
		model = "\OPTRE_buildings\Highway\Highway_turn_Right.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_gate_A: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Gate A";
		model = "\OPTRE_buildings\Highway\Highway_gate_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class AnimationSources
		{
			class gate_door_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 20;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class gate_door_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 20;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 62;	
				displayName = "Open Gate";
				displayNameDefault = "Open Gate";
				textToolTip = "Open Gate";
				position = "switches";
				radius = 10;
				priority = 2;
				onlyForPlayer = 1;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) AND (this animationPhase ""Door_2_rot"" < 0.5))";
				statement = "this animate [""lock_1_rot"",1]; this animate [""lock_2_rot"",1];this animate [""Door_1_rot"",1]; this animate [""Door_2_rot"",1];";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 63;
				displayName = "Close Gate";
				displayNameDefault = "Close Gate";
				textToolTip = "Close Gate";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5) AND (this animationPhase ""Door_2_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]; this animate [""Door_2_rot"",0];this animate [""lock_1_rot"",0]; this animate [""lock_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
		class OPTRE_Highway_gate_house_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Gate House A";
		model = "\OPTRE_buildings\Highway\Highway_gate_house_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";

	};
};

