#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> students;
    int roll, marks;

    cout << "Enter roll number and marks of 5 students:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> roll >> marks;
        students[roll] = marks;
    }

    cout << "Enter roll number to search: ";
    cin >> roll;

    auto it = students.find(roll);

    if(it != students.end())
        cout << "Student Marks: " << it->second;
    else
        cout << "Student not found!";

    return 0;
}
