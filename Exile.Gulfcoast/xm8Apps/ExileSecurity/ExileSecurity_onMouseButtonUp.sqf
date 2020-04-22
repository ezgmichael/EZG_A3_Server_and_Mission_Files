
private["_control","_rightClick","_positionX","_positionY","_inScreen"];
_control = _this select 0;
_rightClick = if((_this select 1) isEqualTo 1)then{true}else{false};
_positionX = _this select 2;
_positionY = _this select 3;
_inScreen = [_positionX,_positionY] call ExileClient_util_display_mouseControl_inLimit;
if(_inScreen)then
{
if ((slidemenu == 0) && (CameraSelected)) exitWith {[] spawn ExileSecurity_MenuSlide};
	if(_rightClick)then
	{
		ExileCameraRightClickDown = false;
	};
};
true
