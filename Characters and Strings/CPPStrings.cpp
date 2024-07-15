/*
    C++ Strings
    Author: Sebastian Sroczyk
    Date: 15/07/2024
*/

#include <iostream>


/*
    <string> - Is a library containing String functions used in C++

                Unlike C-style strings, C++ strings are dynamic and can shrink and grow at run time. They also are stored contiguesly in memory.
                C++ strings work well with commonly used operators unlike c-style strings which have a hard time with them. C++ string are also
                a lot safer than C-style strings. This is due to a lot of different functions that allow for checks to be done on the strings.


                Example of some initilizations of C++ strings and outputs:

                    String Initilization  |  Output
                    ------------------------------------------
                    string s1;            |   
                    string s2 {"Seba"};   |     Seb
                    string s3 {s2};       |     Seb
                    string s4 {"Seba", 3};|     Seb
                    string s5 {s3, 0, 2}; |     Se   // The 0 is the starting index and the 2 is the length. So index 2 length 2 would be: ba
                    string s6 (3, 'X');   |     XXX  // NOTE: Using contstructor syntax () not list syntax {}


                Assignment of string is very simple:

                    string s1;
                    s1 = "Hello";

                    string s2;
                    s2 = s1;  // s2 holds "Hello" now.
*/
#include <string>

using namespace std;

int main(){


    return 0;
}