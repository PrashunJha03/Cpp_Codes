#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << id << "\t"
             << name << "\t"
             << salary << endl;
    }
};

int main()
{
    Employee e[5];

    ofstream fout("employees.txt");

    if (!fout)
    {
        cout << "File cannot be opened!";
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].accept();

        fout << e[i].id << " "
             << e[i].name << " "
             << e[i].salary << endl;
    }

    fout.close();

    ifstream fin("employees.txt");

    int id;
    string name;
    float salary;

    cout << "\nEmployees with salary above 30000:\n";
    cout << "ID\tName\tSalary\n";

    while (fin >> id >> name >> salary)
    {
        if (salary > 30000)
        {
            cout << id << "\t"
                 << name << "\t"
                 << salary << endl;
        }
    }

    fin.close();
    return 0;
}
