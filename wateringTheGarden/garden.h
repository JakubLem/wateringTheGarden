#ifndef GARDEN_H
#define GARDEN_H

#include "polygon.h"
#include "sprinkler.h"

class Garden
{
    int areasQuantity;
    Polygon * areas;
    double budget;
    Sprinkler * sprinklers;
public:
    Garden();
    Garden(int areasQuantity, Polygon * areas, double budget, Sprinkler * sprinklers);

    //getters
    int getAreasQuantity();
    Polygon * getAreas();
    double getBudget();
    Sprinkler * getSprinklers();
    Sprinkler getSprinkler(int i);

    //setters
    void setAreasQuantity(int areasQuantity);
    void setAreas(Polygon * areas);
    void setBudget(double budget);
    void setSprinklers(Sprinkler * sprinklers);
    void setSprinkler(int i, Sprinkler sprinkler);

    ~Garden(){}
};

#endif // GARDEN_H
