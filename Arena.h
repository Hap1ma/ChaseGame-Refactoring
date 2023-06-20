#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Prey.h"
#include "Predator.h"

class Arena {
private:
    int size;
    std::vector<Prey> preyList;
    std::vector<Predator> predatorList;

public:
    Arena(int size);

    void AddPrey(const Prey& prey);
    void AddPredator(const Predator& predator);

    void RemovePrey(int index);
    void RemovePredator(int index);

    void DisplayArena() const;

    int getSize() const;
};

#endif
