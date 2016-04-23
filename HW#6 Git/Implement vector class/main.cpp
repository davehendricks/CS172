#include <iostream>
#include "Vector.h"
#include <string>
using namespace std;

int main()
{
    vector<int> vInt;//no arg int vector, append 1-5
    vInt.push_back(1);
    vInt.push_back(2);
    vInt.push_back(3);
    vInt.push_back(4);
    vInt.push_back(5);
    
    cout << "Vector 1:\n";//output vector 1
    for (int i = 0; i < vInt.getSize(); i++) {
        cout << vInt.at(i);
        cout << "\n";
    }
    cout << "\n";
    
    cout << "Vector 2:\n";
    vector<string> vString(5, "Quincy");//constructs 5 element vector, each element initialized to Quincy
    vString.push_back("Charlemagne");//appends Charlemagne and Frederick
    vString.push_back("Frederick");
    for (int i = 0; i < vString.getSize(); i++) {//outputs vector 2
        cout << vString.at(i);
        cout << "\n";
    }
    cout << "\n";
    
    vector<int> vInt2(15, 7);//constructs 15 element vector, each element initialized to 7
    cout << "Vector 3:\n";//outputs vector 3
        for (int i = 0; i < vInt2.getSize(); i++) {
        cout << vInt2.at(i);
        cout << "\n";
    }
    cout << "\n";

    
    vInt.swap(vInt2);//swaps vector 1 and 3
    
    cout << "Vector 1:\n";//outputs resulting vector 1
    for (int i = 0; i < vInt.getSize(); i++) {
        cout << vInt.at(i);
        cout << "\n";
    }
    cout << "\n";
    
    cout << "Vector 3:\n";//outputs resulting vector 3. First part is right, but size unchanged for some reason
    for (int i = 0; i < vInt2.getSize(); i++) {
        cout << vInt2.at(i);
        cout << "\n";
    }
    cout << "\n";
    
    return 0;
}