#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    char ch;
    int vowels = 0, consonants = 0;

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    while (fin.get(ch))
    {
        if (isalpha((unsigned char)ch))
        {
            ch = tolower((unsigned char)ch);

            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' ||
                ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Total vowels: " << vowels << endl;
    cout << "Total consonants: " << consonants << endl;

    fin.close();
    return 0;
}
