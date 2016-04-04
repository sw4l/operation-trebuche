class ModuleCASMissile_F;
class ModuleCASGunMissile_F;

class OPTRE_PelicanSupplyDrop : ModuleCASMissile_F {
	displayName = "Pelican Resupply";
	category = "OPTRE_ZeusReSup";
	scopeCurator = 2;
	curatorInfoType = "OPTRE_ZeusDisplay_ResupplyPelican"; 
	function = "OPTRE_fnc_ModulePelicanDropSupplys";
	portrait = "OPTRE_Vehicles\Pelican\Data\icon2.paa";
	author = "Article 2 Studios";
};

class OPTRE_PelicanAirAssault : OPTRE_PelicanSupplyDrop {
	//_generalMacro = "tre1";
	displayName = "Pelican Air Assault";
	category = "OPTRE_ZeusReSup";
	scopeCurator = 2;
	curatorInfoType = "OPTRE_ZeusDisplay_PelicanAirAssault"; 
	function = "OPTRE_fnc_ModulePelicanAirAssault";
	portrait = "OPTRE_Vehicles\Pelican\Data\icon2.paa";
	author = "Article 2 Studios";
};

class OPTRE_ODSTDrop : OPTRE_PelicanSupplyDrop {
	//_generalMacro = "tre1";
	displayName = "ODST Drop Module";
	category = "OPTRE_ZeusReSup";
	scopeCurator = 2;
	curatorInfoType = "OPTRE_ZeusDisplay_ODSTDrop"; 
	function = "OPTRE_fnc_ModuleODSTHEV";
	portrait = "OPTRE_Vehicles\HEV\Data\icon2.paa";
	author = "Article 2 Studios";
};

class OPTRE_CAS : ModuleCASGunMissile_F {
	//_generalMacro = "tre1";
	displayName = "OPTRE CAS Module";
	//category = "OPTRE_ZeusReSup";
	//scopeCurator = 2;
	curatorInfoType = "OPTRE_ZeusDisplay_CAS"; 
	function = "OPTRE_fnc_ModuleCAS";
	portrait = "OPTRE_Vehicles\Falcon\Data\icon2.paa"; // picture = "OPTRE_Vehicles\Falcon\Data\icon2.paa";
	author = "Article 2 Studios";
};