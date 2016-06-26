class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class OPTRE_FC_Plasma_Rifle_Battery: 20Rnd_762x51_Mag
	{
		//model								= "\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname							= "Type-25 Rifle Battery Pack";
		displaynameshort					= "Plasma";
		ammo								= "OPTRE_FC_Plasma_Rifle_Bolt";
		count								= 100;
		initspeed							= 125;
		//picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "Battery Pack for Type-25 Directed Energy Rifle";
		mass								= 100;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 200;
	};
};