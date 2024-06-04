/*
    Working on Arrays
    Author: Sebastian Sroczyk
    Date: 03/06/2024
*/

#include <iostream>

using namespace std;

int main() {

    // NOTE: Arrays are a legacy C++ data type and aren't commonly used in modern C++ (C++ 14 and up)

    // we declare the size of the array in the [] (array opertator) and then use the list
    // initilization method to initialize the array
    int IntArrayOfNumbers[] {0,1,2,3,4};

    // This is called "Array subscripting" aka array indexing
    cout << "The number at index 2 is: " << IntArrayOfNumbers[2] << endl;

    char vowels[] {'e','i','a','o','u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    // The size of the array is 5 but the index starts at 0 so, 4 is the final number.
    cout << "The last vowel is: " << vowels[4] << endl;;

    double DoubHighTemps[] {35.5,40.1,22.9,27.9};
    cout << "High Temps at index 0: " << DoubHighTemps[0] << endl; 

    DoubHighTemps[0] = 44.7;
    cout << "After assignment: " << DoubHighTemps[0] << endl;

    /*
        Always initilize an array, as a unitilized array has random junk at each index. 
        DO NOT ASSUME AN ARRAY IS ALWAYS 0 WHEN NOT INITILIZED.

        Note: Initilizing an array with 1 number sets the first index (index 0) to said number,
              while then setting all other numbers to 0. Not initilizing the array with any number
              puts the random junk into the array. 
    
    */
    int exampleNotInit[5];

    cout << "Example of non initilized array numbers: " << exampleNotInit[0] << endl; // returns -429708024
    cout << "Example of non initilized array numbers: " << exampleNotInit[1] << endl; // returns 32759

    int exampleWithInit[5] {3};

    cout << "Example of initilized array numbers: " << exampleWithInit[0] << endl; // returns 3
    cout << "Example of initilized array numbers: " << exampleWithInit[1] << endl; // returns 0


    // C++ stores the name of the array as the direct memory address, so when you call the arrays name,
    // it shows the exact memory address I.e. 0x5ffe10 or something similar
    cout << "Memory address of array: " << exampleWithInit << endl;


    /*====================================================
    
                    Multidimentional Array
    
    ====================================================*/

    // for multidimention arrays an additional array opperator is added ([] - array operator)
    // datatype arrayName [rows] [collums]
    int multiDimentionArray [3][3] { 
        {0,1,2},
        {3,4,5},
        {6,7,8}
        };


    cout << "Multidimentional Array number at index 1,2: " << multiDimentionArray[1][2] << endl; // returns 5
    return 0;
}