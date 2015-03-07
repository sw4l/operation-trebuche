(_this select 0) removeaction (_this select 2);

openmap true;
hint "Mark position for orbital insertion";
onMapSingleClick "openmap false; _selfdrop = createMarker ['SelfDrop', _pos]; 'SelfDrop' setmarkertype 'mil_triangle'; 'SelfDrop' setMarkerText 'ODST Inbound'; 'SelfDrop' setMarkerColor 'ColorBLUFOR'; [_this select 0] call TEI_HEV_fnc_podPrepare; onmapsingleclick '';";