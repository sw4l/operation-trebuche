class CfgFunctions 
{

	class OPTRE
	{
	
		class HUDCore
		{
			file = "OPTRE_FunctionsLibrary\Functions\CoreHUD";
			
			class Init {postInit = 1;}; 
			class ToggleVisor {};
			class ToggleLHDFnc {};
			class ToggleLowLight {};
			class Menu {};
			
		};
		
		class HUDCommon
		{
			file = "OPTRE_FunctionsLibrary\Functions\CommonHUD";
			
			class Radar {};			
			class SquadPIP {};			
			class HealCheck {};
			class AmmoCountSetProgress {};

		};
		
		class Maths
		{
			file = "OPTRE_FunctionsLibrary\Functions\Maths";
		
			class MathsTriangulatePos {};
			class ModelToWorldCalcPitchBankYaw {};
			class GetVelocityWithAddedSpeedDirAndDown {};
		};
		
		class Modules 
		{
			file = "OPTRE_FunctionsLibrary\Functions\Modules";
			
			class ModuleHUD {};
			class ModuleHEVStart {};
			class ModulePelicanDropSupplys {};
			class ModulePelicanAirAssault {};
			
		};
		
		
		class HUDLoaders 
		{
			file = "OPTRE_FunctionsLibrary\Functions\HudLoaders";
			
			class HudLoad_MarrineEyeDisplay1 {};
			class HudLoad_ODST1 {};
			class HudLoad_MarrineGlass1 {};
		};
		
		/*
		class HEVnew 
		{
			file = "OPTRE_FunctionsLibrary\Functions\HEV";
			
			class AssignAsDriverRemotely {};
			
		};
		*/

		class SupportSystem
		{
			file = "OPTRE_FunctionsLibrary\Functions\CombatSupport";
			
			class CS_PelicanDropSupplys {};
			class CS_MonitorSupplyPodDrop {};
			class CS_PelicanAirAssault {};
			class PelicanAttachToPoints {};
			
		};
		
		class Arrays
		{
			file = "OPTRE_FunctionsLibrary\Functions\Arrays";
			
			class StringToArrayOfString {}; 
		};
		
	}; 
	
};