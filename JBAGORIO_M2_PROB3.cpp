#include <iostream>
#include <string>
using namespace std;

struct Transact 
{
    string TransactNo;
    string Branch;
    int Quantity;
    double Discount;
    string Purchase;
};

void displayTransact (const Transact* transact)
{
    cout << "TransactionNo: " << transact->TransactNo << endl;
    cout << "Branch: " << transact->Branch << endl;
    cout << "Quantity: " << transact->Quantity << endl;
    cout << "Discount: " << transact->Discount << "%" << endl;
    cout << "Purchase:  " << transact->Purchase << endl;
    cout << endl;
}

int main ()
{
    Transact* trancsactPtr;

    Transact transact1 = {"2024-0116001", "Makati", 100, 5.0, "10000.00"};
    trancsactPtr = &transact1;
    displayTransact (trancsactPtr);
    Transact transact2 = {"2024-0116002", "Valenzuela", 50, 1.0, "5000.00"};
    trancsactPtr = &transact2;
    displayTransact (trancsactPtr);
    return 0;
}