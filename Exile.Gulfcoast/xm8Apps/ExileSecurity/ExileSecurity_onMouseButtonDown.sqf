
private["_control","_rightClick","_positionX","_positionY","_inScreen"];
_control = _this select 0;
_rightClick = if((_this select 1) isEqualTo 1)then{true}else{false};
_positionX = _this select 2;
_positionY = _this select 3;

if !(CameraSelected) exitWith {

	_mybuttons = [
	6004,
	6003,
	6005,
	6006,
	6026,
	6027
	];

	{
		ctrlSetFocus ((findDisplay 24015) displayCtrl _x);
	}forEach _mybuttons;
};

_inScreen = [_positionX,_positionY] call ExileClient_util_display_mouseControl_inLimit;
if(_inScreen)then
{
	if(_rightClick)then
	{
		ExileCameraRightClickDown = true;
	};

};
ExileClientDisplayResetFocus = true;
true
