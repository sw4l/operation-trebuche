class CfgMagazines
{
	class CA_Magazine;
	
	class TEI_6Rnd_8Gauge_Pellets : CA_Magazine
	{
		model								= "\TEI_Weapons\Shotgun\Shell_mag_S.p3d"; /// placeholder for testing
		scope 								= 2;
		displayname							= "6Rnd 8 Gauge Pellets";
		displaynameshort						= "8 Gauge Pellets";
		ammo								= "TEI_8Gauge_Pellets";
		count								= 6;
		initspeed							= 396;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort						= "6 Rounds of 8 Gauge Pellets";
		mass								= 4;
	};
	
	class TEI_6Rnd_8Gauge_Slugs : CA_Magazine
	{
		model								= "\TEI_Weapons\Shotgun\Shell_mag_P.p3d"; /// placeholder for testing
		scope 								= 2;
		displayname							= "6Rnd 8 Gauge Slugs";
		displaynameshort						= "8 Gauge Slugs";
		ammo								= "TEI_8Gauge_Slugs";
		count								= 6;
		initspeed							= 396;
		picture								= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		descriptionshort						= "6 Rounds of 8 Gauge Slugs";
		mass								= 4;
	};
};