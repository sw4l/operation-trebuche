class cfgVehicles
{
	class NATO_Box_Base;
	class TEI_M41_box:NATO_Box_Base
	{
		scope=2;
		accuracy=1000;
		displayName="M41 SSR MAV/AW Box";
		model="\TEI_Weapons\Rockets\M41_Case";
		class TransportMagazines
		{
			class M41_Rocket_HEAT
			{
				magazine="TEI_M41_HEAT";
				count=10;
			};
			class M41_Rocket_HEDP
			{
				magazine="TEI_M41_HEDP";
				count=10;
			};
		};
		class TransportWeapons
		{
			class tei_M41_SSR
			{
				weapon="tei_M41_SSR";
				count=10;
			};
		};
	};
};