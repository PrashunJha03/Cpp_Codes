#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int num;

    cout << "Enter 10 integers: ";

    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        s.insert(num);
    }

    cout << "Unique Elements: ";

    for(int x : s)
        cout << x << " ";

    return 0;
}
