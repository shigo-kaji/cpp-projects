#include <iostream>
using namespace std;

int main() 
{
    const int size = 10;
    int numbers[size];

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    int* ptr = numbers; 

    cout << endl;
    cout << "Numbers inputted: " << endl;

    for (int i = 0; i < size; ++i) 
    {
        cout << "Number " << (i + 1) << ": " << *ptr << endl;
        ++ptr; 
    }

    return 0;
}