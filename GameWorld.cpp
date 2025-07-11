#include "GameWorld.h"
#include <iostream>

GameWorld::GameWorld() : player("Player"), enemy("Enemy") {}

void GameWorld::run() {
    player.printStatus();
    player.move(0, 1);
    enemy.printStatus();
    std::cout << "Enemy spotted!\n";
    std::cout << "Attacking enemy...\n";
    std::cout << "Enemy defeated.\n";
}