#include <iostream>
using namespace std;

void arraySize(int* size); //inputs how many numbers will be entered
int* defineArray(int size); //allocates pointees in an array
void initializeArray(int* nums, int size); //allows the user to assign values to each pointee
int* doubleCapacity(const int* list, int size); //allocates new pointees in an array double the size of the array, while initializing the first half of the second array of pointees to the corresponding pointees in the first array

int main()
{
    int size; //define size variable
    arraySize(&size); //use pass by pointer to let user initialize size
    
    int* nums = defineArray(size); //defines pointer array with size variable
    
    initializeArray(nums, size); //calls function to initialize pointees
    
    int* dubNums = doubleCapacity(nums, size); //calls function to double the size of the pointer array
    
    for (int i = 0; i < 2 * size; i++) //for loop c-outs each element in the second array to test in doubleCapacity worked
        cout << *(dubNums + i) << " ";
    cout << "\n";
    
    delete [] nums; //deletes memory
    delete [] dubNums;
    
    return 0;
}

void arraySize(int* size) //inputs how many numbers will be entered
{
    cout << "How many numbers will you input? ";
    cin >> *size;
}

int* defineArray(int size) //allocates pointees in an array
{
    int* const pintarray = new int[size];
    return pintarray;
}

void initializeArray(int* nums, int size) //allows the user to assign values to each pointee with for-loop
{
    for (int i = 0; i < size; i++)//this is where the bug with const was
    {
        cout << "Enter a number: ";
        cin >> nums[i];
    }
}

int* doubleCapacity(const int* list, int size) //allocates new pointees in an array double the size of the array, while initializing the first half of the second array of pointees to the corresponding pointees in the first array.
{
    int* dubCap = new int[2 * size]; //allocates new array with double size
    
    for (int i = 0; i < size; i++) //loop assigns corresponding elements in the first half of the second pointer array to elements in the first pointer array
        *(dubCap + i) = *(list + i);
    
    return dubCap;
}