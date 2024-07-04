/*
    Simple Use of Increment and Decrement Operator.
    Author: Sebastian Sroczyk
    Date: 09/06/2024
*/

#include <iostream>


/*
    Coercion: Automatic Conversion of operands

    Type Coercion: Conversion of on operand to another data type

    Promotion: Conversion of a lower operand to a higher operand. I.e. short int converted to a long int 
        - Used in mathematical expressions

    Demotion: Conversion of a higher operand to a lower operand. I.e. long int converted to a short int
        - Used with assignment to lower type
        - Truncated: The removal (usually of the decimal point I.e. 12.5 to 12)

    Casting: Converting to a specific data type

*/

using namespace std;

int main() {

    /* ================================================
        A Demotion Type Coercion with a static_cast
    ================================================ */

    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << "Average: "<< average << endl; // displays 12

    average = static_cast<double>(total_amount) / total_number;
    cout << "Cast Average: " << average << endl; // displays 12.5

    cout << endl;

    /*================================================
        Same Demotion as before but with user input
    =================================================*/
    int total {};
    // initilizes all nums to an int of the vlaue 0
    int num1{}, num2{}, num3{};

    const int count{3};

    cout << "Enter 3 Integers Separated by spaces ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    average = 0.0;


    average = (double)total/count;
    
    // or

    average = static_cast<double>(total) / count;

    /*
        (dataType)operand: A old C way of casting which doesn't check if an operand can be converted to a different data type.  NOTE: DO NOT USE THIS ONE

        static_cast<dataType>(operand): A modern way of casting that ensures an operand can be converted to a specifc data type.  NOTE: USE THIS ONE
                                        I.e. An int can be change to a double and an int can't be changed to a boolean.
    */

    cout << "The 3 numbers were:" << num1 << "," << num2 << "," << num3 << endl;
    cout << "The Total of those numbers was: " << total << endl;
    cout << "The average of those numbers was: " << average << endl; 

    cout << endl;

    return 0;
} 