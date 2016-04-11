class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_CAA_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_CAA_Units.pbo";
	};
};

class CfgGroups
{
	class Indep
	{
		class OPTRE_CAA
		{
			dlc = "OPTRE";
			name = "CAA";
			class Infantry_WDL
			{
				name = "Infantry (Woodland)";
				class OPTRE_Groups_CAA_Sentry_WDL
				{
					dlc = "OPTRE";
					name = "Sentry";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_Fireteam_WDL
				{
					dlc = "OPTRE";
					name = "Fireteam";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_WDL";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_WDL";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
			};
			class Infantry_DES
			{
				name = "Infantry (Desert)";
				class OPTRE_Groups_CAA_Sentry_DES
				{
					dlc = "OPTRE";
					name = "Sentry";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_DES";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_DES";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_Fireteam_DES
				{
					dlc = "OPTRE";
					name = "Fireteam";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_DES";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_DES";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_DES";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_DES";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
			};
			class Infantry_SNO
			{
				name = "Infantry (Snow)";
				class OPTRE_Groups_CAA_Sentry_SNO
				{
					dlc = "OPTRE";
					name = "Sentry";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_SNO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_CMA_Soldier_Guard_SNO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_Fireteam_SNO
				{
					dlc = "OPTRE";
					name = "Fireteam";
					side = 2;
					faction = "OPTRE_CAA";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_SNO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_SNO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_SNO";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "OPTRE_CMA_Soldier_Rifleman_SNO";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
			};
		};
	};
};