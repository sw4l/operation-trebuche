class CfgAmmo
{
	class B_762x51_Ball;
	class TEI_B_762x51_Ball: B_762x51_Ball
	{
		hit = 10;
	};
	class TEI_B_762x51_Tracer: TEI_B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};