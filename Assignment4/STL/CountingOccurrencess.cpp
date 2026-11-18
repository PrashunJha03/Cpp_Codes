#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(10);
    int num;

    cout << "Enter 10 integers: ";

    for(int i = 0; i < 10; i++)
        cin >> v[i];

    cout << "Enter number to count: ";
    cin >> num;

    int result = count(v.begin(), v.end(), num);

    cout << num << " occurs " << result << " times.";
    return 0;
}
