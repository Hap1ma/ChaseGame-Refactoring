#ifndef PREY_H
#define PREY_H

#include <iostream>
#include <string>
#include "Point2D.h"

class Predator; // Объявление класса Predator
class Arena;

class Prey {
private:
    std::string name;
    Point2D location;

public:
    Prey(const std::string& name, const Point2D& location);

    void MoveTo(int x, int y);
    void AutoMove(const Arena& arena, int z);

    friend std::ostream& operator<<(std::ostream& out, const Prey& prey);
    friend bool check(const Prey& prey, const Predator& predator);
    friend bool check1(const Prey& prey, const Predator& predator);

    int getX() const;
    int getY() const;
};

#endif