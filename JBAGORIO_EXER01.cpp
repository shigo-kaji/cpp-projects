/*
* Programmer: BAGORIO, John Benedick B.
* Date Created: 11/30/2023
* Terminal No: 03
* Program: BSCS
* Course / Section: CS122L / AM9
*/


#include<iostream>
#include<iomanip>
using namespace std;

//global
int i;
int row, col;
int dim = 20; int dim1=10;
const int SIZE =20;
const int sizeRow=4;
const int sizeCol=5;
int choice;
char sagot;


//function
char getMenu(char ans);//returns the correct choice otherwise returns -1 if not.
void getInput(int list[],int dim);//input for both option 1 and 2
void getBubble(int list[],int dim);//perform the bubble sorting
void getSelect(int list[],int dim);//perform the selection sorting
void convert2DimSort(int list[],int dim);//convert one dimensional to 2-dimensional for both option 1 and 2
void get2DOut(int list1[][sizeCol]);//displaying the values in ascending and descending order 2-D
void getHeap(int list3[],int dimen);//process heapyfication or heap sort 1-D
void tryAgain();


int main()
{
    //add code here
    int list [dim];
    do{
        do{
        
        //add code here
        sagot=getMenu(sagot);
    
        } while (sagot<='0'||sagot>='5');

        switch (sagot)
        {
            case '1': //bubble sort
            {
                //add code here
                system ("cls");
                cout << "Processing Bubble Sorting technique... " << endl
                << "Enter" << SIZE << " elements: " << endl;
                //call getInput function
                getInput(list, dim);
                //call getBubble function
                getBubble(list,dim);
                //call convert2DimSort
                convert2DimSort(list,dim);
            }
            break;
            case '2':
            {
                //add code here
                system ("cls");
                cout << "Processing Selection Sorting technique... " << endl
                << "Enter" << SIZE << " elements: " << endl;
                //call getInput function
                getInput(list, dim);
                //call getSelect function
                getSelect(list, dim);
                //call convert2DimSort
                convert2DimSort(list,dim);
            }
            break;
            case '3': //heapsort
            {
                //add code here
                system ("cls");
                cout<< "Processing Heap Sorting technique... " << endl
                << "Enter" << SIZE << " elements: " << endl;
                //getHeap(arr, size);
                cout<<endl<<"Heapyfied values ..."<<endl;
                //add code here
                getHeap(list,dim1);
            }
            break;
            
            case '4': cout<<"end of program.....\n";
                        exit(1);
        }
        tryAgain();
    }while(choice=='y');
}

/////////////////////////////////
char getMenu(char ans)
{
    cout << "----------SORTING----------" << endl
         << "[1] Bubble Sort" << endl
         << "[2] Selection Sort" << endl
         << "[3] Heap Sort" << endl
         << "[4] QUIT" << endl
         << "---------------------------" << endl
         << "Enter your choice: ";
        cin >> ans;
    //add code here
    if (ans <= '0' || ans >= '5')
        cout << ans << " is not a VALID number. Please try again."<< endl;

    return ans;
}

/////////////////////////////////
void getInput(int list[],int dim)// for both option 1 and 2 only
{
    //add code here
    for (i=0; i<dim; i++)
    {
        cout << "loc [" << i << "] = ";
        cin >> list [i];
    }
}

/////////////////////////////////
void convert2DimSort(int list[], int dim)
{
    //add code here
    int list1 [sizeRow][sizeCol];
    i = 0;

    for (row = 0; row < sizeRow; row++)
    {
        for (col = 0; col < sizeCol; col++)
        {
            {
                list1 [row][col] = list [i];
                i++;
            }
        }
    }
    get2DOut(list1);
}

/////////////////////////////////
void get2DOut(int list1[][sizeCol])
{
    cout<<"Ascending Order\n";
    //add code here
    for(row=0; row<sizeRow; row++)
	{
		for(col=0;col<sizeCol;col++)
			{
				cout<<setw(7)<<list1[row][col];
			}
		cout<<endl;
	}
    
    cout<<"\nDescending Order\n";
    //add code here
    for(row=3; row>=0; row--)
	{
		for(col=4;col>=0;col--)
			{
				cout<<setw(7)<<list1[row][col];
			}
		cout<<endl;
	}
}

/////////////////////////////////
void getBubble(int list[],int dim)
{
    //solution to bubble sort
    int temp;
    //add code here
    for(row=0; i<dim; row++)
        cin>>list[row];
    for(row=0; row < (dim-1); row++)
    {
        for(col=0; col < (dim-row-1); col++)
        {
            if(list[col]>list[col+1])
            {
                temp = list[col];
                list[col] = list[col+1];
                list[col+1] = temp;
            }
        }
    }
}

/////////////////////////////////
void getSelect(int list[],int dim)
{
    //solution to selection sort
    //add code here
    for (row = 0; row < dim; row++)
    {
        for (i = row; i < dim; i++)
        {
            if (list [row] > list [i])
            {
                col = list[row];
                list [row] = list[i];
                list [i] = col;
            }
        }
    }
}

/////////////////////////////////
void getHeap(int list3[],int dimen)
{
    int temp;
    //add code here
    for(int left = 1, right = 2, index = 0; index < dimen; index++, left+=2, right+=2)
     {
     	if(left < dimen && list3[index] < list3[left])
     	{
     		temp = list3[index];
     		list3[index] = list3[left];
     		list3[left] = temp;
     		index = -1; left = -1; right = 0;
		}
		
		else if(right < dimen && list3[index] < list3[right])
		{
			temp = list3[index];
			list3[index] = list3[right];
			list3[right] = temp;
			index = -1; left = -1; right = 0;	
		}
	}
	for(int count = 0; count < dimen; count++)
	{
		cout << "Arr[" << count+1 << "]: " << list3[count]<<endl;
	}
}

/////////////////////////////////

void tryAgain()
{
    //add code here
    do{
		cout << "Do you want to try again[Y/N]: ";
		cin >> choice;
		choice = tolower(choice);
		if(choice == 'n')
			{
			cout << "Exiting program...";
			exit(1);
			}
			system("cls");

	}while(choice != 'y');

    
}
