enum {
     //  = 2,    // Error parsing: Empty enum name
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
};

class CfgPatches
{
    class OPTRE_UNSC_Structure_class
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
	class cargo_house_base_F;
	class cargo_hq_base_F;
	class cargo_patrol_base_F;
	
	class Land_Cargo_House_V1_F:cargo_house_base_F
	{
		scope=2;
		vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Container Small Green";
	};
	class Land_Cargo_HQ_V1_F:cargo_hq_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Container Large Green";
	};
	class Land_Cargo_Patrol_V1_F:cargo_patrol_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Guard Tower Green";
	};
	class Land_Cargo_House_V3_F:cargo_house_base_F
	{
		scope=2;
		vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Container Small Tan";
	};
	class Land_Cargo_HQ_V3_F:cargo_hq_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Container Large Tan";
	};
	class Land_Cargo_Patrol_V3_F:cargo_patrol_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Guard Tower Tan";
	};
	class Land_Medevac_house_V1_F:cargo_hq_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Medical Container Small";
	};
	class Land_Medevac_HQ_V1_F:Cargo_HQ_base_F
	{
		scope=2;
				vehicleClass="OPTRE_UNSC_Structure_class";
		displayName="Medical Container Large";
	};
};