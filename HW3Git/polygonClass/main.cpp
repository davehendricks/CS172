#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
    RegularPolygon poly1;
    RegularPolygon poly2(6, 4);
    RegularPolygon poly3(10, 4, 5.6, 7.8);
    
    cout << "The first polygon's perimeter is " << poly1.getPerimeter() << " and its area is " << poly1.getArea() << endl;
    
    cout << "The second polygon's perimeter is " << poly2.getPerimeter() << " and its area is " << poly2.getArea() << endl;
    
    cout << "The third polygon's perimeter is " << poly3.getPerimeter() << " and its area is " << poly3.getArea() << endl;
    
    return 0;
}

