/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 4: Deletion of an Element from a Specific Position
 */

#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, pos;

    cout << "Student Name: Syeda Darain Zahra Naqvi" << endl;
    cout << "Lab 4: Deletion from a Specific Position\n\n";

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

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "\nEnter position to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the left to fill the gap
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;  // adjust array size

    cout << "\nArray after deletion (size = " << n << "): ";
    if (n == 0)
        cout << "(empty)";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
