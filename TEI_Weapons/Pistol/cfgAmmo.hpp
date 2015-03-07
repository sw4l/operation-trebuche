class CfgAmmo
{	
	class B_762x51_Ball;
	class TEI_B_127x40_Ball : B_762x51_Ball   
	{
		hit 							= 10;
		cartridge 						= "FxCartridge_small";
		caliber 						= 2.8;
		typicalSpeed					= 430;
		dispersion 						= 0.00005;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class TEI_B_127x40_Tracer : TEI_B_127x40_Ball  
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};