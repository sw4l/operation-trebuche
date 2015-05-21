class CfgPatches
{
    class OPTRE_UNSC_Structure_class
    {
        units[] = {"OPTRE_Building_Container_Small_Green","OPTRE_Building_Container_Large_Green","OPTRE_Building_Container_Tower_Green","OPTRE_Building_Container_Small_Tan","OPTRE_Building_Container_Large_Tan","OPTRE_Building_Container_Tower_Tan","OPTRE_Building_Container_Small_Medical","OPTRE_Building_Container_Large_Medical"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
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
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small (Green)";
	};
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large (Green)";
	};
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Tower (Green)";
	};
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small (Tan)";
	};
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large (Tan)";
	};
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Guard Tower (Tan)";
	};
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small (Medical)";
	};
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large (Medical)";
	};
};