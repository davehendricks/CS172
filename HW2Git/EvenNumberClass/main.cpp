#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
    EvenNumber even(16);
    
    cout << even.getNext().getValue() << endl;
    cout << even.getPrevious().getValue() << endl;
    
    return 0;
}