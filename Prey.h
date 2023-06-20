#ifndef PREY_H
#define PREY_H

#include <iostream>
#include "Point2D.h" // Включаем заголовочный файл с определением класса Point2D

// Объявление класса Predator для разрешения циклической зависимости
class Predator;

// Объявление класса Arena для разрешения циклической зависимости
class Arena;

// Класс для представления жертвы
class Prey {
private:
    std::string name;     // Имя жертвы
    Point2D location;     // Координаты жертвы
    bool isAlive;         // Флаг, указывающий, жива ли жертва

public:
    // Конструктор с параметрами
    Prey(const std::string& name, const Point2D& location);

    // Метод, возвращающий имя жертвы
    std::string getName() const;

    // Метод, возвращающий координаты жертвы
    Point2D getLocation() const;

    // Метод для перемещения жертвы в случайном направлении
    void autoMove(const Arena& arena);

    // Метод, возвращающий флаг, указывающий, жива ли жертва
    bool getIsAlive() const;

    // Перегрузка оператора вывода для удобного вывода информации о жертве
    friend std::ostream& operator<<(std::ostream& out, const Prey& prey);
};

#endif
