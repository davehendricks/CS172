
#ifndef Vector_h
#define Vector_h
#include <iostream>
using namespace std;

template<typename T>
class vector//class declaration
{
public:
    vector<T>();
    vector<T>(int);
    vector<T>(int, T);
    void push_back(T);
    void pop_back();
    unsigned getSize() const;
    T at(int) const;
    bool empty() const;
    void clear();
    void swap(vector);
private:
    T* elements;
    int size;
    int capacity;
    void ensureCapacity();
};

template<typename T>
vector<T>::vector()//no arg constuctor, declares vector with no elements
{
    size = 0;
    capacity = 0;
    elements = new T;
}

template<typename T>
vector<T>::vector(int size)//constructor creates vector with specified number of uninitialized elements
{
    this->size = 0;
    capacity = size;
    elements = new T[capacity];
}

template<typename T>
vector<T>::vector(int size, T defaultValue)//constructor specifies number of elements and common value of elements
{
    this->size = size;
    capacity = size;
    elements = new T[capacity];
    for (int i = 0; i < size; i++)
        elements[i] = defaultValue;
}

template<typename T>
void vector<T>::push_back(T element)//tests to see if room in vector, then appends value
{
    ensureCapacity();
    elements[size++] = element;
}

template<typename T>
void vector<T>::ensureCapacity()//tests to see if room in vector,if not doubles capacity
{
    if(size >= capacity)
    {
        T* old = elements;
        capacity = 2 * (size + 1);
        elements = new T[size * 2];
        
        for (int i = 0; i < size; i++)
            elements[i] = old[i];
        
        delete [] old;
    }
}

template<typename T>
void vector<T>::pop_back()//drops last element in vector by leaving it out of size
{
    size--;
}

template<typename T>
unsigned vector<T>::getSize() const//returns size/number of elements in vector
{
    return size;
}

template<typename T>
T vector<T>::at(int index) const//returns specified element as long as index exceed vector length
{
    if (index >= size)
    {
        cout << "error: past end of vector\n";
        return elements[size - 1];
    }
    else
        return elements[index];
}

template<typename T>
bool vector<T>::empty() const//returns if vector is empty
{
    return (size == 0);
}

template<typename T>
void vector<T>::clear()//clears vector by changing size to 0
{
    size = 0;
}

template<typename T>
void vector<T>::swap(vector<T> v2)//swaps by initializing temp pointer to same memory as elements, then reassigns elements pointer with new capacity, and initializes to same values as v2 elements. Assigns v2 elements to temp elements, then deletes temp. Works, except that the second vector retains any elements that extend farther than the size of the first vector
{
    T* temp = elements;
    int tempSize = size;
    
    elements = new T[v2.capacity];
    size = v2.size;
    capacity = v2.capacity;
    for (int i = 0; i < size; i++)
        elements[i] = v2.elements[i];
    
    v2.clear();
    
    for (int i = 0; i < tempSize; i++)
        v2.push_back(temp[i]);
    
    delete [] temp;
}

#endif
