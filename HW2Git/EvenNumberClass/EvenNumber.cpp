#include "EvenNumber.h"

//default even number constructor
EvenNumber::EvenNumber()
{
    value = 0;
}

//Specified even number constructor. Invalid entry --> 0
EvenNumber::EvenNumber(int val)
{
    value = (val % 2 == 0) ? val : 0;
}

//returns int value
int EvenNumber::getValue()
{
    return value;
}

//returns next even number
EvenNumber EvenNumber::getNext()
{
    EvenNumber next(value + 2);
    return next;
}

//returns previous even number
EvenNumber EvenNumber::getPrevious()
{
    EvenNumber previous(value - 2);
    return previous;
}


