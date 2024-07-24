/*
    How to use arrays in functions
    Author: Sebastian Sroczyk
    Date: 23/07/2024
*/

#include <iostream>
#include <string>

using namespace std;

/*
    We can pass arrays into functions like any other datatype, HOWEVER THIS ONLY COPIES THE MEMORY ADDRESS OF THE FIRST ELEMENT IN THE ARRAY. Therefore we must also
    pass in the length of the array. 

            Example:    

                            void print_array(int numbers[]);   // Will NOT work correctly

                            void print_array(int numbers[], size_t array_size);   // Will work and can be edited

            NOTE: Becuase we are getting the memory address of the array, this means we can edit the array itself. Unlike other datatypes of which a copy is made, which mean we cannot
                  effect the original data.

    We can protect ourself from being able to edit an array accidentaly by adding a const datatype in our parameters like this:

                            void print_array(const int numbers[], size_t array_size); // Will work and can't be edited

*/

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

int main(){

    int numbers[]{3,4,52,1,65,4,3};

    print_array(numbers,7);
    cout << "======================================" << endl;
    set_array(numbers,7, 44);
    print_array(numbers,7);

    return 0;
}

void print_array(const int arr[], size_t size){
    for(int i {0}; i < size; ++i){
        cout << arr[i] << endl;
    }
}
void set_array(int arr[], size_t size, int value){
    for(int i {0}; i < size; ++i){
        arr[i] = value;
    }

}
