	disableSerialization;

	_console = _this select 0;
	_highestCard = _this select 1; 
		
	createDialog "OPTRE_HEVPanel";
	
	_dialog = findDisplay 5600;
	
	_HEVMenuList = _dialog displayCtrl 1500;
	_controlMenuList = _dialog displayCtrl 1501;
	(_dialog displayCtrl 1) ctrlSetStructuredText parseText ("<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> "+"Logged In: "+(name player));
	(_dialog displayCtrl 2) ctrlSetText (format ["%1",_highestCard]); 
	_10 = (_dialog displayCtrl 10);
	_11 = (_dialog displayCtrl 11);
	_12 = (_dialog displayCtrl 12);
	_13 = (_dialog displayCtrl 13);
	_14 = (_dialog displayCtrl 14);
	_15 = (_dialog displayCtrl 15);
	_16 = (_dialog displayCtrl 16);
	_info = (_dialog displayCtrl 1000);

	{	
		_menuName = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "MenuName");
		_function = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "Function");
		_securityValue = getNumber (configfile >> "cfgOptreUNSCmenus" >> _x >> "Security");
		_i = _controlMenuList lbAdd _menuName;
		_controlMenuList lbSetData [_i, _function];
		_controlMenuList lbSetValue [_i, _securityValue];
		_controlMenuList lbSetPicture [_i,(getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "icon"))];
		if (_x == "UNSC_HEV") then {_controlMenuList lbSetCurSel _i;};
	} forEach OPTRE_UNSC_Console_MenusAllowed;
	
	_count = 0;
	{	
		_count = _count + 1; 
		_i = _HEVMenuList lbAdd (format ["Human Entry Vehicle %1",(if (_count < 10) then {("0" + str (_count))} else {(_count)})]);
		_HEVMenuList lbSetPicture [_i, "OPTRE_Vehicles\hev\Data\icon2.paa"];
	} forEach (_console getVariable ["OPTRE_PodsLinkedToConsole",[]]);

	{
		_i = _10 lbAdd (format ["Start Height: %1m",_x]);
		_10 lbSetValue [_i, _x];
	} forEach [3400];
	{
		_i = _11 lbAdd (format ["Atmosphere Start: %1m",_x]);
		_11 lbSetValue [_i, _x];
	} forEach [2600];
	{
		_i = _12 lbAdd (format ["Atmosphere End: %1m",_x]);
		_12 lbSetValue [_i, _x];
	} forEach [2200];
	{
		_i = _13 lbAdd (format ["Chute Open: %1m",_x]);
		_13 lbSetValue [_i, _x];
	} forEach [1200];
	{
		_i = _14 lbAdd (format ["Chute Detach: %1m",_x]);
		_14 lbSetValue [_i, _x];
	} forEach [600];
	{
		_i = _15 lbAdd (format ["Boaster Height: %1m",_x]);
		_15 lbSetValue [_i, _x];
	} forEach [0];
	{
		_i = _16 lbAdd (format ["Control: %1",(switch _x do {case 0: {"No Control"}; case 1: {"Rotation Only"}; case 2: {"Full Control"}; })]);
		_16 lbSetValue [_i, _x];
	} forEach [0,1/*,2*/];	
	_16 lbSetCurSel 1;
	
	{_x lbSetCurSel 0;} forEach [_10,_11,_12,_13,_14,_15];
	
	_countHEVs = count (_console getVariable ["OPTRE_PodsLinkedToConsole",[]]) - 1;
	
	(_dialog displayCtrl 1201) ctrlAddEventHandler ["Draw","
		if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {
			(_this select 0) drawLine [([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 0] call BIS_fnc_relPos), ([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 180] call BIS_fnc_relPos), [1,0,0,1]];
			(_this select 0) drawLine [([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 90] call BIS_fnc_relPos), ([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 270] call BIS_fnc_relPos), [1,0,0,1]];
			_this select 0 drawEllipse [(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 150, 150, 0, [1, 0, 0, 0.5], '#(rgb,8,8,3)color(1,0.6,0,1)'];
		};
	"];
	
	While {str (findDisplay 5600) != "No display"} do {
	
		for "_i" from 0 to _countHEVs do {
			if (isNull driver ((_console getVariable ["OPTRE_PodsLinkedToConsole",[]]) select _i)) then {
				_HEVMenuList lbSetPictureColor [_i, [1, 0, 0, 1]]; 
				_HEVMenuList lbSetPictureColorSelected [_i, [1, 0, 0, 1]];
			} else {
				_HEVMenuList lbSetPictureColor [_i, [1, 1, 1, 1]];
				_HEVMenuList lbSetPictureColorSelected [_i, [0, 0, 0, 1]];
			};
		};
		
		switch (_console getVariable ["OPTRE_PodsLaunchIn",-1]) do {
			case -1: {
				_info ctrlSetStructuredText parseText "Ready To Launch<br />Now!";
				_info ctrlSetTextColor [1,1,1,1];	
			};
			case -2: {
				_info ctrlSetStructuredText parseText "Cool Down In Progress Cool Downs Lasts 60s Seconds";//<br />
				_info ctrlSetTextColor [1,0,0,1];			
			};
			default {
				_info ctrlSetText format ["HEVs Launch In: %1seconds",(_console getVariable ["OPTRE_PodsLaunchIn",-1])];
				_info ctrlSetTextColor [1,1,1,1];			
			};
			
		};

	};