// Write a program using arrays and functions to find second largest element in an array.


#include <stdio.h>

// Function to find second largest element
int secondLargest(int a[], int n)
{
    int largest, second;

    largest = second = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    return second;
}

int main()
{
    int a[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = secondLargest(a, n);

    if(result == -1)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", result);

    return 0;
}
