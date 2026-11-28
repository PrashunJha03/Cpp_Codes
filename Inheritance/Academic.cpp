// Q4. Student Academic Performance
// Write a C++ program to create a base class Person containing name and age. Derive a
// class Student containing roll number and marks in three subjects. Further derive a class
// Result to calculate total marks, percentage, and grade. Display the student's complete
// details.


#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

// Derived class 1
class Student : public Person
{
public:
    int rollNo;
    int m1, m2, m3;

    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

// Derived class 2
class Result : public Student
{
public:
    int total;
    float percentage;
    char grade;

    void calculate()
    {
        total = m1 + m2 + m3;

        percentage = total / 3.0;

        if(percentage >= 90)
            grade = 'A';
        else if(percentage >= 75)
            grade = 'B';
        else if(percentage >= 60)
            grade = 'C';
        else if(percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----" << endl;

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;

        cout << "Subject 1 Marks: " << m1 << endl;
        cout << "Subject 2 Marks: " << m2 << endl;
        cout << "Subject 3 Marks: " << m3 << endl;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Result r;

    r.getPerson();
    r.getStudent();

    r.calculate();
    r.display();

    return 0;
}
