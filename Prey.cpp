#include "Prey.h"

Prey::Prey(const std::string& name, const Point2D& location) : name(name), location(location), isAlive(true) {}

std::string Prey::getName() const {
    return name;
}

Point2D Prey::getLocation() const {
    return location;
}

void Prey::autoMove(const Arena& arena) {
    // Получаем текущие координаты жертвы
    int currentX = location.getX();
    int currentY = location.getY();

    // Генерируем случайное направление (вверх, вниз, влево, вправо)
    int direction = rand() % 4;

    // Обновляем координаты в соответствии с выбранным направлением
    if (direction == 0 && currentX > 0) {
        currentX--;
    } else if (direction == 1 && currentX < arena.getWidth() - 1) {
        currentX++;
    } else if (direction == 2 && currentY > 0) {
        currentY--;
    } else if (direction == 3 && currentY < arena.getHeight() - 1) {
        currentY++;
    }

    // Обновляем новые координаты жертвы
    location.setX(currentX);
    location.setY(currentY);
}

bool Prey::getIsAlive() const {
    return isAlive;
}

std::ostream& operator<<(std::ostream& out, const Prey& prey) {
    out << "Name: " << prey.name << ", Location: " << prey.location << ", Alive: " << (prey.isAlive ? "Yes" : "No");
    return out;
}
