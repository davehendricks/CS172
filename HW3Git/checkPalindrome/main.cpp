#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isPalendrome(const string& s);

int main()
{
    cout << "Enter a string: ";
    string isPal;
    cin >> isPal;
    
    if (isPalendrome(isPal) == true)
        cout << "The string is a palendrome\n";
    else
        cout << "The string is not a palendrome\n";
}

bool isPalendrome(const string& s)
{
    stack<char> temp;
    int limit = s.length();
    for (int i = 0; i < limit; i++)
        temp.push(s[i]);
    
    char reverse[limit];
    
    for (int i = 0; i < limit; i++)
    {
        reverse[i] = temp.top();
        temp.pop();
    }
    
    bool pal = true;
    for (int i = 0; i < limit; i++)
    {
        if (s[i] != reverse[i])
        pal = false;
    }
    
    return pal;
}