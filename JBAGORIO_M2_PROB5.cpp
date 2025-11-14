#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    string ENo;
    string Name;
    string Department;
    string Designation;
    string Status;
};

void displayEmployee(const Employee* emp) 
{
    cout <<endl; 
    cout << "ENo: " << emp->ENo << endl;
    cout << "Name: " << emp->Name << endl;
    cout << "Department: " << emp->Department << endl;
    cout << "Designation: " << emp->Designation << endl;
    cout << "Status: " << emp->Status << endl;
}

int main() 
{
    Employee employee;
    Employee* employeePtr = &employee;

    cout << "Enter Employee Number: "; 
    getline(cin, employeePtr->ENo);

    cout << "Enter Name: ";
    getline(cin, employeePtr->Name);

    cout << "Enter Department: ";
    getline(cin, employeePtr->Department);

    cout << "Enter Designation: ";
    getline(cin, employeePtr->Designation);

    cout << "Enter Status: ";
    getline(cin, employeePtr->Status);

    displayEmployee(&employee);

    return 0;
}