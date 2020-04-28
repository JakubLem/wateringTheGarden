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
int Garden::getAreasQuantity(){
    return this->areasQuantity;
}
Polygon * Garden::getAreas(){
    return this->areas;
}
double Garden::getBudget(){
    return this->budget;
}
int Garden::getSprinklersQuantity(){
    return this->sprinklersQuantity;
}
Sprinkler * Garden::getSprinklers(){
    return this->sprinklers;
}
Sprinkler Garden::getSprinkler(int i){
    if(i<this->sprinklersQuantity){
        return this->sprinklers[i];
    }
    return Sprinkler();
}

//setters
void Garden::setAreasQuantity(int areasQuantity){
    this->areasQuantity = areasQuantity;
}
void Garden::setAreas(Polygon * areas){
    this->areas = areas;
}
void Garden::setBudget(double budget){
    this->budget = budget;
}
void Garden::setSprinklersQuantity(int sprinklersQuantity){
    this->sprinklersQuantity = sprinklersQuantity;
}
void Garden::setSprinklers(Sprinkler * sprinklers){
    this->sprinklers = sprinklers;
}
void Garden::setSprinkler(int i, Sprinkler sprinkler){
    if(i<this->sprinklersQuantity){
        this->sprinklers[i] = sprinkler;
    }
}
