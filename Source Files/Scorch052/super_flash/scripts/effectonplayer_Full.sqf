private ["_unit"];
_unit = _this;

if (_unit == player) then {
	playMusic "flashbang";
	sleep 0.01;				//play sound
	
	SUPER_PPEffect ppEffectAdjust [1, 1, -0.01, [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]];
	SUPER_PPEffect ppEffectCommit 0.1;
	SUPER_PPEffect ppEffectEnable true;
	
	_unit setFatigue 1; // sets the fatigue to 100%
	5 fadeSound 0.1; // fades the sound to 10% in 5 seconds
	sleep 5;
	
	SUPER_PPEffect ppEffectAdjust [1, 1, -0.02, [4.5, 3.5, 1.6, -0.02],[1.8, 1.6, 1.6, 1],[-1.5,0,-0.2,1]]; // almost back to normal vision (I don't know the exact value)
	//[1, 1, 0, [0,0,0,0], [1.1,0.7,1.1,1.1], [1.0,0.7,1.0,1.1]]
	SUPER_PPEffect ppEffectCommit 10;// transition time between white screen and normal colors
	sleep 5;
	15 fadeSound 1;
	sleep 5;
	SUPER_PPEffect ppEffectEnable false; // go back to normal vision (I needed to do this in order to make the white screen effect fade away)
};