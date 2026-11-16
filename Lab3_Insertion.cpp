/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 3: Insertion of an Element at a Specific Position
 */

#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, pos, value;

    cout << "Student Name: Syeda Darain Zahra Naqvi" << endl;
    cout << "Lab 3: Insertion at a Specific Position\n\n";

    cout << "Enter number of elements (max " << MAX - 1 << "): ";
    cin >> n;

    if (n < 0 || n >= MAX) {
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

    cout << "\nEnter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    // Shift elements to the right to make room
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    cout << "\nArray after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
