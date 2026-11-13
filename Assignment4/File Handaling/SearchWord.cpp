
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    string word, search;
    int count = 0;

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    cout << "Enter word to search: ";
    cin >> search;

    while (fin >> word)
    {
        if (word == search)
        {
            count++;
        }
    }

    cout << "Word found " << count << " times.";

    fin.close();
    return 0;
}
