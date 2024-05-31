/*
    Basic I/O with cin cout
    Author: Sebastian Sroczyk
    Date: 31/05/2024
*/

#include <iostream>

using namespace std;

int main() {

    // Default Hello World
    cout << "Hello World!" << endl;

    // Hello Wrold written on the same line, becuase the buffer was not flushed (endl wasn't used at the end of Hello)
    cout << "Hello";
    // The space is needed otherwise the formatting will be wrong
    cout << " World!" << endl;

    // This chains the string together before changing line with a buffer flush
    cout << "Hello" << " World!" << endl;

    // \n - new line character, used to change lines without flushing buffer
    cout << "Hello" <<  " World!\n";
    cout << "Hello\nOut\nThere\n";


    int num1;
    int num2;
    double num3;

    // displays message to console
    cout << "Enter Integer: ";
    // extracts message from console and sets it to num1
    cin >> num1;
    // displays message to console with chosen number 
    cout << "You Entered " << num1 << endl; 

    cout << "Enter another Integer: ";

    cin >> num2;

    cout << "You Entered " << num1 << " and " << num2 << endl;


    // Chained Input
    cout << "Enter 2 numbers with a space inbetween them: ";

    // We can chain inputs becuase c++ counts white spaces as a break in the data and we haven't 
    // cleared the buffer allowing us to enter 2 items in 1 input while storing them seprately.
    cin >> num1 >> num2;

    cout << "You Entered: " << num1 << " and " << num2 << endl; 

    // Potentual issue - if 10.5 would be entered, becuase num1 cannot be an double only the 10 will be stored.
    cout << "Enter an integer: ";
    cin >> num1;

    // Because the previous 10 was already stored and there are still numbers in the buffer the input will be
    // skipped and .5 will be read and stored as 0.5
    cout << "Enter a double";
    cin >> num3;

    cout << "The Integer is: " << num1 << endl;
    cout << "The Double is: " << num3 << endl;

    return 0;

}