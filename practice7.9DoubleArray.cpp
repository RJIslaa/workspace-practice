#include <iostream>
#include <vector>
#include <algorithm> // Required for std::swap

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; ++i) {
        // Inner loop for comparisons and swapping
        // The last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Original array: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    bubbleSort(data);

    std::cout << "Sorted array: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
