
#include <vector>
#include <iostream>

using namespace std;




vector<int> commonElements(const vector<int>& a, const vector<int>& b){
    vector<int> result;
    size_t i = 0;
    size_t j = 0;

    while(i < a.size() && j < b.size()){
        if(a[i] == b[j]){
            result.push_back(a[i]);
            i++;
            j++;

        }
        else if (a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;
    }

    int main (){
        std::vector<int> A = {1, 2, 3, 4, 5};
        std::vector<int> B = {2, 4, 5, 9};

        vector<int> common = commonElements(A,B);
        cout << "Common elements: ";
        for(int num : common){
            cout << num << " ";
        }
        return 0;
    }

    /**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic commonElements.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */