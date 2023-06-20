#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Predator.h"
#include "Prey.h"

// Класс для представления арены
class Arena {
private:
    int width;                          // Ширина арены
    int height;                         // Высота арены
    std::vector<Predator> predators;    // Вектор хищников
    std::vector<Prey> prey;              // Вектор жертв

public:
    // Конструктор с параметрами
    Arena(int width, int height);

    // Метод для добавления хищника на арену
    void addPredator(const Predator& predator);

    // Метод для добавления жертвы на арену
    void addPrey(const Prey& prey);

    // Метод для запуска процесса охоты
    void startHunting();

    // Метод для получения ширины арены
    int getWidth() const;

    // Метод для получения высоты арены
    int getHeight() const;
};

#endif
