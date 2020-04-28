#include "garden.h"

Garden::Garden()
{

}

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
