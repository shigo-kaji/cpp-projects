#include <iostream>
using namespace std;

void swap(int* ptr1, int* ptr2) 
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() 
{
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
   
    cout << "Values: " << a << ", "<< b << endl;

    swap(&a, &b);

    cout << "Swapped values: " << a << ", " << b << endl;

    return 0;
}