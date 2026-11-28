// Q8. Bank Account Types
// Write a C++ program to create a base class BankAccount containing account number,
// account holder name, and balance. Derive two classes, SavingsAccount and
// CurrentAccount. Calculate 4% annual interest for the savings account and deduct ₹500
// as annual maintenance charges for the current account. Display the updated balances.


#include <iostream>
using namespace std;

// Base class
class BankAccount
{
public:
    int accNo;
    string name;
    float balance;

    void getDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }
};

// Derived class 1
class SavingsAccount : public BankAccount
{
public:
    float interest;

    void calculate()
    {
        interest = balance * 4 / 100;
        balance = balance + interest;
    }

    void display()
    {
        cout << "\n----- SAVINGS ACCOUNT -----" << endl;

        cout << "Account Number: " << accNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Interest: " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

// Derived class 2
class CurrentAccount : public BankAccount
{
public:
    void calculate()
    {
        balance = balance - 500;
    }

    void display()
    {
        cout << "\n----- CURRENT ACCOUNT -----" << endl;

        cout << "Account Number: " << accNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Maintenance Charges: 500" << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    cout << "SAVINGS ACCOUNT DETAILS" << endl;
    s.getDetails();
    s.calculate();
    s.display();

    cout << "\nCURRENT ACCOUNT DETAILS" << endl;
    c.getDetails();
    c.calculate();
    c.display();

    return 0;
}
