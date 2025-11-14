#include <iostream>
#include <iomanip>

using namespace std;

void nextInt (int &num);

int main ()
{
    int usernum;

    cout << "Enter an Integer number: ";
    cin >> usernum;

    int *ptrnum = &usernum;

    nextInt (*ptrnum);

    cout << "The next integer is " << usernum << endl;

    return 0;
}
void nextInt (int &num)
{
    num++;
}