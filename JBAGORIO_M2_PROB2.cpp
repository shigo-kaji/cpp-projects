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

void displayEmployee(const Employee* employee) 
{
    cout << "ENo: " << employee->ENo << endl;
    cout << "Name: " << employee->Name << endl;
    cout << "Department: " << employee->Department << endl;
    cout << "Designation: " << employee->Designation << endl;
    cout << "Status: " << employee->Status<< endl;
    cout << endl;
}

int main() 
{
    Employee* employeePtr;

    Employee employee1 = {"E2023001", "Gabriela Silang", "Accounting", "Head", "Resigned"};
    employeePtr = &employee1;
    displayEmployee(employeePtr);
    Employee employee2 = {"E2023002", "Emilio Aguinaldo", "Marketing", "Trainee", "Probationary"};
    employeePtr = &employee2;
    displayEmployee(employeePtr);

    return 0;
}