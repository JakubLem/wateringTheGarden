#include "point.h"

Point::Point() {
    x = 0.0;
    y = 0.0;
}

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

double Point::getX(){
    return this->x;
}

double Point::getY(){
    return this->y;
}

void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}
