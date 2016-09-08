/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexUseEffect.h"

class PLUGIN_API CTaskComplexUseEffectRunning : public CTaskComplexUseEffect {
protected:
    CTaskComplexUseEffectRunning(plugin::dummy_func_t a) : CTaskComplexUseEffect(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseEffectRunning, 0x);