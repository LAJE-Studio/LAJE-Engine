#pragma once

#include "../ITickable.h"

class GameObject : ITickable {
public:
    virtual bool IsSingleton() = 0;
};