#include <iostream>
#include <string>
using namespace std;

struct Transac
{
    string TransactNo;
    string Branch;
    int Quantity;
    double Discount;
    int Purchase;
};

void displayTransact (const Transac* transact)
{
    cout << endl;
    cout << "TransactionNo: " << transact->TransactNo << endl;
    cout << "Branch: " << transact->Branch << endl;
    cout << "Quantity: " << transact->Quantity << endl;
    cout << "Discount: " << transact->Discount << "%" << endl;
    cout << "Purchase: " << transact->Purchase << endl;

    cout << "Struct Address: " << transact << endl;
    cout << endl;
}

int main ()
{
    Transac transact;
    Transac* transacPtr = &transact;

    cout << "Enter Transaction Number: ";
    getline(cin, transacPtr->TransactNo);

    cout << "Enter Branch: ";
    getline(cin, transacPtr->Branch);

    cout << "Enter Quantity: ";
    cin >> transacPtr->Quantity;

    cout << "Enter Discount: ";
    cin >> transacPtr->Discount;

    cout << "Enter Purchase: ";
    cin >> transacPtr->Purchase;

    cin.ignore();

    displayTransact (&transact);

    return 0;

}