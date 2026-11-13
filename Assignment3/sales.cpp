// A company stores monthly sales of 4 products for 6 months in a 2D array. Write a program using functions to βind product-wise and month-wise totals.


#include <iostream>
using namespace std;

// Function to calculate product-wise totals
void productTotal(int sales[4][6])
{
    int total;

    cout << "\nProduct-wise Sales Total:\n";

    for(int i = 0; i < 4; i++)
    {
        total = 0;

        for(int j = 0; j < 6; j++)
        {
            total += sales[i][j];
        }

        cout << "Product " << i + 1 << " = " << total << endl;
    }
}

// Function to calculate month-wise totals
void monthTotal(int sales[4][6])
{
    int total;

    cout << "\nMonth-wise Sales Total:\n";

    for(int j = 0; j < 6; j++)
    {
        total = 0;

        for(int i = 0; i < 4; i++)
        {
            total += sales[i][j];
        }

        cout << "Month " << j + 1 << " = " << total << endl;
    }
}

int main()
{
    int sales[4][6];

    cout << "Enter sales of 4 products for 6 months:\n";

    for(int i = 0; i < 4; i++)
    {
        cout << "Enter sales for Product " << i + 1 << ":\n";

        for(int j = 0; j < 6; j++)
        {
            cin >> sales[i][j];
        }
    }

    // Function calls
    productTotal(sales);
    monthTotal(sales);

    return 0;
}
