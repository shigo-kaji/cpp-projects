#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string fruits [5];
    fruits [0] = "Apple";
    fruits [1] = "Orange";
    fruits [2] = "Grapes";
    fruits [3] = "Banana";
    fruits [4] = "Chico";
    int i;

    cout<<"Fruit: ";
    for (i=0;i<5;i++)
    {
        cout<<setw(10)<<fruits [i];
    }
}