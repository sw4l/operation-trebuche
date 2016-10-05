class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class FullAuto;
class cfgWeapons {


	class Default;
	class PistolCore;
	class Pistol;
	class Rifle;
	class RifleCore;
	class MGun;
	class MGunCore;
	
	class ItemCore;	// External class reference
	class InventoryItem_Base_F;	// External class reference
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Vest_Base;
	class VestItem;
	class B_Soldier_base_F;
	class U_B_CombatUniform_mcam;
	
class U_BasicBodyICE123: Uniform_Base {
	displayname = "Underwear2";
	//model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	model = "\ice_a3_woman\female.p3d";
	picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
	scope = 2;
	class ItemInfo: UniformItem {
		containerclass = "Supply0";
		mass = 1;
		uniformclass = "Underwear_ICE123";
		uniformmodel = "-";
	};
};
	
	
    class ice123_apo_cloak : Uniform_Base {
        scope = 2;
        displayName = "Seeker's Cloak";
        picture = "\ice_apo_seekers\icon\cloak_ca.paa";
        model = "\ice_a3_woman\female.p3d";
        //hiddenSelections[] = {"Camo"};
        //hiddenSelectionsTextures[] = {"\ice123_swat\swat_co.paa"};  
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ice123_seeker_unarmed"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };  

	    class ice123_apo_cloak_f : Uniform_Base {
        scope = 2;
        displayName = "Seeker's Cloak (F)";
        picture = "\ice_apo_seekers\icon\cloak_ca.paa";
        model = "\ice_a3_woman\female.p3d";
        //hiddenSelections[] = {"Camo"};
        //hiddenSelectionsTextures[] = {"\ice123_swat\swat_co.paa"};  
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ice123_seeker_unarmedF"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };  

};


