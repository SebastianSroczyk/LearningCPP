/*
    Dereferencing a pointer
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>

using namespace std;

/*

    We can qualify a pointer in several was to be a const:

        - Pointer to Constants

                The data pointed to by the pointers is constant and cannot be changed, however the pointer itself can change and point somewhere
                else.
                
                Example:

                        int high_score {100};
                        int low_score {33};
                        const int *score_ptr { &high_score};

                        *score_ptr = 86; // ERROR
                        score_ptr = &low_score; // OK

        - Constant Pointers

                The data pointed to by the pointers can be changed, but the pointer itself cannot change and point somewhere else.

                Example:

                        int high_score {100};
                        int low_score {33};
                        int *const score_ptr { &high_score};

                        *score_ptr = 86; // OK
                        score_ptr = &low_score; // ERROR

        - Constant Pointers to Constants

                In this case the data pointed to by the pointer cannot be changed as well as the pointer cannot be assigned somewhere else.

                Example:

                        int high_score {100};
                        int low_score {33};
                        const int *const score_ptr { &high_score};

                        *score_ptr = 86; // ERROR
                        score_ptr = &low_score; // ERROR
        
        
        NOTE: There is a huge difference between: const data_type *pointer, data_type *const pointer and const data_type *const pointer 
*/

int main(){


    cout << "\nPointer To Constant\n------------------------------------" << endl;
    int high_score1 {100};
    int low_score1 {33};
    const int *score_ptr1 { &high_score1};

    // *score_ptr = 86; // ERROR
    score_ptr1 = &low_score1; // OK

    cout << *score_ptr1 << endl;
    cout << &score_ptr1 << endl;

    cout << "\nConstant Pointer to Value\n------------------------------------" << endl;

    int high_score2 {100};
    int low_score2 {33};
    int *const score_ptr2 { &high_score2};

    *score_ptr2 = 86; // OK
    //score_ptr = &low_score; // ERROR

    cout << *score_ptr2 << endl;
    cout << &score_ptr2 << endl;

    cout << "\nConstant Pointer to Constant\n------------------------------------" << endl;

    int high_score3 {100};
    int low_score3 {33};
    const int *const score_ptr3 { &high_score3};

    //*score_ptr2 = 86; // ERROR
    //score_ptr = &low_score; // ERROR

    cout << *score_ptr3 << endl;
    cout << &score_ptr3 << endl;

    return 0;
}