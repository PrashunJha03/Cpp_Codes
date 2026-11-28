// Part D: Hierarchical Inheritance
// Q7. Area Calculation
// Write a C++ program to create a base class Shape containing a member function to
// accept dimensions. Derive two classes, Rectangle and Triangle, from Shape. Calculate
// and display the area of a rectangle and a triangle using their respective derived classes.


#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    float length, breadth;

    void getDimensions()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }
};

// Derived class 1
class Rectangle : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

// Derived class 2
class Triangle : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of Triangle = "
             << 0.5 * length * breadth << endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;

    cout << "RECTANGLE DETAILS" << endl;
    r.getDimensions();
    r.calculateArea();

    cout << "\nTRIANGLE DETAILS" << endl;
    t.getDimensions();
    t.calculateArea();

    return 0;
}
