#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    string friends [5] = {"Ana", "Ina", "Uno", "Ali", "Lita"};
    string name;

     cout <<"====================" << endl
    <<"GOOD FRIEND CHECK" << endl
    <<"====================" << endl
    <<"Enter the name of your friend: " ;
    cin >> name;

    for (i = 0; i < name.length(); i++) 
	 {
        name[i] = tolower(name[i]);
    	}

	 
	for (i=0;i<5;i++)
	{
	    if (name == friends[i]){
	    	cout<<"he/she is your friend";
	    	return(0);
	    	}
	    		
    }
    cout<<"he/she is not your friend";
}