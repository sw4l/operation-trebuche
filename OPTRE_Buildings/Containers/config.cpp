class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Containers
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
	class RoadCone_F;
	class Land_Cargo_House_V1_F;
	class Land_Cargo_HQ_V1_F;
	class Land_Cargo_Patrol_V1_F;
	class Land_Cargo_House_V3_F;
	class Land_Cargo_HQ_V3_F;
	class Land_Cargo_Patrol_V3_F;
	class Land_Medevac_house_V1_F;
	class Land_Medevac_HQ_V1_F;
	
	class OPTRE_Building_Container_Small_Green: Land_Cargo_House_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class Land_shipping_crate_lg_locked: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Shipping Container [Locked]";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};	
	
	class Land_shipping_crate_lg_open: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_open";
		displayName="Shipping Container [Open]";
	};
	
	class Land_shipping_crate_sm_locked: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_sm_locked";
		displayName="Shipping Container (Small) [Locked]";
	};
	
	class Land_shipping_crate_sm_open: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_sm_open";
		displayName="Shipping Container (Small) [Open]";
	};
	
	class Land_shipping_crate_lg_locked_amg: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_amg";
		displayName="Shipping Container (AMG)";
	};
	
	class Land_shipping_crate_lg_locked_bxr: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_bxr";
		displayName="Shipping Container (BXR)";
	};
	
	class Land_shipping_crate_lg_locked_cobb1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb1";
		displayName="Shipping Container (Cobb 1)";
	};
	
	class Land_shipping_crate_lg_locked_cobb2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb2";
		displayName="Shipping Container (Cobb 2)";
	};
	
	class Land_shipping_crate_lg_locked_cobb3: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb3";
		displayName="Shipping Container (Cobb 3)";
	};
	
	class Land_shipping_crate_lg_locked_feud: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_feud";
		displayName="Shipping Container (Feud)";
	};
	
	class Land_shipping_crate_lg_locked_jot1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_jot1";
		displayName="Shipping Container (Jot 1)";
	};
	
	class Land_shipping_crate_lg_locked_jot2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_jot2";
		displayName="Shipping Container (Jot 2)";
	};
	
	class Land_shipping_crate_lg_locked_leth: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_leth";
		displayName="Shipping Container (Leth)";
	};
	
	class Land_shipping_crate_lg_locked_mt: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_mt";
		displayName="Shipping Container (MT)";
	};
	
	class Land_shipping_crate_lg_locked_nap1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_nap1";
		displayName="Shipping Container (Nap 1)";
	};
	
	class Land_shipping_crate_lg_locked_nap2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_nap2";
		displayName="Shipping Container (Nap 2)";
	};
	
	class Land_shipping_crate_lg_locked_sin1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_sin1";
		displayName="Shipping Container (Sin)";
	};
	
	class Land_shipping_crate_lg_locked_trax1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax1";
		displayName="Shipping Container (Traxus 1)";
	};
	
	class Land_shipping_crate_lg_locked_trax2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax2";
		displayName="Shipping Container (Traxus 2)";
	};
	
	class Land_shipping_crate_lg_locked_trax3: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax3";
		displayName="Shipping Container (Traxus 3)";
	};

	class Land_packing_crate_lg_blue: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_blue";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Blue)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_green: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_green";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Green)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_red: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_red";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Red)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_unsc: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_unsc";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / UNSC)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_yellow: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_yellow";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Yellow)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};
