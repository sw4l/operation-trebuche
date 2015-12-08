_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);
_arrayNumber = [];

{
	_n = lbCurSel (_x select 0);
	_arrayNumber pushBack _n;
	_d = lbData [(_x select 0), _n];
	if (_d == "") then {_d = (lbValue [(_x select 0), _n]);};	
	_logic setVariable [(_x select 1), _d, true];
} forEach [
	[2100,"spawnDir"],
	[2101,"distance"],
	[2102,"exitDir"],
	[2103,"Pelican_Unarmed_Colour"],
	[2104,"flyInHeight"],
	[2105,"side"],
	[2106,"code"],
	[2107,"gunner"],
	[2108,"vehicle"],
	[2109,"box1"],
	[2010,"box2"],
	[2011,"box3"],
	[2012,"box4"],
	[2013,"box5"],
	[2014,"box6"]
];

OPTRE_Zeus_PelicanReSup = _arrayNumber;

OPTRE_Zeus_PelicanReSup = [
0,
3,
4,
0,
5,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
];