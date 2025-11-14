#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const string default_pass = "Exer04";
const int login_attempts = 3;

struct Product 
{
    int productNum;
    string ProductType;
    string ProductName;
    double price;
    int stock;
    int sold;
    int left;
};

void login()
{
    string username, password;
    int attempts = 0;
    do 
    {
        cout << "PRODUCT INVENTORY SYSTEM CSS122L"<< endl;
        cout << endl;
        cout << "USERNAME: ";
        cin >> username;
        system ("cls");

        cout << "PRODUCT INVENTORY SYSTEM CSS122L" << endl;
        cout << endl;
        cout << "PASSWORD: ";
        cin >> password; 

        try 
        {  
            if (password == default_pass)
            {
                cout << "LOGIN SUCCESFUL!" <<endl;
                system ("cls");
                return;
            } else {
                throw (password);
            }
        }
        catch (string pass) 
        {
            attempts++;
            cout << "INCORRECT PASSWORD! " << login_attempts - attempts << " attempts remaining!" << endl;
        }
    } while (attempts < login_attempts);
    
        throw runtime_error("Maximum password attempts reached. Now exiting program...");

}

void displayinvent (const Product& product)
{
    cout << product.productNum << "\t\t";
    cout << product.ProductType << "\t\t\t";
    cout << product.ProductName << "\t\t\t";
    cout << product.price << "\t";
    cout << product.stock << "\t\t";
    cout << product.sold << "\t\t";
    cout << product.left << endl;
}

int main ()
{
    login();

    try 
    {
        cout << "\t\t***** INVENTORY SYSTEM C++.2 *****" << endl;
        cout << endl;

        int prodnum;
        cout << "ENTER NUMBER OF PRODUCTS FOR INVENTORY: ";
        cin >> prodnum;

        if (prodnum <= 0) {
            throw invalid_argument("Number of products must be greater than 0.");
        }

        Product* products = new Product[prodnum];

        for (int i = 0; i < prodnum; ++i) 
        {
            cout << endl;
            cout << "ENTER PRODUCT "<< i + 1 << ":" << endl;
            products[i].productNum = i + 1;

            cout << "Product Type: ";
            cin >> products[i].ProductType;

            cout << "Product Name: ";
            cin >> products[i].ProductName;

            cout << "Product Price: ";
            cin >> products[i].price;

            cout << "Stock: ";
            cin >> products[i].stock;

            cout << "Units Sold: ";
            cin >> products[i].sold;

            products[i].left = products[i].stock - products[i].sold;

        }
        
        cout << endl;
        cout << "Product Number" << "\t";
        cout << "Product Type" << "\t\t";
        cout << "Product Name" << "\t\t";
        cout << "Price" << "\t";
        cout << "In Stock" << "\t";
        cout << "Units Sold" << "\t";
        cout << "Units Left" << endl;

        for (int i = 0; i < prodnum; ++i)
        {
            displayinvent(products[i]);
        }

        delete[] products;

    } catch (const exception& e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}