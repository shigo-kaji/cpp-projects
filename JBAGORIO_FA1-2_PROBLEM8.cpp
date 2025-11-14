#include <iostream>
#include <iomanip>

using namespace std;

void getTriangle (float &base, float &height, float &area);

int main ()
{
    float userBase;
    float userHeight;
    float triArea;

    cout << "Enter base of triangle: ";
    cin >> userBase;

    cout << "enter height of triangle: ";
    cin >> userHeight;

    float *ptrarea = &triArea;

    getTriangle (userBase, userHeight, *ptrarea);

    cout << "The base of the triangle is " << userBase <<"." << endl;
    cout << "The height of the triangle is " << userHeight <<"." << endl;
    cout << "The area of the triangle is " << triArea << "." <<endl;

    return 0;
}

void getTriangle (float &base, float &height, float &area)
{
    area = 0.5 * base * height;
}