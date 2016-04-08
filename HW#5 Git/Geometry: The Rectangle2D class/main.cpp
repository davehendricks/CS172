#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
    Rectangle2d r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4); //creates 3 rectangle2D objects
    
    cout << "r1 area: " << r1.getArea() << endl; //outputs r1 area
    cout << "r1 perimeter: " << r1.getPerimeter() << endl; //outputs r1 perimeter
    cout << "r1 contains (3, 3): " << boolalpha << r1.contains(3, 3) << endl; //outputs whether (3,3) is in r1
    cout << "r1 contains r2: " << r1.contains(r2) << endl; //outputs whether r2 is in r1
    cout << "r1 and r3 overlap: " << r1.overlaps(r3) << endl; //outputs whether r1 and r3 overlap
    
    return 0;
}