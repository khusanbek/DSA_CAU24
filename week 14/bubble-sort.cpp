
#include <iostream>
 
// Utility function to swap values at two indices in an array
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
// Function to print `n` elements of array `arr`
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
// Function to perform bubble sort on a given array `arr[]`
void bubbleSort(int arr[], int n)
{
    // `n-1` passes
    for (int k = 0; k < n - 1; k++)
    {
        // last `k` items are already sorted, so the inner loop can
        // avoid looking at the last `k` items
        for (int i = 0; i < n - 1 - k; i++)
        {
            if (arr[i] > arr[i + 1]) {
                swap(arr, i, i + 1);
            }
        }
 
        // the algorithm can be terminated if the inner loop didn't do any swap
    }
}
 
int main(void)
{
    int arr[] = { 12, 9, -4, 8, 7, -1, 6, 5, 32, -7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    bubbleSort(arr, n);
    printArray(arr, n);
 
    return 0;
}