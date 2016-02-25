#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
    //prompt user for a, b, and c
    cout << "Enter a, b and c: ";
    int A, B, C;
    cin >> A >> B >> C;
    
    //create quadratic equation object with a, b, and c
    QuadraticEquation quad(A, B, C);
    
    //return 2 roots for positive discriminant
    if (quad.getDiscriminant() > 0)
        cout << "The roots are: " << quad.getRoot1(quad.getDiscriminant()) << " and " << quad.getRoot2(quad.getDiscriminant()) << endl;
    
    //return 1 root for zero discriminant
    else if (quad.getDiscriminant() == 0)
        cout << " The root is: " << quad.getRoot1(quad.getDiscriminant()) << endl;
    
    //return no real roots for negative discriminant
    else
        cout << "The equation has no real roots\n";
    
    return 0;
}