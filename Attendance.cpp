/* Case Study 10: Attendance System
Store attendance of students for 5 days (1 = present, 0 = absent).
Tasks:
Count attendance percentage per student
Identify students with < 75% attendance*/

#include <iostream>
using namespace std;

int main()
{
    const int students = 4;
    const int days = 5;

    // Attendance of 4 students for 5 days
    int attendance[4][5] = {
        {1, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 1, 0, 1},
        {0, 1, 0, 0, 1}
    };

    cout << "Attendance Percentage:\n";

    for (int i = 0; i < students; i++)
    {
        int present = 0;

        // Count present days
        for (int j = 0; j < days; j++)
        {
            if (attendance[i][j] == 1)
            {
                present++;
            }
        }

        // Calculate attendance percentage
        double percentage = (present * 100.0) / days;

        cout << "Student " << i + 1 << ": "
             << percentage << "%" << endl;
    }

    cout << "\nStudents with attendance below 75%:\n";

    for (int i = 0; i < students; i++)
    {
        int present = 0;

        for (int j = 0; j < days; j++)
        {
            if (attendance[i][j] == 1)
            {
                present++;
            }
        }

        double percentage = (present * 100.0) / days;

        if (percentage < 75.0)
        {
            cout << "Student " << i + 1
                 << ": " << percentage << "%" << endl;
        }
    }

    return 0;
}
