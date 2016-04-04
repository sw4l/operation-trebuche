//["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]

_player = _this select 0;
_requestedMenuPopulation = _this select 1;

_cardHeldByPlayer = [];
_allowedMenuItems = [];

// find cards held by players
_cardHeldByPlayer = ["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"];

// rate cards held by player 
_topCard = ["NONE",0];
{
	_result = switch _x do {
		case "BLACK": {10}; // ONI
		case "GREY": {11}; // Captain
		case "WHITE": {2}; // Solider / Marrine 
		case "GREEN": {1}; // Crew 
		case "RED": {9}; // Bridge Crew 
		case "YELLOW": {8}; // ODST
		case "BLUE": {7}; // Mechanics / Leaders 
		default {-1};
	};
	if (_result > (_topCard select 1)) then {_topCard = [_x,_result];};
} forEach _cardHeldByPlayer;

// determine menu population 
{

	_allowed = switch _x do {
		case "Hanger Service Lift": 	{["OPTRE_Frigate_ServiceLiftControl",			["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "Hanger Environment": 		{["OPTRE_Frigate_HangerControls",				["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "Shipboard Database": 		{["OPTRE_Frigate_Wiki",							["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "Ships Computer Log": 		{["OPTRE_Frigate_Log",							["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
		case "": 						{["",											["BLACK","GREY","WHITE","GREEN","RED","YELLOW","BLUE"]	]	};
	};
	
	_dialog = _allowed select 0;
	_dialogAcsessColours = _allowed select 1;
	if ({_x in _cardHeldByPlayer;} count _dialogAcsessColours > 0) then {_allowedMenuItems pushBack [_x,_dialog];};
	
} forEach _requestedMenuPopulation;

[_topCard,_cardHeldByPlayer,_allowedMenuItems]