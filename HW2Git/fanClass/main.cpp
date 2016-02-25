#include <iostream>
#include "fan.h"
using namespace std;

int main()
{
    //create two fan objects
    Fan fan1;
    Fan fan2;
    
    //set fan 1 with mutator functions
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    
    //set fan 2 with mutator functions
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);
    
    //use accessor functions to display properties of fan 1 and fan 2
    cout << "Fan 1 has a speed of " << fan1.getSpeed() << ", a radius of " << fan1.getRadius() << ", and an on/off state of " << fan1.isOn() << endl;
    cout << "Fan 2 has a speed of " << fan2.getSpeed() << ", a radius of " << fan2.getRadius() << ", and an on/off state of " << fan2.isOn() << endl;
    
    return 0;
}