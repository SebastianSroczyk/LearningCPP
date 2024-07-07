/*
    conditional Operator
    Author: Sebastian Sroczyk
    Date: 07/07/2024
*/

#include <iostream>

/*
    Conditional Operator: Is a simular to an if-else statement. A condition is evaluated to a boolean expression.
                          This conditional expression then returns one of two other expressions.

    Example:

            (condition) ? expres1 : expres2

    If conditon is true, expres1 is returned. If condtion is false, expres2 is returned. 
*/

using namespace std;

int main(){

    int num{};
    cout << "Enter an integer: ";
    cin >> num;
    // condition needs to be wrapped in () if not asigned and put straight into output.
    cout << num <<((num % 2 == 0) ? " is even." : " is odd.") << endl;


    int num1{}, num2{};
    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    if(num1 != num2){
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else{
        cout << "These numbers are the same." << endl;
    }

    return 0;
}