#include "Predator.h"
#include "Prey.h"
#include "Arena.h"

Predator::Predator(const std::string& name, const Point2D& location) : name(name), location(location) {}

void Predator::MoveTo(int x, int y) {
    location.setPoint(x, y);
}

void Predator::AutoMove(const Arena& arena, int z) {
    int q;
    if (z == 1) {
        q = rand() % 8;
    } else {
        std::cout << "Куда идти?\n0-вверх-влево 1-вверх 2-вверх-вправо 3-влево 4-вправо 5-вниз-влево 6-вниз 7-вниз-вправо" << std::endl;
        std::cin >> q;
    }

    switch (q) {
        case 0:
            if (location.getX() != 1 && location.getY() != 1) {
                location.setPoint(location.getX() - 1, location.getY() - 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 1:
            if (location.getX() != 1) {
                location.setPoint(location.getX() - 1, location.getY());
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 2:
            if (location.getX() != 1 && location.getY() != arena.getSize() - 2) {
                location.setPoint(location.getX() - 1, location.getY() + 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 3:
            if (location.getY() != 1) {
                location.setPoint(location.getX(), location.getY() - 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 4:
            if (location.getY() != arena.getSize() - 2) {
                location.setPoint(location.getX(), location.getY() + 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 5:
            if (location.getX() != arena.getSize() - 2 && location.getY() != 1) {
                location.setPoint(location.getX() + 1, location.getY() - 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 6:
            if (location.getX() != arena.getSize() - 2) {
                location.setPoint(location.getX() + 1, location.getY());
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        case 7:
            if (location.getX() != arena.getSize() - 2 && location.getY() != arena.getSize() - 2) {
                location.setPoint(location.getX() + 1, location.getY() + 1);
            } else {
                std::cout << "Выход за границу арены!" << std::endl;
            }
            break;
        default:
            std::cout << "Неверный ввод!" << std::endl;
            break;
    }
}

std::ostream& operator<<(std::ostream& out, const Predator& predator) {
    out << "Имя: " << predator.name << ", Координаты: " << predator.location;
    return out;
}

int Predator::getX() const {
    return location.getX();
}

int Predator::getY() const {
    return location.getY();
}
