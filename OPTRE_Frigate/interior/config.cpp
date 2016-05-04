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
	
	class OPTRE_Cryo_tube: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Cryo Tube";
		model = "\OPTRE_frigate\interior\cryo_tube.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Objects";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Barracks_bay: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Barracks Bay";
		model = "\OPTRE_frigate\interior\barracks_bay.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_hallway_wide_a: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway A (Wide)";
		model = "\OPTRE_frigate\interior\hallway_wide_a.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_hallway_X_a: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Hallway X Intersection";
		model = "\OPTRE_frigate\interior\hallway_X_a.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
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
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		class AnimationSources
		{
			class Door_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 3;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class Door_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 3;		/// how long does it take to change value from 0 to 1 (or vice versa)
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
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "switches";
				radius = 2;
				priority = 2;
				onlyForPlayer = 1;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) AND (this animationPhase ""Door_2_rot"" < 0.5))";
				statement = "this animate [""Door_1_rot"",1]; this animate [""Door_2_rot"",1]";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 63;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5) AND (this animationPhase ""Door_2_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]; this animate [""Door_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
};