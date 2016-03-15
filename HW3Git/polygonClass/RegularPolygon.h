#ifndef RegularPolygon_h
#define RegularPolygon_h

class RegularPolygon
{
private:
    int n;
    double side;
    double x;
    double y;
    
public:
    RegularPolygon();
    RegularPolygon(int, double);
    RegularPolygon(int, double, double, double);
    int getN() const;
    void setN(int);
    double getSide() const;
    void setSide(double);
    double getX() const;
    void setX(double);
    double getY() const;
    void setY(double);
    double getPerimeter() const;
    double getArea() const;
};

#endif
