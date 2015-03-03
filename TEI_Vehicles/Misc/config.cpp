class CfgPatches
{
	class TEI_Vehicles_Misc
	{
		units[]={"m1087_stallion_base","m1087_stallion_unsc","m1015_mule_base","m1015_mule_unsc","m1015_mule_ins","mako_drone_base","mako_drone_ins"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"TEI_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	//ammo
	//fuel
	//medical
	//repair
	//box
	//transport
	//transport (covered)
	
	class Truck_01_base_F;
	class Truck_02_base_F;
	class UAV_02_base_F;
	class m1087_stallion_base: Truck_01_base_F
	{
		
	};
	class m1015_mule_base: Truck_02_base_F
	{
		
	};
	class mako_drone_base: UAV_02_base_F
	{
		
	};
	
	
};
