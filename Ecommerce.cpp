#include <iostream>
using namespace std;
int main()
{
    const int size = 30;

    int sales[size] = {
        5000, 8000, 12000, 7500, 15000,
        9000, 11000, 6000, 18000, 9500,
        13000, 7000, 16000, 8500, 10000,
        20000, 5500, 14000, 9000, 17500,
        6500, 12500, 8000, 22000, 10500,
        4500, 19000, 11500, 7000, 15500
    };

    // 1. Find best and worst selling days
    int highest = sales[0];
    int lowest = sales[0];
    int bestDay = 1;
    int worstDay = 1;

    // 2. Calculate total monthly revenue
    long long totalRevenue = 0;

    // 3. Count and display days with sales above 10000
    cout << "Days with sales above Rs. 10000:" << endl;

    for (int i = 0; i < size; i++)
    {
        totalRevenue += sales[i];

        if (sales[i] > highest)
        {
            highest = sales[i];
            bestDay = i + 1;
        }

        if (sales[i] < lowest)
        {
            lowest = sales[i];
            worstDay = i + 1;
        }

        if (sales[i] > 10000)
        {
            cout << "Day " << i + 1
                 << ": Rs. " << sales[i] << endl;
        }
    }

    cout << "\nBest selling day: Day " << bestDay
         << " (Rs. " << highest << ")" << endl;

    cout << "Worst selling day: Day " << worstDay
         << " (Rs. " << lowest << ")" << endl;

    cout << "Total monthly revenue: Rs. "
         << totalRevenue << endl;

    // 4. Search for a specific sale amount
    int target;
    bool found = false;

    cout << "\nEnter a sale amount to search: Rs. ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (sales[i] == target)
        {
            cout << "Sale amount found on Day "
                 << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Sale amount not found." << endl;
    }
    
    return 0;
}

