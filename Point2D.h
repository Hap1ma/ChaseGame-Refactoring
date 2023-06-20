#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D {
private:
    int x;
    int y;

public:
    // Конструктор
    Point2D(int x = 0, int y = 0);

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& out, const Point2D& point);

    void setPoint(int x, int y);
    bool operator==(const Point2D& point);
};

#endif