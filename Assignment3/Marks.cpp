// A teacher stores quiz marks of students in an array. Write a program using functions to display marks, sort them, and assign ranks.

#include <iostream>
#include <algorithm>

using namespace std;

void displayMarks(int marks[], int n)
{
    // cout << "Student Marks : ";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
}

void sortMarks(int marks[], int n)
{
    sort(marks, marks + n, greater<int>());
}

void assignRanks(int marks[], int n)
{
    cout << "Ranks of Students : "<<"\n";
    for(int i =0 ; i<n; i++)
    {
        int rank = i + 1;

        if ( i > 0 && marks[i] == marks[i-1])
        {
            rank = i;
        }

        cout << "Marks : "<< marks[i]<<" "
            << "Rank : "<<rank <<endl; 
    }
}

int main()
{
    int n;

    cout << "Enter number of students : ";
    cin >> n;

    int marks[n];

    cout<< "Enter marks : ";

    for(int i = 0;i<n;i++)
    {
        cin >> marks[i];
    }
    cout << "\nOriginal marks : ";
    displayMarks(marks, n);

    sortMarks(marks, n);

    cout << "\nSorted marks : ";
    displayMarks(marks , n);

    assignRanks(marks , n);

    return 0;
}