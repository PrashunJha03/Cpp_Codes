
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    char ch;
    int count = 0;

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    while (fin.get(ch))
    {
        count++;
    }

    cout << "Total characters = " << count;

    fin.close();
    return 0;
}
