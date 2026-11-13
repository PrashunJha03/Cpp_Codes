
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f1("file1.txt");
    ifstream f2("file2.txt");
    ofstream fout("merged.txt");

    if (!f1 || !f2 || !fout)
    {
        cout << "Error opening files!";
        return 1;
    }

    fout << f1.rdbuf();
    fout << "\n";
    fout << f2.rdbuf();

    cout << "Files merged successfully.";

    f1.close();
    f2.close();
    fout.close();

    return 0;
}
