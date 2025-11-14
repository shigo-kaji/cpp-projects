#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void inputNames(string* names, int size) 
{
    cout << "Enter 10 names:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
    }
}

void sortNames(string* names, int size) 
{
    sort(names, names + size); 
}

void SortedNames (const string* names, int size) 
{
    cout << endl;
    cout << "Sorted names:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Name " << (i + 1) << ": " << names[i] << endl;
    }
}

int main() {
    const int size = 10;
    string* names = new string[size];

    inputNames(names, size);

    sortNames(names, size);

    SortedNames(names, size);

    delete[] names;

    return 0;
}