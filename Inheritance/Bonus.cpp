// Q6. Employee Bonus Calculation
// Write a C++ program to create two base classes: Employee containing employee ID,
// name, and basic salary, and Performance containing performance rating (1–5). Derive a
// class Bonus from both classes to calculate a bonus of 10% of basic salary for ratings 4
// and 5, and 5% for rating 3. Display the total salary including bonus.


#include <iostream>
using namespace std;

// Base class 1
class Employee
{
public:
    int empID;
    string name;
    float basicSalary;

    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};

// Base class 2
class Performance
{
public:
    int rating;

    void getRating()
    {
        cout << "Enter Performance Rating (1-5): ";
        cin >> rating;
    }
};

// Derived class
class Bonus : public Employee, public Performance
{
public:
    float bonus, totalSalary;

    void calculate()
    {
        if(rating == 4 || rating == 5)
            bonus = basicSalary * 10 / 100;
        else if(rating == 3)
            bonus = basicSalary * 5 / 100;
        else
            bonus = 0;

        totalSalary = basicSalary + bonus;
    }

    void display()
    {
        cout << "\n----- EMPLOYEE DETAILS -----" << endl;

        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Performance Rating: " << rating << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Bonus b;

    b.getEmployee();
    b.getRating();

    b.calculate();
    b.display();

    return 0;
}
