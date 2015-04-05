class cfgVehicles
{
	class NATO_Box_Base;
	class OPTRE_M41_box:NATO_Box_Base
	{
		scope=2;
		accuracy=1000;
		displayName="M41 SSR MAV/AW Box";
		model="\OPTRE_Weapons\Rockets\M41_Case";
		class TransportMagazines
		{
			class M41_Rocket
			{
				magazine="OPTRE_M41_HEAT";
				count=10;
			};
			class M41_Rocket_HEDP
			{
				magazine="OPTRE_M41_HEDP";
				count=10;
			};
		};
		class TransportWeapons
		{
			class OPTRE_M41_SSR
			{
				weapon="OPTRE_M41_SSR";
				count=10;
			};
		};
	};
};
