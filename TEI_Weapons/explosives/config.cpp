#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0
 
class CfgPatches {
        class TEI_Weapons_Explosives {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F", "TEI_Core" };
				author = "Eridanus Insurrection Team";
        };
};

class CfgMagazines
{
	class HandGrenade;
	class CA_Magazine;
	
	/*class TEI_M9_Frag: CA_Magazine //TEI_M9_Frag needs to be added to a custom throwing weapon for UNSC units or the base vanilla A3 weapon "throw". Idk if we can change that though.
	{
		mass = 10;
		scope = 0;
		value = 1;
		displayName = "[UNSC] M9 HE-DP Grenade";
		picture = "\TEI_Weapons\explosives\icons\m9.paa";
		//model = "\TEI_Weapons\explosives\m9_grenade.p3d";
		type = 256;
		ammo = "GrenadeHand";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Type: Defensive Grenade<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "M9 Frag";
	};*/
};