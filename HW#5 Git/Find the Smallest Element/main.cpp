#include <iostream>
using namespace std;

int checkSmallest(int* ptrnums, int size); //function prototype

int main()
{
    int nums[8] = {1, 2, 4, 5, 10, 100, 2, -22}; //int array nums
    cout << "The smallest element is: " << checkSmallest(nums, 8) << endl; //outputs smallest element in nums
}

int checkSmallest(int* ptrnums, int size) //function returns smallest element in int pointer array
{
    int smallest = ptrnums[0]; //smallest initially first
    
    for (int i = 0; i < size; i++) //uses pointers in for loops to determine smallest element
    {
        if (ptrnums[i] < smallest)
            smallest = ptrnums[i];
    }
    
    return smallest;
}