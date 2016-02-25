#ifndef QuadraticEquation_h
#define QuadraticEquation_h

class QuadraticEquation
{
//declare properties
private:
    int a, b, c;

//declare behaviors
public:
    QuadraticEquation(int, int, int);
    int getA();
    int getB();
    int getC();
    int getDiscriminant();
    double getRoot1(int);
    double getRoot2(int);
};

#endif
