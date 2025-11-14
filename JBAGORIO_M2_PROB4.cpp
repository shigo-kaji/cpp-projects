#include <iostream>
#include <string>
using namespace std;

struct Student 
{
    string SN;
    string Name;
    string Program;
    string Department;
    double GWA;
};

void displayStudent(const Student* student) 
{
    cout << "SN: " << student->SN << endl;
    cout << "Name: " << student->Name << endl;
    cout << "Program: " << student->Program << endl;
    cout << "Department: " << student->Department << endl;
    cout << "GWA: " << student->GWA << endl;
}

int main() 
{
    Student student;
    Student* studentPtr = &student;

    cout << "Enter Serial Number: ";
    getline(cin, studentPtr->SN);

    cout << "Enter Name: ";
    getline(cin, studentPtr->Name);

    cout << "Enter Program: ";
    getline(cin, studentPtr->Program);

    cout << "Enter Department: ";
    getline(cin, studentPtr->Department);

    cout << "Enter GWA: ";
    cin >> studentPtr->GWA;

    cout << endl;
    displayStudent(studentPtr);

    return 0;
}