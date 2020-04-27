#ifndef POLYGON_H
#define POLYGON_H
#include "point.h"

class Polygon
{
    int quantity;
    Point * vertices;
public:
    Polygon();
    Polygon(int quantity,Point * vertices);

    int getQuantity();
    Point*getVertices();

    void setCount(int quantity);
    void setVertices(Point * vertices);

    ~Polygon(){}
};

#endif // POLYGON_H
