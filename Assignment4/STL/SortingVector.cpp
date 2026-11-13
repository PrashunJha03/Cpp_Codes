#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(10);

    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    cout << "Ascending Order: ";
    for(int x : v)
        cout << x << " ";

    sort(v.begin(), v.end(), greater<int>());

    cout << "\nDescending Order: ";
    for(int x : v)
        cout << x << " ";

    return 0;
}
