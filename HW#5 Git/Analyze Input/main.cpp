#include <iostream>
using namespace std;

void arraySize(int* size); //function prototypes
int* defineArray(int size);
void initializeArray(int* nums, int size);
void countAverage(int* nums, int size);

int main()
{
    int size;
    arraySize(&size); //inputs size of the array
    
    int* nums = defineArray(size); //dynamically allocates int pointer array nums
    
    initializeArray(nums, size); //user inputs each element of nums
    
    countAverage(nums, size); //averages nums and counts elements above average
    
    return 0;
}

void arraySize(int* size) //inputs size using pass by pointers
{
    cout << "How many numbers will you input? ";
    cin >> *size;
}

int* defineArray(int size) //dynamically allocates int pointer array using size
{
    int* pintarray = new int[size];
    return pintarray;
}

void initializeArray(int* nums, int size) //user inputs each element of nums
{
    for (int* i = nums; i < nums + size; i++) //loops through each element
    {
        cout << "Enter a number: ";
        cin >> *i;
    }
}

void countAverage(int* nums, int size) //averages nums and counts elements above average
{
    int sum = 0;
    for (int* i = nums; i < nums + size; i++) //loop counts sum of nums
        sum += *i;
    
    double average = sum / size; //divides sum of nums by size of nums for average
    
    int count = 0;
    for (int* i = nums; i < nums + size; i++) //loop counts elements above average
        if (*i > average)
            count++;
    
    cout << "The average of the numbers is " << average << " and " << count << " numbers are above the average\n";
}