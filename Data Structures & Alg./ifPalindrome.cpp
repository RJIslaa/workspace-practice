#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    // Base case
    if (start >= end) {
        return true;
    }

    // If characters don't match
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str = "madam";

    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

/*
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic ifPalindrome.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */