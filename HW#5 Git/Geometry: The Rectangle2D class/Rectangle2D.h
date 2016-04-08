#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

class Rectangle2d
{
private:
    double x; //x coord. of center
    double y; //y coord. of center
    double width;
    double height;
public:
    Rectangle2d(); //no arg constructor
    Rectangle2d(double, double, double, double); //constructor
    double getX() const; //returns x
    void setX(double); //sets x
    double getY() const; //returns y
    void setY(double); //sets y
    double getHeight() const; //returns height
    void setHeight(double); //sets height
    double getWidth() const; //returns width
    void setWidth(double); //sets width
    double getArea() const; //returns area
    double getPerimeter() const; //returns perimeter
    bool contains(double, double) const; //determines whether point is in rectangle2D object
    bool contains(const Rectangle2d&) const; //determines whether one rectangle2D object contains another
    bool overlaps(const Rectangle2d&) const; //determines whether two rectangle2D objects overlap
};

#endif
