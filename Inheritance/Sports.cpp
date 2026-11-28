// Part C: Multiple Inheritance
// Q5. Student Sports Performance
// Write a C++ program to create two base classes: Academic containing marks in three
// subjects and Sports containing sports marks. Derive a class Result from both classes to
// calculate and display the combined score.


#include <iostream>
using namespace std;

// Base class 1
class Academic
{
public:
    int m1, m2, m3;

    void getAcademic()
    {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

// Base class 2
class Sports
{
public:
    int sportsMarks;

    void getSports()
    {
        cout << "Enter Sports Marks: ";
        cin >> sportsMarks;
    }
};

// Derived class
class Result : public Academic, public Sports
{
public:
    int total;

    void calculate()
    {
        total = m1 + m2 + m3 + sportsMarks;
    }

    void display()
    {
        cout << "\n----- STUDENT PERFORMANCE -----" << endl;

        cout << "Subject 1 Marks: " << m1 << endl;
        cout << "Subject 2 Marks: " << m2 << endl;
        cout << "Subject 3 Marks: " << m3 << endl;
        cout << "Sports Marks: " << sportsMarks << endl;

        cout << "Combined Score: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getAcademic();
    r.getSports();

    r.calculate();
    r.display();

    return 0;
}
