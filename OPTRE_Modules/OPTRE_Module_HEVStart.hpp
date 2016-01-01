	class Module_OPTRE_HEVStart: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "HEV Start"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_HEV";
		function = "OPTRE_fnc_ModuleHEVStart";// Name of function triggered once conditions are met
		functionPriority = 1;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		
		// Module arguments
		class Arguments
		{
			class LaunchDir
  			{
				displayName = "Launch Direction"; // Argument label
				description = "A number between 0 and 360 that determines the direction the HEVs are launch at";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class LaunchDirSpeed
  			{
				displayName = "Launch Speed Direction"; // Argument label
				description = "A number that determines how fast the HEVs will travel in the launch direction.";// Tooltip description
				defaultValue = "3500"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class LaunchSpeedDownORUp
  			{
				displayName = "Launch Speed Down"; // Argument label
				description = "A negative number that will determine how fast the HEVs will travel towards the ground";// Tooltip description
				defaultValue = "-15500"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};		
			class FrigateClassName
			{
				displayName = "Launch Ship ClassName"; // Argument label
				description = "A classname of the object players will appear to be launched from, leave blank for none";// Tooltip description
				defaultValue = "OPTRE_Frigate_Final_Dawn"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"			
			};
			class FrigateAngle
			{
				displayName = "Launch Ship Direction"; // Argument label
				description = "A number that rotates the ship spawned (if spawned) by the Launch Ship classname field";// Tooltip description
				defaultValue = "-90"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"			
			};
			class Start
  			{
				displayName = "Start Height"; // Argument label
				description = "The height at which the units is HEV is placed on the missions start";// Tooltip description
				defaultValue = "10000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class Atmosphere 
  			{
				displayName = "Atmosphere Height"; // Argument label
				description = "The height at which atmospheric effects start to have such as re-entry and camera shake";// Tooltip description
				defaultValue = "8000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class ReEntryEnd 
  			{
				displayName = "Re-entry Effects End Height"; // Argument label
				description = "The height at which atmospheric errantry effects end cam shake continues after this point however";// Tooltip description
				defaultValue = "7000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class Chute
  			{
				displayName = "Chute Deployment Height"; // Argument label
				description = "The height at which the HEV chutes will open, the minimum number is 800";// Tooltip description
				defaultValue = "1000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class HEV_Control 
  			{
				displayName = "Allow Player Control";
				description = "Can the player control their HEV with the WASD+ER keys after their chute has deployed";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Do Not Allow player to control HEV";	value = 0; default = 0;}; 
					class n2	{name = "Allow player to control the HEV";	value = 0; default = 0;}; 

				};
			};
			class HEV_Respawn 
  			{
				displayName = "HEV Respawn";
				description = "Will the unit respawn into a HEV and if so where.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Do Not Respawn To HEV";	value = 2; default = 1;}; 
					class n2	{name = "Respawn in HEV near site of death";	value = 1;}; 
					class n3	{name = "Respawn in HEV near group leader";	value = 2;}; 
					class n4	{name = "Respawn where unit started";	value = 2;}; 
				};
			};				
			class RespawnRadomised
  			{
				displayName = "Respawn Randomisation"; // Argument label
				description = "Draws a circle around a units respawn point in which the HEV will be randomly placed";// Tooltip description
				defaultValue = "100"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
		};	
		
		class ModuleDescription
		{
			description[] = {
				"Any unit synchronised to this module will will start on a HEV.";
			};
		};
	};