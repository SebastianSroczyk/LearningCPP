/*
    [Name/Explenation of code]
    Author: Sebastian Sroczyk
    Date: 02/05/2024
*/

#include <iostream>

using namespace std;

int main(){

    int num1 {200};
    int num2 {100};

    // Basic addition operator ( + : addition operator)
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; 

    // OR...

    int result{0};
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl; 


    // Basic Subtraction ( - : subtraction operator)
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    // Basic Multiplication ( * : multiplication operator)
    // You need the multiplication operator, you cannot multiply things togther like in algebra.
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    // Basic Division ( / : division operator)
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    /*
        Here we are dividing 100 by 200, which should give us 0.5,
        However we wont get that because we are working with 
        integers which are whole numbers. This will turn
        the 0.5 into 0 as it gets rid of the decimal point.
    */
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;


    // Basic Remainder operator ( % : Remainder operator)
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;


    // Remeber BODMAS ( Brackets, Other, Division, Multiplication, Addition, Subtraction)
    // This is the way C++ computes arithmetic

    result = num1 * num2 + num1;
    cout << num1 << " * " << num2 << " + " << num1 << " = " << result << endl;

    
    // Example of Division Operator Breaking with wrong data types:

    // Data Type is an Interger (whole number)
    cout << 5/10 << endl; // Displays 0 when answer is 0.5

    // Data type is a float (decimal number)
    cout << 5.0/10.0 << endl; // Displays 0.5 and answer is 0.5

    return 0;
}
