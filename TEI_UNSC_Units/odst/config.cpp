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

class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_UNSC_Units_ODST
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class Extended_PreInit_EventHandlers //This is a CBA configuration for the HUD
{
	TEI_UNSC_ODST_HUD_Init 																		= "[] execVM '\TEI_UNSC_Units\ODST\scripts\ODST_HUD_init.sqf'";
};

class RscStdText //More HUD Stuff
{
	type																						= 0;
	idc																							= -1;
	style																						= 2;
	colorBackground[]																			= {1,1,1,1};
	colorText[]																					= {1,1,1,1};
	font																						= "puristaMedium";
	size																						= 1;
};

class RscTitles //Even More HUD Stuff
{
	titles[] 																					= {"TEI_UNSC_ODST_HUD"};
	class TEI_UNSC_ODST_HUD
	{
		idd																						= -1; // ID ... always -1
		movingEnable 																			= false; // always false
		duration																				= 999999999; // time of the effect (in seconds)
		name 																					= "TEI_UNSC_ODST_HUD"; // name in editor
		sizeEx 																					= 256;// Size required for ARMA
		controls[]																				= {"TEI_UNSC_ODST_HUD_class"};
		fadein																					= 0;
		fadeout																					= 0;

		class TEI_UNSC_ODST_HUD_class : RscStdText //RscPicture // For pictures
		{
			style																				= 48; 
			x 																					= safeZoneXAbs; 
			y 																					= safeZoneY; 
			w 																					= safeZoneWAbs; 
			h 																					= safeZoneH;
			text																				= "\TEI_UNSC_Units\ODST\Data\ODST_HUD.paa";
			sizeEx 																				= 1;
		};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	class B_Quadbike_01_F;
	class RoadCone_F;
	class B_Kitbag_rgr;    //Instead of inheriting from base classes, inherit from pre-defined classes so you dont have to worry about missing entries
	
	// SOLDIERS
	
	class TEI_UNSC_ODST_Soldier: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		faction																					= "TEI_UNSC";
		author																					= "Eridanus Insurrection Team";
		displayName																				= "ODST [Heavy]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																	= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform";
		model																					= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																				= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																					= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																				= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																	= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_light: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Light]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_light";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia","attach_leftforearm", "attach_leftshoulder", "attach_rightforearm", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_medium: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Medium]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_medium";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia", "attach_leftshoulder", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_Sniper: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Sniper]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_sniper";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","TEI_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_medic: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Medic]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_medic";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest_medic","TEI_UNSC_ODST_Helmet_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest_medic","TEI_UNSC_ODST_Helmet_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_medic_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_instructor: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Instructor]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_instructor";
		model																				= "\TEI_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\odst_instr_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_recruit: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Recruit]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_recruit";
		model																				= "\TEI_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"FirstAidKit"};
		RespawnItems[]																			= {"FirstAidKit"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 																		= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\basic_odst_co.paa"};
	};
	
	// BACKPACKS
	
	/*class TEI_UNSC_ODST_Backpack_base : B_Kitbag_rgr //Base class for regular backpack
	{
			scope 																				= 0;
			author																				= "Eridanus Insurrection Team";
			class TransportMagazines{};
			class TransportWeapons{};
			isbackpack 																			= 1;
			transportMaxWeapons 																= 2;
			transportMaxMagazines 																= 30;
			class DestructionEffects{};
            displayName 																		= "-";
            model 																				= "\TEI_UNSC_ODST\backpack.p3d";
			hiddenSelections[] 																	= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[] 															= {"TEI_Core\data\base\light_grey.paa","TEI_Core\data\base\dark_grey.paa"}; /// what texture is going to be used
			vehicleClass 																		= "TEI_UNSC_Backpack_class";
			allowedSlots[] 																		= {901};
			maximumLoad 																		= 300;
			side 																				= 4;
    };
    class TEI_UNSC_ODST_Backpack : TEI_UNSC_ODST_Backpack_base
	{
			scope 																				= 2;
			author																				= "Eridanus Insurrection Team";
            displayName 																		= "[UNSC] ODST Backpack";
            model 																				= "\TEI_UNSC_Units\ODST\backpack.p3d";
			hiddenSelections[] 																	= {"camo1","camo2","attach_Pouches","attach_Biofoam"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[] 															= {"TEI_Core\data\base\light_grey.paa","TEI_Core\data\base\dark_grey.paa"}; /// what texture is going to be used
    };
    class TEI_UNSC_ODST_Rucksack_Medical : TEI_UNSC_ODST_Backpack_base
	{
			scope 																				= 2;
			author																				= "Eridanus Insurrection Team";
            displayName 																		= "[UNSC] ODST Backpack (Medical)";
            model 																				= "\TEI_UNSC_Units\ODST\backpack.p3d";
			hiddenSelections[] 																	= {"camo1","camo2","camo3"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[] 															= {"TEI_Core\data\base\light_grey.paa","TEI_Core\data\base\dark_grey.paa","TEI_Core\data\base\green.paa"}; /// what texture is going to be used
    };
    class TEI_UNSC_ODST_Manpack : TEI_UNSC_ODST_Backpack_base
	{
			scope 																				= 2;
			author																				= "Eridanus Insurrection Team";
            displayName 																		= "[UNSC] ODST Radiopack";
            model 																				= "\TEI_UNSC_Units\ODST\radiopack.p3d";
			hiddenSelections[] 																	= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[] 															= {"TEI_Core\data\base\light_grey.paa","TEI_Core\data\base\black.paa"}; /// what texture is going to be used
	};*/
};

class cfgWeapons
{
	class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class Binocular;
	
	// UNIFORMS
	
	class TEI_UNSC_ODST_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope																					= 0;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "-";
		picture																					= "";
		model																					= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier";
			containerClass																		= "Supply50";
			mass																				= 60; //The weight and storage capacity of the uniform
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier";
			containerClass																		= "Supply60";
			mass																				= 60;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_light: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Light Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_light";
			containerClass																		= "Supply50";
			mass																				= 50;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_medium: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Medium Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_medium";
			containerClass																		= "Supply50";
			mass																				= 50;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_Sniper: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Sniper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_sniper";
			containerClass																		= "Supply50";
			mass																				= 50;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_Medic: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_medic";
			containerClass																		= "Supply60";
			mass																			= 60;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_instructor: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Instructor Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_instructor";
			containerClass																		= "Supply20";
			mass																			= 30;
			modelSides[] 																		= {6};
		};
	};
		class TEI_UNSC_ODST_uniform_recruit: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Recruit Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_recruit";
			containerClass																		= "Supply20";
			mass																			= 30;
			modelSides[] 																		= {6};
		};
	};
	
	// VESTS
	
	class TEI_UNSC_ODST_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 																					= 0; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 																				= ""; /// this icon fits the vest surprisingly well
		model   																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor 																				= 0; /// what protection does the vest provide
			containerClass 																		= "Supply140";
			mass 																				= 50;
			passThrough 																		= 0; /// coef of damage passed to total damage
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_vest: TEI_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] ODST Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= ""; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_co.paa",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 30; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_co.paa",""}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_vest_medic: TEI_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] ODST Medic Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= ""; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 30; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class TEI_UNSC_ODST_helmet_base: H_HelmetB
	{	
		scope   																				= 0; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= ""; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		allowedFacewear[] 																		= {""};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 0; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_recon: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet (Recon)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet2_co.paa","TEI_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet2_co.paa","TEI_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_sniper: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet (Sniper)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_helmet_com: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet (Commo)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_Medic: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																	= {6};
			passThrough   																	= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   															= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_recon_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Helmet (Recon)[Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Recon_helmet: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Recon Helmet"; /// how would the stuff be displayed in inventory and on ground
		model     																				= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 20;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_InstructorHat: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] ODST Instructor Cap"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   																= {"TEI_UNSC_Units\ODST\data\instructor_hat_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\instructor_hat.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		};
	};
};