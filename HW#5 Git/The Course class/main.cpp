#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
    Course course1("English 101", 25); //creates English 101 course with 25 spots
    Course course2(course1); //creates duplicate English 101 course with 25 spots
    
    course1.addStudent("Johnny"); //adds 3 students to course1
    course1.addStudent("Beth");
    course1.addStudent("David");
    
    course2.addStudent("Nathan"); //adds 3 students to course2
    course2.addStudent("Melanie");
    course2.addStudent("Nutt");
    
    course1.dropStudent("Beth"); //drops one student from course1
    
    course2.dropStudent("Melanie"); //drops one students from course2
    
    cout << "Course 1:\n";
    for (int i = 0; i < course1.getNumberOfStudents(); i++) //outputs course1 roster after drop
        cout << course1.getStudents()[i] << endl;
    
    cout << "\n";
    
    cout << "Course 2:\n";
    for (int i = 0; i < course2.getNumberOfStudents(); i++) //outputs course2 roster after drop
        cout << course2.getStudents()[i] << endl;
    
    course1.clear(); //clears course1 roster
    
    course2.clear(); //clears course2 roster
    
    cout << "\n";
    
    cout << "Course 1:\n";
    for (int i = 0; i < course1.getNumberOfStudents(); i++) //outputs course1 roster after clear
        cout << course1.getStudents()[i] << endl;
    
    cout << "Course 2:\n";
    for (int i = 0; i < course2.getNumberOfStudents(); i++) //outputs course2 roster after clear
        cout << course2.getStudents()[i] << endl;

    return 0;
}
