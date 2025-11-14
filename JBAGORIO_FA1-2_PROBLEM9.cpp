#include <iostream>
#include <iomanip>

using namespace std; 

void getMeralco(int &volt, int &amps, int &meralco);

int main ()
{
    int userVolt;
    int userAmp;
    int mahalMeralco;

    cout << "Enter Voltage (volt): ";
    cin >> userVolt;

    cout << "Enter Current (amps): ";
    cin >> userAmp;

    int *ptrmeralco = &mahalMeralco;

    getMeralco (userVolt, userAmp, *ptrmeralco);

    cout <<endl << "Your daily electric consumption is " << mahalMeralco << "." << endl;

    return 0;
}

void getMeralco(int &volt, int &amps, int &meralco)
{
    meralco = volt*amps;
}