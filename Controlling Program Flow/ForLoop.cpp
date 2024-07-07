/*
    Simple For loops
    Author: Sebastian Sroczyk
    Date: 06/07/2024
*/

#include <iostream>
#include <vector>

/*
    For Loop: Iterates a specifc number of times
*/

using namespace std;

int main(){

    for(int i{1}; i <= 10; i++){
        cout << i << endl;
    }
    cout << endl;

    for(int i{1}; i <= 10; i+=2){
        cout << i << endl;
        
    }

    cout << endl;

    for (int i {10}; i > 0; i--){
        cout << "Blast off in: " << i << endl;
    }
    cout << endl;

    for(int i {10}; i < 100; i+=10){
        if (i % 15 == 0){
            cout << "All numbers divisable by 15: " << i << endl;
        }
    }
    cout << endl;

    for (int i{1}, j{5}; i <= 5; i++ , j++){
        cout << i << " + " << j << " = " << (i+j) << endl;
    }
    cout << endl;
    
    for(int i {1}; i <= 100; i++){
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }
    cout << endl;

    vector<int> nums {10,20,30,40,50};

    for(unsigned int i {0}; i < nums.size(); i++){
        cout << nums[i] << endl;
    }

    return 0;
}