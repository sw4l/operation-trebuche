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

class cfgWeapons
{
	class Default;
	class GrenadeLauncher;
	
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		 muzzles[] += {"TEI_M9FragMuzzle"};	
			
		class TEI_M9FragMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M9_Frag"};
		};
	};
};

class CfgMagazines
{
	class HandGrenade;
	class CA_Magazine;

	class TEI_M9_Frag: HandGrenade
	{
		ammo = "TEI_G_M9_Frag";
		mass = 10;
		scope = 2;
		value = 1;
		displayName = "M9 HE-DP Grenade [UNSC]";
		descriptionShort = "Type: Defensive Grenade<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "M9 Frag";
		model = "\TEI_Weapons\explosives\m9_grenade.p3d";
		picture = "\TEI_Weapons\explosives\icons\m9.paa";
		type = 256;
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
	};
};

class cfgAmmo
{
	class GrenadeHand;
	
	class TEI_G_M9_Frag: GrenadeHand
	{
		model = "\TEI_Weapons\explosives\m9_grenade.p3d";
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		typicalspeed = 18;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
	};
	
	class TEI_G_M2_Smoke
	{
		
	};
	
	class TEI_G_M2_RSmoke
	{
		
	};
	
	class TEI_G_M2_GSmoke
	{
		
	};
	
	class TEI_G_M2_BSmoke
	{
		
	};
	
	class TEI_G_M2_OSmoke
	{
		
	};
	
	class TEI_G_M2_YSmoke
	{
		
	};
	
	class TEI_G_M2_PSmoke
	{
		
	};
	
	class TEI_G_M4_Stun
	{
		
	};
	
	class TEI_G_M7_Napalm
	{
		
	};
};