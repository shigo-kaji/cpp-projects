/*
* Programmer: BAGORIO, John Benedick B.
* Date Created: 12/7/2023
* Terminal No: 
* Program: BSCS
* Course / Section: CS122L / AM9
*/

#include <iostream>
#include <iomanip>

using namespace std;

//global declaration
int i;
const int size=10;
typedef double *pointers; //typedefinition used for miles per gallon pointer variables

//prototype
//for grade elimination

void getInput(double *input);//prompt the user to input 10 grades
double getLow(double *low);//compute and returns the value of the lowest grade
double getSum(double *sum);//compute for the sum of 10 grades
//choices and try again
char getChoice(char *ch);//display the menu of choices and input the choice of the user
//miles per gallon
void MilesPerrGallon(double *ptr1,double *ptr2,int sz);//final output of the computer miles
//and gallons
void MperG();//prompts the user to specify the size of the array for miles and gallons
//verify and validate the input for miles and gallons using exception handling

int main()
{
    //add only declaration here
    char *chr;
    char opt;
    char choice; 


    do {
        chr=&choice;
        opt=getChoice(chr);
        switch (*chr)

        switch (*chr)
        {
            case '1':
            {
                double grade[size];
                double *ptr;
                double *plow, *psum, *pave;
                double gsum, glow;
                double ave;
                double grade;

                system ("cls");
                //add declaration here
                ptr = grade;
                plow = &glow;
                psum = &gsum;
                pave = &ave;
                ptr = &grade[0];
                system ("cls");
                getInput (ptr);
                gsum = getSum (ptr);
                cout = "Sum = " << gsum << endl;
                glow=getLow(ptr);
                cout<<"lowest = "<<glow<<endl;
                ave=(gsum/size);
                cout<<"average = "<<ave<<endl;
                //add code here
                //NOTE ALL CODES MUST USE pointer variables –input,process and//output
            }
            break;

            case '2': MperG();
                break;

            case '3': 
                cout << "goodbye for now... \n";
                system ("pause");
                exit (1);
                break;
        }
        do{     
	    cout <<"Do you want to try again?[y/n]: ";
	    cin >> opt;
	    }while(opt!='y'&&opt!='n');       
	
	    //Add code here
	    }while(opt=='y');
        cout <<endl;
        system ("pause");
        return 0;
    }


    ///////////////////////////
    char getChoice(char *ch)
    {
        //add code here
        system("cls");
	    cout<<"<<<<<<<<<<MENU>>>>>>>>>>"<<endl
		<<"[1] score of 10 quizzes"<<endl
		<<"[2] miles per gallon"<<endl
		<<"[3] to quit"<<endl
		<<"enter your choice: ";
	    cin>>*ch;
	    return *ch;
    }

    //////////////////////////////
    void getInput(double *input)
    {
        //add code here
        cout << "Choice [1]: Grade Elimination" << endl;
        bool ans;
        cout << "enter " << size << " grades"<<endl;
        do
        {
            ans=true;
            i=0;
            do
            {
                cout << "grade[" << i << "]:";
                cin >> *(input+i);
                try
                {
                    if (*(input+i)<0||*(input+i)>100)
                    throw *(input+i);
                    ans=false;
                }
                catch(double e)
                {
                    cout << e <<" is not valid!! 0-100 only" << endl;
                    continue;
                }
                i++;

            }while(i<size);

        }while(ans);
    }

    /////////////////////////////
    double getSum(double *sum)
    {
        double add=0;
        //add code here
        for(i=0; i<size; i++)
	    add += *(sum+i);
        return add;
    }

    ////////////////////////////////
    double getLow(double *low)
    {
        double baba;
        //add code here
        for (i=0; i<size; i++)
        {
            if (baba>*(low+i))
            baba = *(low+i);
        }
        return baba;
    }

    /////////////////////////
    void MperG()
    {
        int ctr;
        pointers milPtr,galPtr;
        int msize;


        system ("cls");
        //add code here
        cout << "COMPUTING FOR MPG : miles per gallon..." << endl
        << "Specify the size of the array: ";
        cin >> msize;

        while(msize<5||msize>15)
        {
            cout << "size 5-15 only" << endl
            << "Specify the size of the array: ";
            cin >> msize;
        }
        
        milPtr=new double[msize];
        galPtr=new double[msize];

        cout << fixed << setprecision(2);
        cout << "MILES" << endl;

        for(ctr=0;ctr<msize;ctr++)
        {
            //add code here
            bool ans = true;
            while (ans) 
            {
                cout << "miles[" << ctr << "]:";
		        cin>> milPtr[ctr];
            }
            try{
                //add code here
                if(milPtr[ctr]<100||milPtr[ctr]>250)
                throw(milPtr[ctr]);
                else
                ans=false;
            }//end try
            catch(double e)
            {
                //add code here
                cout<< e <<" is not valid!! 100-250 only" << endl
            	<<"reenter a new value" << endl;
            }//end catch

            //add code here

        }//end while

    }//loop for miles

    /******************************************************/
    cout << "GALLONS"<<endl;
    for (ctr=0;ctr<msize;ctr++)
    {
        bool ans = true;
        while (ans){
            //add code here

            cout<<"gallons["<<ctr<<"]:";
		    cin>> galPtr[ctr];

            try{
            //add code here
            if(galPtr[ctr]<5||galPtr[ctr]>25)
			throw(galPtr[ctr]);
		    else
			ans=false;
            }//end try

            catch (double e)
            {
                //add code here
                cout<<e<<" is not valid!! 5-25 only"<<endl
			    <<"reenter a new value"<<endl;

            }//end catch

            //add code here
            return 0; 

        }//end while

        MilesPerrGallon(milPtr,galPtr,msize);
    }

    ////////////////////////
    void MilesPerrGallon(double *ptr1,double *ptr2,int sz)
    {
        double mpg[sz];
        pointers mpgPtr;
        int index;
        //add code here
        mpgPtr = mpg; 
        cout << left << fixed << setprecision(2) << endl
        << setw(8) << "miles" << "/        "
        << setw(8) << "gallon" << "=       "
        << "MPG" << endl;
    }