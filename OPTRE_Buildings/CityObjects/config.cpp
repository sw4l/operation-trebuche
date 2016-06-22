class CfgPatches
{
	
	class OPTRE_UNSC_Structure_CityObjects
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
	class Items_base_F;
	class RoadCone_F;
	
	class Land_Small_Plaza: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Small_Plaza";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Plaza";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Small_Plaza_Trees: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Small_Plaza_Trees";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Plaza (Trees)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_Mid: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Mid";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Middle)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_End: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_End";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (End)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Ped_Bridge_Mid_Over: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Mid_Over";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Middle/Unsupported)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_Single_Mid: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Single_Mid";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Single/Middle)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Ped_Bridge_Single_End: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Single_End";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Single/End)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Ped_Bridge_T_Int: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_T_Int";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (T Intersection)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_Int: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Int";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Intersection)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Ped_Bridge_DoubleT_Int: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_DoubleT_Int";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Double T Intersection)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_Double_Int: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Double_Int";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Double Intersection)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_Rectangular_Plant_Box: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Rectangular Plant Box";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_Rectangular_Plant_Box_Trees: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box_Trees";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Rectangular Plant Box (Trees)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Door_Locked: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Door_Locked_lg: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked_lg";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door (Large)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Door_Locked_med: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked_med";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door (Medium)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_OPTRE_Dumpster_01: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Dumpster_Closed_01";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Dumpster 1";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_OPTRE_Dumpster_02: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Dumpster_Closed_02";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Dumpster 2";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Optican_Kiosk_lg: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Optican_Kiosk_lg";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Optican Kiosk (Large)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Optican_Kiosk_sm: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Optican_Kiosk_sm";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Optican Kiosk (Small)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_Information_Board: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Information_Board";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Information Board";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Offline: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Offline";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Offline)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Advert_V_AMG: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_AMG";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (AMG)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Atlas: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Atlas";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Atlas)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Errera: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Errera";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Errera)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Havadi: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Havadi";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Havadi)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Hinos: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Hinos";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Hinos)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Mainz: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Mainz";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Mainz)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Movie: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Movie";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Movie)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Nomolos: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Nomolos";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Nomolos)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Optican: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Optican";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Optican)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Tech: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Tech";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Tech)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Traxus: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Traxus";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Traxus)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Vyrant: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Vyrant";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Vyrant)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_ded: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_ded";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Damaged)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_drink: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_drink";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Drink)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_rooster: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_rooster";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Rooster)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_teeth: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_teeth";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Teeth)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Kiosk_1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_kiosk_1";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="UNSC Recruiting Kiosk";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Kiosk_2: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_kiosk_2";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Kiosk 1";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Kiosk_3: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_kiosk_3";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Kiosk 2";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Information_Kiosk: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Information_Kiosk";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Information Kiosk";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Trash_Can_1a: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Trash_Can_1a";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Trash Can 1";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Trash_Can_1b: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Trash_Can_1b";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Trash Can 2";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_Trash_Can_1c: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Trash_Can_1c";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Trash Can 3";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_OPTRE_vidphone_terminal: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_vidphone_terminal";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vidphone Terminal";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_OPTRE_Exhaust_Vent: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\OPTRE_Exhaust_Vent";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Industrial Exhaust Vent";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	/*class Land_RTG_Crane: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\RTG_Crane";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="RTG Crane";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};*/

	/*class Land_RTG_Crane_Lowered: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\RTG_Crane_Lowered";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="RTG Crane (Lowered)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};*/
};
