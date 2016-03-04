//I affirm that all code given below was written solely by me, David Hendricks, and that any help I received adhered to the rules stated for this exam.

#ifndef Venue_h //inclusion guard
#define Venue_h
#include "Event.h" //include Event header file

class Venue
{
private:
    Event scheduledEvents[12]; //venue has 12 events in the scheduled events array
    int numEvents;
    bool validTime(int) const; //function inputs time to check for open slot. Const to protect event time
    
public:
    void addEvent(int, string); //function inputs a event time and title and assigns to corresponding slot
    Event findEvent(int); //function finds event based on a time
    Event findEvent(string); //function finds event based on a title
};

#endif