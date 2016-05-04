class CfgOptreHudSchemes
{

	class EYE 
	{
		class MainDialogs {
		
			OPTRE_EyePiece = "OPTRE_Marine_Main_1";
		
		};
	
		class LHDs {
			
			0[] = {"","LHD OFF"};
			1[] = {"Marrine_1_LHD_LeftBottom_Radar","LHD Identify Friend / Foe"};
			2[] = {"Marrine_1_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			3[] = {"",""};
			4[] = {"",""};
			
		};	
	
		healthBar = "OPTRE_Marine_Main_1_Health";
		ammoCounter = "OPTRE_Marrine_1_WeaponProgress";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
		
	};
	
	class Glasses
	{
	
		class MainDialogs {
		
            OPTRE_HUD_Glasses           = "OPTRE_MarrineGlasses_orange";  
            OPTRE_HUD_g_Glasses         = "OPTRE_MarrineGlasses_green";
            OPTRE_HUD_r_Glasses         = "OPTRE_MarrineGlasses_red";
            OPTRE_HUD_w_Glasses         = "OPTRE_MarrineGlasses_white";
            OPTRE_HUD_b_Glasses         = "OPTRE_MarrineGlasses_blue";
            OPTRE_HUD_p_Glasses         = "OPTRE_MarrineGlasses_pink";
		
		};
		
		class LHDs {
		
			0[] = {"","LHD OFF"};
			1[] = {"OPTRE_LHD_LeftBottom_Radar","LHD Identify Friend / Foe"};
			2[] = {"OPTRE_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			3[] = {"OPTRE_LHD_LeftBottom_HudMap","LHD Personal Navigation Assistant"};
			4[] = {"",""};
			
		};	
		
		healthBar = "OPTRE_Marine_Main_1_Health";
		ammoCounter = "OPTRE_Marrine_2_AmmoCount";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
		
	};
	
	class ODST_1 
	{
	
		class MainDialogs {
		
			// Hex
			class orange 			{ value[] = {"OPTRE_ODST_Main_1",						"[Hex] Orange"				,"1,0.32,0,0.28"		};	};
			class orange_Rookie 	{ value[] = {"OPTRE_ODST_Main_1_Rookie",				"[Hex] Rookie Orange"		,"1,0.32,0,0.28"		};	};
			class blue 		    	{ value[] = {"OPTRE_ODST_Main_1_blue",					"[Hex] Blue"				,"0.1,0.1,1,0.28"		};	};
			class blue_Spartan  	{ value[] = {"OPTRE_ODST_Main_1_blue_Spartan",			"[Hex] Spartan Blue"		,"0.1,0.1,1,0.28"		};	};
			class white   			{ value[] = {"OPTRE_ODST_Main_1_white",					"[Hex] White"				,"1,1,1,0.28"			};	};
			class red   			{ value[] = {"OPTRE_ODST_Main_1_red",					"[Hex] Red"					,"1,0.32,0,0.28"		};	};
			class yellow   			{ value[] = {"OPTRE_ODST_Main_1_yellow",				"[Hex] Yellow"				,"1,0.32,0,0.28"			};	};
			
			// Plain
			class orange1  			{ value[]  = {"OPTRE_ODST_Main_1_NoHex",				"[Plain] Orange"			,"1,0.32,0,0.28"		};	};
			//class orange1_Rookie	{ value[]  = {"OPTRE_ODST_Main_1_NoHex_Rookie",			"[Plain] Rookie Orange"		,"1,0.32,0,0.28"		};	};
			class blue1  			{ value[]  = {"OPTRE_ODST_Main_1_blue_NoHex",			"[Plain] Blue"				,"0.1,0.1,1,0.28"		};	};
			//class blue1_Spartan 	{ value[]  = {"OPTRE_ODST_Main_1_blue_NoHex_spartan",	"[Plain] Spartan Blue"		,"0.1,0.1,1,0.28"		};	};
			class white1  			{ value[]  = {"OPTRE_ODST_Main_1_white_NoHex",			"[Plain] White"				,"1,1,1,0.28"			};	};
			class red1  			{ value[]  = {"OPTRE_ODST_Main_1_red_NoHex",			"[Plain] Red"				,"1,0.32,0,0.28"		};	};
			class yellow1  			{ value[]  = {"OPTRE_ODST_Main_1_yellow_NoHex",			"[Plain] Yellow"			,"1,0.32,0,0.28"			};	};

			// Quite
			class orange2  			{ value[] = {"OPTRE_ODST_Main_1_Quite",					"[Quite] Orange"			,"1,0.32,0,0.28"		};	}; 
			//class orange2_Rookie  	{ value[] = {"OPTRE_ODST_Main_1_Quite_Rookie",		"[Quite] Rookie Orange"		,"1,0.32,0,0.28"		};	}; 
			class blue2  			{ value[] = {"OPTRE_ODST_Main_1_blue_Quite",			"[Quite] Blue"				,"0.1,0.1,1,0.28"		};	};
			//class blue2_Spartan  	{ value[] = {"OPTRE_ODST_Main_1_blue_Quite",			"[Quite] Spartan Blue"		,"0.1,0.1,1,0.28"		};	};
			class white2  			{ value[] = {"OPTRE_ODST_Main_1_white_Quite",			"[Quite] White"				,"1,1,1,0.28"			};	};
			class red2  			{ value[] = {"OPTRE_ODST_Main_1_red_Quite",				"[Quite] Red"				,"1,0.32,0,0.28"		};	};
			class yellow2  			{ value[] = {"OPTRE_ODST_Main_1_yellow_Quite",			"[Quite] Yellow"			,"1,0.32,0,0.28"			};	};
		
		};
	
		class LHDs {
		
			0[] = {"","LHD OFF"};
			1[] = {"OPTRE_LHD_LeftBottom_Radar","LHD Identify Friend "};
			2[] = {"OPTRE_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			3[] = {"OPTRE_LHD_LeftBottom_HudMap","LHD Personal Navigation Assistant"};
			4[] = {"",""};
			
		};
		
		class AmmoCounters {
			
			smg[] = {"DialogName",3,60};
			
		};
		
		healthBar = "OPTRE_ODST_HealthBar";
		ammoCounter = "OPTRE_ODST_WeaponProgress";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
		
	};
	
	class ODST_2: ODST_1
	{
	
	};

	class ONI 
	{
		
	};
	
	class NotATopSecertProjectCalledMJOLNIR 
	{
			
	};	

	class Pilots 
	{

	};

};