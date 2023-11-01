//! *Selection Sort* is a simple sorting algorithm that divides the input array into two parts: the sorted and the unsorted.
//! It repeatedly selects the minimum (or maximum) element from the unsorted part and swaps it with the first element of the unsorted part,
//! effectively expanding the sorted part. This process continues until the entire array is sorted. Selection sort has a time complexity of
//! O(n^2) in the worst case and is generally less efficient than more advanced sorting algorithms for larger datasets.

//* [7 ,3 ,5 ,1 ,4 ]
//* [1 ,3 ,4, 5, 7 ]

#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[i], arr[min]);
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
    selectionsort(arr, n);
    display(arr, n);
    return 0;
}