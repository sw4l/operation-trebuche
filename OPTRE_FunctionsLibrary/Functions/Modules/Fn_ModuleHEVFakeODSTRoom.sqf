_mode = param [0,"",[""]];
_input = param [1,[],[[]]];

switch _mode do {
	case "init": {// Default object init
		/*_logic = _input param [0,objNull,[objNull]]; // Module logic
		_isActivated = _input param [1,true,[true]]; // True when the module was activated, false when it's deactivated
		_isCuratorPlaced = _input param [2,false,[true]]; // True if the module was placed by Zeus*/

	};
	case "attributesChanged3DEN": {// When some attributes were changed (including position and rotation)
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		{if (typeName _x == "Array") then {delete3DENEntities [_x select 1];};} forEach (get3DENConnections _logic);
		_objectsCreated = [getPos _logic, getDir _logic, (_logic getVariable ["Column",0]), (_logic getVariable ["Row",12]), (_logic getVariable ["name","h"])] call OPTRE_Fnc_SpawnFakeHEVRoom;
		add3DENConnection ["Sync",_objectsCreated,_logic];
	};
	case "registeredToWorld3DEN": {// When added to the world (e.g., after undoing and redoing creation)
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		_objectsCreated = [getPos _logic, getDir _logic, (_logic getVariable ["Column",0]), (_logic getVariable ["Row",12]), (_logic getVariable ["name","h"])] call OPTRE_Fnc_SpawnFakeHEVRoom;
		add3DENConnection ["Sync",_objectsCreated,_logic];
	};
	case "unregisteredFromWorld3DEN": {// When removed from the world (i.e., by deletion or undoing creation)
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		{if (typeName _x == "Array") then {delete3DENEntities [_x select 1];};} forEach (get3DENConnections _logic);
	};
	case "connectionChanged3DEN": {// When connection to object changes (i.e., new one is added or existing one removed)
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		{if (typeName _x == "Array") then {delete3DENEntities [_x select 1];};} forEach (get3DENConnections _logic);
		_objectsCreated = [getPos _logic, getDir _logic, (_logic getVariable ["Column",0]), (_logic getVariable ["Row",12]), (_logic getVariable ["name","h"])] call OPTRE_Fnc_SpawnFakeHEVRoom;
		add3DENConnection ["Sync",_objectsCreated,_logic];
	};
};

true