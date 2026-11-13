#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    int num;

    cout << "Enter element to search: ";
    cin >> num;

    auto it = find(v.begin(), v.end(), num);

    if(it != v.end())
        cout << "Element found!";
    else
        cout << "Element not found!";

    return 0;
}
