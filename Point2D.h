#ifndef POINT2D_H
#define POINT2D_H

// Класс для работы с двумерными координатами
class Point2D {
private:
    int x; // Координата X
    int y; // Координата Y

public:
    // Конструктор по умолчанию
    Point2D();

    // Конструктор с параметрами
    Point2D(int x, int y);

    // Геттеры для координат X и Y
    int getX() const;
    int getY() const;

    // Сеттеры для координат X и Y
    void setX(int x);
    void setY(int y);

    // Перегрузка оператора вывода для удобного вывода координат
    friend std::ostream& operator<<(std::ostream& out, const Point2D& point);
};

#endif
