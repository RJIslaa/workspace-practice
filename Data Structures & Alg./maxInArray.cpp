using namespace std;
#include <iostream>

int findMax(int arr[], int n) {
    // Base case
    if (n == 1) {
        return arr[0];
    }

    // Recursive call
    int maxOfRest = findMax(arr, n - 1);

    // Compare current element with max of remaining
    return max(arr[n - 1], maxOfRest);
}

int main() {
    int arr[] = {3, 7, 2, 9, 1};
    int n = 5;

    cout << "Maximum: " << findMax(arr, n) << endl;

    return 0;
}

/*
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic maxInArray.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */