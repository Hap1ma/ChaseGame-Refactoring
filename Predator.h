#ifndef PREDATOR_H
#define PREDATOR_H

#include <iostream>
#include "Point2D.h" // Включаем заголовочный файл с определением класса Point2D

// Объявление класса Prey для разрешения циклической зависимости
class Prey;

// Объявление класса Arena для разрешения циклической зависимости
class Arena;

// Класс для представления хищника
class Predator {
private:
    std::string name;     // Имя хищника
    Point2D location;     // Координаты хищника

public:
    // Конструктор с параметрами
    Predator(const std::string& name, const Point2D& location);

    // Метод, возвращающий имя хищника
    std::string getName() const;

    // Метод, возвращающий координаты хищника
    Point2D getLocation() const;

    // Метод для перемещения хищника в направлении заданной жертвы
    void chasePrey(const Prey& prey);

    // Перегрузка оператора вывода для удобного вывода информации о хищнике
    friend std::ostream& operator<<(std::ostream& out, const Predator& predator);
};

#endif
