
/*
#include <iostream>




int main (){
    int milesDriven = 0;
    int gallonsUsed = 0;
    double totalMPG= 0.0;

    while(true){
        std::cout << "Enter miles Driven(-1 to quit): " << std::endl;
        std::cin >>milesDriven;
        if (milesDriven == -1)
        {
            break;
        }
        
         std::cout << "Enter gallons used: " << std::endl;
        std::cin >> gallonsUsed;
        
        double tripMPG = static_cast<double>(milesDriven )/ gallonsUsed;
        totalMPG = totalMPG + tripMPG;

        std::cout << "MPG this trip: " << tripMPG << std::endl;
        std::cout << "Total MPG: " << totalMPG << std::endl;

    }
}

/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic main.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */

