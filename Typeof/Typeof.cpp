/*
    Using typeof()
    Author: Sebastian Sroczyk
    Date: 02/05/2024
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {

    cout << "Size Of Information \n=================== " << endl;

    // sizeof() - determines the size in bytes of a given object. #include <climits>
    // is needed to get the sizes of each object.
    cout << "char: " << sizeof(char) << "bytes." << endl;
    cout << "int: " << sizeof(int) << "bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes." << endl;
    cout << "short: " << sizeof(short) << "bytes." << endl;
    cout << "long: " << sizeof(long) << "bytes." << endl;
    cout << "long long: " << sizeof(long long) << "bytes." << endl;

    cout << "===================" << endl;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    cout << "===================" << endl;
    /*

    climits - allows us to see and use the minimum and maximum values that can be stored.

        climits has stored constants to allow us to check the limitations, an example of 
        a few are: 
            - INT_MIN: Gets the lowest value we can save an integer to.
            - INT_MAX: Gets the maximum value we can save an integer to.
            - CHAR_MIN: Gets the lowest value we can save a character to. 
            - CHAR_MAX: Gets the maximum value we can save a character to. 
            - FLT_MIN: Gets the lowest value we can save a float to.
            - FLT_MAX: Gets the lowest value we can save a float to. 
            - etc.
    */ 

    cout << "Minimum Values: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

     cout << "Maximum Values: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    cout << "===================" << endl;

    // we can use size of with variables as well.
    unsigned int age {20};

    cout << "size of age is: " << sizeof(age) << " bytes." << endl;
    // or
    cout << "size of age is: " << sizeof age << " bytes." << endl;

    double wage {22.76};

    cout << "size of wage is: " << sizeof(wage) << " bytes." << endl;
    // or
    cout << "size of wage is: " << sizeof wage << " bytes." << endl;

    
    return 0;
}