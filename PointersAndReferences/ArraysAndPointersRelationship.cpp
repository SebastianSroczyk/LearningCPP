/*
    The relationship between arrays and pointers
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>

using namespace std;

/*
    Arrays names point to the address of the first element in the array, and pointers point to an address. Therefore as for as c++ is considers array names and pointers are
    the same, or for the most past the names and pointers can be ised interchangeably (almost).

        Example:

                int scores[] {100, 95, 89};

                cout << scores << endl;         // Displays the address of the first element - 0x5ffe94
                cout << &socre << endl;         // We can derefrence a array to get the first element - 100

                int *score_ptr {scores};        // Becuase an array name is the address, we can assign a pointer to it.

                cout << score_ptr << endl;      // Displays memeory location of first element in the array - 0x5ffe94
                cout << &score_ptr << endl;     // Displays what is stored at the memory location - 100

    Arrays and pointers are tightly nit, we can used array subscripting on a pointer. This is because C++ arrays aren't real arrays, they are just memory locations.

        Example:

                int scores[] {100, 95, 89};
                int *score_ptr {scores};

                cout << score_ptr[0] << endl;   // Displays what is stored at the memory location, first element in the array - 100
                cout << score_ptr[1] << endl;   // Displays what is stored at the memory location, second element in the array - 95
                cout << score_ptr[2] << endl;   // Displayswhat is stored at the memory location, third element in the array - 89

    
    Here is an example showing that arrays are just memeory locations:

        Example:

                int scores[] {100, 95, 89};
                int *score_ptr {scores};

                cout << score_ptr << endl;   // Displays memeory location of first element in the array - 0x5ffe8c
                cout << (score_ptr + 1) << endl;   // Displays memeory location of second element in the array - 0x5ffe90
                cout << (score_ptr + 2) << endl;   // Displays memeory location of third element in the array - 0x5ffe94
        
        NOTE: The memory location is changing by the value of int in bites. (i.e. changing by a value of 4 bites)


    We can use this to derefrence a point at a specific memory location:

        Example:

                int scores[] {100, 95, 89};
                int *score_ptr {scores};

                cout << *score_ptr << endl;         // Displays what is stored at the memory location, first element in the array - 100
                cout << *(score_ptr + 1) << endl;   // Displays what is stored at the memory location, second element in the array - 95
                cout << *(score_ptr + 2) << endl;   // Displayswhat is stored at the memory location, third element in the array - 89

    
    We can access pointers in two ways either using subscript notation or pointer notation, here is a little table showing the difference:

        int array_name[] {1,2,3,4,5,6};
        int *pointer_name {array_name};

        
            Subscript Notation  |   Pointer Notation / Offset Notation
        ________________________|______________________________________
                                |
            array_name[index]   |       *(array_name + index)
                                |
          pointer_name[index]   |       *(pointer_name + index)
                                |
                                |






*/

int main(){

    int scores[] {100,33,54};
    cout << "Value of score: " << scores <<endl;
    
    int *scores_ptr{scores};
    cout << "Value of scores_ptr: " << scores_ptr << endl;

    cout <<"\nArray subscript notation -------------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout <<"\nPointer subscript notation -----------------------------" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;

    cout <<"\nArray offset notation ----------------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout <<"\nPointers offset notation -------------------------------" << endl;
    cout << *scores_ptr << endl;
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;
    
    cout << endl;

    return 0;
}