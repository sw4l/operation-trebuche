	class Module_OPTRE_ODSTDrop: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Drop AI ODST Module"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_EditorSupport";
		function = "OPTRE_fnc_ModuleODSTHEV";// Name of function triggered once conditions are met
		functionPriority = 99;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 1;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		
		// Module arguments
		class Arguments
		{
			class ODST_Man_1
  			{
				displayName = "Team Leader";
				description = "Class of ODST to be inserted via HEV.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n0	{name = "None"; value = "none";}; 
					class n1	{name = "Random"; value = "random"; default = 1;}; 
					//class n2	{name = "ODST Medic"; value = "OPTRE_UNSC_ODST_Soldier_TeamLeader";}; 
					class n3	{name = "ODST Scout"; value = "OPTRE_UNSC_ODST_Soldier_Scout";};
					class n4	{name = "ODST Scout AT"; value = "OPTRE_UNSC_ODST_Soldier_Scout_AT";}; 
					class n5 	{name = "ODST AR"; value = "OPTRE_UNSC_ODST_Soldier_Rifleman_AR";};
					class n6	{name = "ODST Battle Rifle"; value = "OPTRE_UNSC_ODST_Soldier_Rifleman_BR";}; 
					class n7	{name = "ODST Rifle AT"; value = "OPTRE_UNSC_ODST_Soldier_Rifleman_AT";}; 
					class n8	{name = "ODST LMG"; value = "OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman";}; 
					class n9	{name = "ODST Marksman"; value = "OPTRE_UNSC_ODST_Soldier_Marksman";}; 
					class n10 	{name = "ONI Operative"; value = "OPTRE_UNSC_ONI_Soldier_Operative";};
					class n11   {name = "ODST Scout Sniper"; value = "OPTRE_UNSC_ODST_Soldier_Scout_Sniper";};
					class n12 	{name = "ODST Paramedic"; value = "OPTRE_UNSC_ODST_Soldier_Paramedic";};
					class n13	{name = "ODST Demo Expert"; value = "OPTRE_UNSC_ODST_Soldier_DemolitionsExpert";};
				};
			};	
			class ODST_Man_2: ODST_Man_1
  			{
				displayName = "Team Member";
			};
			class ODST_Man_3: ODST_Man_1
  			{
				displayName = "Team Member";
			};
			class ODST_Man_4: ODST_Man_1
  			{
				displayName = "Team Member";
			};
			class ODST_Man_5: ODST_Man_1
  			{
				displayName = "Squad Leader";
			};
			class ODST_Man_6: ODST_Man_1
  			{
				displayName = "Team Member";
			};
			class ODST_Man_7: ODST_Man_1
  			{
				displayName = "Team Member";
			};
			class ODST_Man_8: ODST_Man_1
  			{
				displayName = "Team Member";
			};
 			class waypoints
  			{
				displayName = "WayPoints"; // Argument label
				description = "An array or marker position that the groups spawned will follow once on the ground.";// Tooltip description
				defaultValue = "MapMarkerName1,MapMarkerName2,Map_Marker_Name_Three";
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class finalWaypoint 
  			{
				displayName = "Final Waypoint Task";
				description = "Side Of Pelican, WEST or EAST";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Cycle Back To First Waypoint"; value = "cycle"; default = 1; }; 
					class n2	{name = "Garrison Near Final Waypoint"; value = "garrison";}; 
					class n3    {name = "Patrol Around Final Waypoint"; value = "patrol ";};						
				};
			};				
		};	
		
		class ModuleDescription
		{
			description[] = {"This module will spawn a ODST team in HEVs 3000m above the position this module is placed. Teams spawned can also be given waypoints and end waypoint commands such as garrison vehicles or patrol area.";};
			sync[] = {"EmptyDetector"};
			position = 1;
			direction = 0;
						
			class EmptyDetector {
				duplicate = 1;
				position = 0;
				direction = 0;
				optional = 1;
			};
			
		};
	};