#include "Point2D.h"

Point2D::Point2D() : x(0), y(0) {}

Point2D::Point2D(int x, int y) : x(x), y(y) {}

int Point2D::getX() const {
    return x;
}

int Point2D::getY() const {
    return y;
}

void Point2D::setX(int x) {
    this->x = x;
}

void Point2D::setY(int y) {
    this->y = y;
}

std::ostream& operator<<(std::ostream& out, const Point2D& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}
