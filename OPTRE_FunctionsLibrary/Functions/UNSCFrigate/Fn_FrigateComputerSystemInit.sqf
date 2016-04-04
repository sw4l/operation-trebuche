{
	private _fnc_scriptNameParent = if (isNil '_fnc_scriptName') then {'OPTRE_fnc_FrigateComputerSystemInit'} else {_fnc_scriptName};
	private _fnc_scriptName = 'OPTRE_fnc_FrigateComputerSystemInit';
	scriptName _fnc_scriptName;
_mode = param [0,"",[""]];
_input = param [1,[],[[]]];

hint str _this; 

switch _mode do {

case "init": {
_logic = _input param [0,objNull,[objNull]]; 
_isActivated = _input param [1,true,[true]]; 
_isCuratorPlaced = _input param [2,false,[true]]; 

};

case "attributesChanged3DEN": {
_logic = _input param [0,objNull,[objNull]]; 

};

case "registeredToWorld3DEN": {
_logic = _input param [0,objNull,[objNull]]; 

};

case "unregisteredFromWorld3DEN": {
_logic = _input param [0,objNull,[objNull]]; 

};

case "connectionChanged3DEN": {
_logic = _input param [0,objNull,[objNull]]; 

};
};
true;

private ["_Frigate","_centralSection"];

_Frigate = _logic;
_posActual = getPos _Frigate;
_pos = [(_posActual select 0), (_posActual select 1), 250]; 
_dir = 0; 
_addActionArray = []; 

_centralSection = create3DENEntity ["Object", _x, _pos];

{


_veh = create3DENEntity ["Object", _x, _pos];
_veh setVectorDirAndUp [[0,0,0],[0,0,0]];


switch _x do {
case "OPTRE_Frigate_hangar_door": { 
_Frigate setVariable ["OPTRE_Frigate_HangerDoor_Rear",_veh,true]; 
{
_liftConsole = createVehicle ["OPTRE_Frigate_Console", [0,0,0], [], 0, "CAN_COLLIDE"];
_liftConsole attachTo [_veh ,_x]; 
_liftConsole setDir ((getDir _veh) - 180);
_liftConsole setVariable ["OPTRE_Frigate_Dummy",_Frigate,true];
_addActionArray pushBack [_liftConsole, ["Use Console",{0 = [(_this select 0) getVariable "OPTRE_Frigate_Dummy","AFT HANGER DOORS CONSOLE",["Hanger Environment","Shipboard Database","Ships Computer Log"]] spawn OPTRE_fnc_Frigate_OpensConsole;},[],0,true,true,"","_this distance _target < 2"]];
} forEach [[-24,-2,-7.65],[24,-2,-7.65]];
};		
case "OPTRE_Frigate_hangar_ground_doors": { _Frigate setVariable ["OPTRE_Frigate_HangerDoor_RearFloor",_veh,true]; };	
case "OPTRE_Frigate_hangar_lift_door": { _Frigate setVariable ["OPTRE_Frigate_SpawnRoomDoor",_veh,true]; };	
default {};
};

} forEach [
"OPTRE_Frigate_part_1",

"OPTRE_Frigate_part_2_a",
"OPTRE_Frigate_part_2_b",			
"OPTRE_Frigate_part_2_c",		

"OPTRE_Frigate_part_3_a",			
"OPTRE_Frigate_part_3_B",			
"OPTRE_Frigate_part_3_C",		

"OPTRE_Frigate_part_4_a",	
"OPTRE_Frigate_part_4_b",
"OPTRE_Frigate_part_4_c",

"OPTRE_Frigate_part_5_a",			
"OPTRE_Frigate_part_5_b",			
"OPTRE_Frigate_part_5_c",	

"OPTRE_Frigate_part_6_a",			
"OPTRE_Frigate_part_6_b",			
"OPTRE_Frigate_part_6_c",	

"OPTRE_Frigate_part_7_a",			
"OPTRE_Frigate_part_7_B1",			
"OPTRE_Frigate_part_7_B2",	
"OPTRE_Frigate_part_7_C",

"OPTRE_Frigate_part_8_a",			
"OPTRE_Frigate_part_8_b",			
"OPTRE_Frigate_part_8_c",	

"OPTRE_Frigate_hangar_door",			
"OPTRE_Frigate_hangar_ground_doors",	
"OPTRE_Frigate_hangar_lift_door",	

"OPTRE_Frigate_hangar_A",			
"OPTRE_Frigate_hangar_B1",			
"OPTRE_Frigate_hangar_B2",			
"OPTRE_Frigate_hangar_C",	

"OPTRE_Frigate_hangar_D",
"OPTRE_Frigate_hangar_D2"			
];





_lift = createVehicle ["OPTRE_Frigate_vehicle_lift", _pos, [], 0, "CAN_COLLIDE"];
_Frigate setVariable ["OPTRE_Frigate_Lift",_lift,true];
_lift setDir _dir;
{
_liftConsole = createVehicle ["OPTRE_Frigate_Console", [0,0,0], [], 0, "CAN_COLLIDE"];
_liftConsole attachTo [_lift,(_x select 0)];
_liftConsole setVariable ["OPTRE_Frigate_Dummy",_Frigate, true];
_addActionArray pushBack [_liftConsole, ["Use Console",{0 = [(_this select 0) getVariable "OPTRE_Frigate_Dummy","HANGER SERVICE LIFT",["Hanger Service Lift","Hanger Environment","Shipboard Database","Ships Computer Log"]] spawn OPTRE_fnc_Frigate_OpensConsole;},[],0,true,true,"","_this distance _target < 2"]];
_liftConsole setdir (_x select 1);
} forEach [[[0,-12.16,-17.49],_dir],[[12.35,15.11,6.81],_dir - 180],[[-12.35,15.11,6.81],_dir - 180],[[12.35,15.7,6.81],_dir],[[-12.35,15.7,6.81],_dir],[[10.5,15.05,-17.9],_dir],[[-10.5,15.05,-17.9],_dir]];	 



_liftArm = createVehicle ["OPTRE_Frigate_LiftArm", [((_pos select 0) ), ((_pos select 1) - 5.10), ((_pos select 2) -35)], [], 0, "CAN_COLLIDE"];
_Frigate setVariable ["OPTRE_Frigate_LiftArm",_liftArm,true]; 
_liftArm setDir _dir; 	

_liftGate = createVehicle ["OPTRE_Frigate_lift_gate",[((_pos select 0) ), ((_pos select 1) - 5.10), ((_pos select 2) -88.55)], [], 0, "CAN_COLLIDE"];
_Frigate setVariable ["OPTRE_Frigate_LiftGate",_liftGate,true]; 
_liftGate setDir _dir;
_liftGate animate ["part_2_rot",1];
_liftGate animate ["part_1_rot",1];

_liftGateCarPool = createVehicle ["OPTRE_Frigate_lift_gate",[((_pos select 0) ), ((_pos select 1) - 5.10), ((_pos select 2) -65.15)], [], 0, "CAN_COLLIDE"];
_Frigate setVariable ["OPTRE_Frigate_LiftGate_Up",_liftGateCarPool,true]; 
_liftGateCarPool setDir _dir;
_liftGateCarPool animate ["part_2_rot",0];
_liftGateCarPool animate ["part_1_rot",0];

_liftTrigger = createTrigger ["EmptyDetector", [(_pos select 0), ((_pos select 1) - 2),0], true];
_liftTrigger setTriggerArea [11.3, 11.3, _dir, true];
_Frigate setVariable ["OPTRE_Frigate_LiftTrigger",_liftTrigger,true];		


_Frigate setVariable ["OPTRE_Frigate_ComputerEventLog","EVENT LOG START >>>",true];

[[_addActionArray,_Frigate],"OPTRE_Fnc_AddActionGlobal",true,true] call BIS_fnc_MP;}