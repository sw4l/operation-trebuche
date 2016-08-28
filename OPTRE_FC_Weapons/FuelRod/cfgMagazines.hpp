class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class OPTRE_FC_Fuel_Rod_Mag: 20Rnd_762x51_Mag
	{
		//model								= "\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname							= "Type-33 Fuel Rod Pack";
		displaynameshort					= "Fuel Rod";
		ammo								= "OPTRE_FC_Fuel_Rod";
		count								= 4;
		initspeed							= 100;
		//picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "Fuel Rod Pack for Type-33 Light Anti Armor Weapon";
		mass								= 100;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 4;
	};
};