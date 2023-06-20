#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Prey.h"    // Включаем заголовочный файл с определением класса Prey
#include "Predator.h" // Включаем заголовочный файл с определением класса Predator

// Класс для представления арены
class Arena {
private:
    int width;               // Ширина арены
    int height;              // Высота арены
    std::vector<Prey> prey;   // Вектор жертв
    std::vector<Predator> predator; // Вектор хищников

public:
    // Конструктор с параметрами
    Arena(int width, int height);

    // Метод для добавления жертвы на арену
    void addPrey(const Prey& newPrey);

    // Метод для добавления хищника на арену
    void addPredator(const Predator& newPredator);

    // Метод для выполнения одного шага симуляции
    void simulateStep();

    // Метод, возвращающий ширину арены
    int getWidth() const;

    // Метод, возвращающий высоту арены
    int getHeight() const;
};

#endif
