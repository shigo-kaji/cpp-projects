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

void SortedNames(const string* names, int size) 
{
    cout << endl;
    cout << "Sorted names:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Name " << (i + 1) << ": " << names[i] << endl;
    }
}

bool searchName(const string* names, int size, const string& target) 
{
    return binary_search(names, names + size, target);
}

int main() 
{
    const int size = 10;
    string* names = new string[size]; 

    inputNames(names, size);

    sortNames(names, size);

    SortedNames(names, size);

    string target;
    cout << endl;
    cout << "Enter a name to search: ";
    cin >> target;

    if (searchName(names, size, target)) 
    {
        cout << target << " is found in the sorted list." << endl;
    } else 
    {
        cout << target << " is not found in the sorted list." << endl;
    }

    delete[] names;

    return 0;
}