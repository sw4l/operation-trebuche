waitUntil {time > 0};

{
	(_x select 0) addAction (_x select 1); 
} forEach (_this select 0);

(_this select 1) hideObject true;