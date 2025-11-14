#include <iostream>
#include <iomanip>
using namespace std;

int i;
char choice;

char getMenu();
void getBinDisplay (int *ptr, int *xsize);
int getLoc(int *ptr, int size, int *xtarget);
int getsize ();
int findSmallest(const int numbers[], int size);
void getInput (double *ptr, int xsize);
double getElim(double *ptr, int xsize);
void getTry();

int main ()
{ 
    do{
        switch (getMenu())
    {
        case '1':
        {
            int size = 12;
            int binNum [size] = {4, 7, 8, 10, 14, 21, 22, 36, 62, 77, 81, 91};
            int result, target;

            getBinDisplay(binNum, &size);

            cout << "Enter your target key: ";
            cin >> target;

            result = getLoc(binNum, size, &target);
            if (result != -1)
            {
                cout << target << " is at position [" << result << "]" << endl;
            } else {
                cout << target << " is not on the list" << endl;
            }

        }
        
        break;


        case '2': {
            int num, size;
            const int maxSize = 10;

            system ("cls");
            cout << "Option 2: Grade Elimination" << endl;
            getsize();

            for (int i = 0; i < size; ++i)
            {
                cout << "Grade Number [" << i + 1 << "]: ";
                cin >> num;
            }    

        }
        break;

        case '3': {
            cout << "Exiting Program...";
            exit(0);
        }
    
        default:
        system ("cls");
    
    }
    getTry();
    }while (true);
    return 0;
}

//////////////////////////////////
char getMenu()
{
    char digit;
    do{
        cout << "----------CHOICES----------" <<endl
        << "[1] Binary Searching" <<endl
        << "[2] Grade Elimination" << endl
        << "[3] Exit" <<endl
        << "Enter your choice: ";
        cin >> digit;
        try
    {
        if (digit < '1'|| digit > '3')
        throw digit;
    }
    catch(char digit)
    {
        system ("cls");
        cout<< "Invalid choice. Please try again" <<endl; 
        continue;
    }
    } while (digit<'1'||digit>'3');

    return digit;
}


/////////////////////////////////
void getBinDisplay (int *ptr, int *xsize)
{
    cout << "Option 1: Binary Searching"<< endl
    <<"Displaying elements in the array" << endl;
    for (int i = 0; i < *xsize; i++) {
        cout << setw(7) << ptr[i];
    }
    cout << endl;
}

////////////////////////////////
int getLoc(int *ptr, int size, int *xtarget)
{
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (ptr [mid] == *xtarget) {
            return mid; 
        } else if (ptr [mid] < *xtarget) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

/////////////////////////////////
int getsize()
{

    int size;
    do {
        cout << "Enter your dsired number of grades [5 - 10 only]: ";
        cin >> size;
        try
        {
            if (size < 5 || size > 10 )
            throw size;
        }
        catch (int size){
            system ("cls");
            cout << size << " is invalid. Please re-enter"<< endl;
            continue;
        }
    } while (size < 5 || size > 10);
    return size;
}

/////////////////////////////////

void getInput (double *ptr, int xsize)
{
    int size, num;
    for (int i = 0; i < size; i + 1)
    {
        cout << "Enter number " << i + 1 << ": ";
        cout << "Grade ["<< i << "]";
        cin >> num;
    }        
}



////////////////////////////////
double getElim(double *ptr, int xsize)
{
    
}

/////////////////////////////////
void getTry ()
{
    char check;
    do{
		cout<<endl<< "Do you want to try again[Y/N]: ";
		cin >> check;
		check = tolower(check);
		if(check == 'n')
			{
			cout << "Exiting program...";
			exit(1);
			}
			system("cls");
	}while(check != 'y');
    getMenu();

}



