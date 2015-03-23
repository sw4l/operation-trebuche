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
		 muzzles[] += {"TEI_M9FragMuzzle","TEI_M2_SmokeMuzzle", "TEI_M2_BSmokeMuzzle", "TEI_M2_YSmokeMuzzle", "TEI_M2_RSmokeMuzzle", "TEI_M2_GSmokeMuzzle", "TEI_M2_OSmokeMuzzle", "TEI_M2_PSmokeMuzzle"};	
			
		class TEI_M9FragMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M9_Frag"};
		};
		class TEI_M2_SmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke"};
		};
		class TEI_M2_BSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Blue"};
		};
		class TEI_M2_YSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Yellow"};
		};
		class TEI_M2_RSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Red"};
		};
		class TEI_M2_GSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Green"};
		};
		class TEI_M2_OSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Orange"};
		};
		class TEI_M2_PSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Purple"};
		};
	};
};

class CfgMagazines
{
	class HandGrenade;
	class SmokeShell;
	class CA_Magazine;

	class TEI_M9_Frag: HandGrenade
	{
		ammo = "TEI_G_M9_Frag";
		mass = 10;
		scope = 2;
		value = 1;
		displayName = "M9 HE-DP Grenade";
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
	class TEI_M2_Smoke: SmokeShell
	{
		displayName = "M2 Smoke Grenade (White)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade.p3d";
		value = 2;
		ammo = "TEI_G_M2_Smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "White Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Blue: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Blue)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_blue.p3d";
		value = 2;
		ammo = "TEI_G_M2_BSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Blue<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Blue Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Yellow: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Yellow)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_yellow.p3d";
		value = 2;
		ammo = "TEI_G_M2_YSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Yellow<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Yellow Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Red: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Red)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_red.p3d";
		value = 2;
		ammo = "TEI_G_M2_RSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Red<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Red Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Green: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Green)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_green.p3d";
		value = 2;
		ammo = "TEI_G_M2_GSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Green<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Green Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Orange: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Orange)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_orange.p3d";
		value = 2;
		ammo = "TEI_G_M2_OSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Orange<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Orange Smoke";
		mass = 4;
		initSpeed = 22;
	};
	class TEI_M2_Smoke_Purple: SmokeShell
	{
		displayName = "M2 Smoke Grenade (Purple)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\TEI_Weapons\explosives\m2_smk_grenade_purple.p3d";
		value = 2;
		ammo = "TEI_G_M2_PSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - Purple<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Purple Smoke";
		mass = 4;
		initSpeed = 22;
	};
};

class cfgAmmo
{
	class GrenadeHand;
	class SmokeShell;
	
	class TEI_G_M9_Frag: GrenadeHand
	{
		model = "\TEI_Weapons\explosives\m9_grenade.p3d";
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 8;
		typicalspeed = 18;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
	};
	
	class TEI_G_M2_Smoke: SmokeShell
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade.p3d";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		typicalspeed = 22;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 60;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "SmokeShellWhite";
		whistleDist = 0;
	};
	
	class TEI_G_M2_RSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_red.p3d";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
	};
	
	class TEI_G_M2_GSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_green.p3d";
		smokeColor[] = {0.2125,0.6258,0.4891,1};
	};
	
	class TEI_G_M2_BSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_blue.p3d";
		smokeColor[] = {0.1183,0.1867,1,1};
	};
	
	class TEI_G_M2_OSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_orange.p3d";
		smokeColor[] = {0.6697,0.2275,0.10053,1};
	};
	
	class TEI_G_M2_YSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_yellow.p3d";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
	};
	
	class TEI_G_M2_PSmoke: TEI_G_M2_Smoke
	{
		model = "\TEI_Weapons\explosives\m2_smk_grenade_purple.p3d";
		smokeColor[] = {0.4341,0.1388,0.4144,1};
	};
	
	/*class TEI_G_M4_Stun
	{
		
	};
	
	class TEI_G_M7_Napalm
	{
		
	};*/
};