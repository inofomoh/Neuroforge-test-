#pragma once
#include <string>

class Entity {
public:
    Entity(std::string name);
    void move(float dx, float dy);
    void printStatus() const;

private:
    std::string name;
    float x, y;
};