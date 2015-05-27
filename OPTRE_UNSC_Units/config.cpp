class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_UNSC_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_UNSC_Units.pbo";
	};
};

class CfgGroups
{
	class West
	{
		class OPTRE_UNSC
		{
			name = "UNSCDF";
			class Infantry_Army_WDL
			{
				name = "Infantry (Army Woodland)";
				class OPTRE_Groups_UNSC_Sentry_Army_WDL
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};