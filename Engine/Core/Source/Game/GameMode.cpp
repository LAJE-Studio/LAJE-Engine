

#include <Game/GameObject.h>
#include <Game/GameMode.h>

bool GameMode::AddGameObject(GameObject object) {
    if (object.IsSingleton() && FindIncompatibleGameObject()) {

    }
    return false;
}

template<typename T>
const T GameMode::FindGameObject() const {
    for (auto i : gameObjects) {

    }
}
