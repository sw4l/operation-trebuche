	class Module_OPTRE_HEVCleanUp: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "HEV Clean Up Module"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_HEV";
		function = "OPTRE_fnc_ModuleHEVCleanUp";// Name of function triggered once conditions are met
		functionPriority = 99;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 1;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		is3DEN = 0;
		
		// Module arguments
		class Arguments
		{			
			class Junk
  			{
				displayName = "Max HEV Rubbish On Map"; // Argument label
				description = "A NUMBER THAT DETERMINES HOW MANY HEV DOORS AND CHUTES CAN BE ON THE MAP AT ONCE BEFORE SOME ARE DELETED. HEVS THEMSELVES ARE NOT ADDED TO THIS MODULE, OTHER OBJECTS CAN BE ADDED BY SCRIPTING USING OPTRE_Fnc_CleanUp. SET THE NUMBER TO -1 FOR NO OBJECTS TO BE DELETED (THIS OPTION SETS A PUBLIC VARIABLE CALLED OPTRE_CLEANUPMAXRUBISH).";// Tooltip description
				defaultValue = "-1"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};		
			class HEV
  			{
				displayName = "Ideal Max HEVs On Map"; // Argument label
				description = "IDEALLY THE MAX NUMBER OF HEVS CREATED BY THE OPTRE HEV MODULES / OPTRE FUNCTIONS ALLOWED ON THE MAP BEFORE BEEN DELETED. SETTING THIS VALUE TO -1 WILL MEAN NO HEVS ARE DELETED. HEVS WILL BE GIVEN AN ABANDOMENT TIME, THIS TIME MUST ELAPES BEFORE THE HEV IS DELETED, THE HEV MUST ALSO BE EMPTY OF PLAYERS / AI. THE CLEAN UP FUNCTION IS ONLY RUN WHEN NEW ITEMS ARE ADDED, TO OPTRE_fnc_HEVCleanUp. CALL: 0 = [] call OPTRE_fnc_HEVCleanUp MANUALLY TO TRY AND DELETE SOME OTHERWISE.";// Tooltip description
				defaultValue = "-1"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
		};	
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Short module description"; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
	 
			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
				position = 1; // Position is taken into effect
				direction = 1; // Direction is taken into effect
				optional = 1; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				synced[] = {"BLUFORunit","AnyBrain"}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
			class BLUFORunit
			{
				description = "Short description";
				displayName = "Any BLUFOR unit"; // Custom name
				icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
				side = 1; // Custom side (will determine icon color)
			};
		};
		
	};