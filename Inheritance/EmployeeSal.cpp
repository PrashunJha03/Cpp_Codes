// Q2. Employee Salary
// Write a C++ program to create a base class Employee containing employee ID, name,
// and basic salary. Derive a class Salary to calculate HRA (20% of basic salary), DA (10%
// of basic salary), and gross salary. Display the employee's salary details.

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int empID;
    string name;
    float basicSalary;

    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};

// Derived class
class Salary : public Employee
{
public:
    float HRA, DA, grossSalary;

    void calculate()
    {
        HRA = basicSalary * 20 / 100;
        DA = basicSalary * 10 / 100;

        grossSalary = basicSalary + HRA + DA;
    }

    void display()
    {
        cout << "\n----- EMPLOYEE SALARY DETAILS -----" << endl;

        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Salary s;

    s.getDetails();
    s.calculate();
    s.display();

    return 0;
}
