#include "sprinkler.h"

Sprinkler::Sprinkler()
{

}

Sprinkler::Sprinkler(double cost, double angle, double range, bool angleAdjustment){
    this->cost = cost;
    this->angle = angle;
    this->range = range;
    this->angleAdjustment = angleAdjustment;
}

//getters
double Sprinkler::getCost(){
    return this->cost;
}
double Sprinkler::getAngle(){
    return this->angle;
}
double Sprinkler::getRange(){
    return this->range;
}
bool Sprinkler::getAngleAdjustment(){
    return this->angleAdjustment;
}

//setters
void Sprinkler::setCost(double cost){
    this->cost = cost;
}
void Sprinkler::setAngle(double angle){
    this->angle = angle;
}
void Sprinkler::setRange(double range){
    this->range = range;
}
void Sprinkler::setAngleAdjustment(bool angleAdjustment){
    this->angleAdjustment = angleAdjustment;
}
