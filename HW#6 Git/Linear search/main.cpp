#include <iostream>
#include <string>
using namespace std;

template <typename T>//template
int linearSearch(const T list[], T key, int arraySize);//prototype

int main()
{
    int intArray[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};//initialization of int, double and string arrays
    double dubArray[] = {1.1, 9.9, 2.2, 8.8, 3.3, 7.7, 4.4, 6.6, 5.5};
    string stringArray[] = {"David", "Nathan", "Nick", "Nutt"};
    
    cout << linearSearch(intArray, 3, 9) << endl;//searches arrays
    cout << linearSearch(dubArray, 2.2, 9) << endl;
    cout << linearSearch<string>(stringArray, "Nutt", 4) << endl;

return 0;
}

template <typename T>//template
int linearSearch(const T list[], T key, int arraySize)//passes array, searched item, and array size
{
    for (int i = 0; i < arraySize; i++)//loop returns element number of match
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

