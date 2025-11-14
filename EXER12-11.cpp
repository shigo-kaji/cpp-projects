#include <iostream>
#include <string>
using namespace std;

int compareStrings(const char* str1, const string& str2) 
{
    while (*str1 != '\0' && *str1 == str2.front()) 
    {
        ++str1;
        str2.erase(str2.begin());
    }

    if (*str1 == '\0' && str2.empty()) 
    {
        return 0;
    } else {
        return (*str1 - static_cast<int>(str2.front()));
    }
}

int main() 
{
    const int maxStringLength = 100;

    char string1[maxStringLength];
    string string2;

    cout << "Enter string 1 (character array): ";
    cin.getline(string1, maxStringLength);

    cout << "Enter string 2 (C++ string): ";
    getline(cin, string2);

    int result = compareStrings(string1, string2);


    if (result == 0) 
    {
        cout << "\nStrings are equal." << endl;
    } else {
        cout << "\nStrings are not equal. The difference is: " << result << endl;
    }

    return 0;
}