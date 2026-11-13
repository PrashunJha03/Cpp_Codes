// Write a program using arrays and functions to count frequency of each element in an array.

#include <iostream>
using namespace std;

// Function to count frequency of each element
void countFrequency(int a[], int n)
{
    int visited[100] = {0};

    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        cout << a[i] << " occurs " << count << " times" << endl;
    }
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Function call
    countFrequency(a, n);

    return 0;
}
