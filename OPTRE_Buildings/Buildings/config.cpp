class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Buildings
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
	class House_F;

	class Land_Apartment8A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment8A";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Apartment 1 Closed";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class Land_Apartment4A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment4A";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Apartment 2 Closed";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class Land_building01: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\building01";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Corner Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class Land_small_warehouse: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\small_warehouse";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Warehouse";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	/*class Land_Oni_Main: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Oni_Main";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="ONI HQ Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};*/
	
	/*class Land_Hex_Arco_main1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Hex_Arco_main1";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Escalator Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};*/
	
	/*class Land_Industrial_Office: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Industrial_Office";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Industrial Office";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};*/

	class Land_Building_sApartment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Building_sApartment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Apartment";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Building_LApartment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Building_LApartment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Large Apartment";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_OPTRE_GuardShack: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\OPTRE_GuardShack";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Guard Shack";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_OPTRE_GuardShack_Mil: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\OPTRE_GuardShack_Mil";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Guard Shack (Military)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_OPTRE_GuardShack_ONI: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\OPTRE_GuardShack_ONI";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Guard Shack (ONI)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class Land_City_Block_Area: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Area";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Area)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_City_Block_Piece: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Piece";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Piece)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_City_Block_Corner: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Corner";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Corner)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Garage_UnCovered: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Garage_UnCovered";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Parking Garage (Open)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	/*class Land_OPTRE_Garage_Covered: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\OPTRE_Garage_Covered";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Parking Garage (Closed)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};*/
	
	class Land_Urban_Building_01: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_01";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 01";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";

		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_trigger
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			
		};
		
		class UserActions															// Within this class are contained the definitions for the ingame side action menu options, avaliable to a player to use an animations.
		{
			class Open_Door_1															// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_1_trigger;								// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_1_A_slide') < 0.5);
				statement = "this animate [""Door_1_A_slide"",1]; this animate [""Door_1_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_1	
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_1_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_1_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_1_A_slide"",0]; this animate [""Door_1_B_slide"",0]";
			};
		};
	};

	class Land_Urban_Building_02: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_02";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 02";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
		
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_trigger
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			
			class Door_2_trigger
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			
		};
		
		class UserActions															// Within this class are contained the definitions for the ingame side action menu options, avaliable to a player to use an animations.
		{
			class Open_Door_1															// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_1_trigger;								// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_1_A_slide') < 0.5);
				statement = "this animate [""Door_1_A_slide"",1]; this animate [""Door_1_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_1	
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_1_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_1_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_1_A_slide"",0]; this animate [""Door_1_B_slide"",0]";
			};
		
			class Open_Door_2															// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_2_trigger;								// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_2_A_slide') < 0.5);
				statement = "this animate [""Door_2_A_slide"",1]; this animate [""Door_2_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_2_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_2_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_2_A_slide"",0]; this animate [""Door_2_B_slide"",0]";
			};
		};
	};
	
	class Land_Urban_Building_03: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_03";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 03";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
		
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_trigger
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			
			class Door_2_trigger
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			
		};
		
		class UserActions															// Within this class are contained the definitions for the ingame side action menu options, avaliable to a player to use an animations.
		{
			class Open_Door_1															// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_1_trigger;								// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_1_A_slide') < 0.5);
				statement = "this animate [""Door_1_A_slide"",1]; this animate [""Door_1_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_1	
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_1_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_1_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_1_A_slide"",0]; this animate [""Door_1_B_slide"",0]";
			};
		
			class Open_Door_2															// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_2_trigger;								// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_2_A_slide') < 0.5);
				statement = "this animate [""Door_2_A_slide"",1]; this animate [""Door_2_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_2_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_2_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_2_A_slide"",0]; this animate [""Door_2_B_slide"",0]";
			};
			
			class Open_Door_3														// User defined classname.
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";					
				displayName        = "Open Door";					// The text that appears in the side action menu.
				position           = Door_3_trigger;							// The named selection of the memory point in the memory lod of the model, which defines the position the player needs to be near for the side action menu to be come avaliable.
				radius             = 4;												// The minimum distance the player needs to be from the memory point for option to become avaliable in the side action menu.
				onlyForPlayer      = true;											// Can AI subordinates be ordered to use this animation, if yes then use the "false" parameter.
				
				// Condition is the code used to detirmined if the option to use this animation should be avaliable.
				// The animation classname from the model.cfg needs to be defined here, in this case "reardoor_right_anim".
				// The next parameter states that if the animation phase is "less than to 0.5" then the option to open the doors will be avaliable. 0 = closed, 1 = open.				
				condition = ((this animationPhase 'Door_3_A_slide') < 0.5);
				statement = "this animate [""Door_3_A_slide"",1]; this animate [""Door_3_B_slide"",1]";	// Once the condition is met this is what will happen.
			};

			class Close_Door_3
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName        = "Close Door";
				position           = Door_3_trigger;
				radius             = 4;
				onlyForPlayer      = true;
				condition = ((this animationPhase 'Door_3_A_slide') >= 0.5); // Checks if the door is currently open and not destroyed.
				statement = "this animate [""Door_3_A_slide"",0]; this animate [""Door_3_B_slide"",0]";
			};
		};
	};

	class Land_Urban_Building_04: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_04";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 04";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Urban_Building_05: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_05";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 05";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_I_Building: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\I_Building";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="I Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Round_Office_A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Round_Office_a";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Round Office (Part A)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Round_Office_B: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Round_Office_b";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Round Office (Part B)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
};
