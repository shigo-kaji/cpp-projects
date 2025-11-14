#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdexcept>

using namespace std;

struct Student 
{
    string SN;
    string Name;
    string Program;
    int Credit_Units;
    string Status;
    int GWA;
    string Honors;
};

string studentStatus(int creditUnits);
string studentHonors(int gwa, string status);
void writeStudentRecordsToFile(const Student *students, int numRecords);

int main() 
{
    try {
        int numRecords;
        cout << "Enter the number of student records: ";
        cin >> numRecords;

        if (numRecords <= 0) 
        {
            throw invalid_argument("Invalid number of records. Please enter a positive integer.");
        }

        Student *students = new Student[numRecords];

        for (int i = 0; i < numRecords; ++i) {
            cout << "Enter details for Student #" << i + 1 << ":\n";
            cout << "Student Number: ";
            cin >> students[i].SN;
            cout << "Name: ";
            cin.ignore();
            getline(cin, students[i].Name);
            cout << "Program: ";
            getline(cin, students[i].Program);
            cout << "Credit Units: ";
            cin >> students[i].Credit_Units;
            students[i].Status = studentStatus(students[i].Credit_Units);
            cout << "GWA: ";
            cin >> students[i].GWA;
            students[i].Honors = studentHonors(students[i].GWA, students[i].Status);
            cout << endl;
        }

        writeStudentRecordsToFile(students, numRecords);

        delete[] students;

    } catch (const exception &e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

string studentStatus(int creditUnits) 
{
    if (creditUnits < 0 || creditUnits > 400) 
    {
        throw invalid_argument("Invalid credit units. Please enter a value between 0 and 400.");
    }

    if (creditUnits >= 0 && creditUnits <= 100)
        return "Freshman";
    else if (creditUnits >= 101 && creditUnits <= 200)
        return "Sophomore";
    else if (creditUnits >= 201 && creditUnits <= 300)
        return "Junior";
    else if (creditUnits >= 301 && creditUnits <= 350)
        return "Senior";
    else if (creditUnits == 400)
        return "Graduate";
    else if (creditUnits >= 351 && creditUnits <= 399)
        return "Graduating";
    else
        throw runtime_error("Unknown");
}

string studentHonors(int gwa, string status) 
{
    if (status != "Graduate" && status != "Graduating") 
    {
        if (gwa < 0 || gwa > 100) {
            throw invalid_argument("INVALID! Please enter a value between 0 and 100.");
        }

        if (gwa >= 96)
            return "First Honor";
        else if (gwa >= 93 && gwa <= 95)
            return "Second Honor";
        else if (gwa >= 90 && gwa <= 92)
            return "Third Honor";
        else
            return "None";
    } else {
        if (gwa < 0 || gwa > 100) 
        {
            throw invalid_argument("INVALID!. Please enter a value between 0 and 100.");
        }

        if (gwa >= 96)
            return "Summa Cum Laude";
        else if (gwa >= 93 && gwa <= 95)
            return "Magna Cum Laude";
        else if (gwa >= 90 && gwa <= 92)
            return "Cum Laude";
        else
            return "None";
    }
}

void writeStudentRecordsToFile(const Student *students, int numRecords) 
{
    ofstream outputFile("studentoutput.txt");

    if (!outputFile.is_open()) 
    {
        cerr << "Error: Unable to open output.txt for writing." << endl;
        return;
    }

    outputFile << "Student Records:\n";
    outputFile << "----------------------------------------------------------------------------------------------------------\n";
    outputFile << "SN\t\tName\t\tProgram\t\tCredit Units\tStatus\t\tGWA\t\tHonors\n";
    outputFile << "----------------------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < numRecords; ++i) {
        outputFile << students[i].SN << setw(15) << students[i].Name << setw(15) << students[i].Program << setw(15)
                    << students[i].Credit_Units << setw(15) << students[i].Status << setw(10)
                    << students[i].GWA << "\t" << students[i].Honors << "\n";
    }

    outputFile << "----------------------------------------------------------------------------------------------------------\n";
    outputFile.close();

    cout << "Student records written to output.txt successfully." << endl;
}