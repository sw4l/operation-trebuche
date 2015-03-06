enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_UNSC_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"TEI_Core"};
		author[] 																				= {"Eridanus Insurrection Team"};
		fileName 																				= "TEI_UNSC_Units.pbo";
	};
};

class CfgGroups
{
	class West
	{
		class TEI_UNSC //TEI_Ins
		{
			name = "UNSCDF";
			class Infantry //Air, Mechanized, Motorized, Armored, SpecOps, Support
			{
				name = "Infantry";
				class UNSC_Army_W_Inf_Sentry
				{
					name = "Army Sentry (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_Rifleman_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_Rifleman_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class UNSC_Army_W_Inf_RifleSquad
				{
					name = "Army Sentry (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_SquadLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Autorifleman";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
				};
			};
			
			
			
			
			
			class SpecOps
			{
				name = "Special Forces";
				
				class UNSC_ODST_Sentry
				{
					name = "ODST Sentry";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Rifleman_BR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class UNSC_ODST_Fireteam
				{
					name = "ODST Fireteam";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Rifleman_BR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Marksman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class UNSC_ODST_Scout_Fireteam
				{
					name = "ODST Scout Fireteam";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Scout";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Scout_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Paramedic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class UNSC_ODST_Squad
				{
					name = "ODST Fireteam";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Rifleman_BR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Scout_Sniper";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Paramedic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Demo";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Autorifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
		};
	};
};