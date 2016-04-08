#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course
{
public:
    Course(const string& courseName, int capacity); //constructor
    Course(const Course&); //copy constructor
    ~Course(); //destructer
    string getCourseName() const; //returns course name
    void addStudent(const string& name); //adds student
    void dropStudent(const string& name); //drops student
    string* getStudents() const; //returns pointer to student array
    int getNumberOfStudents() const; //returns number of students
    string* increaseCapacity(const string*, int&); //increases class capacity by 1
    string* dropDuplicate(const string*, int&); //used in drop student
    string* clear(); //clears students from class

private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};
#endif
