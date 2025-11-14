#include <iostream>
#include <string>
using namespace std;

void inputNames(string* names, int size) 
{
    cout << "Enter 10 names:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
    }
}

void displayNames(const string* names, int size) 
{
    cout << endl;
    cout << "Names entered:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Name " << (i + 1) << ": " << names[i] << endl;
    }
}

int main() {
    const int size = 10;
    string* names = new string[size]; 

    inputNames(names, size);

    displayNames(names, size);

    delete[] names;

    return 0;
}