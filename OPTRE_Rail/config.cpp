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

class CfgPatches
{
	class OPTRE_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	class OPTRE_rail_Station: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Station";
		model = "\OPTRE_rail\station.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_track_long: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Track Long";
		model = "\OPTRE_rail\track_long.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_track_short: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Track Short";
		model = "\OPTRE_rail\track_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_track_turn_45: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Track Turn 45";
		model = "\OPTRE_rail\track_turn45.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_track_incline: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Track Incline";
		model = "\OPTRE_rail\track_incline.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_tunnel_short: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Tunnel Short";
		model = "\OPTRE_rail\tunnel_cent_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_tunnel_long: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Tunnel Long";
		model = "\OPTRE_rail\tunnel_cent_long.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_tunnel_end: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Tunnel End";
		model = "\OPTRE_rail\tunnel_end.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_tunnel_maint: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Tunnel Maintenance";
		model = "\OPTRE_rail\tunnel_maint.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	
	class OPTRE_rail_tunnel_pillar: static
	{
		dlc = "OPTRE";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Mono Rail Tunnel Pillar";
		model = "\OPTRE_rail\tunnel_pillar.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
};

