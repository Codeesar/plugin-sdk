/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexCarDrive.h"

class PLUGIN_API CTaskComplexCarDriveWander : public CTaskComplexCarDrive {
protected:
    CTaskComplexCarDriveWander(plugin::dummy_func_t a) : CTaskComplexCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveWander, 0x);