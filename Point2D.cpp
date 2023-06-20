#include "Point2D.h"

Point2D::Point2D(int x, int y) : x(x), y(y) {}

std::ostream& operator<<(std::ostream& out, const Point2D& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

void Point2D::setPoint(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point2D::operator==(const Point2D& point) {
    return (x == point.x && y == point.y);
}