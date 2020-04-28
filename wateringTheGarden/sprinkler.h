#ifndef SPRINKLER_H
#define SPRINKLER_H


class Sprinkler
{
    double cost;
    double angle;
    double range;
    bool angleAdjustment;
public:
    Sprinkler();
    Sprinkler(double cost, double angle, double range, bool angleAdjustment);

    //getters
    double getCost();
    double getAngle();
    double getRange();
    bool getAngleAdjustment();
    //setters
    void setCost(double cost);
    void setAngle(double angle);
    void setRange(double range);
    void setAngleAdjustment(bool angleAdjustment);

    ~Sprinkler(){}
};

#endif // SPRINKLER_H
