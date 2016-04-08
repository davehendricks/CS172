#include "Rectangle2D.h"

Rectangle2d::Rectangle2d() //no arg constructor
{
    x = 0; //x coord. of center
    y = 0; //y coord. of center
    width = 1;
    height = 1;
}

Rectangle2d::Rectangle2d(double newX, double newY, double newWidth, double newHeight) //constructor
{
    x = newX; //custom center, width and height
    y = newY;
    width = newWidth;
    height = newHeight;
}

double Rectangle2d::getX() const //returns x
{
    return x;
}

void Rectangle2d::setX(double newX) //sets x
{
    x = newX;
}

double Rectangle2d::getY() const //returns y
{
    return y;
}

void Rectangle2d::setY(double newY) //sets y
{
    y = newY;
}

double Rectangle2d::getWidth() const //returns width
{
    return width;
}

void Rectangle2d::setWidth(double newWidth) //sets width
{
    width = newWidth;
}

double Rectangle2d::getHeight() const //returns height
{
    return height;
}

void Rectangle2d::setHeight(double newHeight) //sets height
{
    height = newHeight;
}

double Rectangle2d::getArea() const //calculates and returns area
{
    return width * height;
}

double Rectangle2d::getPerimeter() const //calculates and returns perimeter
{
    return 2 * width + 2 * height;
}

bool Rectangle2d::contains(double x, double y) const //determines whether point is in rectangle2D object
{
    if (x > this->x - .5 * width && x < this->x + .5 * width && y > this->y - .5 * height && y < this->y + .5 * height)
        return true;
    else
        return false;
}

bool Rectangle2d::contains(const Rectangle2d &r) const //determines whether rectangle2D object is in rectangle2D object
{
    if (r.getX() - .5 * r.getWidth() > x - .5 * width && r.getX() + .5 * r.getWidth() < x + .5 * width && r.getY() - .5 * r.getHeight() > y - .5 * height && r.getY() + .5 * r.getHeight() < y + .5 * height)
        return true;
    else
        return false;
}

bool Rectangle2d::overlaps(const Rectangle2d &r) const //determines whether rectangle2d objects overlap
{
    if ((r.getX() - .5 * r.getWidth() > x - .5 * width || r.getX() + .5 * r.getWidth() < x + .5 * width) && (r.getY() - .5 * r.getHeight() > y - .5 * height || r.getY() + .5 * r.getHeight() < y + .5 * height))
        return true;
    else
        return false;
}








