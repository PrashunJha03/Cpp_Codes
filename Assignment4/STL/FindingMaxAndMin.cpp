#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {45, 12, 78, 34, 90,
                     23, 67, 11, 56, 89};

    int maximum = *max_element(v.begin(), v.end());
    int minimum = *min_element(v.begin(), v.end());

    cout << "Maximum Element: " << maximum << endl;
    cout << "Minimum Element: " << minimum << endl;

    return 0;
}
