#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct StudentRecord 
{
    string SN;
    string Name;
    string Program;
    string Department;
    float GWA;
};

void inputRecord(StudentRecord &student) 
{
    cout << "Enter SN: ";
    cin >> student.SN;
    
    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, student.Name);
    
    cout << "Enter Program: ";
    getline(cin, student.Program);
    
    cout << "Enter Department: ";
    getline(cin, student.Department);
    
    cout << "Enter GWA: ";
    cin >> student.GWA;
}

void displayRecord(const StudentRecord &student) 
{
    cout << setw(20) << left << student.SN
    << setw(20) << left << student.Name
    << setw(20) << left << student.Program
    << setw(20) << left << student.Department
    << setw(10) << fixed << setprecision(1) << student.GWA << endl;
}

int main() 
{
    int numRecords;
    cout << "Enter the number of records: ";
    cin >> numRecords;
    
    int i = 0;
    while (i < numRecords) 
    {
        StudentRecord student;
        
        cout << endl;
        cout << "Record #" << i + 1 << ": ";
        cout << endl;
        inputRecord(student);
        
        cout << endl;
        cout << "Record " << i + 1 << ": ";
        cout << endl; 
        cout << setw(20) << left << "SN"
        << setw(20) << left << "Name"
        << setw(20) << left << "Program"
        << setw(20) << left << "Department"
        << setw(10) << left << "GWA" << endl;
        
        displayRecord(student);

        i++;
    }

    return 0;
}