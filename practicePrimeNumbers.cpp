/*
#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // divisible by a number other than 1 and itself
    }
    return true;
}
int main () {
    cout << "Prime numbers between 1 and 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic practicePrimeNumbers.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */