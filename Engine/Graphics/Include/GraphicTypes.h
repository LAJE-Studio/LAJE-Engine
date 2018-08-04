#pragma once

#include <Types.h>

interface IGLBindable {
    virtual const uint32 GetID() = 0;

    virtual void Bind() const = 0;

    virtual void Unbind() const = 0;
};

