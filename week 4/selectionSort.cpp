// C++ program to implement Selection Sort
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
	
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {

        // Assume the current position holds
        // the minimum element
        int min_idx = i;

        // Iterate through the unsorted portion
        // to find the actual minimum
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {

                // Update min_idx if a smaller element is found
                min_idx = j; 
            }
        }

        // If a new minimum is found,
        // swap it with the element at index i
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

void printArray(vector<int> &arr) {
	
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
	
    vector<int> arr = {64, 25, 12, 22, 11, 4, 1, 5, 19};

    cout << "Original array: ";
    printArray(arr); 

    selectionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}