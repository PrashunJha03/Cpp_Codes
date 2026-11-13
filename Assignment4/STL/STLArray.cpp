
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 5> a = {50, 20, 40, 10, 30};

    cout << "Original array: ";
    for (int x : a)
        cout << x << " ";

    a[2] = 60;

    cout << "\nAfter modifying third element: ";
    for (int x : a)
        cout << x << " ";

    sort(a.begin(), a.end());

    cout << "\nSorted array: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nFirst element: " << a.front();
    cout << "\nLast element: " << a.back();

    return 0;
}
