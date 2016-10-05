class CfgPatches {
	class ice_a3_woman {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = 0.1;
	};
};


#include "cfg\weapons.hpp"
//heads
#include "cfg\heads.hpp"

class CfgFactionClasses
{
	class ice_a3_woman
	{
		displayName = "Female";
		priority = 2;
		side = 1;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
};
class CfgVehicleClasses
{
	class ice_a3_woman
	{
		displayName = "Female";
	};
};



class CfgVehicles
{

class man;
class B_Soldier_F;
class B_Helipilot_F;


class Underwear_ICE123: B_Soldier_F
	{
		_generalMacro = "Underwear_ICE123";
		scope = 1;
		displayName = "TEST: Underwear";
		model = "\ice_a3_woman\female.p3d";
		uniformClass = "U_BasicBodyICE123";
		weapons[] = {};
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\body_ca.paa"};
		// class EventHandlers: EventHandlers
		// {
			// init = "(_this select 0) execVM ""\A3\Characters_F\Common\scripts\randomize.sqf""";
		// };
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};


	class ice123_female_west :  B_Soldier_F 
	{
        _generalMacro = "B_Soldier_F"; 
        scope = 2;
		model = "\ice_a3_woman\female.p3d";
		vehicleClass = "ice_a3_woman";
		Faction = "ice_a3_woman";
        displayName = "Rifleman #1";
		identityTypes[] = {"ice123_female1"};
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBodyICE123"; //class for "naked" body
		author = "ALPHA - Icewindo";
	};
	
	class ice123_female_west2 :  B_Soldier_F 
	{
        _generalMacro = "B_Soldier_F"; 
        scope = 2;
		model = "\ice_a3_woman\female.p3d";
		vehicleClass = "ice_a3_woman";
		Faction = "ice_a3_woman";
        displayName = "Rifleman #2";
		identityTypes[] = {"ice123_female2"};
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBodyICE123"; //class for "naked" body
		linkedItems[] = {"V_PlateCarrier1_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		author = "ALPHA - Icewindo";
	};
	
	class ice123_female_west3 :  B_Helipilot_F 
	{
        scope = 2;
		model = "\ice_a3_woman\female.p3d";
		vehicleClass = "ice_a3_woman";
		Faction = "ice_a3_woman";
        displayName = "Pilot";
		identityTypes[] = {"ice123_female1"};
        nakedUniform = "U_BasicBodyICE123"; //class for "naked" body
		author = "ALPHA - Icewindo";
	};
		
    };  
	
}; 	

