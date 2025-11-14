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
    cout << endl;
}

int main() 
{
    Student* studentPtr;

    Student student1 = {"2023-1-001", "Jose Rizal", "BSCS", "CS", 1.0};
    studentPtr = &student1;
    displayStudent(studentPtr);
    Student student2 = {"2023-1-002", "Andres Bonifacio", "BSIT", "IT", 2.5};
    studentPtr = &student2;
    displayStudent(studentPtr);

    return 0;
}