class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class ScopeCase: Container_Base
	{
		scope=2;
		displayName="Scope Case";
		descriptionShort="Scope Case";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemSize[]={3,4};
		itemsCargoSize[]={0,0};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		repairableWithKits[]={8};
		repairCosts[]={25};
		attachments[]=
		{
			"BatteryD",
			"weaponOptics",
			"WeaponOptics",
			"pistolOptics",
			"weaponOpticsMosin",
			"weaponOpticsAK",
			"weaponOpticsHunting",
			"weaponOpticsCrossbow"
		};
	};
};
