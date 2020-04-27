#ifndef POINT_H
#define POINT_H


class Point
{
    double x;
    double y;
public:
    Point();
    Point(double x, double y);

    //getters
    double getX();
    double getY();
    //setters
    void setX(double x);
    void setY(double y);

    ~Point(){}
};

#endif // POINT_H
