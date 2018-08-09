
#include <Game/GameObject.h>
#include <Game/GameMode.h>
#include <Game/Game.h>

const GameMode *Game::GetCurrentGameMode() const {
    return &currentGameMode;
}
