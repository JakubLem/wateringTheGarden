#include "polygon.h"
#include "point.h"

Polygon::Polygon() {
    this->quantity = 1;
    this->vertices = new Point[this->quantity];
    vertices[0] = Point();
}

Polygon::Polygon(int quantity,Point * vertices){
    this->quantity = quantity;
    vertices = new Point[this->quantity];
    for(int i = 0 ; i < this->quantity ; i++){
        this->vertices[i] = vertices[i];
    }
}

int Polygon::getQuantity(){
    return this->quantity;
}
Point*Polygon::getVertices(){
    return this->vertices;
}

void Polygon::setCount(int quantity){
    this->quantity = quantity;
}
void Polygon::setVertices(Point * vertices){
    this->vertices = vertices;
}
