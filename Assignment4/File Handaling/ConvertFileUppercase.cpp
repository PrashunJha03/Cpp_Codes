#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream fin("lowercase.txt");
    ofstream fout("uppercase.txt");

    char ch;

    if (!fin || !fout)
    {
        cout << "Error opening files!";
        return 1;
    }

    while (fin.get(ch))
    {
        fout.put(toupper((unsigned char)ch));
    }

    cout << "File converted to uppercase successfully.";

    fin.close();
    fout.close();

    return 0;
}
