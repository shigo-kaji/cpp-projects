#include <iostream>
#include <iomanip>

using namespace std;

void swapNum (int &num1, int &num2);

int main ()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout <<"Enter second number: ";
    cin >> num2;

    int *ptrnum1 = &num1;
    int *ptrnum2 = &num2;

    swapNum (*ptrnum1, *ptrnum2);

    cout << "The two numbers are " << num1 <<" and "<< num2 <<"." <<endl;

    return 0;
}

void swapNum (int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}