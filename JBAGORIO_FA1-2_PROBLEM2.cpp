#include <iostream>
#include <iomanip>

using namespace std;

void callByReference(string &name);

void greetByValue(string name);

int main() {
    string username;

    cout << "What is your name?:  ";
    cin >> username;

    callByReference(username);

    greetByValue(username);

    string *ptrName = &username;
    cout << "Address of Name: " << &ptrName << endl;

    return 0;
}

void callByReference(string &name) 
{
    cout << "Hello, " << name << "!" << endl;
}

void greetByValue(string name) 
{
    cout << "You have a nice day ahead of you " << name << "! \n" << endl;
}