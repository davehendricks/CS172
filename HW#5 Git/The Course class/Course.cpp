#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity) //constructor
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::Course(const Course& course) //copy constructor
{
    numberOfStudents = course.numberOfStudents;
    courseName = course.courseName;
    capacity = course.capacity;
    students = new string[capacity];
}

Course::~Course() //destructer
{
    delete [] students;
}

string Course::getCourseName() const //returns course name
{
    return courseName;
}

void Course::addStudent(const string& name) //adds student
{
    if (numberOfStudents >= capacity)
        students = increaseCapacity(students, capacity); //increase capacity if class is full
    
    students[numberOfStudents] = name; //add student and increment number of students
    numberOfStudents++;
}

void Course::dropStudent(const string& name) //drops student
{
    int flag = 0; //flag for finding name in student array
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] == name) //throws flag when name is found
            flag = i;
    }
    
    for (int i = flag; i < numberOfStudents - 1; i++) //moves each element back one slot starting at the name match
        students[i] = students[i + 1];
    
    students = dropDuplicate(students, capacity); //creates new pointer array without duplicate at the end
}

string* Course::getStudents() const //returns pointer to student array
{
    return students;
}

int Course::getNumberOfStudents() const //returns number of students
{
    return numberOfStudents;
}

string* Course::increaseCapacity(const string* list, int& size) //allocates new pointees in an array double the size of the array, while initializing the first half of the second array of pointees to the corresponding pointees in the first array.
{
    string* dubCap = new string[size + 1]; //allocates new array with extra slot
    
    for (int i = 0; i < size; i++) //loop assigns corresponding elements in the second pointer array to elements in the first pointer array
        dubCap[i] = list[i];
    
    size += 1; //increments class capacity
    
    return dubCap;
}

string* Course::dropDuplicate(const string* list, int& size) //allocates new pointees in an array, while initializing the first half of the second array of pointees to the corresponding pointees in the first array.
{
    string* dubCap = new string[size]; //allocates new array
    
    for (int i = 0; i < numberOfStudents - 1; i++) //loop assigns corresponding elements in the second pointer array to elements in the first pointer array, leaving out the final duplicate element
        dubCap[i] = list[i];
    
    numberOfStudents -= 1; //decrements number of students
    
    return dubCap;
}

string* Course::clear() //clears students from class
{
    delete [] students;
    students = new string[capacity];
    return students;
}
