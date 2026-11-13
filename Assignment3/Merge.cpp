//Write a program using arrays and functions to merge two arrays into a third array. in cpp
#include <iostream>
using namespace std;

// Function to merge two arrays
void mergeArrays(int a[], int b[], int c[], int n, int m)
{
    int i;

    // Copy first array into third array
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
}

// Main function
int main()
{
    int a[50], b[50], c[100];
    int n, m, i;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array: ";
    for(i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // Function call
    mergeArrays(a, b, c, n, m);

    cout << "Merged array: ";
    for(i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
