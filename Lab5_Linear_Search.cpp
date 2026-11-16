/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 5: Linear Search Algorithm
 */

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // index where found
    }
    return -1;          // not found
}

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, key;

    cout << "Student Name: Syeda Darain Zahra Naqvi" << endl;
    cout << "Lab 5: Linear Search Algorithm\n\n";

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

    cout << "\nEnter element to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element " << key << " found at position " << index + 1
             << " (index " << index << ")." << endl;
    else
        cout << "Element " << key << " not found in the array." << endl;

    return 0;
}
