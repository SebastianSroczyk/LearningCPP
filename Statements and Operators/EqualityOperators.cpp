/*
    Equality Operators
    Author: Sebastian Sroczyk
    Date: 04/07/2024
*/

#include <iostream>

/*
    Equality Operators:

        == - is equal to. I.e. expres1 == expres2, 100 == 100

        != - is not equal to. I.e. expres1 != expres2, 25 != 100

    These operators return a true or false value.
*/

using namespace std;

int main(){

    bool equal_Result{false};
    bool not_Equal_Result{false};

    int num1{}, num2{};

    cout << boolalpha; // Displays true or false instead of 1 or 0 for booleans

    cout << "Enter two integers sparated by a space: ";
    cin >> num1 >> num2;
    equal_Result = (num1 == num2);
    not_Equal_Result = (num1 != num2);
    cout << "Comparision Result (equals): " << equal_Result << endl;
    cout << "Comparision Result (not equals): " << not_Equal_Result << endl;
    cout << endl;

        
    char char1{}, char2{};

    cout << "Enter two character sparated by a space: ";
    cin >> char1 >> char2;
    equal_Result = (char1 == char2);
    not_Equal_Result = (char1 != char2);
    cout << "Comparision Result (equals): " << equal_Result << endl;
    cout << "Comparision Result (not equals): " << not_Equal_Result << endl;
    cout << endl;


    /*
        NOTE: Remember that computers store approximations. I.e. A double stores 11.99999999999999999999 as 12.0. Important if application needs percision
    */

    double double1{}, double2{};

    cout << "Enter two doubles sparated by a space: ";
    cin >> double1 >> double2;
    equal_Result = (double1 == double2);
    not_Equal_Result = (double1 != double2);
    cout << "Comparision Result (equals): " << equal_Result << endl;
    cout << "Comparision Result (not equals): " << not_Equal_Result << endl;
    cout << endl;

    /*
        Example where a Promotion(Coercion) occures so that the numbers can be compared. I.e. if 10 and 10.0 are input. The 10 is promoted to 10.0 then compared to the other 10.0
    */

    int intNum{};
    double doubleNum{};

    cout << "Enter a integer then a double sparated by a space: ";
    cin >> intNum >> doubleNum;
    equal_Result = (intNum == doubleNum);
    not_Equal_Result = (intNum != doubleNum);
    cout << "Comparision Result (equals): " << equal_Result << endl;
    cout << "Comparision Result (not equals): " << not_Equal_Result << endl;
    cout << endl;

    return 0;
}