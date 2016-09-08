/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CSphere
{
public:
	CVector m_vCenter;
	float m_fRadius;

	void Set(float radius, CVector  const& center);
};
#pragma pack(pop)

VALIDATE_SIZE(CSphere, 0x10);