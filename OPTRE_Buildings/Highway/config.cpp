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
		class OPTRE_Highway_gate_house_b: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Gate House B";
		model = "\OPTRE_buildings\Highway\gate_house.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		ladders[] =

		{
			{
				"start1",
				"end1"
			}
			{
				"start2",
				"end2"
			}
			{
				"start3",
				"end3"
			}
		};
		class AnimationSources
		{
			class source_door_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_door_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_door_3				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_door_4				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_door_5				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_lift				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class source_gate				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 6;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class door_1_open
			{
				userActionID = 66;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_1switch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_1_a_rot"" < 0.5) AND (this animationPhase ""Door_1_b_rot"" < 0.5))";
				statement = "this animate [""Door_1_a_rot"",1]; this animate [""Door_1_b_rot"",1];";
				animPeriod = 1;
            };
            class door_1_close: door_1_open
            {
				userActionID = 67;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_1_a_rot"" > 0.5) AND (this animationPhase ""Door_1_b_rot"" > 0.5))";
				statement = "this animate [""Door_1_a_rot"",0]; this animate [""Door_1_b_rot"",0];";
				animPeriod = 1;
            };
			class door_2_open
			{
				userActionID = 66;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_2switch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_2_a_rot"" < 0.5) AND (this animationPhase ""Door_2_b_rot"" < 0.5))";
				statement = "this animate [""Door_2_a_rot"",1]; this animate [""Door_2_b_rot"",1];";
				animPeriod = 1;
            };
            class door_2_close: door_2_open
            {
				userActionID = 67;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_2_a_rot"" > 0.5) AND (this animationPhase ""Door_2_b_rot"" > 0.5))";
				statement = "this animate [""Door_2_a_rot"",0]; this animate [""Door_2_b_rot"",0];";
				animPeriod = 1;
            };
			class door_3_open
			{
				userActionID = 68;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_3switch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_3_a_rot"" < 0.5) AND (this animationPhase ""Door_3_b_rot"" < 0.5))";
				statement = "this animate [""Door_3_a_rot"",1]; this animate [""Door_3_b_rot"",1];";
				animPeriod = 1;
            };
            class door_3_close: door_3_open
            {
				userActionID = 69;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_3_a_rot"" > 0.5) AND (this animationPhase ""Door_3_b_rot"" > 0.5))";
				statement = "this animate [""Door_3_a_rot"",0]; this animate [""Door_3_b_rot"",0];";
				animPeriod = 1;
            };
			class door_4_open
			{
				userActionID = 68;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_4switch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_4_a_rot"" < 0.5) AND (this animationPhase ""Door_4_b_rot"" < 0.5))";
				statement = "this animate [""Door_4_a_rot"",1]; this animate [""Door_4_b_rot"",1];";
				animPeriod = 1;
            };
            class door_4_close: door_4_open
            {
				userActionID = 69;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_4_a_rot"" > 0.5) AND (this animationPhase ""Door_4_b_rot"" > 0.5))";
				statement = "this animate [""Door_4_a_rot"",0]; this animate [""Door_4_b_rot"",0];";
				animPeriod = 1;
            };
			class door_5_open
			{
				userActionID = 70;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_5switch";
				radius = 3;
				priority = 1;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_5_a_rot"" < 0.5) AND (this animationPhase ""Door_5_b_rot"" < 0.5))";
				statement = "this animate [""Door_5_a_rot"",1]; this animate [""Door_5_b_rot"",1];";
				animPeriod = 1;
            };
            class door_5_close: door_5_open
            {
				userActionID = 71;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 1;
				condition = "((this animationPhase ""Door_5_a_rot"" > 0.5) AND (this animationPhase ""Door_5_b_rot"" > 0.5))";
				statement = "this animate [""Door_5_a_rot"",0]; this animate [""Door_5_b_rot"",0];";
				animPeriod = 1;
            };
			class lift_down
			{
				userActionID = 72;	
				displayName = "Lift Down";
				displayNameDefault = "Lift Down";
				textToolTip = "Lift Down";
				position = "liftswitch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""lift_rot"" < 0.5))";
				statement = "this animate [""lift_rot"",1];";
				animPeriod = 1;
            };
            class lift_up: lift_down
            {
				userActionID = 73;
				displayName = "Lift Up";
				displayNameDefault = "Lift Up";
				textToolTip = "Lift Up";
				priority = 2;
				condition = "(this animationPhase ""lift_rot"" > 0.5)";
				statement = "this animate [""lift_rot"",0]; ";
				animPeriod = 1;
            };
			class gate_up
			{
				userActionID = 74;	
				displayName = "Gate Up";
				displayNameDefault = "Gate Up";
				textToolTip = "Gate Up";
				position = "gateswitch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "(this animationPhase ""gate_rot"" < 0.5)";
				statement = "this animate [""gate_rot"",1];";
				animPeriod = 1;
            };
            class gate_down: gate_up
            {
				userActionID = 75;
				displayName = "Gate Down";
				displayNameDefault = "Gate Down";
				textToolTip = "Gate Down";
				priority = 2;
				condition = "(this animationPhase ""gate_rot"" > 0.5)";
				statement = "this animate [""gate_rot"",0]; ";
				animPeriod = 1;
            };
		};
		actionBegin1 = door_2_open;
		actionEnd1 = door_2_open;
		actionBegin2 = door_1_open;
		actionEnd2 = door_1_open;
		actionBegin3 = door_3_open;
		actionEnd3 = door_3_open;
		actionBegin4 = door_4_open;
		actionEnd4 = door_4_open;
		actionBegin5 = door_5_open;
		actionEnd5 = door_5_open;
		numberOfDoors = 5;
	};
};

