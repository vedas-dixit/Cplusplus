//! *Insertion sort* is a simple sorting algorithm that builds the final sorted array 
//! one item at a time. It works by taking an element from the unsorted part of the array and inserting it into its correct position 
//! in the sorted part of the array. The algorithm continues this process until the entire array is sorted. It has a time complexity 
//! of O(n^2) in the worst case and is efficient for small datasets or partially sorted data.

//* [7 ,3 ,5 ,1 ,4 ]
//* [1 ,3 ,4, 5, 7 ]

#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = i;
        int prev = i - 1;

        while (prev >= 0 && arr[current] < arr[prev])
        {
            // swap(arr[current], arr[prev]);
            
            //!Avoid Using swap Function: The swap function you're using to swap elements in the array
            //!as it introduces a bit of overhead
            
            int temp = arr[prev];
            arr[prev]=arr[current];
            arr[current]=temp;
            prev--;
            current--;
        }
    }

}

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {7, 3, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    display(arr,n);
    return 0;
}