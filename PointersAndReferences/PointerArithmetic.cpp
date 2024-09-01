/*
    Arithmetic with pointers
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>

using namespace std;

/*
    Pointers can be used in:

        - Assignment expressions
        - Arithmetic expressions
        - Comparison expressions

    C++ allows pointers to use a subset of arithmetic operators, but only make sense when used with raw arrays.

    Increment and Decrement operators with pointers:

        Example:

                int_ptr++;      // Increments a pointer to point to the next array element

                int_ptr--;      // Decremenets a pointer to point to the previous array element


    Addition and Subtraction operators with pointers:

        Example:

                int_ptr += n; or int_ptr = int_ptr + n; // Increments pointer by n * sizeof(type)

                int_pre -= n; or int_ptr = int_ptr - n; // Decrements pointer bt n * sizeof(type)

    Subtracting 2 pointers:

        Subtracting two pointers with the same data type will result in the number of elements between the 2 pointers, otherwise 
        subtracting two pointers with different data types will result in an error.

        Example:    

                int elements_num = int_ptr2 - int_ptr1;

    Comparing Pointers:

        For comparing we can use the equality operators (i.e. == and !=), this results in a check for the same location in memory
        and NOT the value at that location.

        Example:

                string s1 {"Sebastian"};
                string s2 {"Bob"};

                string *p1 {&s1};
                string *p2 {&s2};
                string *p3 {&s1};

                cout << (p1 == p2) << endl;     // Results in False
                cout << (p1 == p3) << endl;     // Results in True

        Here is an example of how to compare the data that a pointer is pointing to.

        Example:

                string s1 {"Sebastian"};
                string s2 {"Sebastian"};

                string *p1 {&s1};
                string *p2 {&s2};
                string *p3 {&s1};

                cout << (*p1 == *p2) << endl;     // Results in True
                cout << (*p1 == *p3) << endl;     // Results in True

    

*/

int main(){

    int scores[] {100,95,34,65,-1}; // using -1 as a sentinal value (i.e. A value that is checked for, to stop. AKA a termination value)
    int *scores_ptr {scores};

    while (*scores_ptr != -1){          // we loop while the derefrenced pointer value is not equal to -1 (i.e. Loop while data at pointed location not -1)
        cout << *scores_ptr << endl;    // Display derefrenced pointer value.
        scores_ptr++;                   // Increment pointer index (i.e. add int value onto pointer to get next location of array)
    }

    cout << "\n---------------------------------" << endl;
    scores_ptr = scores; // resets pointer to begining

    while(*scores_ptr != -1){           // This is exactly the same as the previous while loop, but done in less lines of code
        cout << *scores_ptr++ << endl;  // In this case both of the operators (* and ++) have the same precedent, so we need to look at the associativity, which here is right to left,
                                        // this means here we are derefrencing the pointer then incrementing the pointer. This is very different from (*scores_ptr)++; which would add
                                        // 1 to the score. 
    }

    cout << "\n---------------------------------" << endl;
    string s1 {"Sebastian"};
    string s2 {"Sebastian"};
    string s3 {"Joe"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha; // gives us true or false instead of 1 or 0

    // Comparing pointers
    cout << p1 << " == " << p2 << ": " << (p1==p2) << endl;             // Displays: 0x5ffe20 == 0x5ffe00: false
    cout << p1 << " == " << p3 << ": " << (p1==p3) << endl;             // Displays: 0x5ffe20 == 0x5ffe20: true

    // Comparing strings
    cout << *p1 << " == " << *p2 << ": " << (*p1==*p2) << endl;         // Displays: Sebastian == Sebastian: true         
    cout << *p1 << " == " << *p3 << ": " << (*p1==*p3) << endl;         // Displays: Sebastian == Sebastian: true

    p3 = &s3; // point to joe

    cout << *p1 << " == " << *p3 << ": " << (*p1==*p3) << endl;         // Displays: Sebastian == Joe: false


    cout << "\n---------------------------------" << endl;
    char name[] {"Sebastian"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; // S
    char_ptr2 = &name[8]; // n

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    cout << endl;

    return 0;
}