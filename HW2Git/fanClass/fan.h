#ifndef fan_h
#define fan_h

class Fan
{
//properties
private:
    int speed;
    bool on;
    double radius;

//behaviors
public:
    Fan();
    int getSpeed();
    void setSpeed(int);
    bool isOn();
    void setOn(bool);
    double getRadius();
    void setRadius(double);
};


#endif
