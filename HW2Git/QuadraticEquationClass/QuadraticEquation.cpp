#include "QuadraticEquation.h"
#include <cmath>

//construct a, b, and c
QuadraticEquation::QuadraticEquation(int A, int B, int C)
{
    a = A;
    b = B;
    c = C;
}

//returns a
int QuadraticEquation::getA()
{
    return a;
}

//returns b
int QuadraticEquation::getB()
{
    return b;
}

//returns c
int QuadraticEquation::getC()
{
    return c;
}

//returns discriminant
int QuadraticEquation::getDiscriminant()
{
    int discriminant = pow(b , 2) - 4 * a * c;
    return discriminant;
}

//returns plus root
double QuadraticEquation::getRoot1(int discriminant)
{
    double root1 = (-b + sqrt(pow(b , 2) - 4 * a * c)) / (2 * a);
    if (discriminant >= 0)
        return root1;
    else
        return 0;
}

//returns minus root
double QuadraticEquation::getRoot2(int discriminant)
{
    double root2 = (-b - sqrt(pow(b , 2) - 4 * a * c)) / (2 * a);
    if (discriminant >= 0)
        return root2;
    else
        return 0;
}