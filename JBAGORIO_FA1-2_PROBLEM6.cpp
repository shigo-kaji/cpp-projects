#include <iostream>
#include <iomanip>

using namespace std;

void getMath (int num1, int num2, int &sum, int &diff, float &quotient, int &product);

int main ()
{
    int num1, num2;
    int sum, diff, product;
    float quotient;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int *ptrsum = &sum;
    int *ptrdiff = &diff;
    int *ptrproduct = &product;
    float *ptrquotient = &quotient;

    getMath (num1, num2, *ptrsum, *ptrdiff, *ptrquotient, *ptrproduct);

    cout << "Sum of " << num1 <<" and " << num2 << " is " << sum <<endl;
    cout << "Difference of " << num1 <<" and " << num2 << " is " << diff <<endl;

    if (num2 != 0)
    {
        cout << "Quotient of " << num1 <<" and " << num2 << " is " << quotient <<endl;
    } else {
        cout << "WARNING! Cannot Divide by Zero." << endl;
    }

    cout << "Product of " << num1 <<" and " << num2 << " is " << product <<endl;

    return 0;
}

void getMath (int num1, int num2, int &sum, int &diff, float &quotient, int &product)
{
    sum = num1 + num2;
    diff = num1 - num2;

    if (num2 != 0)
    {
        quotient = num1 / num2;
    } else {
        quotient = 0;
    }

    product = num1 * num2;
}