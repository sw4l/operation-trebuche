class CfgAmmo
{
	class B_9x21_Ball;
	class B_9x21_Ball_Tracer_Green;
	
	class TEI_B_5x23_Caseless: B_9x21_Ball
	{
		hit = 9;
		typicalSpeed = 500;
		caliber = 0.6;
		cartridge = "FxCartridge_65_caseless";
	};
	class TEI_B_5x23_Caseless_Tracer: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "FxCartridge_65_caseless";
	};
};