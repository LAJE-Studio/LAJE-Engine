#pragma once

#include "GameMode.h"

class Game {
private:
    GameMode currentGameMode;
public:
    const GameMode *GetCurrentGameMode() const;
};