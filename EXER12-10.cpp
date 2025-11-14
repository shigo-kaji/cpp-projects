#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int maxStringLength = 100;

    char string1[maxStringLength];
    string string2;

    cout << "Enter string 1 - character array: ";
    cin.getline(string1, maxStringLength);

    cout << "Enter string 2 - C++ string: ";
    getline(cin, string2);

    char* ptr1 = string1;

    while (*ptr1 != '\0') 
    {
        ++ptr1;
    }

    for (const char& ch : string2) 
    {
        *ptr1 = ch;
        ++ptr1;
    }

    *ptr1 = '\0';

    cout << endl;
    cout << "Concatenated string: " << string1 << endl;

    return 0;
}