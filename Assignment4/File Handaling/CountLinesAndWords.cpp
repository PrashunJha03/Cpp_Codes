#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    string line, word;
    int lines = 0, words = 0;

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    while (getline(fin, line))
    {
        lines++;
        stringstream ss(line);

        while (ss >> word)
        {
            words++;
        }
    }

    cout << "Total lines: " << lines << endl;
    cout << "Total words: " << words << endl;

    fin.close();
    return 0;
}
