
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("students.txt");

    int roll, marks;
    string name;

    if (!fout)
    {
        cout << "File cannot be opened!";
        return 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details of student " << i << endl;

        cout << "Roll Number: ";
        cin >> roll;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Marks: ";
        cin >> marks;

        fout << roll << " " << name << " "
             << marks << endl;
    }

    fout.close();

    ifstream fin("students.txt");

    cout << "\n--- Student Details ---\n";

    while (fin >> roll)
    {
        fin >> name >> marks;

        cout << "Roll No: " << roll
             << " Name: " << name
             << " Marks: " << marks << endl;
    }

    fin.close();
    return 0;
}
