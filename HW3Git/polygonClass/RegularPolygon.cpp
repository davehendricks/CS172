#include "RegularPolygon.h"
#include <cmath>

RegularPolygon::RegularPolygon()
{
    n = 3;
    side = 1;
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon(int newN, double newSide)
{
    n = newN;
    side = newSide;
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon(int newN, double newSide, double newX, double newY)
{
    n = newN;
    side = newSide;
    x = newX;
    y = newY;
}

int RegularPolygon::getN() const
{
    return n;
}

void RegularPolygon::setN(int newN)
{
    n = newN;
}

double RegularPolygon::getSide() const
{
    return side;
}

void RegularPolygon::setSide(double newSide)
{
    side = newSide;
}

double RegularPolygon::getX() const
{
    return x;
}

void RegularPolygon::setX(double newX)
{
    x = newX;
}

double RegularPolygon::getY() const
{
    return y;
}

void RegularPolygon::setY(double newY)
{
    y = newY;
}

double RegularPolygon::getPerimeter() const
{
    return n * side;
}

double RegularPolygon::getArea() const
{
    const double PI = 3.14159;
    return (n * side * side)/(4 * tan(PI / n));
}



