/*
    simple if statements
    Author: Sebastian Sroczyk
    Date: 06/07/2024
*/

#include <iostream>

using namespace std;

int main(){

    int num{};
    const int min {10};
    const int max {100};

    cout << "Etner a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num > min){
        cout << num << " is greater than " << min << endl;
        int diff{num - min};
        cout << num << " is " << diff << " away from " << min << endl;
    }

    if (num < max){
        cout << num << " is less than " << max << endl;
        int diff{max - num};
        cout << num << " is " << diff << " away from " << max << endl;
    }

    if (num >= min && num <= max){
        cout << num << " Is within the bounds." << endl;
    }

    if (num == min && num == max){
        cout << num << " Is right on the bounds." << endl;
    }
    

    return 0;
}
