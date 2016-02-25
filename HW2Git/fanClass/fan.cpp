#include "fan.h"

//construct default fan
Fan::Fan()
{
    speed = 1;
    on = false;
    radius = 5;
}

//return fan speed
int Fan::getSpeed()
{
    return speed;
}

//set fan speed to one, two or three. Invalid input --> 0
void Fan::setSpeed(int newSpeed)
{
    speed = (newSpeed == 1 || newSpeed == 2 || newSpeed == 3) ? newSpeed : 0;
}

//return state (on/off)
bool Fan::isOn()
{
    return on;
}

//turn fan on or off
void Fan::setOn(bool onOff)
{
    on = onOff;
}

//return fan radius
double Fan::getRadius()
{
    return radius;
}

//set new radius. Invalid input --> 0
void Fan::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}