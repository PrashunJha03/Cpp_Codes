// WAP to βind the maximum of 3 values that can either be integer, βloat or char using function overloading.


#include <iostream>
using namespace std;

// Function to find maximum of 3 integers
int maximum(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

// Function to find maximum of 3 float values
float maximum(float a, float b, float c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

// Function to find maximum of 3 characters
char maximum(char a, char b, char c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    cout << "Maximum integer = "
         << maximum(10, 25, 15) << endl;

    cout << "Maximum float = "
         << maximum(10.5f, 25.7f, 15.2f) << endl;

    cout << "Maximum character = "
         << maximum('A', 'Z', 'M') << endl;

    return 0;
}
