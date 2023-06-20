#include "Predator.h"

Predator::Predator(const std::string& name, const Point2D& location) : name(name), location(location) {}

std::string Predator::getName() const {
    return name;
}

Point2D Predator::getLocation() const {
    return location;
}

void Predator::chasePrey(const Prey& prey) {
    // Получаем координаты хищника и жертвы
    int predatorX = location.getX();
    int predatorY = location.getY();
    int preyX = prey.getLocation().getX();
    int preyY = prey.getLocation().getY();

    // Вычисляем разницу по координате X и Y между хищником и жертвой
    int diffX = preyX - predatorX;
    int diffY = preyY - predatorY;

    // Обновляем координаты хищника в направлении жертвы
    if (diffX > 0) {
        predatorX++;
    } else if (diffX < 0) {
        predatorX--;
    }

    if (diffY > 0) {
        predatorY++;
    } else if (diffY < 0) {
        predatorY--;
    }

    // Обновляем новые координаты хищника
    location.setX(predatorX);
    location.setY(predatorY);
}

std::ostream& operator<<(std::ostream& out, const Predator& predator) {
    out << "Name: " << predator.name << ", Location: " << predator.location;
    return out;
}
