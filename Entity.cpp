#include "Entity.h"
#include <iostream>

Entity::Entity(std::string name) : name(name), x(0), y(0) {}

void Entity::move(float dx, float dy) {
    x += dx;
    y += dy;
    std::cout << name << " moved to (" << x << ", " << y << ")\n";
}

void Entity::printStatus() const {
    std::cout << name << " is at (" << x << ", " << y << ")\n";
}