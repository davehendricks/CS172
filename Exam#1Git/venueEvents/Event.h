//I affirm that all code given below was written solely by me, David Hendricks, and that any help I received adhered to the rules stated for this exam.

#ifndef Event_h //inclusion guard
#define Event_h
#include <string>
using namespace std;

class Event
{
private:
    int Time; //event time
    string Title; //event title
    
public:
    Event(); //default constructor
    Event(int, string); //constructor with arguments for event name and time
    int getTime() const; //returns event time
    string getTitle() const; //returns event title
    void setTime(int); //reassigns event time
    void setTitle(string); //reassigns event title
};

#endif