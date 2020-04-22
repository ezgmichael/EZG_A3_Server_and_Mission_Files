if (alive player) then
{
	_poptabs = (player getVariable ["ExileMoney", 0]);
	if (ExilePlayerInSafezone) then
	{
		_paycheck = 0; 
		
		["ErrorTitleAndText", ["Just recieved pocket change", "Don't forget to put it in the bank"]] call ExileClient_gui_toaster_addTemplateToast;
		systemChat "You don't get anything because you are here"; 
	}
	else
	{
		_paycheck = 1000; //Awards a player 250 poptabs every 900 seconds whilst not in trader or their territory
		_poptabs = _poptabs + _paycheck;
		//playSound "PayCheckReceived";
		["InfoTitleAndText", ["Payday", format ["You got pocket money %1 Pop-Tabs, you have %2 Pop-Tabs in your pocket!",_paycheck,_poptabs]]] call ExileClient_gui_toaster_addTemplateToast;
		systemChat format ["You got pocket money %1 Pop-Tabs, you have %2 Pop-Tabs in your pocket!",_paycheck,_poptabs];
		player setVariable ["ExileMoney",_poptabs,true];
	};
};