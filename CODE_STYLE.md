# LAJE Engine's Code Style Guide
Our Code Style follows a mixture of a modified version of [Google's C++ Style Guide](https://google.github.io/styleguide/cppguide.html) a modified version of the [Microsoft Coding Standart](https://docs.microsoft.com/pt-br/windows/desktop/Stg/coding-style-conventions) for naming.

Here are a list of the most notable modifications:
* Public members and types are named using [PascalCase](http://wiki.c2.com/?PascalCase).
* Private members (Except functions) are named using [camelCase](https://en.wikipedia.org/wiki/Camel_case).
* We do **NOT** use prefixes or suffixes when defining variables.
    * The sole exception are for interface types, which should be prefixed with a single uppercase **I**.
        *  Example: ```ICombatant```
* We use ```#pragma once``` over define guards.
* All primitive integer and floating points variables and members should be defined using the defined types at **<Common/Types.h>**, for example: **U8, U32, F32, F64, S32**.
* Interface types should also be declared using the **interface** define, which is defined at **<Common/Types>**.

```cpp
#pragma once
#include <Common/Types.h>

class ProjectilePool : public Actor {
private:
    // The amount of objects that are allocated when the actor is initialized
    U32 prewarmAmount;

    /* The amount of objects that are allowed to be allocated at, when all the polled
     * objects are in use.
     * If there currently more temporary objects allocated than tempAllocAmount, then ProjectilePool#Get
     * will return a nullptr;
     */
    U32 tempAllocAmount;
    void Prewarm();
public:
    Projectile * Get();
    bool IsCompletelyInUse();
    bool HasTemporaryAllocations();
    U32 GetTotalInUse();
    U32 GetTotalTemporary();
    void Return(Projectile * projectile);
}
```
```cpp
interface IControlledEntityChangedListener {
    void OnChanged(Entity oldEntity, Entity newEntity);
}
```