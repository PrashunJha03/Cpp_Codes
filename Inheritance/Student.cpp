// Q1. Student Result
// Write a C++ program to create a base class Student containing roll number and name.
// Derive a class Result containing marks in three subjects. Accept student details and
// marks, calculate the total and average marks, and display the result.

#include <iostream>
using namespace std;

// Base class
class Student
{
public:
    int roll;
    string name;

    void getDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }
};

// Derived class
class Result : public Student
{
public:
    int m1, m2, m3;
    int total;
    float average;

    void getMarks()
    {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate()
    {
        total = m1 + m2 + m3;
        average = total / 3.0;
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----" << endl;

        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;

        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Subject 3: " << m3 << endl;

        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main()
{
    Result s;

    s.getDetails();
    s.getMarks();

    s.calculate();
    s.display();

    return 0;
}
