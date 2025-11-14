#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    const int maxStringLength = 100;

    char string1[maxStringLength];
    char string2[maxStringLength];

    cout << "Enter a string: ";
    cin.getline(string1, maxStringLength);

    char* ptr1 = string1;
    char* ptr2 = string2;

    while (*ptr1 != '\0') 
    {
        *ptr2 = *ptr1;
        ++ptr1;
        ++ptr2;
    }

    *ptr2 = '\0';

    cout << "Original string: " << string1 << endl;
    cout << "Copy: " << string2 << endl;

    return 0;
}