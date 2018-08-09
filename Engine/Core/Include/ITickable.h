#pragma once

#include <CommonTypes.h>

struct ITickable {
    virtual void Tick(float32 deltaTime) = 0;
};