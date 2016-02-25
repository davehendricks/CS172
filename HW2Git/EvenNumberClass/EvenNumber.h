#ifndef EvenNumber_h
#define EvenNumber_h

class EvenNumber
{
private:
    int value;
    
public:
    EvenNumber();
    EvenNumber(int);
    int getValue();
    EvenNumber getNext();
    EvenNumber getPrevious();
};

#endif
