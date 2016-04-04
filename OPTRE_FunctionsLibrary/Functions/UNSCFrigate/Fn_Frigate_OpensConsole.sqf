//0 = [part_1,"HANGER SERVICE LIFT",["Hanger Service Lift","Hanger Environment","Shipboard Database","Ships Computer Log"]] spawn OPTRE_fnc_Frigate_OpensConsole;

createDialog "OPTRE_Frigate_Base";
disableSerialization; 

_ctrl1 = (findDisplay 25998) displayCtrl 1;
_ctrl2 = (findDisplay 25998) displayCtrl 2;
_ctrl  = (findDisplay 25998) displayCtrl 3;

OPTRE_Frigate_Current = _this select 0; // part_1
_consoleName = _this select 1; // "Frigate Hanger"
_menusAvaibleAtConsole = _this select 2; //["Hanger Service Lift","Hanger Environment","Shipboard Database","Ships Computer Log"];

_defaultDialog = _menusAvaibleAtConsole select 0; //"Hanger Service Lift"; 

OPTRE_Frigate_Path = "";
_frigateName = "Final Dawn";

_results = [player,_menusAvaibleAtConsole] call OPTRE_fnc_Frigate_System_Access;
_privelageLevel =  _results select 0 select 0; 
_privelageLevelValue =  _results select 0 select 1; 
_cardHeldByPlayer = _results select 1; 
_allowedMenuItems = _results select 2; 

// Start Boot
private ["_text"];

// Do boot text. 
{
if (_x == "") then {_text = "";};
	{
		_text = (_text + toString [_x]);
		_ctrl ctrlSetStructuredText parseText _text;
		sleep 0.01;
	} forEach toArray _x;
	if (_x != "") then {_text = (_text + "<br/>");};
	_ctrl ctrlSetStructuredText parseText _text;
	sleep .1;
} forEach [
	"",
	("Welcome >>>"),
	("Access of UNSC Frigate " + _frigateName + " Systems Attempt >>>"),
	("Access Credentials Validating Now >>>"),
	("Access Credentials Validated >>>"),
	("Privilege Level Granted: " + _privelageLevel + " >>>"),
	("Console Event ID Logged: " + str ((round random 8999) + 1000))
];

// Do Console Text
sleep .2;
_text = "";
_ctrl ctrlSetStructuredText parseText _text;
{
	{
		_text = ("<t size='1.3	'>" + _text + toString [_x] + "</t>");
		_ctrl ctrlSetStructuredText parseText _text;
		sleep 0.02;
	} forEach toArray _x;
	_text = (_text + "<br/>");
	_ctrl ctrlSetStructuredText parseText _text;
	sleep .1;
} forEach [
	(_consoleName + " >>>"),
	("PRIVILEGE LEVEL: " + _privelageLevel),
	"",
	""
];

((findDisplay 25998) displayCtrl 1) ctrlSetTextColor [1,0.7,0,0.4];
((findDisplay 25998) displayCtrl 2) ctrlSetTextColor [1,0.7,0,1];
((findDisplay 25998) displayCtrl 3) ctrlSetTextColor [1,0.7,0,1];
((findDisplay 25998) displayCtrl 4) ctrlSetTextColor [1,0.7,0,1];
((findDisplay 25998) displayCtrl 5) ctrlSetTextColor [1,0.7,0,1];
	
sleep 2; 

OPTRE_Frigate_allowedMenuItems = _allowedMenuItems; 

if (count _allowedMenuItems > 0) then {

	private ["_dialog"];
	{
		_string = _x select 0;
		if (_string == _defaultDialog) then {_dialog = _x select 1;};
   } forEach _allowedMenuItems;

   closeDialog 0;
   createDialog _dialog;

	_ctrlOpened = ((findDisplay 25000) displayCtrl 3); 
	{
	if (_x == "") then {_text = "";};
		{
			_text = ("<t size='2.0'>" + _text + toString [_x] + "</t>");
			_ctrlOpened ctrlSetStructuredText parseText _text;
			sleep 0.02;
		} forEach toArray _x;
		if (_x != "") then {_text = (_text + "<br/>");};
		_ctrlOpened ctrlSetStructuredText parseText _text;
		sleep .1;
	} forEach [
		("AWAITING USER INPUT >>>")
	];
	//_ctrlOpened ctrlSetStructuredText parseText _text;
	
	[
		[OPTRE_Frigate_Current, ( (name player) + " Accessed Ships Systems via " + _consoleName + " #" + _privelageLevel )
	],"OPTRE_fnc_Frigate_LogAdd",false,false,true] call BIS_fnc_MP;
	
} else {

	_ctrl ctrlSetStructuredText parseText "<t size='2.0'> <br/> </t>";
	{
	if (_x == "") then {_text = "";};
		{
			_text = ("<t size='2.0'>" + _text + toString [_x] + "</t>");
			_ctrl ctrlSetStructuredText parseText _text;
			sleep 0.02;
		} forEach toArray _x;
		if (_x != "") then {_text = (_text + "<br/>");};
		_ctrl ctrlSetStructuredText parseText _text;
		sleep .1;
	} forEach [
		("USER CREDENTIALS REJECTED >>>")
	];	

	((findDisplay 25998) displayCtrl 1) ctrlSetTextColor [1,0,0,0.4];
	((findDisplay 25998) displayCtrl 2) ctrlSetTextColor [1,0,0,1];
	((findDisplay 25998) displayCtrl 3) ctrlSetTextColor [1,0,0,1];
	((findDisplay 25998) displayCtrl 4) ctrlSetTextColor [1,0.7,0,1];
	((findDisplay 25998) displayCtrl 5) ctrlSetTextColor [1,0.7,0,1];
	
	[[OPTRE_Frigate_Current, ( (name player) + " Denied Access to Ships Systems via " + _consoleName + " #" + _privelageLevel )],"OPTRE_fnc_Frigate_LogAdd",false,false,true] call BIS_fnc_MP;
	
};

OPTRE_Frigate_BootUpText = _text;
