//! Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list,
//! compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list
//! is repeated until no swaps are needed, indicating that the list is sorted. Bubble sort has a time
//! complexity of O(n^2) in the worst case, making it inefficient for large datasets, but it is
//! straightforward to implement and suitable for small datasets or educational purposes.
//! !Stopped is being used to make it more efficient and not to iterate if no swaps were made
//* [7 ,3 ,5 ,1 ,4 ]
//* [1 ,3 ,4, 5, 7 ]

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false; //* Flag to track if any swaps are made
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true; //* Set the flag if a swap occurs
            }
        }
        if (!swapped)
        {
            //* If no swaps occurred in a pass, the array is already sorted
            break;
        }
        
    }
    
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {7, 3, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    display(arr, n);
    return 0;
}