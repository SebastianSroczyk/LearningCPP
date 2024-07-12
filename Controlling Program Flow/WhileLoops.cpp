/*
    While loops
    Author: Sebastian Sroczyk
    Date: 12/07/2024
*/

#include <iostream>

/*

    While Loop: A pre-test loop that tests an expression before executing the looped statement.
    Note: If the test fails the loop will not be executed.

*/

using namespace std;

int main(){

    int num{};
    cout << "Enter a positive integer - start the countdown from: ";
    cin >> num;

    while (num > 0){
        cout << num << endl;
        --num;
    }

    cout << "Blast Off" << endl;

    int i {1};
    while (num >= i){
        cout << i << endl;
        i++;
    }

    // ======== basics of input validation ============

    int number{};

    cout << "Enter a integer less than 100: ";
    cin >> number;

    while (number > 100){
        cout << "Enter a integer less than 100: ";
        cin >> number;
    }

    bool done{false};
    number = 0;
    while (!done){
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;

        if (number <=1 || number >=5 ){
            cout << "Out of Range" << endl;
        }
        else{
            cout << "Thanks" << endl;;
            done = true;
        }
    }


    return 0;
}