//I affirm that all code given below was written solely by me, David Hendricks, and that any help I received adhered to the rules stated for this exam.

#include "Event.h" //include Event header file

Event::Event() //default event constructor
{
    Time = -1;
    Title = "free";
}

Event::Event(int time, string name) //event constructor inputs event time and title and creates event
{
    Time = time;
    Title = name;
}


int Event::getTime() const //returns the time of an event
{
    return Time;
}

string Event::getTitle() const //returns the name of an event
{
    return Title;
}

void Event::setTime(int t) //reassigns the time of an event
{
    Time = t;
}

void Event::setTitle(string name) //reassigns the name of an event
{
    Title = name;
}
