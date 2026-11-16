/*
 * Data Structures and Algorithm Lab - Fall 2026
 * Program    : Software Engineering Technology
 * Instructor : Engineer Dr Asma Javaid
 * Student    : Syeda Darain Zahra Naqvi
 * Lab 1: Basic Programming Concepts
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Syeda Darain Zahra Naqvi";
    int a, b;

    cout << "Student Name: " << name << endl;
    cout << "Lab 1: Basic Programming Concepts\n\n";

    // Input / Output and variables
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Arithmetic operators
    cout << "\nSum        = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product    = " << a * b << endl;
    if (b != 0) {
        cout << "Quotient   = " << a / b << endl;
        cout << "Remainder  = " << a % b << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Conditional statement
    if (a > b)
        cout << "\n" << a << " is greater than " << b << endl;
    else if (a < b)
        cout << "\n" << a << " is less than " << b << endl;
    else
        cout << "\nBoth numbers are equal." << endl;

    // Loop
    cout << "\nCounting from 1 to 5: ";
    for (int i = 1; i <= 5; i++)
        cout << i << " ";
    cout << endl;

    return 0;
}
