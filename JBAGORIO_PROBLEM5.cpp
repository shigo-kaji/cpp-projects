#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int size = 5;
    int num[size];
    int i;
    int low,high;

    cout <<"====================" << endl
    <<"Maximum and Minimum" << endl
    <<"====================" << endl;

    for (i=0; i<size; i++)
    {
        cout << "Enter number " <<i+1<<": ";
        cin >> num[i];
    }

    low = num[0];
    high = num [0];

    for (i=0; i<size; i++)
    {
        if (num[i]<low)
        low = num [i];

        if (num[i]>high)
        high = num [i];
    }

    system("cls");
    cout<< "The numbers are the following: ";
    for (i=0;i<size;i++)
    cout <<setw(7)<<num[i];

    cout << endl <<"The minimum number is " << low << " and the maximum number is " << high << endl;
}