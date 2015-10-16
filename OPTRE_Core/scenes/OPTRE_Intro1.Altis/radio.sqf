while {alive _this} do {	
	_pickArray = ["radio1","radio2","radio3"];
	_pickNum = round (random(2));
	_pick = (_pickArray select _pickNum);
	_this say3D _pick;
	sleep 200;
};