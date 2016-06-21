class CfgPatches
{
	class OPTRE_Buildings_Street_Objects
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
{
	class Land_Castle_01_step_F;
	class RoadCone_F;
	class Helipad_base_F;
	class Items_base_F;
	
	class Land_sidewalk_wide_short: Land_Castle_01_step_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		displayName = "Sidewalk (Wide Straight)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		keepInEPESceneAfterDeath = 1;
		destrType = "DestructNo"; //All structures should have this setting until appropriate destruct models can be made.  Complex multipart models should probably stay this way permanently.  
		class DestructionEffects;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Transport";
	};
	class Land_sidewalk_wide_curve: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Wide Short Curve)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_curve.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_wide_curve3: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Wide Long Curve)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_curve3.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_wide_end: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Wide End)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_end.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_wide_crosswalk: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Wide Crosswalk)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_crosswalk.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_wide_corner: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Wide Corner)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_corner.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_service_corner: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Service Corner)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_service_corner.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_service_end: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Service End)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_service_end.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_service_entrance: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Service Entrance)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_service_entrance.p3d";
		author = "Article 2 Studios";
	};
	class Land_sidewalk_service_invcorner: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Sidewalk (Service Inverted Corner)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_service_invcorner.p3d";
		author = "Article 2 Studios";
	};
	class Land_2way_intersection: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Intersection (2-Way)";
		model = "\OPTRE_buildings\streetobjects\2way_intersection.p3d";
		author = "Article 2 Studios";
	};
	class Land_4way_intersection: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Intersection (4-Way)";
		model = "\OPTRE_buildings\streetobjects\4way_intersection.p3d";
		author = "Article 2 Studios";
	};
	class Land_OPTRE_Traffic_Light: Land_sidewalk_wide_short
	{
		dlc = "OPTRE";
		displayName = "Traffic Light";
		model = "\OPTRE_buildings\streetobjects\OPTRE_Traffic_Light.p3d";
		author = "Article 2 Studios";
	};
	class Land_main_road_short: Helipad_base_F
	{
		dlc = "OPTRE";
		displayName = "Main Road (Short)";
		model = "\OPTRE_buildings\streetobjects\main_road_short.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Transport";
	};
	/*class Land_main_road_long: Land_main_road_short
	{
		dlc = "OPTRE";
		displayName = "Main Road (Long)";
		model = "\OPTRE_buildings\streetobjects\main_road_long.p3d";
		author = "Article 2 Studios";
	};
	class Land_service_road_short: Land_main_road_short
	{
		dlc = "OPTRE";
		displayName = "Service Road (Short)";
		model = "\OPTRE_buildings\streetobjects\service_road_short.p3d";
		author = "Article 2 Studios";
	};
	class Land_service_road_long: Land_main_road_short
	{
		dlc = "OPTRE";
		displayName = "Service Road (Long)";
		model = "\OPTRE_buildings\streetobjects\service_road_long.p3d";
		author = "Article 2 Studios";
	};*/

	class Land_OPTRE_Cone: RoadCone_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\StreetObjects\OPTRE_Cone";
		scope = 2;
		displayName="Traffic Cone";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};

