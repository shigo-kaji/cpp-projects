#include <iostream>
#include <cstring> 
using namespace std;

void reverseString(char* str) 
{
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}

int main() 
{
    const int maxStringLength = 100;
    char inputString[maxStringLength];

    cout << "Enter a string: ";
    cin.getline(inputString, maxStringLength);

    reverseString(inputString);
    cout << "Reversed string: " << inputString << endl;

    return 0;
}