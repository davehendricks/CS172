#include <iostream>
using namespace std;

template<typename T>//template
bool isSorted(const T list[], int size);//prototype

int main()
{
    int intArray1[] = {1, 2, 3, 4, 5};//initialization of int, double and string arrays
    int intArray2[] = {1, 3, 4, 2, 5};
    double dubArray1[] = {1.1, 2.3, 5.5, 6.3, 8.4};
    double dubArray2[] = {2.2, 1.1, 6.5, 3.7, 8.7};
    string strArray1[] = {"Alfred", "Bobby", "Catie", "Darlene", "Eugene"};
    string strArray2[] = {"Zane", "Bobby", "Garret", "Darlene", "Frederick"};
    
    cout << isSorted(intArray1, 5) << endl;//test for sorting
    cout << isSorted(intArray2, 5) << endl;
    cout << isSorted(dubArray1, 5) << endl;
    cout << isSorted(dubArray2, 5) << endl;
    cout << isSorted(strArray1, 5) << endl;
    cout << isSorted(strArray2, 5) << endl;
    
    return 0;
}

template<typename T>//template
bool isSorted(const T list[], int size)//passes array template and size
{
    bool sort = true;//begins true
    
    for (int i = 0; i < size - 1; i++)//loop tests if current is larger than the next element, if so not sorted
        if (list[i] > list [i + 1])
            sort = false;
    
    return sort;
}