#include <iostream>

using namespace std;

void convertHoursToSeconds(float hours, float &seconds);

int main() {
    float inputHours;
    float convertedSeconds;

    cout << "Enter hour/s: ";
    cin >> inputHours;

    float *ptrSeconds = &convertedSeconds;

    convertHoursToSeconds(inputHours, *ptrSeconds);

    cout << endl << inputHours << " hours is equal to " << convertedSeconds << "." <<endl;

    return 0;
}

void convertHoursToSeconds(float hours, float &seconds) {
    float minutes = hours * 60;
    seconds = minutes * 60;
}