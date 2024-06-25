/*
    Simple Use of Increment and Decrement Operator.
    Author: Sebastian Sroczyk
    Date: 09/06/2024
*/

#include <iostream>


/*

    ++  : Increment Operator
    --  : Decrement Operator

    These Operators are used to increase and decrease a value by 1, these values can only be: integers, floats, doubles and pointers.
    These operators have 2 forms:

    -  ++number : Prefix is used to change the value then have it read by the program 
    -  number++ : Postfix is used to change the value after it has been read by the program.


*/

using namespace std;

int main() {

    int counter {10};
    int result{0};

    // Normal addition to counter
    cout << "The counter is: " << counter << endl;
    counter = counter + 1;
    cout << "The counter is now: " << counter << endl;

    // Using a Postfix Increment operator to counter
    cout << "\nThe counter is: " << counter << endl;
    counter++;
    cout << "The counter is now: " << counter << endl;

    /* =====================================================================================
        The difference between postfix and prefix notation on incrementation/decrementation
    ====================================================================================== */

    // Using a Prefix Increment operator to counter
    cout << "\nThe counter is: " << counter << endl;
    result = ++counter;
    cout << "The prefix counter is now: " << counter << endl;
    cout << "While the result is at: " << result << endl;

    // Using a Postfix Increment operator to counter
    cout << "\nThe counter is: " << counter << endl;
    result = counter++;
    cout << "The postfix counter is now: " << counter << endl;
    cout << "While the result is at: " << result << endl;




    return 0;
}