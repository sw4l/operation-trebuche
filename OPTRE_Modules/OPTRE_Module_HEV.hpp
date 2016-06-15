	class Module_OPTRE_HEV: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "HEV Module"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_HEV";
		function = "OPTRE_fnc_ModuleHEV";// Name of function triggered once conditions are met
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
			class shipDeployment
  			{
				displayName = "Deployment Mode";
				description = "DEPLOYMENT MODE CHANGES WHAT THE PLAYER WILL SEE BEFORE BEEN DROPPED.";
				defaultValue = "Frigate Lowering Arm"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Deploy From Frigate Over Modules Location"; value = "Frigate Lowering Arm"; default = 1;}; 
					class n2	{name = "Deployed HEV Units Current Location"; value = "No Frigate";}; 
				};
			};	
			class LaunchDelay
  			{
				displayName = "Count Down Timer"; // Argument label
				description = "A NUMBER IN SECONDS BEFORE HEVS DROP (DEFAULTS TO 30 IN MP IF LESS THAN 30). A LARGER VALUE MAY INCREASE PERFORMANCE.";// Tooltip description
				defaultValue = "5"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class randomXYVelocity
  			{
				displayName = "Randomised X/Y Velocity"; // Argument label
				description = "RANDOMISED TRAVEL DIRECTION ALONG THE X/Y VALUE AFTER LAUNCH THIS VALUE SHOULD ALWAYS BE POSITIVE (SET TO 0 FOR NONE).";// Tooltip description
				defaultValue = "0.1"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			class launchSpeed
  			{
				displayName = "Down Velocity On Launch"; // Argument label
				description = "A NEGATIVE VALUE IN METERS PER SECOND THAT DETERMINES HOW FAST THE HEV IS LAUNCHED TOWARDS THE GROUND THIS VALUE SHOULD ALWAYS BE NEGATIVE. SOMETIMES THIS VALUE IS NOT APPLYED TO PLAYERS CONSITANTLY SET TO -1 TO GET THE SAME RESULT EVERYTIME.";// Tooltip description
				defaultValue = "-250"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			class manualControl
  			{
				displayName = "Player Control Of HEV";
				description = "THE AMOUNT OF CONTROL A PLAYER HAS OVER THEIR HEV (FULL CONTROL WILL BE ADDED IN FUTURE VERSIONS OF OPTRE).";
				defaultValue = 1; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Players Have No Control"; value = 0; }; 
					class n2	{name = "Players Can Rotate HEV"; value = 1; default = 1;}; 
					//class n3    {name = "Players Have Full HEV Control"; value = 2;};				
				};
			};
			
			
			class startHeight
  			{
				displayName = "STAGE1: Start Height"; // Argument label
				description = "THE HIGHT IN METERS ABOVE THE GROUND THE HEVS WILL START AT. THIS WILL ALSO BE THE HEIGHT ANY SPACE SHIP SPAWNS AT. THIS VALUE SHOULD BE AT LEAST 1000M HIGHER THAN THE NEXT STAGE USED.";// Tooltip description
				defaultValue = "5000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class hevDropArmtmosphereStartHeight
  			{
				displayName = "STAGE2A: Atmospheric Entry Height"; // Argument label
				description = "THE HIGHT IN METERS ABOVE THE GROUND RE-ENTRY EFFECTS WILL START (SET TO -1 FOR STAGE TO BE SKIPPED). THIS VALUE SHOULD BE AT LEAST 1000M LOWER THAT STAGE 1.";// Tooltip description
				defaultValue = "3000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class hevDropArmtmosphereEndHeight
  			{
				displayName = "STAGE2B: End Entry Height"; // Argument label
				description = "THE HIGHT IN METERS ABOVE THE GROUND RE-ENTRY EFFECTS END (IGNORED IF STAGE 2A SET TO -1). IF USED THIS VALUE SHOULD BE AT LEAST 1M LOWER THAN STAGE 2A.";// Tooltip description
				defaultValue = "2000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class chuteDeployHeightHeight
  			{
				displayName = "STAGE3A: Chute Deployment Height"; // Argument label
				description = "THE HIGHT IN METERS ABOVE THE GROUND HEVS WILL START TO OPEN THEIR CHUTES. THIS VALUE SHOULD BE HIGH ENOUGH TO ALLOW ALL CHUTE TO OPEN AND DETACH (EACH UNIT SYNCED ADDS ~1 SECONDS) AND AT LEAST 1M BELLOW STAGE 2B (IF USED).";// Tooltip description
				defaultValue = "1000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			class chuteDetachHeight
  			{
				displayName = "STAGE3B: Chute Detach Height"; // Argument label
				description = "THE HIGHT IN METERS ABOVE THE GROUND HEVS WILL DETACHED THEIR CHUTES. THIS VALUE SHOULD BE HIGH ENOUGH TO ALLOW ALL CHUTE TO DETACH (EACH UNIT SYNCED ADDS ~1 SECONDS) AND AT LEAST 1M BELLOW STAGE 3A.";// Tooltip description
				defaultValue = "500"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};		
			class boasterHeight
  			{
				displayName = "STAGE4: Booster Up Height"; // Argument label
				description = "THIS STAGE IS WIP AND NOT AVALIBLE ANY INPUT WILL NOT BE USED";// Tooltip description
				defaultValue = "100"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class deleteFrigate
  			{
				displayName = "Delete Ship";
				description = "IF A FRIGATE IS SPAWNED BY THIS MODULE SHOULD IT BE DELETED AFTER HEVS HAVE LANDED?";
				defaultValue = 1; // Default text filled in the input box
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Delete Ship"; value = 1; default = 1}; 
					class n2	{name = "Dont Delete Ship"; value = 0;}; 			
				};
			};
			class deleteChutes 
			{
				displayName = "Delete Chutes After Detach";
				description = "DELETES THE CHUTES AFTER THEY ARE DETACHED IF TRUE. IF FALSE THE CHUTES ARE HANDLED BY THE HEV CLEAN UP MODULE.";
				defaultValue = 0; // Default text filled in the input box
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{	
					class n1	{name = "Add Chutes To HEV CleanUp Module"; value = 0; default = 1}; 	
					class n2	{name = "Delete Chutes On Detach"; value = 1;}; 			
				};			
			};
			class deleteHEVafter
  			{
				displayName = "HEVs Can Be Delete After"; // Argument label
				description = "TIME IN SECONDS AFTER HEVS CREATETION THEY CAN BE DELETED. ALL HEVS ARE ADDED TO THE HEV CLEAN UP MODULE, THOUGH NONE ARE DELETE UNLESS THE IDEAL MAX HEV OPTION ON THE HEV MODULE IS SET TO A VALUE HIGHER THAN -1.";// Tooltip description
				defaultValue = "600"; // Default text filled in the input box
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