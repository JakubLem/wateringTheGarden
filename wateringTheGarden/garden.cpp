#include "garden.h"

Garden::Garden()
{

}

Garden::Garden(int areasQuantity, Polygon * areas, double budget, int sprinklersQuantity, Sprinkler * sprinklers){
    this->areasQuantity = areasQuantity;
    this->areas = new Polygon[this->areasQuantity];
    for(int i = 0 ; i < this->areasQuantity ; i++){
        this->areas[i] = areas[i];
    }
    this->budget = budget;
    this->sprinklersQuantity = sprinklersQuantity;
    this->sprinklers = new Sprinkler[this->sprinklersQuantity];
    for(int i = 0 ; i < this->sprinklersQuantity ; i++){
        this->sprinklers[i] = sprinklers[i];
    }



}

//getters
int Garden::getAreasQuantity();
Polygon * Garden::getAreas();
double Garden::getBudget();
int Garden::getSprinklersQuantity();
Sprinkler * Garden::getSprinklers();
Sprinkler Garden::getSprinkler(int i);

//setters
void Garden::setAreasQuantity(int areasQuantity);
void Garden::setAreas(Polygon * areas);
void Garden::setBudget(double budget);
void Garden::setSprinklersQuantity(int sprinklersQuantity);
void Garden::setSprinklers(Sprinkler * sprinklers);
void Garden::setSprinkler(int i, Sprinkler sprinkler);
