
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    string word, longest = "";

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    while (fin >> word)
    {
        if (word.length() > longest.length())
        {
            longest = word;
        }
    }

    if (longest.empty())
    {
        cout << "File is empty.";
    }
    else
    {
        cout << "Longest word: " << longest << endl;
        cout << "Length: " << longest.length();
    }

    fin.close();
    return 0;
}
