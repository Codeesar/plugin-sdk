/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPickups.h"

int CPickups::GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, ePickupType pickupType, unsigned int ammo, bool a7, char *a8)
{
	return ((int (__cdecl *)(CVector, eWeaponType, ePickupType, unsigned int, bool, char*))0x457380)(pos, weaponType, pickupType, ammo, a7, a8);
}