/*
    Relational Operators
    Author: Sebastian Sroczyk
    Date: 05/07/2024
*/

#include <iostream>

/*==============================================

    RHS - Right hand Side
    LHS - Left hand side

    Operator | Meaning
             |
        >    |  Greater than    
        >=   |  Greater than or equal to
        <    |  Less than
        <=   |  Less than or equal to
        <=>  |  Three way comparison (only in C++20 and above) I.e. Retuns 0 if both operands are equal to each other. 
                                                                    Returns less than 0 if the LHF is greater than the RHS,
                                                                    and Returns greater than 0 if the RHS is greater than the LHS.

================================================*/

using namespace std;

int main(){

    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter 2 Intergers Separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 <<" : " << (num1 >= num2) << endl; 
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl; 
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;   

    const int lower {10};
    const int upper {20};

    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    cout << "\nEnter an integer that is less than or equal to " << upper << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    return 0;
}