//I affirm that all code given below was written solely by me, David Hendricks, and that any help I received adhered to the rules stated for this exam.

#include "Venue.h" //include venue header file
#include <iostream>

bool Venue::validTime(int time) const //function to test whether time is open
{
    if (scheduledEvents[time - 1].getTime() == -1) //if still default time, slot is open
    {
        return true;
    }
    else
        return false;
}

void Venue::addEvent(int time, string name) //function to add event if the slot is open
{
    if (validTime(time) == true)
    {
        scheduledEvents[time - 1].setTime(time); //set time of scheduled event
        scheduledEvents[time - 1].setTitle(name); //set title of scheduled event
        cout << "Event scheduled!\n";
    }
    else
        cout << "Couldn't schedule event :(\n"; //slot is booked, so cannot schedule new event
}

Event Venue::findEvent(int time) //returns event corresponding to the given time
{
    return scheduledEvents[time - 1];
}

Event Venue::findEvent(string name) //returns event corresponding to the given title
{
    int i = 0;
    while (scheduledEvents[i].getTitle() != name && i <= 11) //loop tests for title matches in each element
    {
        if(i != 11)
            i++;
        else
            break;
    }

    return scheduledEvents[i];
}








