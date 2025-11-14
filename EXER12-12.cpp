#include <iostream>
using namespace std;

int getStringLength(const char* str) 
{
    int length = 0;

    while (*str != '\0') 
    {
        ++length;
        ++str;
    }

    return length;
}

int main() 
{
    const int maxStringLength = 100;
    char inputString[maxStringLength];

    cout << "Enter a string: ";
    cin.getline(inputString, maxStringLength);

    int length = getStringLength(inputString);

    cout << "Length:  " << length << endl;

    return 0;
}