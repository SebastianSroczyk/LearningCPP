/*
    Primative Data Types
    Author: Sebastian Sroczyk
    Date: 31/05/2024
*/

#include <iostream>
// <climits> - contains information about sizes and percision of data types for the specifc complier we are using.
//#include <climits>

using namespace std;

int main(){


    /*=================================================
                        Character types
    =================================================*/
    char middleInital {'j'};

    cout << "Middle Inital is: " << middleInital << endl;

    /*=================================================
                        Integer types
    =================================================*/
    
    /*  signed vs unsigned integer data types
        
        Signed integers can represent both negative and positive values. i.e. for 16 bit it would be from -32768 to 32767
        Unsigned integers can only represent non-negative values i.e. for 16 bit it would be from 0 to 65535

        note: In C++ signed data types are the defualt so we don't need to
              type signed at the start of the decleration

            Signed types:
                -   signed short int: At least 16 bit
                -   signed int: At least 16 bit
                -   signed long int: At least 32 bits
                -   signed long long int: At least 64bit

            Unsugned types:
                -   unsigned short int: At least 16 bit
                -   unsigned int: At least 16 bit
                -   unsigned long int: At least 32 bits
                -   unsigned long long int: At least 64bit

        Each of these have thier own uses for where they are applicable
        
    */

    // score cannot be below 0 so we use an unsigned int
    unsigned short int examScore {55};
    cout << "Exam Score: " << examScore << endl;

    // This also works but if we went higher then 32767 then the number would loop to -32768
    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;

    // when using long we do not need to specify that it is an integer, this is also true for long long.
    long peopleInDundee {50030};
    cout << "There are " << peopleInDundee << " people in dundee" << endl;

    // C++ 14 allows the use of " ' " inside the number initialisation to make the number easier to read.
    long long peopleOnEarth {7'600'000'000};
    cout << "There are " << peopleOnEarth << " people on earth" << endl;


    /*=================================================
                    Floating point types
    =================================================*/

    // for short floating numbers we use float
    float carPayment {401.23};
    cout << "My car payment is: " << carPayment << endl;

    // for longer floating numbers we use double
    double pie {3.14159};
    cout << "Pie is: " << pie << endl;

    // for really long or small numbers we can use long doubles, works just like the long integers
    double longNumber {2.7e120};
    cout << "Long number is: " << longNumber << endl;


    /*=================================================
                    Boolean types
    =================================================*/

    // bool - true or false but prints out 0 if false and 1 if true
    bool gameOver{false};
    cout << "Is game over?: " << gameOver << endl;


    /*=================================================
                    Overflow examples
    =================================================*/

    // This will give us a not so obvisous overflow, as both of the numbers are
    // short values but multiplying them will give us a long value. This will 
    // in turn overflow the "sum" variable giving us the wrong output.
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    cout << "Sum output: " << product << endl;

    return 0;
}