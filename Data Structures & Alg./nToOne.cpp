using namespace std;
#include <iostream>

void nToOne(int n){
    if(n >=1){
    cout << n << " ";
    nToOne(n-1);
    }
    cout << endl;
    return;
}

int main(){
    nToOne(5);
}
/*
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic nToOne.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */