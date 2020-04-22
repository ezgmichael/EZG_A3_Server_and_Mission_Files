// time.sqf
// by CRE4MPIE
// GamersInc.NET 2015
// Creds to A3W, LouD for inspiration

if (!isServer) exitWith {};

while {true} do
{
	if (daytime >= 19 || daytime < 8) then   // after 7pm and before 5am time multiplier changes
	{
		setTimeMultiplier 24      // adjust this value for slower or faster night cycle ( 24 hours will take 1 hour )
	}
	else
	{
		setTimeMultiplier 2      // adjust this value for slower or faster day cycle  ( 12 hours will take 1 hour )
	};

	uiSleep 30;
};