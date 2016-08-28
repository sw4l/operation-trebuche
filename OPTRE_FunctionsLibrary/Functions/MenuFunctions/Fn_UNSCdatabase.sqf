private ["_topicTittle","_topicPicture","_topicLong","_topicShort"];

disableSerialization;

if (str (findDisplay 5601) == "No display") then {createDialog "OPTRE_UnscDataBase";};

_dialog = findDisplay 5601;	
_controlMenuList = _dialog displayCtrl 1500;
_topic = _dialog displayCtrl 1501;
_topicEntrys = _dialog displayCtrl 1502;

_topicTittle = (_dialog displayCtrl 10);
_topicPicture = (_dialog displayCtrl 11);
_topicPictureLong = (_dialog displayCtrl 14);
_topicLong = (_dialog displayCtrl 12);
_topicShort = (_dialog displayCtrl 13);

if (typeName (_this select 0) == "object") then {
	
	_console = _this select 0; 
	_highestCard = _this select 1; 
	
	(_dialog displayCtrl 1) ctrlSetStructuredText parseText ("<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> "+"Logged In: "+(name player));
	(_dialog displayCtrl 2) ctrlSetText (format ["%1",_highestCard]); 
	
	{	
		_menuName = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "MenuName");
		_function = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "Function");
		_securityValue = getNumber (configfile >> "cfgOptreUNSCmenus" >> _x >> "Security");
		_i = _controlMenuList lbAdd _menuName;
		_controlMenuList lbSetData [_i, _function];
		_controlMenuList lbSetValue [_i, _securityValue];
		_controlMenuList lbSetPicture [_i,(getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "icon"))];
		if (_x == "UNSC_DATABASE") then {_controlMenuList lbSetCurSel _i;};
	} forEach OPTRE_UNSC_Console_MenusAllowed;
	
	{
		_i = _topic lbAdd _x;
		_topic lbSetData [_i,_x];
	} forEach [
		"OPTRE Developers",
		"UNSC Ground Vehicles",
		"UNSC Air Vehicles",
		"UNSC Weapons"
	];
	_topic lbSetCurSel 0;

	[true,(lbData [1501,(lbCurSel 1501)])] call OPTRE_fnc_UNSCdatabase; 
	
} else {
	
	if (typeName (_this select 0) == "bool") then {
	
		_bool = _this select 0;
		_topic = _this select 1; 
		
		lbClear _topicEntrys;
		
		switch _topic do {
			case default
			{
			
			};	
			case "OPTRE Developers":	
			{
				{
					_i = _topicEntrys lbAdd _x;
					_topicEntrys lbSetData [_i,_x];
				} forEach ((configfile >> "OPTRE_Wiki_DevProfiles") call BIS_fnc_getCfgSubClasses);	
			};
			case "UNSC Air Vehicles":	
			{
				{
						_i = _topicEntrys lbAdd (getText (configfile >> "CfgVehicles" >> _x >> "displayName"));
						_topicEntrys lbSetData [_i, _x];
				} forEach [	
					//"OPTRE_Longsword_AA_F","OPTRE_Longsword_BOMB_F","OPTRE_Longsword_CANNON_F","OPTRE_Longsword_CAS_F","OPTRE_Longsword_SUPPRESS_F",
					"OPTRE_Longsword_BASIC",
					"OPTRE_Pelican_armed_marine","OPTRE_Pelican_unarmed_marine","OPTRE_UNSC_falcon_green",
					"OPTRE_HEV"		
				];	
			};
			case "UNSC Ground Vehicles":	
			{
				{
						_i = _topicEntrys lbAdd (getText (configfile >> "CfgVehicles" >> _x >> "displayName"));
						_topicEntrys lbSetData [_i, _x];
				} forEach [						
					"OPTRE_M12_FAV_Marine","OPTRE_M12_LRV_Marine","OPTRE_M12A1_LRV_Marine","OPTRE_M12G1_LRV_Marine","OPTRE_M12R_AA_Marine","OPTRE_M813_TT_Marine",
					"OPTRE_m1087_stallion_unsc","OPTRE_m1087_stallion_unsc_box","OPTRE_m1087_stallion_unsc_medical","OPTRE_m1087_stallion_unsc_mover","OPTRE_m1087_stallion_unsc_refuel","OPTRE_m1087_stallion_unsc_repair","OPTRE_m1087_stallion_unsc_resupply",
					"OPTRE_Mongoose_Marine_F"
				];				
			};	
			case "UNSC Weapons": 
			{
				{
					_i = _topicEntrys lbAdd (getText (configfile >> "CfgWeapons" >> _x >> "displayName"));
					_topicEntrys lbSetData [_i, _x];
				} forEach [					
					"OPTRE_M41_SSR","OPTRE_M41_SSR_G",
					"OPTRE_M6G","OPTRE_M6G_SF","OPTRE_M6C",
					"OPTRE_M7_Folded","OPTRE_M7",
					"OPTRE_M45","OPTRE_M45E","OPTRE_M45A","OPTRE_M45A",
					"OPTRE_MA5B_AC","OPTRE_MA5BGL_AC",
					"OPTRE_BR55HB_ScopedRifle",
					"OPTRE_M392_DMR_ScopedRifle",
					"OPTRE_M73_base",
					"OPTRE_SRS99D_SC_LS"
				];				
			};		
		};
		
		lbSort [_topicEntrys, "ASC"];
		_topicEntrys lbSetCurSel 0;
		
	} else {
		
		private ["_topicEntry"];
		
		_topic = _this select 0;
		_topicEntry = _this select 1; 
		
		switch _topic do {
			case default
			{
			
			};
			case "OPTRE Developers": 
			{
				_topicPicture ctrlSetText (getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "profilePicture"));
				_topicPictureLong ctrlSetText "";
				_topicTittle ctrlSetText (format ["Subjects Pseudonym: %1",(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "pseudonym"))]); 
				_topicLong ctrlSetText (
					format [
						"\n%1\n\n%2\n\n%3",
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "bioParagraph1")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "bioParagraph2")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "bioParagraph3"))
					]
				);
				_topicShort ctrlSetText (
					format [
						"TITTLE: %1\nFIRSTNAME: %2\nSURNAME: %3\nSEX: %4\nDOB: %5\nHOMEWORLD: %6\nNATIONALITY: %7\nALLEGIANCE: %8\nROLE: %9",
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "tittle")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "firstName")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "secondName")),
						//(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "pseudonym")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "sex")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "DOB")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "homeWorld")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "nationality")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "Allegiance")),
						//(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "Affiliations")),
						(getText (configfile >> "OPTRE_Wiki_DevProfiles" >> _topicEntry >> "role"))
					]
				); 
			};
			case "UNSC Ground Vehicles": 
			{
				_topicPicture ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "picture");
				_weapons = getArray (configfile >> "CfgVehicles" >> "OPTRE_UNSC_Army_Soldier_Radioman_WDL" >> "weapons");
				_topicPictureLong ctrlSetText "";
				_topicShort ctrlSetText "";
				_topicTittle ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "displayName");
				_topicLong ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "Library" >> "libTextDesc");
			};
			case "UNSC Air Vehicles": 
			{
				_topicPicture ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "picture");
				_weapons = getArray (configfile >> "CfgVehicles" >> "OPTRE_UNSC_Army_Soldier_Radioman_WDL" >> "weapons");
				_topicPictureLong ctrlSetText "";
				_topicShort ctrlSetText "";
				_topicTittle ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "displayName");
				_topicLong ctrlSetText getText (configfile >> "CfgVehicles" >> _topicEntry >> "Library" >> "libTextDesc");
			};
			case "UNSC Weapons": 
			{
				_topicPicture ctrlSetText "";
				_topicPictureLong ctrlSetText getText (configfile >> "CfgWeapons" >> _topicEntry >> "picture");
				_topicTittle ctrlSetText getText (configfile >> "CfgWeapons" >> _topicEntry >> "displayName");
				_topicLong ctrlSetText getText (configfile >> "CfgWeapons" >> _topicEntry >> "Library" >> "libTextDesc");
				_topicShort ctrlSetText "";	
			};
			
		};
	
	};
	
};