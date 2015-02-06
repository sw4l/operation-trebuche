ODST_POD_CallerSelf = _this select 1;

openmap true;
hint "Mark position for orbital insertion";
onMapSingleClick "openmap false; _selfdrop = createMarker ['SelfDrop', _pos]; 'SelfDrop' setmarkertype 'mil_triangle'; 'SelfDrop' setMarkerText 'ODST Inbound'; 'SelfDrop' setMarkerColor 'ColorBLUFOR'; execVM '\tei_vehicles\hev\scripts\ODST_POD_PrepareSelf.sqf'; onmapsingleclick '';";