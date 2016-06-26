class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class OPTRE_FC_Plasma_Pistol_Battery: 20Rnd_762x51_Mag
	{
		//model								= "\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname							= "Type-25 Pistol Battery Pack";
		displaynameshort					= "Plasma";
		ammo								= "OPTRE_FC_Plasma_Pistol_Bolt";
		count								= 100;
		initspeed							= 175;
		//picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "Battery Pack for Type-25 Directed Energy Pistol";
		mass								= 50;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 100;
	};
};