//Case Study 6: Matrix Addition
//Write a program to add two matrices and display the result.

#include<iostream>
using namespace std;

int main()
{
    //declaring 2D array
    int arr1[2][2] =  {
        {6, 5},
        {7, 8}
    };

    int arr2[2][2] = 
    {
        {1, 2},
        {3, 4}
    };

    int rows=  2;
    int cols = 2;
    int arr3[2][2];

    for(int i = 0; i<rows ;i++)
    {
        for(int j=0;j<cols; j++)
        {
            arr3[i][j] =  arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"Resultant Matrix : "<<endl;

    for(int i=0; i<rows ;  i++)
    {
        for(int j=0; j<cols ; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}

