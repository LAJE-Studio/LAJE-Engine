#pragma once

#include "../ITickable.h"
#include "../Scenes/Scene.h"
#include "GameObject.h"

class GameMode : ITickable {
private:
    Scene scene;
    List<GameObject> gameObjects;
public:
    template<typename T>
    const T FindGameObject() const;

    bool AddGameObject(GameObject *object);
};