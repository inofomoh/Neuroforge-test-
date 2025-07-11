#pragma once
#include "Entity.h"

class GameWorld {
public:
    GameWorld();
    void run();

private:
    Entity player;
    Entity enemy;
};