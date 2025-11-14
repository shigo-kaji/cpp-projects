#include <iostream>
#include <iomanip>
using namespace std;

const int gift_count = 5;

int main() 
{
    string mywishlist[gift_count];
    string youwishlist[gift_count];

    cout <<"====================" << endl
    <<"5 Wishes on Christmas" << endl
    <<"====================" << endl
    << "Enter your five wishes for Christmas:" << endl;
    for (int i = 0; i < gift_count; ++i) 
    {
        cout << "Wish " << (i + 1) << ": ";
        getline(cin, mywishlist[i]);
    }

    for (int i = 0; i < gift_count; ++i) 
    {
        youwishlist[i] = mywishlist[i];
    }

    system("cls");
    cout << "Your five wishes are ";
    for (int i = 0; i < gift_count; ++i) 
    {
        cout<<setw(7)<< mywishlist [i];
    }

    cout << "." <<endl;

     cout <<endl;

    cout << "My five wishes are ";
    for (int i = 0; i < gift_count; ++i) 
    {
        cout<<setw(7)<< youwishlist [i];
    }

    cout << "." <<endl;

    return 0;
}