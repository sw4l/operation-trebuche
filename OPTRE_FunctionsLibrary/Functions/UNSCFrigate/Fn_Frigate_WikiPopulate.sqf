private ["_ctrl","_unit","_topic"];

_ctrl = _this select 0; 
_unit = _this select 1;
_topic = _this select 2;
_populate = _this select 3; 

if _populate then {
	
	private ["_listbox"];
	
	_listbox = ((findDisplay 25999) displayCtrl 1501);
	lbClear _listbox;
	
	switch _topic do {
	
		case 0: {
			{   
				_i = _listbox lbAdd (_x select 0); 
				_listbox lbSetData [_i, (_x select 1)];  
			} forEach [['Big Wilk','big_wilk'],['Lumnuon','Lumnuon'],['The Dog 88','theDog'],['Bradster','bradster'],['ZephyrSouza','ZephyrSouza'],['Galahir 950','Galahir950'],['SW4L','SW4L']];
		};
		case 1: {
			{
				_i = _listbox lbAdd (getText (configfile >> "CfgWeapons" >> _x >> "displayName")); 
				_listbox lbSetData [_i, _x];
			} forEach ["OPTRE_MA5B_AC","OPTRE_BR55HB","OPTRE_M392_DMR_ScopedRifle","OPTRE_M7S","OPTRE_M73","OPTRE_M6G_SF","OPTRE_M45","OPTRE_M41_SSR"];
		};
		case 2: {
			{
				_i = _listbox lbAdd (getText (configfile >> "CfgVehicles" >> _x >> "displayName")); 
				_listbox lbSetData [_i, _x];
			} forEach ["OPTRE_M12_FAV","OPTRE_Mongoose_Green_F","OPTRE_Pelican_armed_green","OPTRE_UNSC_falcon_green","OPTRE_HEV"];
			//["OPTRE_HEV","OPTRE_M12_LRV","",/*,"OPTRE_mako_drone_base"*/,"OPTRE_Mongoose_Black_F","OPTRE_Pelican_armed_black"/*,"OPTRE_m1087_stallion_base","OPTRE_m1015_mule_base"*/];
		};
		case 3: {
			
		};	
	
	};
	
	_listbox lbSetCurSel 0; 
	lbSort [_listbox, "ASC"];
};

switch _topic do {
	
	case 0: {
	_profilePicture = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "profilePicture");
	_text = if (_profilePicture != "") then {("Subjects Likeness:<br/><br/><t size='10'><img image='" + _profilePicture + "' width='1' height='1'/><br/><br/></t>")} else {""};//("Subject: " + _unit + "<br/><br/>");
	_ctrl ctrlSetStructuredText parseText _text;

	_firstName = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "firstName");
	_secondName = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "secondName");
	_gender = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "sex");
	_DOB = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "DOB");
	_homeWorld = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "homeWorld");
	_nation = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "nationality");

	_tittle = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "tittle");
	_ally = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "Allegiance");
	_afilliation = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "Affiliations");
	_role = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "role");

	_graph1 = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "bioParagraph1");
	_graph2 = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "bioParagraph2");
	_graph3 = getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "bioParagraph3");

	{
		_text = (_text + _x + "<br/>");
		_ctrl ctrlSetStructuredText parseText _text;
	} forEach [
		("Pseudonym: " + (getText (missionconfigfile >> "OPTRE_Wiki_DevProfiles" >> _unit >> "pseudonym"))),
		//"",
		("First Name: " +  (if (_firstName != "") then {_firstName} else {"UNKNOWN"}) ),
		("Suriname: " + (if (_secondName != "") then {_secondName} else {"UNKNOWN"}) ),
		("Gender: " + (if (_gender != "") then {_gender} else {"UNKNOWN"}) ),	
		("Date of Birth: " + (if (_DOB != "") then {_DOB} else {"UNKNOWN"}) ),
		("Home World: " + (if (_homeWorld != "") then {_homeWorld} else {"UNKNOWN"}) ),
		("Nationality: " + (if (_nation != "") then {_nation} else {"UNKNOWN"}) ),
		"",
		("Title: " + (if (_tittle != "") then {_tittle} else {"UNKNOWN"}) ),
		("Allegiance: " + (if (_ally != "") then {_ally} else {"UNKNOWN"}) ),
		("Branch: " + (if (_afilliation != "") then {_afilliation} else {"UNKNOWN"}) ),
		("Role: " + (if (_role != "") then {_role} else {"UNKNOWN"}) ),
		"",
		"Biography:",
		_graph1,
		"",
		_graph2,
		"",
		_graph3
	];
	
	};
	
	case 1: {
		_picture = getText (configfile >> "CfgWeapons" >> _unit >> "picture");
		_name = getText (configfile >> "CfgWeapons" >> _unit >> "displayName");
		_Library = getText (configfile >> "CfgWeapons" >> _unit >> "Library" >> "libTextDesc");
		_magazines = getArray (configfile >> "CfgWeapons" >> _unit >> "magazines");
		
		_Magazinetext = "Magazines:<br/>";
		{
			_Magazinetext = (_Magazinetext + (getText (configfile >> "CfgMagazines" >> _x >> "displayName")) + "<br/>");
		} forEach _magazines;
		_text = ("<br/>" + _name + ":<br/><br/><t size='10'><img image='" + _picture + "' width='1' height='1'/><br/><br/></t><br/>" + _Magazinetext + "<br/>Description:<br/>" + _Library + "<br/><br/>");

		_ctrl ctrlSetStructuredText parseText _text;
	};

	case 2: {
		_picture = getText (configfile >> "CfgVehicles" >> _unit >> "picture");
		_name = getText (configfile >> "CfgVehicles" >> _unit >> "displayName");
		_Library = getText (configfile >> "CfgVehicles" >> _unit >> "Library" >> "libTextDesc");
		_t = (_name + " Silhouette:<br/><br/> <t align='center'> <t size='10'><img image='" + _picture + "' width='1' height='1'/><br/><br/></t></t>Description:<br/>" + _Library);
		_ctrl ctrlSetStructuredText parseText _t;
	};
	
};