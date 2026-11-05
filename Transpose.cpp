//Case Study 8: Matrix Transpose
// Write a program to compute transpose of a matrix and display it.

#include <iostream>
using namespace std;

int main()
{
    // Declare a 2x3 matrix
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = 2;
    int cols = 3;

    // Transpose will have 3 rows and 2 columns
    int transpose[3][2];

    // Compute transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    // Display original matrix
    cout << "Original Matrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Display transpose
    cout << "\nTranspose Matrix:" << endl;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
