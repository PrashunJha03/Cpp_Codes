// WAP using functions to
// i) initialize an array
// ii) display the array
// iii) find the sum of elements
// iv) find the maximum value in array
// v) find the minimum value in array


#include <iostream>
using namespace std;

// Function to initialize array
void initialize(int a[], int n)
{
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

// Function to display array
void display(int a[], int n)
{
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to find sum of elements
int findSum(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

// Function to find maximum value
int findMax(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

// Function to find minimum value
int findMin(int a[], int n)
{
    int min = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    // Function calls
    initialize(a, n);
    display(a, n);

    cout << "Sum of elements = " << findSum(a, n) << endl;
    cout << "Maximum element = " << findMax(a, n) << endl;
    cout << "Minimum element = " << findMin(a, n) << endl;

    return 0;
}
