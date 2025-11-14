#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

int ShoeNum;

struct datePurchase
{
    int day;
    int month;
    int year;
};

struct ShoeRec
{
    char StockNum[9];
    string ShoeType;
    string ShoeBrand;
    datePurchase datePurchase;
    int ShoeQuantity;
    double shoeCost;
    double TotalValue;
};

void inputShoe (ShoeRec getshoe[])
{
    
    for (int i = 0; i < ShoeNum; ++i)
    {
        try 
        {
            cout << "Enter Stock Number: ";
            cin >> setw (9) >> getshoe[i].StockNum;

            if (strlen(getshoe[i].StockNum) != 8) 
            {
                throw invalid_argument ("Invalid number! Length should only be 8 digits!");
            }
            
            cout << "Shoe Type: ";
            cin >> getshoe[i].ShoeType;

            cout << "Shoe Brand: ";
            cin >> getshoe[i].ShoeBrand;
            
            cout << "Date Purchsed (MM DD YYYY): ";
            cin >> getshoe[i].datePurchase.month >> getshoe[i].datePurchase.day >> getshoe[i].datePurchase.year;

             if (getshoe[i].datePurchase.month < 1 || getshoe[i].datePurchase.month > 12 || getshoe[i].datePurchase.day < 1 ||
                ((getshoe[i].datePurchase.month == 4 || getshoe[i].datePurchase.month == 6 || getshoe[i].datePurchase.month == 9 || 
                getshoe[i].datePurchase.month == 11) && getshoe[i].datePurchase.day > 30) ||
                (getshoe[i].datePurchase.month == 2 && (getshoe[i].datePurchase.day > 28 ||
                (getshoe[i].datePurchase.day > 29 && (getshoe[i].datePurchase.year % 4 != 0 || 
                (getshoe[i].datePurchase.year % 100 == 0 && getshoe[i].datePurchase.year % 400 != 0))))) ||
                ((getshoe[i].datePurchase.month == 1 || getshoe[i].datePurchase.month == 3 ||
                getshoe[i].datePurchase.month == 5 || getshoe[i].datePurchase.month == 7 || 
                getshoe[i].datePurchase.month == 8 || getshoe[i].datePurchase.month == 10 ||
                getshoe[i].datePurchase.month == 12) && getshoe[i].datePurchase.day > 31) ||
                getshoe[i].datePurchase.year < 2021 || getshoe[i].datePurchase.year > 2024)
{
    throw invalid_argument("Invalid date. Month: 1-12, Day: 1-31, Year: 2021-2024");
}

            cout << "Shoe Quantity (5-50 only): ";
            cin >> getshoe[i].ShoeQuantity;

            if (getshoe[i].ShoeQuantity < 5 || getshoe[i].ShoeQuantity > 50)
            {
                throw invalid_argument ("Invalid number! 5-50 only!");
            }

            cout << "Shoe Cost (Php): ";
            cin >> getshoe[i].shoeCost;

            cout << endl;

        } catch (const invalid_argument &e) 
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            --i; 
        }  
    }
    
}

void compVal (ShoeRec tValue[])
{
    for (int i = 0; i < ShoeNum; ++i)
    {
        tValue[i].TotalValue = tValue[i].ShoeQuantity * tValue[i].shoeCost;
    }
}

int main ()
{
    cout << "How many shoe records to process? (1-10 only): ";
    cin >> setw(9) >> ShoeNum;

    if (ShoeNum <= 0 || ShoeNum > 10) 
    {
        throw invalid_argument("INVALID! 1-10 only!");
    }

    ShoeRec shoeArray[ShoeNum];

    inputShoe(shoeArray);

    compVal(shoeArray);

    ofstream outFile ("shoeInventory.txt");
    if (outFile.is_open()) 
    {
        outFile << setw(12) << "StockNumber" << setw(15) << "ShoeType" << setw(15) << "ShoeBrand"
                << setw(16) << "DatePurchase" << setw(20) << "ShoeQuantity" << setw(21) << "ShoeCost"
                << setw(25) << "TotalValue" << endl;

        for (int i = 0; i < ShoeNum; ++i)
        {
            outFile << setw(12) << shoeArray[i].StockNum << setw(15) << shoeArray[i].ShoeType << setw(15) << shoeArray[i].ShoeBrand
                    << "    " << setw(50) << setfill('0') << setw(2) << shoeArray[i].datePurchase.month << "-" << setw(5) 
                    << shoeArray[i].datePurchase.day << "-" << setw(4) << setfill(' ') << shoeArray[i].datePurchase.year
                    << setw(15) << shoeArray[i].ShoeQuantity << setw(15) << fixed << setprecision(2)
                    << "Php" << setw(10) << shoeArray[i].shoeCost << setw(15) << "Php" << setw (10) << shoeArray[i].TotalValue << endl;
        }

        outFile.close();
        cout << "Data has been saved to shopInventory.txt" << endl;
    } else {
        cerr << "Error: Unable to open file for writing." << endl;
    }
    return 0;
}