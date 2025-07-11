#include <iostream>
#include "Entity.h"
#include "GameWorld.h"

int main() {
    std::cout << "[Game Start]\n";
    GameWorld world;
    world.run();
    return 0;
}