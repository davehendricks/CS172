#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

template<typename T>
void shuffle(vector<T>& v);//prototype

int main()
{
    vector<int> shuff(10);//declares a vector of 10 integers
    
    cout << "Enter 10 integers: ";//prompts user to enter 10 integers
    for (int i = 0; i < 10; i++)
        cin >> shuff[i];
    
    shuffle(shuff);//shuffles vector
    
    for (int i = 0; i < 10; i++)//outputs shuffled vector
        cout << shuff[i] << " ";
    
    return 0;
}

template<typename T>
void shuffle(vector<T>& v)
{
    srand(time(0));//allows random number generation
    
    int random1 = 0;
    int random2 = 0;

    bool taken[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//array of 10 bools all set false
    
    while (taken[0] == false || taken[1] == false || taken[2] == false || taken[3] == false || taken[4] == false || taken[5] == false || taken[6] == false || taken[7] == false || taken[8] == false || taken[9] == false)//loop runs as long as any element in the array is false
    {
        while(random1 == random2 || taken[random1] == true || taken[random2] == true)//loop runs as long as the random numbers generation are not unique from each other and the preceeding randoms
        {
            random1 = rand() % 10;
            random2 = rand() % 10;
        }
        
        T temp = v[random1];//switches the elements that the random numbers refer to
        v[random1] = v[random2];
        v[random2] = temp;
        
        taken[random1] = true;//assigns true to the shuffled numbers
        taken[random2] = true;
    }
}
