#include <iostream>
using namespace std;

int main() {
    int t[2][3];

    // i) Initialize each element to zero
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            t[row][col] = 0;
        }
    }

    // j) Input values from keyboard
    cout << "Enter 6 integers for the 2x3 array:\n";
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> t[row][col];
        }
    }

    // k) Determine smallest value
    int smallest = t[0][0];
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            if (t[row][col] < smallest) {
                smallest = t[row][col];
            }
        }
    }
    cout << "\nSmallest value: " << smallest << endl;

    // l) Display elements in row 0
    cout << "Row 0 elements: ";
    for (int col = 0; col < 3; col++) {
        cout << t[0][col] << " ";
    }
    cout << endl;

    // m) Total elements in column 2
    int total = 0;
    for (int row = 0; row < 2; row++) {
        total += t[row][2];
    }
    cout << "Total of column 2: " << total << endl;

    // n) Print array in neat tabular format
    cout << "\n    0   1   2\n";
    for (int row = 0; row < 2; row++) {
        cout << row << "   ";
        for (int col = 0; col < 3; col++) {
            cout << t[row][col] << "   ";
        }
        cout << endl;
    }

    return 0;
}
/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic practice7.9DoubleArray.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */