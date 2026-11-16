/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 2: Array Traversal Using Loop
 */

#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n;

    cout << "Student Name: Syeda Darain Zahra Naqvi" << endl;
    cout << "Lab 2: Array Traversal Using Loop\n\n";

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

    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
