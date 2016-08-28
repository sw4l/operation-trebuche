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
			class MapScale {};
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
		
		class HUDMonitors
		{
			file = "OPTRE_FunctionsLibrary\Functions\HUDMonitors";
			
			class HudLoad_MarrineEyeDisplay1 {};			
			class HudLoad_MarrineGlass1 {};			
			class HudLoad_ODST1 {};
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
			class ModuleHEVCleanUp {};
			class ModulePelicanDropSupplys {};
			class ModulePelicanAirAssault {};
			class ModuleODSTHEV {};
			class ModuleCAS {};
			class ModuleZeus {};
			class ModuleHEV {};
			class ModuleHEVFakeODSTRoom {};
		};
			
		class HEV
		{
		
			file = "OPTRE_FunctionsLibrary\Functions\HEV";
			
			class HEV {};
			
			class SpawnHEVsFrigate {};
			class SpawnHEVsNoFrigate {};
			class SpawnFakeHEVRoom {};
			
			class HEVCleanUp {};
			class HEVControls {};
			class HEVDoor {};
			class HEVHandleLanding {};
			
			class PlayerHEVEffectsUpdate_BoasterDown {};
			class PlayerHEVEffectsUpdate_Chute {};
			class PlayerHEVEffectsUpdate_Light {};
			class PlayerHEVEffectsUpdate_ReEntrySounds {};
			
			class HEVRoomDynamicSetupGrabUnits;
			class HEVRoomFrigateSetupGrabUnits;
		};
		
		class MenuSystem
		{
			file = "OPTRE_FunctionsLibrary\Functions\MenuSystem";
			
			class Menu {};
		};
		
		class MenuFunctions
		{
			file = "OPTRE_FunctionsLibrary\Functions\MenuFunctions";
			
			class HEVRoom {};
			class UNSCdatabase {};
		};
		
		class Misc
		{
			file = "OPTRE_FunctionsLibrary\Functions\Misc";
			
			class CountDown {};
			class CleanUp {};	
		};
		
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
		
		class Jetpack 
		{
			file = "OPTRE_FunctionsLibrary\Functions\Jetpack";
			
			class JetPack {};
		};
		
		/*class FrigateSystem 
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
		};*/

	}; 

};