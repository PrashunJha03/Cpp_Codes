// A mobile shop stores prices of 15 phones in an array. Write a program using functions tosort the prices and
// display the cheapest and costliest phone prices.

#include <iostream>
#include <algorithm>
using namespace std;

void sortPrices(int prices[], int n)
{
    sort(prices, prices + n);
}

void displayPrices (int prices[], int n)
{
    cout << "Sorted phone prices : \n";

    for(int i = 0; i < n; i++)
    {
        cout << prices[i] << " ";
    }

    cout << endl;
}

int main()
{
    int prices[15];
    cout << "Enter prices of 15 phones : \n";

    for(int i = 0; i < 15; i++)
    {
        cin >> prices[i];
    }

    sortPrices(prices, 15);

    displayPrices(prices, 15);

    cout  << "Cheapest Phone Price : " << prices[0] << endl;
    cout  << "Costliest Phone Price : " << prices[14] << endl;
}

    

