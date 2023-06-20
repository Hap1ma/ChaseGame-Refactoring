#include "Arena.h"
#include <iostream>

Arena::Arena(int size) : size(size) {}

void Arena::AddPrey(const Prey& prey) {
    preyList.push_back(prey);
}

void Arena::AddPredator(const Predator& predator) {
    predatorList.push_back(predator);
}

void Arena::RemovePrey(int index) {
    if (index >= 0 && index < preyList.size()) {
        preyList.erase(preyList.begin() + index);
    } else {
        std::cout << "Ошибка: недопустимый индекс!" << std::endl;
    }
}

void Arena::RemovePredator(int index) {
    if (index >= 0 && index < predatorList.size()) {
        predatorList.erase(predatorList.begin() + index);
    } else {
        std::cout << "Ошибка: недопустимый индекс!" << std::endl;
    }
}

void Arena::DisplayArena() const {
    std::cout << "Размер арены: " << size << "x" << size << std::endl;

    std::cout << "Список жертв:" << std::endl;
    for (const auto& prey : preyList) {
        std::cout << prey << std::endl;
    }

    std::cout << "Список хищников:" << std::endl;
    for (const auto& predator : predatorList) {
        std::cout << predator << std::endl;
    }
}

int Arena::getSize() const {
    return size;
}
