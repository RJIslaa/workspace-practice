/*
#include <iostream>
#include <cstdlib>
#include <string>

int main (){
    int headsScore =0;
    int tailsScore =0;
    for (int i = 0; i<= 100; ++i){
        int result = rand() % 2;
        if (result == 0){
            headsScore += 1;
            std::cout << "It is heads" << std::endl;
        }
        else {
            tailsScore += 1;
            std::cout <<"It is tails" << std::endl;
        }
        
    }
    std::cout << "Heads: " << headsScore << std::endl;
    std::cout << "Tails: " << tailsScore << std::endl;

    return 0;
}
/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic practice6.33CoinToss.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */
