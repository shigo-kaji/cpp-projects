#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std; 

int getPrime (int pnum);
int getX (int xnum);

int main ()
{
    int choice, pnum, xnum;
    char option;

        do {
            system ("cls");
            cout << "~~~~~~~~~~~~~~~~~~~~~~ M E N U ~~~~~~~~~~~~~~~~~~~~~" << endl
            << "[1] PRIME NUMBER" << endl
            << "[2] LETTER X" << endl
            << "[3] EXIT" << endl
            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
            << "ENTER YOUR CHOICE:"; 
            cin >> choice;

            if ( choice <= 0 || choice >= 4 )
                cout << choice << "is an INVALID number" << endl;

            switch (choice)
            {
                case 1:
                    system ("cls"); 
                    cout << "ENTER A NUMBER:";
                    cin >> pnum; 

                    getPrime  (pnum);

                break;

                case 2:
                    system ("cls");
                    cout << "Enter the size of letter X to generate (5 to 15 only): ";
                    cin >> xnum;

                    getX (xnum);

                break;

                case 3:
                    system ("cls");
                    exit (0);
                    default:
                    break;    
            }
                cout << "Return to Main Menu? [Y/N]: ";
                cin >> option;
        }   
            while (option == 'Y' || option == 'y');
            cout << "The following program will now exit";
            return 0;
}
int getPrime (int pnum)
{
    int num1, num2, ctr;
    cout << "The first " << pnum << " Prime numbers are: " ;
    for (num1 = 2; num1 <= pnum; num1++)
    {
       ctr = 0;
       for (num2 = 2; num2 <= sqrt(num1); num2++) 
       {
            if (num1 % num2 == 0)
            {
                ctr = 1;
                break;
            }
       }
            if (ctr == 0)
            cout << num1 << " ";
    }
    cout << endl;
}
int getX (int sz)
{
        if (sz < 5 || sz > 15)
        {
            cout << "INVALID NUMBER!" << endl;
        }
        int x1, x2;
        for (x1 = 1; x1 <= sz; x1++)
        {
            for (x2 = 1; x2 <= sz; x2++)
            {
                if (x1 == x2 || x1 + x2 == sz + 1)
                cout << "X";
                    else
                cout << " ";
            }
                cout << endl;
        }
}