#ifndef PREDATOR_H
#define PREDATOR_H

#include <iostream>
#include <string>
#include "Point2D.h"

class Prey; // Объявление класса Prey
class Arena;

class Predator {
private:
    std::string name;
    Point2D location;

public:
    Predator(const std::string& name, const Point2D& location);

    void MoveTo(int x, int y);
    void AutoMove(const Arena& arena, int z);

    friend std::ostream& operator<<(std::ostream& out, const Predator& predator);
    friend bool check(const Prey& prey, const Predator& predator);
    friend bool check1(const Prey& prey, const Predator& predator);

    int getX() const;
    int getY() const;
};

#endif
