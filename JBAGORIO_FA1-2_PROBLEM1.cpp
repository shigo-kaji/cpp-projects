#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main ()
{
	string name;
    string *ptrname;

    cout << "Enter your name: ";
    cin >> name;

    ptrname = &name;

    cout << "Hello! " << name << ", nice to meet you! \n" << endl;
    cout << "Address of the pointer variable: " << ptrname << endl;

    return 0;

	system ("cls");
}