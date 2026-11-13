#include <iostream>
using namespace std;

int main()
{
    const int size = 8;

    double price[size] = {
        500, 1200, 2500, 800, 1500, 350, 3000, 700
    };

    double totalBefore = 0;
    double totalAfter = 0;

    // 1. Calculate total bill before discount
    for (int i = 0; i < size; i++)
    {
        totalBefore += price[i];
    }

    // 2. Apply 10% discount on items above Rs. 1000
    for (int i = 0; i < size; i++)
    {
        if (price[i] > 1000)
        {
            price[i] = price[i] * 0.90;
        }
    }

    cout << "Prices after discount:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Item " << i + 1 << ": Rs. "
             << price[i] << endl;
    }

    // 3. Find most and least expensive items
    double highest = price[0];
    double lowest = price[0];
    int highestItem = 1;
    int lowestItem = 1;

    for (int i = 1; i < size; i++)
    {
        if (price[i] > highest)
        {
            highest = price[i];
            highestItem = i + 1;
        }

        if (price[i] < lowest)
        {
            lowest = price[i];
            lowestItem = i + 1;
        }
    }

    cout << "\nMost expensive item: Item " << highestItem
         << " (Rs. " << highest << ")" << endl;

    cout << "Least expensive item: Item " << lowestItem
         << " (Rs. " << lowest << ")" << endl;

    // 4. Calculate total bill after discount
    for (int i = 0; i < size; i++)
    {
        totalAfter += price[i];
    }

    cout << "\nTotal before discount: Rs. "
         << totalBefore << endl;

    cout << "Total after discount: Rs. "
         << totalAfter << endl;

    // 5. Remove an item by setting its price to 0
    int removeItem;

    cout << "\nEnter item number to remove (1-8): ";
    cin >> removeItem;

    if (removeItem >= 1 && removeItem <= size)
    {
        price[removeItem - 1] = 0;

        cout << "\nUpdated cart:" << endl;

        for (int i = 0; i < size; i++)
        {
            cout << "Item " << i + 1 << ": Rs. "
                 << price[i] << endl;
        }
    }
    else
    {
        cout << "Invalid item number." << endl;
    }

    // 6. Count items eligible for GST
    int gstCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (price[i] > 500)
        {
            gstCount++;
        }
    }

    cout << "\nItems eligible for GST (price > Rs. 500): "
         << gstCount << endl;

    return 0;
}