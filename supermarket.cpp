#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_SIZE 10 
int main()
{
    int n = 10;
    int arr[MAX_SIZE];
    int sum = 0;
    int count500 = 0;
    
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cin>>arr[i];
    }

    int max_price = arr[0], min_price = arr[0];

    for(int i = 1; i < MAX_SIZE; i++)
    {
        if(max_price < arr[i])
            max_price = arr[i];

        if(min_price > arr[i])
            min_price = arr[i];
        sum+=arr[i];
        if(arr[i] > 500 )
            count500++;
    }
    sort(arr, arr+MAX_SIZE);

    cout<<"Max Price : "<<max_price;
    cout<<"\nMin Price : "<<min_price;
    cout<<"\nSum : "<<sum;
    cout<<"\nItems costing more than Rs 500 : "<<count500;
    cout << "\nSorted order : ";
for (int i = 0; i < MAX_SIZE; i++)
{
    cout << arr[i] << " ";
}
}