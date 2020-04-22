	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"APEXAmmunition",
			"APEXAssaultRifles",
			"APEXBipodAttachments",
			"APEXLightMachineGuns",
			"APEXMuzzleAttachments",
			"APEXOpticAttachments",
			"APEXPistols",
			"APEXSniperRifles",
			"APEXSubMachineGuns",
			"Ammunition",
			"AssaultRifles",
			"KAAmmunition",
			"KAAttachments",
			"KAMuzzleAttachments",
			"KAOpticAttachments",
			"KAPistols",
			"KARifles",
			"LightMachineGuns",
			"MuzzleAttachments",
			"OpticAttachments",
			"Pistols",
			"PointerAttachments",
			"NIAAmmunition",
			"NIAAssaultRifles",
			"NIAAttachments",
			"NIALightMachineGuns",
			"NIAMuzzleAttachments",
			"NIAOpticAttachments",
			"NIASniperRifles",
			"RHSAmmunition",
			"RHSAssaultRifles",
			"RHSBipodAttachments",
			"RHSForegripAttachments",
			"RHSLightMachineGuns",
			"RHSMuzzleAttachments",
			"RHSOpticAttachments",
			"RHSPistols",
			"RHSPointerAttachments",
			"RHSSniperRifles",
			"RHSSubMachineGuns",
			"Shotguns",
			"SniperRifles",
			"SubMachineGuns"
			//"HLCAmmunition",				//should use NIArms
			//"HLCAssaultRifles",			//should use NIArms
			//"HLCLightMachineGuns",		//should use NIArms
			//"HLCMuzzleAttachments",		//should use NIArms
			//"HLCOpticAttachments",		//should use NIArms
			//"HLCSniperRifles",			//should use NIArms
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
			//"R3FAmmunition",
			//"R3FAssaultRifles",
			//"R3FBipodAttachments",
			//"R3FLightMachineGuns",
			//"R3FMuzzleAttachments",
			//"R3FOpticAttachments",
			//"R3FPistols",
			//"R3FPointerAttachments",
			//"R3FSniperRifles",
			//"R3FSubMachineGuns",
			//"SAFAmmunition",
			//"SAFAttachments",
			//"SAFWeapons",
			//"BPAmmunition",
			//"BPAssaultRifles",
			//"BPLightMachineGuns",
			//"BPMuzzleAttachments",
			//"BPOpticAttachments",
			//"BPPistols",
			//"BPPointerAttachments",
			//"BPSniperRifles",
			//"BPSubMachineGuns",
			//"BipodAttachments",
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] =
		{
			"A3LauncherAmmo",
			"A3Launchers",
			"APEXLauncherAmmo",
			"ApexLaunchers",
			"ExplosiveWeapons",
			"Explosives",
			"Flares",
			"Navigation",
			"R3FLauncherAmmo",
			"R3FLaunchers",
			"RHSExplosives",
			"RHSLauncherAmmo",
			"RHSLaunchers",
			"RHSUGLAmmo",
			"Smokes",
			"TankDLCLaunchers",
			"TankDLCLauncherAmmo",
			"UAVs"
			//"CUPExplosive",
			//"RHSStaticMG",		//not recommended except for militarised servers due to rockets/mortar etc
			//"SAFMines",
			//"StaticMGs",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Backpacks",
			"APEXBackpacks",
			"APEXHeadgear",
			"APEXUniforms",
			"APEXVests",
			"Backpacks",
			"FirstAid",
			"Headgear",
			"RHSAccessories",
			"RHSBackpacks",
			"RHSHeadgear",
			"RHSUniforms",
			"RHSVests",
			"TankDLCclothing",
			"Uniforms",
			"Vests"
			//"SAFBackpacks",
			//"SAFHeadgear",
			//"SAFUniforms",
			//"SAFVests",
			//"APEXTools",		//not used
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Drinks",
			"Food",
			"NonVeganFood"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Hardware",
			"ExtendedBaseMod",
			"Tools"
			//"R3FTools",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Armed",
			"A3Cars",
			"A3Trucks",
			"ApexCars",
			"ApexTrucks",
			"Bikes",
			"CTrucks",
			"CUGVs",
			"Cars",
			"RHSVehicles",
			"TankDLC",
			"Trucks",
			"A3Tanks"
			//"SAFArmed",
			//"SAFUnarmed",
			//"MASTanks"
			//"UGV"
			//"A3UGVs"
			//"ApexUAVs"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3armedChoppers",
			"A3unarmedChoppers",
			"ApexChoppers",
			"ApexVTOL",
			"Choppers",
			"RHSChoppers"
			//"GREFChoppers",
			//"GREFPlanes",
			//"HAFMHeliarm",
			//"HAFMJet",
			//"HAFMPlane",
			//"HAFMheli",
			//"HVPPlanes",
			//"MASChoppers",
			//"MASPlanes",
			//"Nlheli",
			//"Nlpoli",
			//"Pods",
			//"Pook",
			//"CChoppers",
			//"CPlanes",
			//"CUPChoppers",
			//"CUPPlanes",
			//"SAFChoppers"
			//"A3UAVs",
			//"CUAVs",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells ships and boats
	 */
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Boats",
			"ApexBoats",
			"Boats",
			"RHSBoats"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
			//"CUPBoats",
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] =
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Planes",
			"RHSPlanes",
			"A3Planes",
			"ApexPlanes"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community10"
		};
	};
