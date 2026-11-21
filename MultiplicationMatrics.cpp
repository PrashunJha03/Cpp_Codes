//Case Study 7: Matrix Multiplication
//Write a program to multiply two matrices and display the result
#include <iostream>
using namespace std;

int main()
{
    // Declaring two matrices
    int arr1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int arr2[2][2] = {
        {5, 6},
        {7, 8}
    };

    int rows = 2;
    int cols = 2;
    int arr3[2][2] = {0};

    // Matrix multiplication
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the resultant matrix
    cout << "Resultant Matrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
