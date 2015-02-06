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
	class TEI_UNSC_Units_Marines
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	
	// SOLDIERS
	
	class TEI_UNSC_Marine_heavy: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Heavy]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_heavy";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_CO.paa"};
	};
	class TEI_UNSC_Marine_vacuum_heavy: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Heavy/Vacuum]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_heavy";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_CO.paa"};
	};
	class TEI_UNSC_Marine_pilot: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Pilot";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_pilot";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_CO.paa"};
	};	
class TEI_UNSC_Marine_medium: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Medium]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_medium";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_CO.paa"};
	};
	class TEI_UNSC_Marine_light: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Light]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_light";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_CO.paa"};
	};
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
	
	// UNIFORMS
	
	class TEI_UNSC_Marine_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope															= 0;
		author															= "Eridanus Insurrection Team";
		displayName														= "-";
		picture															= "";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "TEI_UNSC_Marine_Soldier";
			containerClass													= "Supply20";
			mass														= 50; //The weight and storage capacity of the uniform
			modelSides[] 													= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_heavy: TEI_UNSC_Marine_uniform_base
	{
		scope															= 2;
		author															= "Eridanus Insurrection Team";
		displayName														= "[UNSC] Marine Heavy Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "TEI_UNSC_Marine_Heavy";
			containerClass													= "Supply60";
			mass														= 70;
			modelSides[] 													= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_pilot: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Marine Pilot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_pilot";
			containerClass									= "Supply30";
			mass										= 40;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_medium: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Marine Medium Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_medium";
			containerClass									= "Supply50";
			mass										= 60;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_light: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Marine Light Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_light";
			containerClass									= "Supply50";
			mass										= 50;
			modelSides[] 									= {6};
		};
	};



///VEST
	class TEI_UNSC_Marine_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 0; /// what protection does the vest provide
			containerClass 									= "Supply140";
			mass 										= 40;
			passThrough 									= 0; /// coef of damage passed to total damage
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_vest: TEI_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Marine Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_vest_vacuum: TEI_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  									= "[UNSC] Marine Vacuum Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Marines\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   								= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   							= "Supply140";
			mass   										= 40;
			passThrough   								= 0.1; /// coef of damage passed to total damage
			modelSides[]   								= {6};
			hiddenSelections[]   						= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		};
	};


// HELMETS
	
	class TEI_UNSC_Marine_helmet_base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 0; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_helmet: TEI_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Marine Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_helmet_vacuum: TEI_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Marine Vacuum Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
};