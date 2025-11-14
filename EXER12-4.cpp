#include <iostream>
using namespace std;

int main() 
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter Number " << (i + 1) << ": ";
        cin >> array[i];
    }

    cout << endl;
    cout << "Numbers entered: " << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Number " << (i + 1) << ": " << array[i] << endl;
    }

    delete[] array;

    return 0;
}