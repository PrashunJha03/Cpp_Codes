/* Case Study 9: Student Marks Analysis
A class has n students and m subjects. Store marks in a 2D array and:
Tasks:
Calculate total marks of each student
Find topper (highest total)
Find subject-wise average*/


#include <iostream>
using namespace std;

int main()
{
    int n = 3;  // Number of students
    int m = 3;  // Number of subjects

    int marks[3][3] = {
        {85, 90, 80},
        {75, 88, 92},
        {95, 91, 89}
    };

    int total[3] = {0};

    // 1. Calculate total marks of each student
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            total[i] += marks[i][j];
        }
    }

    cout << "Total marks of each student:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1
             << ": " << total[i] << endl;
    }

    // 2. Find the topper
    int highest = total[0];
    int topper = 0;

    for (int i = 1; i < n; i++)
    {
        if (total[i] > highest)
        {
            highest = total[i];
            topper = i;
        }
    }

    cout << "\nTopper: Student " << topper + 1 << endl;
    cout << "Highest total: " << highest << endl;

    // 3. Calculate subject-wise averages
    cout << "\nSubject-wise averages:" << endl;

    for (int j = 0; j < m; j++)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += marks[i][j];
        }

        double average = static_cast<double>(sum) / n;

        cout << "Subject " << j + 1
             << ": " << average << endl;
    }

    return 0;
}
