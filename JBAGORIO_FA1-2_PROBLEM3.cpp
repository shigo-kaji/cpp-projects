#include <iostream>
#include <iomanip>

using namespace std;

void getAgeValue (string age);
void getName (string name);

int main ()
{
    string userAge, userName;

    cout << "What is your name? ";
    cin >> userName;

    cout << "How old are you? ";
    cin >> userAge;

    getName (userName);
    getAgeValue (userAge);
    
    string *ptrname = &userName;
    string *ptrage = &userAge;

    cout << "Address of Name: " << &ptrname <<endl;
    cout << "Adress of Age: " << &ptrage <<endl;

    return 0;
}

void getName (string name)
{
    cout << "Hi " << name << ", ";
}

void getAgeValue (string age)
{
    cout << "You are " << age << " years old! \n" << endl;
}