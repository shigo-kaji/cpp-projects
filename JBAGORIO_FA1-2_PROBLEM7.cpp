#include <iostream>
#include <iomanip>

using namespace std;

void getSeconds (int &min, int &sec);

int main ()
{
    int usermin;
    int usersec;

    cout << "Enter Minute/s: ";
    cin >> usermin;

    int *ptrsec = &usersec;

    getSeconds (usermin, *ptrsec);

    cout << usermin << " minutes is equal to " << usersec << " seconds." << endl;

    return 0; 
}

void getSeconds (int &min, int &sec)
{
    sec = min * 60;
}