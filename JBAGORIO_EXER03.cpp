/*
* Programmer: Bagorio, John Benedick B.
* Date created: 1/11/2023
* Terminal no: 
* Program: BSCS
* Course / Section: CSS122L / AM9
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>
#include <cstdlib>

using namespace std;

#include <conio.h>
#include <windows.h>

string sort(string str);//reaaranging the orders of string to test if its anagram
bool areAnagrams(string str1,string str2);//process the strgin if anagram anf returns the value 1 or 0
string RemSpacePunct(string str);//function that removes space and punctation in aa string
////////////////////////////////
void palindrome(char sal[120]);//testing whether the c-string value is palindrome or not
void password();//asking the user to enter the password
char menu();//displaying choices a,b, and c then returns the answer
void quit();//asking the user if he/she wants to quit
string EnterPassword();//processing if the password is correct and diplaying it with "*" sign

int main()
{
    char let, ans;


    //add code here
    do {
        ans = menu();

        switch(ans)
        {
            //add code here
            case 'a':
            {  
                system("cls");
                int length;
                char sal [120];

                cout <<"[a] Check the palindrome " <<endl; 
                cout <<"Input the word: ";
                cin.getline (sal, 120);
                length = strlen(sal);
                cout <<"In reverse order: ";

                for (int i = length - 1; i >= 0; length--)
                {
                    cout << sal[i];
                }

                palindrome(sal);
                cout <<endl;
                break;
            }

            case 'b':
            {
                
                system("cls");
                string str1, str2;
                cout <<"[b] Check if strings are anagrams " <<endl; 
                cout <<"Testing whether the following strings are anagrams:" << endl;
                cout <<"Enter string 1: ";
                getline (cin, str1);
                cout <<"Enter string 2: ";
                getline (cin, str2);

                cout <<"String 1: "<< str1 << endl;
                cout <<"String 2: "<< str2 << endl;

                str1 = RemSpacePunct(str1);
                str2 = RemSpacePunct(str2);

                if(areAnagrams(str1, str2))
                {
					cout << "They are Anagrams." << endl;
                } else{
					cout << "They are NOT Anagrams!" << endl;
				    break;
                }

                break;
            }

            case 'c':
            {
                quit();
                break;
            }
            default:
            cout << "INVALID CHOICE! Please try again." << endl;
            break;
        }

        do{
            cout <<"Do you want to try again? [y/n]" << endl
            << "Choice: ";
            cin >> let;
            let = tolower(let);
        }while (let != 'n' && let != 'y');

    }while(let == 'y');
    //add code here

    system ("pause");
    return 0;
}

/////////////////////////////////////
void quit()
{
    //add code here
    char sagot;

    cout << "Do you want to try again? [y/n]" <<endl
    << "Choice: ";
    cin >> sagot;
    sagot = tolower (sagot);

    if (sagot == 'y')
    {
        system ("pause");
        exit (0);
    }

}

/////////////////////////////////////
string EnterPassword()
{
    //add code here
    string password = "";
    char type;

    while (1)
    {
        type = getch();
        if (type == '\r')
        {
            break;
        } else if (type == '\b')
        {
            if (password.length() > 0 )
            {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else
        {
            password.push_back(type);
            cout << "*";
        }
    }


    return password;
}

/////////////////////////////////////
char menu()
{
    //add code here
    char choice;

    cout << "[a] Check the palindrome" << endl
    << "[b] Testing if strings are anagrams" << endl
    << "[c] Quit" << endl
    << "Your choice: ";
    cin >> choice;
    choice = tolower (choice);
    cin.ignore();

    return choice;
}

/////////////////////////////////////
void password()
{
    //add code here
    string password;
    cout << "Enter password: "; 
    password = EnterPassword();


    if (password == "123456")
    {
        cout << endl;
    } else {
        cout << "Sorry incorrect password..." << endl
        << endl
        << "You have reached the maximum attempt for password." << endl;
        exit (0);
    }

}

/////////////////////////////////////
string sort(string str)
{
    //add code here
    sort(str.begin(), str.end());
    return str;
}

/////////////////////////////////////
bool areAnagrams(string str1,string str2)
{
    //add code here
    str1 = sort(str1);
	str2 = sort(str2);
	if(str1 == str2)
    {
        return true;
    } 
    else   
    {
        return false;
    }
}
/////////////////////////////////////
string RemSpacePunct(string str)
{
    //add code here
    string str1, str2;

    for (int i = 0, len = str1.size (); i < len; i++ )
    {
        if (ispunct(str1[i]) || isspace(str1[i]))
        {
            str1.erase(i--, 1);
            len = str1.size();
        }
    }
    for (int i = 0, len = str2.size(); i < len; i++)
    {
        if (ispunct(str2[i]) || isspace(str2[i]))
        {
            str2.erase(i--, 1);
            len = str2.size();
        }
    }
    return str;
}

/////////////////////////////////////
void palindrome(char sal [120])
{
    //add code here
    int i, j, length = strlen(sal);
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (tolower(sal[i]) != tolower(sal[j]))
        {
            cout << "The word is not palindrome." << endl;
            return;
        }
    }
    cout << "The word is palindrome!" << endl;
}