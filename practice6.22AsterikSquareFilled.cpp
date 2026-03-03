/*

#include <iostream>
using namespace std;

int main(){
    int n;
    std::cout << "Enter a square Size(1-20): ";
    std::cin >> n;

    if (n < 1 || n > 20){
        std::cout << "Invalid Size" << std::endl;
        return 1; 
    }

    for(int row = 1; row <= n; row++){ 
        for(int col = 1; col <= n; col++){
           std::cout << "*";
        }
        std::cout << endl;
    }
    return 0;
}

/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic practice6.22AsterikSquareFilled.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */


