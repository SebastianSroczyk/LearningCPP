/*
    Using and understanding assignment operators
    Author: Sebastian Sroczyk
    Date: 06/06/2024
*/

#include <iostream>

using namespace std;

int main(){

    // This is not assignment, this is initialization
    int num1 {10};
    int num2 {20};

    // This is assignment, we are setting num1 to 100
    // we store 100 into the location of num1 which rewrites the 10
    // from the initalization to 100
    num1 = 100;

    // we can chain the assigment operator 
    // This assigns 1000 to num2, then num2 to num1
    num1 = num2 = 1000;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}