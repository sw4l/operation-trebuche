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
				
				class TEI_UNSC_Army_W_Inf_Sentry
				{
					name = "Army Sentry (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Rifleman_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Grenadier";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class TEI_UNSC_Army_W_Inf_RifleSquad
				{
					name = "Army Rifle Squad (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
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
					class Unit8
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
						position[] = {-20,-5,0};
					};
				};
				
				class TEI_UNSC_Army_W_Inf_Fireteam
				{
					name = "Army Fireteam (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Autorifleman";
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
						vehicle = "TEI_UNSC_Army_W_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_W_Inf_CmdSquad
				{
					name = "Army Command Squad (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Radioman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Medic";
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
				};
				
				class TEI_UNSC_Army_W_Inf_AntiTank
				{
					name = "Army Anti-Tank Team (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_AT_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_AT_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_W_Inf_AntiAir
				{
					name = "Army Anti-Air Team (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_AA_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_AA_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_W_Inf_Sniper
				{
					name = "Army Sniper Team (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Sniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_W_Observer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				
				
				
				class TEI_UNSC_Army_D_Inf_Sentry
				{
					name = "Army Sentry (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Rifleman_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Grenadier";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_RifleSquad
				{
					name = "Army Rifle Squad (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Autorifleman";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {-20,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_Fireteam
				{
					name = "Army Fireteam (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Autorifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_CmdSquad
				{
					name = "Army Command Squad (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Radioman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Medic";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_AntiTank
				{
					name = "Army Anti-Tank Team (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_AT_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_AT_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_AntiAir
				{
					name = "Army Anti-Air Team (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_AA_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_AA_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Army_D_Inf_Sniper
				{
					name = "Army Sniper Team (D)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Sniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_D_Observer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			
			
			
			
				class TEI_UNSC_Marine_Inf_Sentry
				{
					name = "Marine Sentry";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Rifleman_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Grenadier";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_RifleSquad
				{
					name = "Marine Rifle Squad";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Autorifleman";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "CORPORAL";
						position[] = {-20,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_Fireteam
				{
					name = "Marine Fireteam";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Autorifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_CmdSquad
				{
					name = "Marine Command Squad";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Radioman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Corpsman";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_AntiTank
				{
					name = "Marine Anti-Tank Team";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_AT_Specialist";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_AT_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_AntiAir
				{
					name = "Marine Anti-Air Team";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_AA_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_AA_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class TEI_UNSC_Marine_Inf_Sniper
				{
					name = "Marine Sniper Team";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Sniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Marine_Observer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			
			};
			
			
			class SpecOps
			{
				name = "Special Forces";
				
				class TEI_UNSC_ODST_Sentry
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
				
				class TEI_UNSC_ODST_Fireteam
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
				
				class TEI_UNSC_ODST_Scout_Fireteam
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
				
				class TEI_UNSC_ODST_Squad
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
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Scout_Sniper";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
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
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "TEI_UNSC_ODST_Autorifleman";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
				};
			};
		};
	};
};