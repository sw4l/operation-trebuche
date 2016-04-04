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
			class GetHudTypeString {};
			class SetAmmoCounterState {};
			
		};
		
		class HUDCommon
		{
			file = "OPTRE_FunctionsLibrary\Functions\CommonHUD";
			
			class Radar {};			
			class SquadPIP {};			
			class HealCheck {};
			class AmmoCountSetProgress {};
			class HudMap {};

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
			//class ModuleHEVStart {};
			class ModulePelicanDropSupplys {};
			class ModulePelicanAirAssault {};
			class ModuleODSTHEV {};
			class ModuleCAS {};
			class ModuleZeus {};
			
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
			class CS_ODSTHEV {};
			class PelicanAttachToPoints {};
			
		};
		
		class Arrays
		{
			file = "OPTRE_FunctionsLibrary\Functions\Arrays";
			
			class StringToArrayOfString {}; 
		};
		
		class FrigateSystem 
		{
			file = "OPTRE_FunctionsLibrary\Functions\UNSCFrigate";
			
			class Frigate_OpensConsole {};
			
			class FrigateComputerSystemInit {};
			class FrigateAddVirtualStock {};
			class FrigateRemoveVirtualStock {};
			class FrigateFilterInventory {};
			class FrigateOnLiftDeal {};
			class FrigateHangerLiftBusy {};
			
			class Frigate_System_Access {};
			class FrigateSwitchFunction {};
			class Frigate_Dialog_Time {};
			
			class Frigate_WikiPopulate {};
			
			class Frigate_LogAdd {};
			
			class FrigateSpawnRoomDeliver {};
			class FrigateUpDownLift {};
			
			class AddActionGlobal {};
			
		};

	}; 

};