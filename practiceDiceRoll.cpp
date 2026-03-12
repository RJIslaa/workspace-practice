/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int rolls = 10000;   // number of times we throw the dice
    int counts[13] = {0};      // index 2–12 will store counts

    srand(time(0));            // seed random generator

    for (int i = 0; i < rolls; i++) {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int sum = die1 + die2;

        counts[sum]++;
    }

    cout << "Sum\tCount\n";
    cout << "--------------\n";

    for (int i = 2; i <= 12; i++) {
        cout << i << "\t" << counts[i] << endl;
    }

    return 0;
}
/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic practiceDiceRoll.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */