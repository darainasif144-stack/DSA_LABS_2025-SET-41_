/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 6: Binary Search Algorithm
 */

#include <iostream>
using namespace std;

// Sorts the array in ascending order (bubble sort),
// because Binary Search requires a sorted array.
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, key;

    cout << "Student Name: Syeda Darain Zahra Naqvi" << endl;
    cout << "Lab 6: Binary Search Algorithm\n\n";

    cout << "Enter number of elements (max " << MAX << "): ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid size." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    sortArray(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "\nEnter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element " << key << " found at position " << index + 1
             << " (index " << index << ") in the sorted array." << endl;
    else
        cout << "Element " << key << " not found in the array." << endl;

    return 0;
}
