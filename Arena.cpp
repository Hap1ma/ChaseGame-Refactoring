#include "Arena.h"

Arena::Arena(int width, int height) : width(width), height(height) {}

void Arena::addPrey(const Prey& newPrey) {
    prey.push_back(newPrey);
}

void Arena::addPredator(const Predator& newPredator) {
    predator.push_back(newPredator);
}

void Arena::simulateStep() {
    // Перебираем все хищники на арене
    for (auto& pred : predator) {
        // Для каждого хищника находим ближайшую жертву
        Prey* closestPrey = nullptr;
        int closestDistance = INT_MAX;

        for (auto& p : prey) {
            int distance = abs(p.getLocation().getX() - pred.getLocation().getX()) + abs(p.getLocation().getY() - pred.getLocation().getY());

            if (distance < closestDistance) {
                closestDistance = distance;
                closestPrey = &p;
            }
        }

        // Если есть ближайшая жертва, хищник преследует ее
        if (closestPrey != nullptr) {
            pred.chasePrey(*closestPrey);

            // Если хищник достиг жертвы, жертва умирает
            if (pred.getLocation() == closestPrey->getLocation()) {
                closestPrey->isAlive = false;
            }
        }
    }

    // Удаляем мертвых жертв из вектора
    prey.erase(std::remove_if(prey.begin(), prey.end(), [](const Prey& p) { return !p.getIsAlive(); }), prey.end());
}

int Arena::getWidth() const {
    return width;
}

int Arena::getHeight() const {
    return height;
}
