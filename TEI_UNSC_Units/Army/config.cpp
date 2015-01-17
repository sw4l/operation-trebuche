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
	class TEI_UNSC_Units_Army
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
	
	class TEI_UNSC_Army_Pilot: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope												= 2;
		faction												= "TEI_UNSC";
		author												= "Eridanus Insurrection Team";
		displayName											= "Pilot [Woodland]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_Uniform_pilot";
		model												= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]											= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]												= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]											= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_Vacuum","TEI_UNSC_Army_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_Vacuum","TEI_UNSC_Army_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_co.paa"};
	};
	class TEI_UNSC_Army_Light: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Light [Woodland]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_Uniform_light";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_co.paa"};
	};
	class TEI_UNSC_Army_medium: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Medium [Woodland]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_Uniform_medium";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_co.paa"};
	};
	class TEI_UNSC_Army_heavy: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Heavy [Woodland]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_Uniform_heavy";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest","TEI_UNSC_Army_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_co.paa"};
	};
	class TEI_UNSC_Army_medic: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Medic";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_Uniform_medic";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_medic","TEI_UNSC_Army_Helmet_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_medic","TEI_UNSC_Army_Helmet_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_medic_co.paa"};
	};
	class TEI_UNSC_Army_Pilot_Des: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Pilot [Desert]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_uniform_Des_pilot";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_vacuum_Des","TEI_UNSC_Army_Helmet_vacuum_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_vacuum_Des","TEI_UNSC_Army_Helmet_vacuum_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftthigh","attach_rightthigh","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_light_Des: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Light [Desert]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_uniform_Des_light";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_medium_Des: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Medium [Desert]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_uniform_Des_Medium";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_heavy_Des: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 2;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman Heavy [Desert]";
		vehicleClass										= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]									= {};
		nakedUniform 										= "U_BasicBody";
		uniformClass										= "TEI_UNSC_Army_uniform_Des_heavy";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]									= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]										= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]									= {};
		linkedItems[] 										= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 									= {"TEI_UNSC_Army_Vest_Des","TEI_UNSC_Army_Helmet_des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 									= {"camo1","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 								= {"TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
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
	
	class TEI_UNSC_Army_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "-";
		picture											= "";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Soldier";
			containerClass									= "Supply20";
			mass										= 50; //The weight and storage capacity of the uniform
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_pilot: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Pilot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_pilot";
			containerClass									= "Supply20";
			mass										= 20;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_light: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Light Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Light";
			containerClass									= "Supply20";
			mass										= 20;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_medium: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Medium Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_medium";
			containerClass									= "Supply20";
			mass										= 30;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_heavy: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Heavy Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Heavy";
			containerClass									= "Supply20";
			mass										= 40;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_Des: TEI_UNSC_Army_uniform_base
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Soldier_Des";
			containerClass									= "Supply20";
			mass										= 50;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_Des_pilot: TEI_UNSC_Army_uniform_base
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Very Light Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Soldier_Des_pilot";
			containerClass									= "Supply20";
			mass										= 20;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_Des_light: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Light Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_light_des";
			containerClass									= "Supply20";
			mass										= 20;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_Des_medium: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Medium Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_medium_Des";
			containerClass									= "Supply20";
			mass										= 30;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_Des_heavy: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Heavy Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_heavy_Des";
			containerClass									= "Supply20";
			mass										= 40;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_uniform_medic: TEI_UNSC_Army_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_medic";
			containerClass									= "Supply20";
			mass										= 80;
			modelSides[] 									= {6};
		};
	};
	
	// VESTS
	
	class TEI_UNSC_Army_vest_base: V_PlateCarrier1_rgr //The vest base class
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
	class TEI_UNSC_Army_vest: TEI_UNSC_Army_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_vest_vacuum: TEI_UNSC_Army_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Vacuum Vest"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_vest_des: TEI_UNSC_Army_vest
	{	
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Vest [Desert]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_vest_medic: TEI_UNSC_Army_vest
	{	
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Medic Vest"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_vest_medic_vacuum: TEI_UNSC_Army_vest
	{	
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Medic Vacuum Vest"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_vest_vacuum_des: TEI_UNSC_Army_vest
	{	
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] Army Vest [Desert]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class TEI_UNSC_Army_helmet_base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 0; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet_vacuum: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Vacuum Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 25; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet_des: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Helmet [Desert]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet_vacuum_des: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Vacuum Helmet [Desert]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   									= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 25; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet_medic: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Medic Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Army_helmet_medic_vacuum: TEI_UNSC_Army_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] Army Medic Helmet"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 25; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
};