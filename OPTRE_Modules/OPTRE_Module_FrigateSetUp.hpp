	class Module_OPTRE_UNSCFrigateSetUp: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Frigate Computer System"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_Frigate";
		function = "OPTRE_fnc_FrigateComputerSystemInit";// Name of function triggered once conditions are met
		functionPriority = 1;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		is3DEN = 1;
		
		// Module arguments
		class Arguments
		{
		
		
			class Pelican_Unarmed_Classname
  			{
				displayName = "D77H-TCI Stock Paint";
				description = "[Pelican] The D77H-TCI is an unarmed variant of the Pelican Drop Ship, this option determines what kind of camouflage pattern this frigates virtual stock will have.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Paint Scheme: Black";	value = "OPTRE_Pelican_unarmed_black"; }; 
					class n2	{name = "Paint Scheme: Green"; value = "OPTRE_Pelican_unarmed_green";}; 
					class n3	{name = "Paint Scheme: Green Marine";	value = "OPTRE_Pelican_unarmed_marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Black";	value = "OPTRE_Pelican_unarmed_tan";}; 
				};
			};		
			class Pelican_Unarmed_Number
  			{
				displayName = "D77H-TCI Stock"; // Argument label
				description = "A number determines how many D77H-TCI the ship has in in its virtual stock.";// Tooltip description
				defaultValue = "3"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			
			
			class Pelican_Armed_Classname
			{
				displayName = "D77H-TCI/AV Stock Paint";
				description = "[Pelican (Cannon + Rockets)] The D77H-TCI/AV is a armed variant of the Pelican Drop Ship, this option determines what kind of camouflage pattern this frigates virtual stock will have.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Paint Scheme: Black";	value = "OPTRE_Pelican_armed_black"; }; 
					class n2	{name = "Paint Scheme: Green"; value = "OPTRE_Pelican_armed_green";}; 
					class n3	{name = "Paint Scheme: Green Marine";	value = "OPTRE_Pelican_armed_marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Black";	value = "OPTRE_Pelican_armed_tan";}; 
				};
			};		
			class Pelican_Armed_Number
  			{
				displayName = "D77H-TCI/AV Stock"; // Argument label
				description = "A number determines how many D77H-TCI/AV the ship has in in its virtual stock.";// Tooltip description
				defaultValue = "3"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			
			
			class Falcon_Classname
			{
				displayName = "UH-144 Stock Paint";
				description = "[Falcon (Cannon)] The UH-144 is a armed helicopter, this option determines what kind of camouflage pattern this frigates virtual stock will have.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Paint Scheme: Black";	value = "OPTRE_UNSC_falcon_black"; }; 
					class n2	{name = "Paint Scheme: Green"; value = "OPTRE_UNSC_falcon_green"; default = 1;}; 
					class n3	{name = "Paint Scheme: Green Marine";	value = "OPTRE_UNSC_falcon_snow"; }; 
					class n4	{name = "Paint Scheme: Black";	value = "OPTRE_UNSC_falcon_tan";}; 
				};
			};		
			class Falcon_Number
  			{
				displayName = "UH-144 Stock"; // Argument label
				description = "A number determines how many UH-144 the ship has in in its virtual stock.";// Tooltip description
				defaultValue = "3"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
	
			class Warthog
			{
				displayName = " M12FAV Stock Paint";
				description = "[Warthog (4 Seat)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12_FAV"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12_FAV_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine";	value = "OPTRE_M12_FAV_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow";	value = "OPTRE_M12_FAV_snow";}; 
					class n5	{name = "Paint Scheme: Tan";	value = "OPTRE_M12_FAV_tan";}; 
				};
			};		
			class Warthog_Number
  			{
				displayName = "M12FAV Stock Number"; // Argument label
				description = "A number that determines how many the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			
			
			class WarthogMG: Warthog
			{
				displayName = "M12LRV Stock Paint";
				description = "[Warthog (MG)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12_LRV"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12_LRV_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M12_LRV_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M12_LRV_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M12_LRV_tan";}; 
				};
			};		
			class WarthogMG_Number
  			{
				displayName = "M12FAV Stock Number"; // Argument label
				description = "A number that determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			

			class WarthogRocket: Warthog
			{
				displayName = "M12A1LRV Stock Paint";
				description = "[Warthog (Rocket)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12A1_LRV"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12A1_LRV_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M12A1_LRV_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M12A1_LRV_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M12A1_LRV_tan";}; 
				};
			};		
			class WarthogRocket_Number
  			{
				displayName = "M12A1LRV Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			
			/*
			class WarthogRocket: Warthog
			{
				displayName = "M12G1LRV Stock Paint";
				description = "[Warthog (Gauss)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12G1_LRV"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12G1_LRV_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M12G1_LRV_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M12G1_LRV_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M12G1_LRV_tan";}; 
				};
			};		
			class WarthogRocket_Number
  			{
				displayName = "M12G1LRV Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			*/
			
			class WarthogGauss: Warthog
			{
				displayName = "M12G1LRV Stock Paint";
				description = "[Warthog (Gauss)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12G1_LRV"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12G1_LRV_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M12G1_LRV_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M12G1_LRV_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M12G1_LRV_tan";}; 
				};
			};		
			class WarthogGauss_Number
  			{
				displayName = "M12G1LRV Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			
			
			class WarthogAA: Warthog
			{
				displayName = "M12R Stock Paint";
				description = "[Warthog (AA)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M12R_AA"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M12R_AA_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M12R_AA_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M12R_AA_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M12R_AA_tan";}; 
				};
			};		
			class WarthogAA_Number
  			{
				displayName = "M12R Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			
			
			
			class WarthogU: Warthog
			{
				displayName = "M813TT Stock Paint";
				description = "[Warthog (8 Seat)] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_M813_TT"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_M813_TT_black"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_M813_TT_Marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_M813_TT_snow";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_M813_TT_tan";}; 
				};
			};		
			class WarthogU_Number
  			{
				displayName = "M813TT Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			
			
			class Mongoose: Warthog
			{
				displayName = "M274 Stock Paint";
				description = "[Mongoose] This option determines what kind of camouflage pattern this frigates virtual stock will have.";
				class values
				{
					class n1	{name = "Paint Scheme: Green";	value = "OPTRE_Mongoose_Black_F"; }; 
					class n2	{name = "Paint Scheme: Black"; value = "OPTRE_Mongoose_Green_F"; }; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "OPTRE_Mongoose_Marine_F"; default = 1;}; 
					class n4	{name = "Paint Scheme: Snow"; value = "OPTRE_Mongoose_Snow_F";}; 
					class n5	{name = "Paint Scheme: Tan"; value = "OPTRE_Mongoose_Tan_F";}; 
				};
			};		
			class Mongoose_Number
  			{
				displayName = "M274 Stock Number"; // Argument label
				description = "A that number determines how may the ship has in its virtual stock.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};	
				
		};	
		
		class ModuleDescription
		{
			description = "Synchronising this module to a frigate will set up a frigates. Internal sections of the ship will be spawned and the frigates computer system will be initialized. This module also determines a ships virtual stock.";
			sync[] = {"OPTRE_Frigate_Final_Dawn","OPTRE_Frigate_Final_Dawn"};
			position = 0;
			direction = 0;
						
			class OPTRE_Frigate_Final_Dawn {
				description = "The Final Dawn is a UNSC Charon Class Light Frigate. The Frigate when synchronised to a Module_OPTRE_UNSCFrigateSetUp module contains hundreds of meters of walk-able corridors as well as dozens of accessible rooms. The ships computer system requires in game security cards items to assess many of the doors and systems. The Frigates is currently still a W.I.P. when complete the computer systems will allow players to deploy HEV, Order Vehicles, Fire Missiles and much more.";
				duplicate = 1;
				position = 1;
				direction = 1;
				optional = 0;
			};			
		};
	};