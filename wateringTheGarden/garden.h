#ifndef GARDEN_H
#define GARDEN_H

#include "polygon.h"
#include "sprinkler.h"

class Garden
{
    int areasQuantity;
    Polygon * areas;
    double budget;
    int sprinklersQuantity;
    Sprinkler * sprinklers;

    int getQuantityOfObtuseAngles();

public:
    Garden();
    Garden(int areasQuantity, Polygon * areas, double budget, int sprinklersQuantity, Sprinkler * sprinklers);

    //getters
    int getAreasQuantity();
    Polygon * getAreas();
    double getBudget();
    int getSprinklersQuantity();
    Sprinkler * getSprinklers();
    Sprinkler getSprinkler(int i);

    //setters
    void setAreasQuantity(int areasQuantity);
    void setAreas(Polygon * areas);
    void setBudget(double budget);
    void setSprinklersQuantity(int sprinklersQuantity);
    void setSprinklers(Sprinkler * sprinklers);
    void setSprinkler(int i, Sprinkler sprinkler);

    //functions
    int func();


    ~Garden(){}
};

#endif // GARDEN_H
